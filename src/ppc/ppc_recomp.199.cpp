#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_831FCEF0) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x831fcf44
	if (cr6.lt) goto loc_831FCF44;
loc_831FCF10:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x831fcf38
	if (!cr6.lt) goto loc_831FCF38;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x831fcf3c
	goto loc_831FCF3C;
loc_831FCF38:
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_831FCF3C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x831fcf9c
	goto loc_831FCF9C;
loc_831FCF44:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
loc_831FCF4C:
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x831fcf98
	if (!cr6.lt) goto loc_831FCF98;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x831fcf4c
	if (cr6.eq) goto loc_831FCF4C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831fcf4c
	if (cr6.eq) goto loc_831FCF4C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// b 0x831fcf10
	goto loc_831FCF10;
loc_831FCF98:
	// li r11,0
	r11.s64 = 0;
loc_831FCF9C:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

PPC_WEAK_FUNC(sub_831FCEF0) {
	__imp__sub_831FCEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x831fcef0
	sub_831FCEF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FCFB8) {
	__imp__sub_831FCFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// addi r11,r11,-3056
	r11.s64 = r11.s64 + -3056;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_831FCFD0) {
	__imp__sub_831FCFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCFF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r31,0
	r31.s64 = 0;
loc_831FD010:
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831fd040
	if (!cr0.eq) goto loc_831FD040;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831FD040:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x831fd010
	if (cr6.lt) goto loc_831FD010;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
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

PPC_WEAK_FUNC(sub_831FCFF0) {
	__imp__sub_831FCFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD068) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831fd0dc
	if (cr0.eq) goto loc_831FD0DC;
	// li r31,0
	r31.s64 = 0;
loc_831FD098:
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831fd0c8
	if (!cr0.eq) goto loc_831FD0C8;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831FD0C8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x831fd098
	if (cr6.lt) goto loc_831FD098;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// b 0x831fd0e0
	goto loc_831FD0E0;
loc_831FD0DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_831FD0E0:
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

PPC_WEAK_FUNC(sub_831FD068) {
	__imp__sub_831FD068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD0F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r28,1452(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x831fd144
	if (cr0.eq) goto loc_831FD144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x831fd148
	goto loc_831FD148;
loc_831FD144:
	// li r11,0
	r11.s64 = 0;
loc_831FD148:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FD0F8) {
	__imp__sub_831FD0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// b 0x831c59e0
	sub_831C59E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD160) {
	__imp__sub_831FD160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FD184) {
	__imp__sub_831FD184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fd19c
	if (!cr6.eq) goto loc_831FD19C;
	// b 0x831fd0f8
	sub_831FD0F8(ctx, base);
	return;
loc_831FD19C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x831fd1b4
	if (!cr6.eq) goto loc_831FD1B4;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_831FD1B4:
	// b 0x831fd0f8
	sub_831FD0F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD188) {
	__imp__sub_831FD188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD1B8) {
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
	// b 0x831fd1f0
	goto loc_831FD1F0;
loc_831FD1D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831fd1f0
	if (cr6.eq) goto loc_831FD1F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_831FD1F0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fd1d0
	if (!cr6.eq) goto loc_831FD1D0;
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

PPC_WEAK_FUNC(sub_831FD1B8) {
	__imp__sub_831FD1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD210) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-22140
	r11.s64 = r11.s64 + -22140;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r5,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r29,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r29.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stb r29,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r29.u8);
	// stb r29,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r29.u8);
	// lwz r28,1452(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x831fd284
	if (cr0.eq) goto loc_831FD284;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// b 0x831fd288
	goto loc_831FD288;
loc_831FD284:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_831FD288:
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1452(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x831fd2b8
	if (cr0.eq) goto loc_831FD2B8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x831fd2bc
	goto loc_831FD2BC;
loc_831FD2B8:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_831FD2BC:
	// stw r28,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1452(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x831fd2ec
	if (cr0.eq) goto loc_831FD2EC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_831FD2EC:
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,1432(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1432) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,1432(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1432) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1432(r30)
	PPC_STORE_U32(r30.u32 + 1432, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FD210) {
	__imp__sub_831FD210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD310) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FD310) {
	__imp__sub_831FD310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD318) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FD318) {
	__imp__sub_831FD318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD320) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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

PPC_WEAK_FUNC(sub_831FD320) {
	__imp__sub_831FD320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD370) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x831fd3b8
	if (!cr6.gt) goto loc_831FD3B8;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
loc_831FD39C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x831fd3d4
	if (cr6.eq) goto loc_831FD3D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x831fd39c
	if (cr6.lt) goto loc_831FD39C;
loc_831FD3B8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_831FD3D4:
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

PPC_WEAK_FUNC(sub_831FD370) {
	__imp__sub_831FD370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD3F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(44) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831fd424
	if (cr6.eq) goto loc_831FD424;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// b 0x831fd6c0
	goto loc_831FD6C0;
loc_831FD424:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,0
	r25.s64 = 0;
	// li r27,3
	r27.s64 = 3;
	// beq 0x831fd554
	if (cr0.eq) goto loc_831FD554;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,2736(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(2736) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f3,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(224) );
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831fd4a0
	if (!cr6.gt) goto loc_831FD4A0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x831fd4a8
	goto loc_831FD4A8;
loc_831FD4A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_831FD4A8:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831df328
	sub_831DF328(ctx, base);
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fd5cc
	if (!cr6.eq) goto loc_831FD5CC;
	// lwz r23,1456(r28)
	r23.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1456) );
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// beq 0x831fd510
	if (cr0.eq) goto loc_831FD510;
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r28,260(r11)
	PPC_STORE_U32(r11.u32 + 260, r28.u32);
	// stb r25,264(r11)
	PPC_STORE_U8(r11.u32 + 264, r25.u8);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// b 0x831fd514
	goto loc_831FD514;
loc_831FD510:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_831FD514:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831f1e68
	sub_831F1E68(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// lwz r4,48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + int32_t(48) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831fd548
	if (cr6.eq) goto loc_831FD548;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x831fd548
	if (!cr6.eq) goto loc_831FD548;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// b 0x831fd5cc
	goto loc_831FD5CC;
loc_831FD548:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831fd0f8
	sub_831FD0F8(ctx, base);
	// b 0x831fd5cc
	goto loc_831FD5CC;
loc_831FD554:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831fd594
	if (!cr0.eq) goto loc_831FD594;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = r11.s64 + -22424;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,236
	ctx.r7.s64 = 236;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FD594:
	// lwz r31,1452(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1452) );
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x831fd5c8
	if (cr0.eq) goto loc_831FD5C8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831fd5cc
	goto loc_831FD5CC;
loc_831FD5C8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_831FD5CC:
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831fd620
	if (cr0.eq) goto loc_831FD620;
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(32) );
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// b 0x831fd648
	goto loc_831FD648;
loc_831FD620:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831fd648
	if (cr0.eq) goto loc_831FD648;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(224) );
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_831FD648:
	// lbz r11,4(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831fd660
	if (cr0.eq) goto loc_831FD660;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_831FD660:
	// lwz r30,1456(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1456) );
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x831fd6a0
	if (cr0.eq) goto loc_831FD6A0;
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r28,260(r11)
	PPC_STORE_U32(r11.u32 + 260, r28.u32);
	// stb r25,264(r11)
	PPC_STORE_U8(r11.u32 + 264, r25.u8);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// b 0x831fd6a4
	goto loc_831FD6A4;
loc_831FD6A0:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_831FD6A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831f1e68
	sub_831F1E68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83202ac8
	sub_83202AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831FD6C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_831FD3F0) {
	__imp__sub_831FD3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD6C8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831fd764
	if (!cr6.gt) goto loc_831FD764;
	// li r30,0
	r30.s64 = 0;
loc_831FD6F8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x831fd710
	if (!cr6.lt) goto loc_831FD710;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x831fd718
	goto loc_831FD718;
loc_831FD710:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_831FD718:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// beq cr6,0x831fd740
	if (cr6.eq) goto loc_831FD740;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x831fd6f8
	if (cr6.lt) goto loc_831FD6F8;
	// b 0x831fd764
	goto loc_831FD764;
loc_831FD740:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x831fd758
	if (!cr6.lt) goto loc_831FD758;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x831fd760
	goto loc_831FD760;
loc_831FD758:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_831FD760:
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_831FD764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FD6C8) {
	__imp__sub_831FD6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD770) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831fd7ec
	if (!cr6.gt) goto loc_831FD7EC;
	// li r30,0
	r30.s64 = 0;
loc_831FD79C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x831fd7b4
	if (!cr6.lt) goto loc_831FD7B4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x831fd7bc
	goto loc_831FD7BC;
loc_831FD7B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_831FD7BC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x831fd7e4
	if (cr6.eq) goto loc_831FD7E4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x831fd79c
	if (cr6.lt) goto loc_831FD79C;
	// b 0x831fd7ec
	goto loc_831FD7EC;
loc_831FD7E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831fc910
	sub_831FC910(ctx, base);
loc_831FD7EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FD770) {
	__imp__sub_831FD770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD7F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(52) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fd83c
	if (!cr6.eq) goto loc_831FD83C;
	// lwz r11,1508(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1508) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r31)
	PPC_STORE_U32(r31.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(172) );
	// bl 0x831ee278
	sub_831EE278(ctx, base);
	// stw r3,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r3.u32);
loc_831FD83C:
	// lwz r31,1452(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,52(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + int32_t(52) );
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
	// beq 0x831fd870
	if (cr0.eq) goto loc_831FD870;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// bl 0x83200038
	sub_83200038(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831fd874
	goto loc_831FD874;
loc_831FD870:
	// li r31,0
	r31.s64 = 0;
loc_831FD874:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// stw r31,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r31.u32);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x831fd898
	if (!cr6.eq) goto loc_831FD898;
	// stw r31,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r31.u32);
loc_831FD898:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x831fd8b0
	if (!cr6.eq) goto loc_831FD8B0;
	// li r11,1
	r11.s64 = 1;
	// stw r31,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r31.u32);
	// stb r11,126(r30)
	PPC_STORE_U8(r30.u32 + 126, r11.u8);
loc_831FD8B0:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// addi r28,r11,-22432
	r28.s64 = r11.s64 + -22432;
	// bne cr6,0x831fd8e0
	if (!cr6.eq) goto loc_831FD8E0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_831FD8E0:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x831fd900
	if (!cr6.eq) goto loc_831FD900;
	// stw r31,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_831FD900:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(168) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r30,0
	r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r28,r10,-18548
	r28.s64 = ctx.r10.s64 + -18548;
	// addi r29,r11,-22308
	r29.s64 = r11.s64 + -22308;
	// addi r27,r9,-22340
	r27.s64 = ctx.r9.s64 + -22340;
	// addi r26,r8,-22424
	r26.s64 = ctx.r8.s64 + -22424;
loc_831FD958:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	r25.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// cmplwi cr6,r25,8
	cr6.compare<uint32_t>(r25.u32, 8, xer);
	// blt cr6,0x831fd980
	if (cr6.lt) goto loc_831FD980;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,361
	ctx.r7.s64 = 361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FD980:
	// rlwinm r11,r25,2,0,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stbx r11,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x831fd958
	if (cr6.lt) goto loc_831FD958;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_831FD7F8) {
	__imp__sub_831FD7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD9B0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fd9f4
	if (!cr6.eq) goto loc_831FD9F4;
	// lwz r11,1508(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1508) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r29)
	PPC_STORE_U32(r29.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(172) );
	// bl 0x831ee278
	sub_831EE278(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
loc_831FD9F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831fdb10
	if (cr0.eq) goto loc_831FDB10;
	// lwz r29,1452(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,60(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x831fda34
	if (cr0.eq) goto loc_831FDA34;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// bl 0x83200038
	sub_83200038(ctx, base);
	// b 0x831fda38
	goto loc_831FDA38;
loc_831FDA34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FDA38:
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(168) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(96) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r30,56(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,-22432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-22432) );
	// addi r28,r10,-18548
	r28.s64 = ctx.r10.s64 + -18548;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r29,r11,-22308
	r29.s64 = r11.s64 + -22308;
	// addi r27,r9,-22340
	r27.s64 = ctx.r9.s64 + -22340;
	// addi r26,r8,-22424
	r26.s64 = ctx.r8.s64 + -22424;
loc_831FDAB8:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	r25.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// cmplwi cr6,r25,8
	cr6.compare<uint32_t>(r25.u32, 8, xer);
	// blt cr6,0x831fdae0
	if (cr6.lt) goto loc_831FDAE0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,361
	ctx.r7.s64 = 361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FDAE0:
	// rlwinm r11,r25,2,0,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stbx r11,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x831fdab8
	if (cr6.lt) goto loc_831FDAB8;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r10.u32);
	// b 0x831fdb14
	goto loc_831FDB14;
loc_831FDB10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831FDB14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_831FD9B0) {
	__imp__sub_831FD9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDB20) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r31,44(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// addi r11,r11,-22140
	r11.s64 = r11.s64 + -22140;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq cr6,0x831fdb5c
	if (cr6.eq) goto loc_831FDB5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fd1b8
	sub_831FD1B8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_831FDB5C:
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

PPC_WEAK_FUNC(sub_831FDB20) {
	__imp__sub_831FDB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDB70) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// addi r11,r11,-22276
	r11.s64 = r11.s64 + -22276;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,1416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1416) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(r31.u32 + 1416, r11.u32);
	// beq cr6,0x831fdc0c
	if (cr6.eq) goto loc_831FDC0C;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x831fdbe8
	if (cr6.eq) goto loc_831FDBE8;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x831fdc30
	if (!cr6.eq) goto loc_831FDC30;
	// lwz r11,1360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1360) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831fdc30
	if (cr6.lt) goto loc_831FDC30;
	// li r11,30
	r11.s64 = 30;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(r31.u32 + 1364, r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82ca9260
	sub_82CA9260(ctx, base);
loc_831FDBE8:
	// lwz r11,1360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1360) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831fdc30
	if (cr6.lt) goto loc_831FDC30;
	// li r11,28
	r11.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(r31.u32 + 1364, r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82ca9260
	sub_82CA9260(ctx, base);
loc_831FDC0C:
	// lwz r11,1360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1360) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831fdc30
	if (cr6.lt) goto loc_831FDC30;
	// li r11,29
	r11.s64 = 29;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(r31.u32 + 1364, r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82ca9260
	sub_82CA9260(ctx, base);
loc_831FDC30:
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x831fdc64
	if (cr0.eq) goto loc_831FDC64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200248
	sub_83200248(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x831fdc68
	goto loc_831FDC68;
loc_831FDC64:
	// li r29,0
	r29.s64 = 0;
loc_831FDC68:
	// lwz r11,2736(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2736) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(164) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FDB70) {
	__imp__sub_831FDB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDCB0) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22032
	r11.s64 = r11.s64 + -22032;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,1412(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1412) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,1412(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1412) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1412(r30)
	PPC_STORE_U32(r30.u32 + 1412, r11.u32);
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

PPC_WEAK_FUNC(sub_831FDCB0) {
	__imp__sub_831FDCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDD10) {
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
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22240
	r11.s64 = r11.s64 + -22240;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_831FDD10) {
	__imp__sub_831FDD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDD58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r29,0
	r29.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r11,r11,-22204
	r11.s64 = r11.s64 + -22204;
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r11,2736(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x831fab00
	sub_831FAB00(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lbz r11,1380(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1380);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x831fde24
	if (!cr0.eq) goto loc_831FDE24;
	// lwz r28,1452(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x831fddec
	if (cr0.eq) goto loc_831FDDEC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200398
	sub_83200398(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_831FDDEC:
	// lwz r11,2736(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(164) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
loc_831FDE24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FDD58) {
	__imp__sub_831FDD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-22204
	r11.s64 = r11.s64 + -22204;
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r11,2736(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x831fabf0
	sub_831FABF0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lbz r11,1380(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1380);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831fdecc
	if (cr0.eq) goto loc_831FDECC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = r11.s64 + -22424;
	// addi r5,r10,-22168
	ctx.r5.s64 = ctx.r10.s64 + -22168;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FDECC:
	// lwz r28,1452(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x831fdef8
	if (cr0.eq) goto loc_831FDEF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200398
	sub_83200398(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_831FDEF8:
	// lwz r11,2736(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(164) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FDE30) {
	__imp__sub_831FDE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDF40) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-22140
	r11.s64 = r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(2736) );
	// bl 0x831f08b8
	sub_831F08B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r11,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r11.u8);
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_831FDF40) {
	__imp__sub_831FDF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDF98) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22068
	ctx.r9.s64 = r11.s64 + -22068;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// addi r28,r11,-18548
	r28.s64 = r11.s64 + -18548;
	// addi r27,r10,-22424
	r27.s64 = ctx.r10.s64 + -22424;
	// blt cr6,0x831fdffc
	if (cr6.lt) goto loc_831FDFFC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-22084
	ctx.r5.s64 = r11.s64 + -22084;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,577
	ctx.r7.s64 = 577;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FDFFC:
	// lis r11,1
	r11.s64 = 65536;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831fe024
	if (cr6.lt) goto loc_831FE024;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-22104
	ctx.r5.s64 = r11.s64 + -22104;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,578
	ctx.r7.s64 = 578;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FE024:
	// rlwinm r11,r30,16,0,15
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FDF98) {
	__imp__sub_831FDF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE040) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831fdcb0
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r11,r11,-22032
	r11.s64 = r11.s64 + -22032;
	// addi r29,r10,25480
	r29.s64 = ctx.r10.s64 + 25480;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r31,2736(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// lwz r28,1536(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1536) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831db508
	sub_831DB508(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831fe160
	if (!cr0.eq) goto loc_831FE160;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r5,-21832(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-21832) );
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	r11.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fe13c
	if (!cr6.eq) goto loc_831FE13C;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x831fe108
	if (cr0.eq) goto loc_831FE108;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x831fe10c
	goto loc_831FE10C;
loc_831FE108:
	// li r29,0
	r29.s64 = 0;
loc_831FE10C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// stwx r29,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r29.u32);
	// b 0x831fe140
	goto loc_831FE140;
loc_831FE13C:
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_831FE140:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// b 0x831fe45c
	goto loc_831FE45C;
loc_831FE160:
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r3,1536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1536) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,25480
	ctx.r5.s64 = r11.s64 + 25480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831dbaa0
	sub_831DBAA0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lis r11,-32247
	r11.s64 = -2113339392;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r21,r11,-21664
	r21.s64 = r11.s64 + -21664;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x831fe37c
	if (cr6.lt) goto loc_831FE37C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,-21360
	r27.s64 = r11.s64 + -21360;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r9,r27,8
	ctx.r9.s64 = r27.s64 + 8;
	// addi r11,r11,-21832
	r11.s64 = r11.s64 + -21832;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r26,r10,r11
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r28,r11,2,0,29
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r26,6
	r11.s64 = r26.s64 + 6;
	// rlwinm r23,r11,2,0,29
	r23.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	r11.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwzx r24,r23,r31
	r24.u64 = PPC_LOAD_U32(r23.u32 + r31.u32);
	// bne cr6,0x831fe25c
	if (!cr6.eq) goto loc_831FE25C;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x831fe228
	if (cr0.eq) goto loc_831FE228;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x831fe22c
	goto loc_831FE22C;
loc_831FE228:
	// li r29,0
	r29.s64 = 0;
loc_831FE22C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// stwx r29,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, r29.u32);
	// b 0x831fe260
	goto loc_831FE260;
loc_831FE25C:
	// lwz r25,28(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_831FE260:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x831fe2e4
	if (!cr6.eq) goto loc_831FE2E4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x831fe2b0
	if (cr0.eq) goto loc_831FE2B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x831fe2b4
	goto loc_831FE2B4;
loc_831FE2B0:
	// li r29,0
	r29.s64 = 0;
loc_831FE2B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// stwx r29,r23,r31
	PPC_STORE_U32(r23.u32 + r31.u32, r29.u32);
	// b 0x831fe2e8
	goto loc_831FE2E8;
loc_831FE2E4:
	// lwz r28,28(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + int32_t(28) );
loc_831FE2E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r27,12
	r11.s64 = r27.s64 + 12;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x831fe454
	goto loc_831FE454;
loc_831FE37C:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r11,-21328
	r26.s64 = r11.s64 + -21328;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-21832
	r11.s64 = r11.s64 + -21832;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	r11.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fe428
	if (!cr6.eq) goto loc_831FE428;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1452) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x831fe3f4
	if (cr0.eq) goto loc_831FE3F4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x831fe3f8
	goto loc_831FE3F8;
loc_831FE3F4:
	// li r29,0
	r29.s64 = 0;
loc_831FE3F8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// stwx r29,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r29.u32);
	// b 0x831fe42c
	goto loc_831FE42C;
loc_831FE428:
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_831FE42C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
loc_831FE454:
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_831FE45C:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_831FE040) {
	__imp__sub_831FE040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE490) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x831fdcb0
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-22032
	r11.s64 = r11.s64 + -22032;
	// addi r10,r10,-21832
	ctx.r10.s64 = ctx.r10.s64 + -21832;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r5,160(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(160) );
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// lwz r29,2736(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2736) );
	// rlwinm r26,r11,2,0,29
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r29
	r11.u64 = PPC_LOAD_U32(r26.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fe550
	if (!cr6.eq) goto loc_831FE550;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x831fe51c
	if (cr0.eq) goto loc_831FE51C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x831fe520
	goto loc_831FE520;
loc_831FE51C:
	// li r28,0
	r28.s64 = 0;
loc_831FE520:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(164) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// stwx r28,r26,r29
	PPC_STORE_U32(r26.u32 + r29.u32, r28.u32);
	// b 0x831fe554
	goto loc_831FE554;
loc_831FE550:
	// lwz r27,28(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_831FE554:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(164) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_831FE490) {
	__imp__sub_831FE490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE5A8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x831fdcb0
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r11,r11,-22032
	r11.s64 = r11.s64 + -22032;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r5,r10,25480
	ctx.r5.s64 = ctx.r10.s64 + 25480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1536) );
	// lwz r25,2736(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2736) );
	// bl 0x831dbaa0
	sub_831DBAA0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(r28.s32, 12, xer);
	// addi r24,r11,-21328
	r24.s64 = r11.s64 + -21328;
	// addi r23,r10,-18548
	r23.s64 = ctx.r10.s64 + -18548;
	// addi r22,r9,5664
	r22.s64 = ctx.r9.s64 + 5664;
	// addi r21,r8,-22424
	r21.s64 = ctx.r8.s64 + -22424;
	// beq cr6,0x831fe654
	if (cr6.eq) goto loc_831FE654;
	// cmpwi cr6,r28,13
	cr6.compare<int32_t>(r28.s32, 13, xer);
	// beq cr6,0x831fe64c
	if (cr6.eq) goto loc_831FE64C;
	// cmpwi cr6,r28,14
	cr6.compare<int32_t>(r28.s32, 14, xer);
	// beq cr6,0x831fe644
	if (cr6.eq) goto loc_831FE644;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,757
	ctx.r7.s64 = 757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x831fe664
	goto loc_831FE664;
loc_831FE644:
	// addi r10,r24,8
	ctx.r10.s64 = r24.s64 + 8;
	// b 0x831fe658
	goto loc_831FE658;
loc_831FE64C:
	// addi r10,r24,24
	ctx.r10.s64 = r24.s64 + 24;
	// b 0x831fe658
	goto loc_831FE658;
loc_831FE654:
	// addi r10,r24,16
	ctx.r10.s64 = r24.s64 + 16;
loc_831FE658:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_831FE664:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-21832
	ctx.r10.s64 = ctx.r10.s64 + -21832;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r26,r11,2,0,29
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r25
	r11.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fe700
	if (!cr6.eq) goto loc_831FE700;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x831fe6cc
	if (cr0.eq) goto loc_831FE6CC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83200328
	sub_83200328(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x831fe6d0
	goto loc_831FE6D0;
loc_831FE6CC:
	// li r30,0
	r30.s64 = 0;
loc_831FE6D0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(164) );
	// bl 0x83201e88
	sub_83201E88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// stwx r30,r26,r25
	PPC_STORE_U32(r26.u32 + r25.u32, r30.u32);
	// b 0x831fe704
	goto loc_831FE704;
loc_831FE700:
	// lwz r29,28(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_831FE704:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(r28.s32, 12, xer);
	// beq cr6,0x831fe764
	if (cr6.eq) goto loc_831FE764;
	// cmpwi cr6,r28,13
	cr6.compare<int32_t>(r28.s32, 13, xer);
	// beq cr6,0x831fe75c
	if (cr6.eq) goto loc_831FE75C;
	// cmpwi cr6,r28,14
	cr6.compare<int32_t>(r28.s32, 14, xer);
	// beq cr6,0x831fe754
	if (cr6.eq) goto loc_831FE754;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,788
	ctx.r7.s64 = 788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x831fe778
	goto loc_831FE778;
loc_831FE754:
	// addi r10,r24,12
	ctx.r10.s64 = r24.s64 + 12;
	// b 0x831fe768
	goto loc_831FE768;
loc_831FE75C:
	// addi r10,r24,28
	ctx.r10.s64 = r24.s64 + 28;
	// b 0x831fe768
	goto loc_831FE768;
loc_831FE764:
	// addi r10,r24,20
	ctx.r10.s64 = r24.s64 + 20;
loc_831FE768:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_831FE778:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(164) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_831FE5A8) {
	__imp__sub_831FE5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE7B0) {
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
	// bl 0x831fdcb0
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22032
	r11.s64 = r11.s64 + -22032;
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

PPC_WEAK_FUNC(sub_831FE7B0) {
	__imp__sub_831FE7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE7F0) {
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
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22140
	r11.s64 = r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_831FE7F0) {
	__imp__sub_831FE7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE840) {
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
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-22140
	r11.s64 = r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x831fe898
	if (cr6.eq) goto loc_831FE898;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = r11.s64 + -22424;
	// addi r5,r10,-21996
	ctx.r5.s64 = ctx.r10.s64 + -21996;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,851
	ctx.r7.s64 = 851;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FE898:
	// li r11,1
	r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_831FE840) {
	__imp__sub_831FE840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE8C8) {
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
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-22140
	r11.s64 = r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// blt cr6,0x831fe904
	if (cr6.lt) goto loc_831FE904;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// ble cr6,0x831fe928
	if (!cr6.gt) goto loc_831FE928;
loc_831FE904:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = r11.s64 + -22424;
	// addi r5,r10,-21984
	ctx.r5.s64 = ctx.r10.s64 + -21984;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,862
	ctx.r7.s64 = 862;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FE928:
	// li r11,1
	r11.s64 = 1;
	// addi r10,r30,33
	ctx.r10.s64 = r30.s64 + 33;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_831FE8C8) {
	__imp__sub_831FE8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE958) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x831fdb20
	sub_831FDB20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831fe994
	if (cr0.eq) goto loc_831FE994;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831fe994
	if (cr6.eq) goto loc_831FE994;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_831FE994:
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

PPC_WEAK_FUNC(sub_831FE958) {
	__imp__sub_831FE958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE9B0) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21952
	r11.s64 = r11.s64 + -21952;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,1420(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1420) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,1420(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1420) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1420(r30)
	PPC_STORE_U32(r30.u32 + 1420, r11.u32);
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

PPC_WEAK_FUNC(sub_831FE9B0) {
	__imp__sub_831FE9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEA18) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21952
	r11.s64 = r11.s64 + -21952;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,1424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1424) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,1424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1424) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1424(r30)
	PPC_STORE_U32(r30.u32 + 1424, r11.u32);
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

PPC_WEAK_FUNC(sub_831FEA18) {
	__imp__sub_831FEA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEA80) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	sub_831FD210(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21952
	r11.s64 = r11.s64 + -21952;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,1428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1428) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,1428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1428) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1428(r30)
	PPC_STORE_U32(r30.u32 + 1428, r11.u32);
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

PPC_WEAK_FUNC(sub_831FEA80) {
	__imp__sub_831FEA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEAE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// slw r8,r10,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// li r8,-1
	ctx.r8.s64 = -1;
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-8(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lfs f0,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f0,f10
	f0.f64 = double(float(f0.f64 / ctx.f10.f64));
	// fsubs f0,f12,f0
	f0.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x831feb5c
	if (!cr6.gt) goto loc_831FEB5C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_831FEB5C:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x831feb68
	if (!cr6.lt) goto loc_831FEB68;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_831FEB68:
	// slw r11,r10,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FEAE8) {
	__imp__sub_831FEAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FEB98) {
	__imp__sub_831FEB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEBA8) {
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
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// lbz r11,164(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x831febd4
	if (cr6.eq) goto loc_831FEBD4;
loc_831FEBCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fec4c
	goto loc_831FEC4C;
loc_831FEBD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r30,1
	r30.s64 = 1;
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
	// blt cr6,0x831fec48
	if (cr6.lt) goto loc_831FEC48;
	// addi r29,r31,153
	r29.s64 = r31.s64 + 153;
	// subf r27,r31,r28
	r27.s64 = r28.s64 - r31.s64;
loc_831FEBFC:
	// lbzx r11,r27,r29
	r11.u64 = PPC_LOAD_U8(r27.u32 + r29.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831febcc
	if (!cr6.eq) goto loc_831FEBCC;
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// lbz r11,158(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// lbz r10,158(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 158);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831febcc
	if (!cr6.eq) goto loc_831FEBCC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x831febfc
	if (!cr6.gt) goto loc_831FEBFC;
loc_831FEC48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831FEC4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FEBA8) {
	__imp__sub_831FEBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEC58) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_831FEC70:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831fecb8
	if (cr6.eq) goto loc_831FECB8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831fecd0
	if (!cr6.eq) goto loc_831FECD0;
loc_831FECB8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x831fec70
	if (cr6.lt) goto loc_831FEC70;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831FECC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_831FECD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fecc8
	goto loc_831FECC8;
}

PPC_WEAK_FUNC(sub_831FEC58) {
	__imp__sub_831FEC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FECD8) {
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
	// li r31,0
	r31.s64 = 0;
loc_831FECF0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831fed18
	if (cr6.eq) goto loc_831FED18;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_831FED18:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x831fecf0
	if (cr6.lt) goto loc_831FECF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_831FECD8) {
	__imp__sub_831FECD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FED30) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_831FED48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// li r6,1
	ctx.r6.s64 = 1;
	// bne cr6,0x831fed88
	if (!cr6.eq) goto loc_831FED88;
	// li r6,0
	ctx.r6.s64 = 0;
loc_831FED88:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x831fed48
	if (cr6.lt) goto loc_831FED48;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_831FED30) {
	__imp__sub_831FED30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,128(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x831feddc
	if (cr6.eq) goto loc_831FEDDC;
	// lbz r11,129(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x831feddc
	if (cr6.eq) goto loc_831FEDDC;
	// lbz r11,130(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x831feddc
	if (cr6.eq) goto loc_831FEDDC;
	// lbz r11,131(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_831FEDDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FEDA8) {
	__imp__sub_831FEDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// addi r11,r11,10000
	r11.s64 = r11.s64 + 10000;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r9,r9,-20720
	ctx.r9.s64 = ctx.r9.s64 + -20720;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_831FEDE8) {
	__imp__sub_831FEDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEE18) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,1452(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,1452(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r5,960
	ctx.r5.s64 = 960;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,1376(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1376) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r11,1376(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1376) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1376(r29)
	PPC_STORE_U32(r29.u32 + 1376, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_831FEE18) {
	__imp__sub_831FEE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEE78) {
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
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r26,r7,-20376
	r26.s64 = ctx.r7.s64 + -20376;
	// addi r25,r8,-20416
	r25.s64 = ctx.r8.s64 + -20416;
	// addi r28,r9,-18548
	r28.s64 = ctx.r9.s64 + -18548;
	// addi r24,r10,-20428
	r24.s64 = ctx.r10.s64 + -20428;
	// addi r27,r11,-20528
	r27.s64 = r11.s64 + -20528;
	// ble cr6,0x831fef74
	if (!cr6.gt) goto loc_831FEF74;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
loc_831FEEC4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831feee8
	if (!cr6.eq) goto loc_831FEEE8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FEEE8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x831fef14
	if (cr6.eq) goto loc_831FEF14;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,137
	ctx.r7.s64 = 137;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FEF14:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x831fef4c
	if (cr6.eq) goto loc_831FEF4C;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x831fef4c
	if (cr6.eq) goto loc_831FEF4C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,139
	ctx.r7.s64 = 139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FEF4C:
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831feec4
	if (cr6.lt) goto loc_831FEEC4;
loc_831FEF74:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r29,1
	r29.s64 = 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x831ff064
	if (!cr6.gt) goto loc_831FF064;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
loc_831FEF90:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831fefb4
	if (!cr6.eq) goto loc_831FEFB4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FEFB4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x831fefe0
	if (cr6.eq) goto loc_831FEFE0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,146
	ctx.r7.s64 = 146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FEFE0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x831ff018
	if (cr6.eq) goto loc_831FF018;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x831ff018
	if (cr6.eq) goto loc_831FF018;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,148
	ctx.r7.s64 = 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FF018:
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831ff048
	if (!cr0.eq) goto loc_831FF048;
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
loc_831FF048:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831fef90
	if (cr6.lt) goto loc_831FEF90;
loc_831FF064:
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(948) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831ff08c
	if (!cr6.eq) goto loc_831FF08C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-20448
	ctx.r5.s64 = r11.s64 + -20448;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,153
	ctx.r7.s64 = 153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FF08C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_831FEE78) {
	__imp__sub_831FEE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,58
	r11.s64 = ctx.r4.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831ff0b4
	if (cr6.eq) goto loc_831FF0B4;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// b 0x831ff0c0
	goto loc_831FF0C0;
loc_831FF0B4:
	// addi r11,r4,20
	r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
loc_831FF0C0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mulli r9,r11,12
	ctx.r9.s64 = r11.s64 * 12;
	// addi r11,r10,-3056
	r11.s64 = ctx.r10.s64 + -3056;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// lbzx r11,r9,r11
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831ff0ec
	if (cr6.eq) goto loc_831FF0EC;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_831FF0EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF098) {
	__imp__sub_831FF098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF0F8) {
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
	// mflr r12
	// bl 0x82ca2be4
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-20536
	ctx.r9.s64 = ctx.r10.s64 + -20536;
	// li r31,-1
	r31.s64 = -1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-8) );
	// addi r5,r3,158
	ctx.r5.s64 = ctx.r3.s64 + 158;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,-16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-16) );
	// stw r8,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r8.u32);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// stwbrx r30,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, __builtin_bswap32(r30.u32));
	// addi r30,r8,10000
	r30.s64 = ctx.r8.s64 + 10000;
	// lwz r28,4(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r29,0(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, r11.u8);
	// stb r11,158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 158, r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
loc_831FF170:
	// addi r8,r10,14
	ctx.r8.s64 = ctx.r10.s64 + 14;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// rlwinm r27,r8,2,0,29
	r27.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r27,r3
	PPC_STORE_U32(r27.u32 + ctx.r3.u32, r31.u32);
	// stwx r4,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r7,-16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-16) );
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// mulli r7,r7,52
	ctx.r7.s64 = ctx.r7.s64 * 52;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r30.u32);
	// rlwinm. r7,r7,30,31,31
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x831ff1c0
	if (cr0.eq) goto loc_831FF1C0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x831ff1bc
	if (!cr6.eq) goto loc_831FF1BC;
	// stw r28,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r28.u32);
	// b 0x831ff1c0
	goto loc_831FF1C0;
loc_831FF1BC:
	// stwx r29,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r29.u32);
loc_831FF1C0:
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// stbx r11,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, r11.u8);
	// addi r7,r10,50
	ctx.r7.s64 = ctx.r10.s64 + 50;
	// stbx r11,r5,r10
	PPC_STORE_U8(ctx.r5.u32 + ctx.r10.u32, r11.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r11.u32);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r11.u32);
	// blt cr6,0x831ff170
	if (cr6.lt) goto loc_831FF170;
	// addi r10,r3,364
	ctx.r10.s64 = ctx.r3.s64 + 364;
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// addi r7,r3,232
	ctx.r7.s64 = ctx.r3.s64 + 232;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,3
	ctx.r9.s64 = 3;
loc_831FF200:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x831ff200
	if (!cr0.eq) goto loc_831FF200;
	// addi r8,r3,928
	ctx.r8.s64 = ctx.r3.s64 + 928;
	// addi r10,r3,900
	ctx.r10.s64 = ctx.r3.s64 + 900;
	// li r9,4
	ctx.r9.s64 = 4;
loc_831FF230:
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x831ff230
	if (!cr0.eq) goto loc_831FF230;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FF0F8) {
	__imp__sub_831FF0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF250) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// blt cr6,0x831ff294
	if (cr6.lt) goto loc_831FF294;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = r11.s64 + -20528;
	// addi r5,r10,-20292
	ctx.r5.s64 = ctx.r10.s64 + -20292;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,251
	ctx.r7.s64 = 251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FF294:
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// addi r9,r31,14
	ctx.r9.s64 = r31.s64 + 14;
	// addi r8,r31,7
	ctx.r8.s64 = r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, r11.u32);
	// stwx r29,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + r30.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_831FF250) {
	__imp__sub_831FF250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF2C8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r10,r10,-21840
	ctx.r10.s64 = ctx.r10.s64 + -21840;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r31,-20552(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-20552) );
	// addi r11,r1,232
	r11.s64 = ctx.r1.s64 + 232;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_831FF340:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x831ff3c8
	if (cr6.lt) goto loc_831FF3C8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
loc_831FF350:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// beq cr6,0x831ff3a4
	if (cr6.eq) goto loc_831FF3A4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bne cr6,0x831ff384
	if (!cr6.eq) goto loc_831FF384;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x831ff388
	if (cr6.eq) goto loc_831FF388;
loc_831FF384:
	// li r11,0
	r11.s64 = 0;
loc_831FF388:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831ff3c0
	if (!cr0.eq) goto loc_831FF3C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// ble cr6,0x831ff350
	if (!cr6.gt) goto loc_831FF350;
	// b 0x831ff3c8
	goto loc_831FF3C8;
loc_831FF3A4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stbx r9,r5,r10
	PPC_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x831ff3c8
	goto loc_831FF3C8;
loc_831FF3C0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stbx r9,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + r11.u32, ctx.r9.u8);
loc_831FF3C8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x831ff340
	if (cr6.lt) goto loc_831FF340;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831ff46c
	if (!cr6.gt) goto loc_831FF46C;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
loc_831FF3EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831ff460
	if (!cr6.gt) goto loc_831FF460;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_831FF3FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x831ff41c
	if (!cr6.eq) goto loc_831FF41C;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_831FF41C:
	// subfc r8,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831ff450
	if (cr0.eq) goto loc_831FF450;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r11,r5,r8
	r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r9,r5,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// stbx r7,r5,r8
	PPC_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r7.u8);
loc_831FF450:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// blt cr6,0x831ff3fc
	if (cr6.lt) goto loc_831FF3FC;
loc_831FF460:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bne 0x831ff3ec
	if (!cr0.eq) goto loc_831FF3EC;
loc_831FF46C:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831ff498
	if (!cr6.gt) goto loc_831FF498;
loc_831FF478:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// blt cr6,0x831ff478
	if (cr6.lt) goto loc_831FF478;
loc_831FF498:
	// li r11,0
	r11.s64 = 0;
loc_831FF49C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x831ff49c
	if (cr6.lt) goto loc_831FF49C;
	// lwz r11,952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(952) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// lbz r11,1393(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1393);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831ff5b0
	if (cr0.eq) goto loc_831FF5B0;
	// beq cr6,0x831ff588
	if (cr6.eq) goto loc_831FF588;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x831ff56c
	if (cr6.eq) goto loc_831FF56C;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x831ff548
	if (cr6.eq) goto loc_831FF548;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x831ff51c
	if (cr6.eq) goto loc_831FF51C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = r11.s64 + -20528;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x831ff59c
	goto loc_831FF59C;
loc_831FF51C:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x831eee28
	sub_831EEE28(ctx, base);
	// b 0x831ff598
	goto loc_831FF598;
loc_831FF548:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x831eee08
	sub_831EEE08(ctx, base);
	// b 0x831ff598
	goto loc_831FF598;
loc_831FF56C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x831eede8
	sub_831EEDE8(ctx, base);
	// b 0x831ff598
	goto loc_831FF598;
loc_831FF588:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x831eedc8
	sub_831EEDC8(ctx, base);
loc_831FF598:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_831FF59C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831df328
	sub_831DF328(ctx, base);
	// b 0x831ff684
	goto loc_831FF684;
loc_831FF5B0:
	// beq cr6,0x831ff660
	if (cr6.eq) goto loc_831FF660;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x831ff644
	if (cr6.eq) goto loc_831FF644;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x831ff620
	if (cr6.eq) goto loc_831FF620;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x831ff5f4
	if (cr6.eq) goto loc_831FF5F4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = r11.s64 + -20528;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,410
	ctx.r7.s64 = 410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x831ff674
	goto loc_831FF674;
loc_831FF5F4:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x831f07a8
	sub_831F07A8(ctx, base);
	// b 0x831ff670
	goto loc_831FF670;
loc_831FF620:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x831f0788
	sub_831F0788(ctx, base);
	// b 0x831ff670
	goto loc_831FF670;
loc_831FF644:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x831f0768
	sub_831F0768(ctx, base);
	// b 0x831ff670
	goto loc_831FF670;
loc_831FF660:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(172) );
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x831f0748
	sub_831F0748(ctx, base);
loc_831FF670:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_831FF674:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
loc_831FF684:
	// addi r11,r29,32
	r11.s64 = r29.s64 + 32;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_831FF2C8) {
	__imp__sub_831FF2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF6A0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(228) );
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r28)
	PPC_STORE_U32(r28.u32 + 228, r11.u32);
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(228) );
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ff738
	if (cr0.eq) goto loc_831FF738;
	// lwz r11,952(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(952) );
	// li r30,0
	r30.s64 = 0;
	// lwz r11,2736(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2736) );
	// lwz r31,96(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831ff738
	if (cr6.eq) goto loc_831FF738;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x831ff700
	if (!cr6.lt) goto loc_831FF700;
loc_831FF6F4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x831ff70c
	goto loc_831FF70C;
loc_831FF700:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_831FF70C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x831ff724
	if (!cr6.eq) goto loc_831FF724;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fc910
	sub_831FC910(ctx, base);
loc_831FF724:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x831ff6f4
	if (cr6.lt) goto loc_831FF6F4;
loc_831FF738:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FF6A0) {
	__imp__sub_831FF6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF740) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x831ff774
	if (!cr6.eq) goto loc_831FF774;
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(952) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,2736(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2736) );
	// lwz r3,172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x831ee720
	sub_831EE720(ctx, base);
loc_831FF774:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x831fc718
	sub_831FC718(ctx, base);
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

PPC_WEAK_FUNC(sub_831FF740) {
	__imp__sub_831FF740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF7A0) {
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
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

PPC_WEAK_FUNC(sub_831FF7A0) {
	__imp__sub_831FF7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF7D8) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cmpwi cr6,r11,137
	cr6.compare<int32_t>(r11.s32, 137, xer);
	// bne cr6,0x831ff800
	if (!cr6.eq) goto loc_831FF800;
	// bl 0x831f1988
	sub_831F1988(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x831ff804
	if (!cr0.eq) goto loc_831FF804;
loc_831FF800:
	// li r11,0
	r11.s64 = 0;
loc_831FF804:
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

PPC_WEAK_FUNC(sub_831FF7D8) {
	__imp__sub_831FF7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,956(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(956) );
	// lwz r10,2152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(2152) );
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x831ff82c
	if (!cr0.lt) goto loc_831FF82C;
	// li r11,0
	r11.s64 = 0;
loc_831FF82C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF818) {
	__imp__sub_831FF818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831ff85c
	if (!cr6.eq) goto loc_831FF85C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// addi r11,r11,-20552
	r11.s64 = r11.s64 + -20552;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x831ff870
	goto loc_831FF870;
loc_831FF85C:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-20552(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-20552) );
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
loc_831FF870:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF840) {
	__imp__sub_831FF840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,2736(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(2736) );
	// lbz r11,2144(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831ff920
	if (cr0.eq) goto loc_831FF920;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bgt cr6,0x831ff8d0
	if (cr6.gt) goto loc_831FF8D0;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// bge cr6,0x831ff8f8
	if (!cr6.lt) goto loc_831FF8F8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x831ff8f8
	if (cr6.eq) goto loc_831FF8F8;
	// ble cr6,0x831ff918
	if (!cr6.gt) goto loc_831FF918;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x831ff900
	if (cr6.eq) goto loc_831FF900;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831ff918
	goto loc_831FF918;
loc_831FF8D0:
	// cmpwi cr6,r3,33
	cr6.compare<int32_t>(ctx.r3.s32, 33, xer);
	// bgt cr6,0x831ff908
	if (cr6.gt) goto loc_831FF908;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x831ff8f8
	if (!cr6.lt) goto loc_831FF8F8;
	// cmpwi cr6,r3,21
	cr6.compare<int32_t>(ctx.r3.s32, 21, xer);
	// blt cr6,0x831ff918
	if (cr6.lt) goto loc_831FF918;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// ble cr6,0x831ff900
	if (!cr6.gt) goto loc_831FF900;
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bgt cr6,0x831ff918
	if (cr6.gt) goto loc_831FF918;
loc_831FF8F8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_831FF900:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_831FF908:
	// cmpwi cr6,r3,43
	cr6.compare<int32_t>(ctx.r3.s32, 43, xer);
	// blt cr6,0x831ff918
	if (cr6.lt) goto loc_831FF918;
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_831FF918:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_831FF920:
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x831ff934
	if (cr6.eq) goto loc_831FF934;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x831ff900
	if (cr6.eq) goto loc_831FF900;
	// b 0x831ff918
	goto loc_831FF918;
loc_831FF934:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF888) {
	__imp__sub_831FF888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r10,r4,58
	ctx.r10.s64 = ctx.r4.s64 + 58;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x831ff990
	goto loc_831FF990;
loc_831FF968:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831ff998
	if (!cr0.eq) goto loc_831FF998;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(228) );
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831ff984
	if (cr0.eq) goto loc_831FF984;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x831ff9ac
	if (cr6.eq) goto loc_831FF9AC;
loc_831FF984:
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
loc_831FF990:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831ff968
	if (!cr6.eq) goto loc_831FF968;
loc_831FF998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FF99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_831FF9AC:
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x831ff9c4
	if (!cr6.eq) goto loc_831FF9C4;
	// lwz r11,228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(228) );
	// rlwinm. r11,r11,23,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831ffa00
	if (!cr0.eq) goto loc_831FFA00;
loc_831FF9C4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831ffa00
	if (!cr0.eq) goto loc_831FFA00;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = r11.s64 + -20528;
	// addi r5,r10,-20272
	ctx.r5.s64 = ctx.r10.s64 + -20272;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,647
	ctx.r7.s64 = 647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFA00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ff99c
	goto loc_831FF99C;
}

PPC_WEAK_FUNC(sub_831FF940) {
	__imp__sub_831FF940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(228) );
	// stw r6,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r6.u32);
	// ori r10,r10,66
	ctx.r10.u64 = ctx.r10.u64 | 66;
	// stw r5,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r5.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// b 0x831df3d0
	sub_831DF3D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FFA08) {
	__imp__sub_831FFA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, r11.u8);
	// stb r11,133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 133, r11.u8);
	// stb r11,134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 134, r11.u8);
	// stb r11,135(r3)
	PPC_STORE_U8(ctx.r3.u32 + 135, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFA38) {
	__imp__sub_831FFA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFA58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831ffab8
	if (!cr6.eq) goto loc_831FFAB8;
	// lwz r31,236(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(236) );
	// b 0x831ffaa4
	goto loc_831FFAA4;
loc_831FFA84:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ffab0
	if (cr0.eq) goto loc_831FFAB0;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// lwz r31,236(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(236) );
loc_831FFAA4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(236) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831ffa84
	if (!cr6.eq) goto loc_831FFA84;
loc_831FFAB0:
	// stw r31,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831FFAB8:
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

PPC_WEAK_FUNC(sub_831FFA58) {
	__imp__sub_831FFA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r10,25480
	ctx.r7.s64 = ctx.r10.s64 + 25480;
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(952) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1384) );
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1536) );
	// bl 0x831dbcb8
	sub_831DBCB8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r7,r11,25480
	ctx.r7.s64 = r11.s64 + 25480;
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(952) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1384) );
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1536) );
	// bl 0x831dc158
	sub_831DC158(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FFAD0) {
	__imp__sub_831FFAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFB60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,10000
	r11.s64 = r11.s64 + 10000;
	// mulli r8,r9,52
	ctx.r8.s64 = ctx.r9.s64 * 52;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r30,r10,-18548
	r30.s64 = ctx.r10.s64 + -18548;
	// addi r29,r9,-20528
	r29.s64 = ctx.r9.s64 + -20528;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne cr6,0x831ffbe0
	if (!cr6.eq) goto loc_831FFBE0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-20144
	ctx.r5.s64 = r11.s64 + -20144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFBE0:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ffc50
	if (cr0.eq) goto loc_831FFC50;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(r11.s32, 52, xer);
	// beq cr6,0x831ffc10
	if (cr6.eq) goto loc_831FFC10;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-20168
	ctx.r5.s64 = r11.s64 + -20168;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1434
	ctx.r7.s64 = 1434;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFC10:
	// lbz r11,154(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// li r10,53
	ctx.r10.s64 = 53;
	// lbz r9,153(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r11.u8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x831ffc50
	if (cr6.eq) goto loc_831FFC50;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-20204
	ctx.r5.s64 = r11.s64 + -20204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1438
	ctx.r7.s64 = 1438;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFC50:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// stb r11,132(r31)
	PPC_STORE_U8(r31.u32 + 132, r11.u8);
	// stb r11,133(r31)
	PPC_STORE_U8(r31.u32 + 133, r11.u8);
	// stb r11,134(r31)
	PPC_STORE_U8(r31.u32 + 134, r11.u8);
	// stb r11,135(r31)
	PPC_STORE_U8(r31.u32 + 135, r11.u8);
	// bne cr6,0x831ffc80
	if (!cr6.eq) goto loc_831FFC80;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// stb r11,136(r31)
	PPC_STORE_U8(r31.u32 + 136, r11.u8);
	// stb r11,137(r31)
	PPC_STORE_U8(r31.u32 + 137, r11.u8);
	// stb r11,138(r31)
	PPC_STORE_U8(r31.u32 + 138, r11.u8);
	// stb r11,139(r31)
	PPC_STORE_U8(r31.u32 + 139, r11.u8);
loc_831FFC80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_831FFB60) {
	__imp__sub_831FFB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFC88) {
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
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r10,r10,10000
	ctx.r10.s64 = ctx.r10.s64 + 10000;
	// addi r30,r9,-18548
	r30.s64 = ctx.r9.s64 + -18548;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r8,r11,52
	ctx.r8.s64 = r11.s64 * 52;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r11,-53
	ctx.r7.s64 = r11.s64 + -53;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r29,r11,-20528
	r29.s64 = r11.s64 + -20528;
	// rlwinm r28,r7,27,31,31
	r28.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831ffcf4
	if (!cr6.eq) goto loc_831FFCF4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-20144
	ctx.r5.s64 = r11.s64 + -20144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1465
	ctx.r7.s64 = 1465;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFCF4:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x831ffd38
	if (cr0.eq) goto loc_831FFD38;
	// lbz r11,153(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// lbz r10,154(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831ffd28
	if (cr6.eq) goto loc_831FFD28;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-20204
	ctx.r5.s64 = r11.s64 + -20204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1468
	ctx.r7.s64 = 1468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFD28:
	// lbz r11,154(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r11.u8);
loc_831FFD38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_831FFC88) {
	__imp__sub_831FFC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFD48) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,32144
	ctx.r10.s64 = ctx.r10.s64 + 32144;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,1376(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(1376) );
	// stw r10,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// lwz r10,1376(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(1376) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1376, ctx.r10.u32);
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(r31.u32 + 948, r11.u32);
	// stw r5,952(r31)
	PPC_STORE_U32(r31.u32 + 952, ctx.r5.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(r31.u32 + 956, r11.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// bl 0x831ff0f8
	sub_831FF0F8(ctx, base);
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

PPC_WEAK_FUNC(sub_831FFD48) {
	__imp__sub_831FFD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFDC0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(952) );
	// lbz r11,1393(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1393);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831ffe08
	if (cr0.eq) goto loc_831FFE08;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = r11.s64 + -20528;
	// addi r5,r10,28952
	ctx.r5.s64 = ctx.r10.s64 + 28952;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,184
	ctx.r7.s64 = 184;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_831FFE08:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831ffe68
	if (!cr6.gt) goto loc_831FFE68;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x831ffe68
	if (!cr6.eq) goto loc_831FFE68;
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
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x831ffe68
	if (!cr6.gt) goto loc_831FFE68;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_831FFE68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_831FFDC0) {
	__imp__sub_831FFDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x831ff2c8
	sub_831FF2C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFE70) {
	__imp__sub_831FFE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x831ff2c8
	sub_831FF2C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFEC8) {
	__imp__sub_831FFEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFF20) {
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
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-19808
	ctx.r9.s64 = r11.s64 + -19808;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_831FFF50:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x831fff50
	if (!cr0.eq) goto loc_831FFF50;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFF20) {
	__imp__sub_831FFF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFF80) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831fff20
	sub_831FFF20(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-19808
	ctx.r10.s64 = ctx.r10.s64 + -19808;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

PPC_WEAK_FUNC(sub_831FFF80) {
	__imp__sub_831FFF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFFD0) {
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
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,-19704
	ctx.r9.s64 = ctx.r9.s64 + -19704;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_831FFFD0) {
	__imp__sub_831FFFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-19600
	ctx.r3.s64 = r11.s64 + -19600;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200028) {
	__imp__sub_83200028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200038) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r11,-19592
	r11.s64 = r11.s64 + -19592;
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(228) );
	// ori r11,r11,18
	r11.u64 = r11.u64 | 18;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
	// li r11,48
	r11.s64 = 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200038) {
	__imp__sub_83200038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832000A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-3372
	ctx.r3.s64 = r11.s64 + -3372;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832000A8) {
	__imp__sub_832000A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832000B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83200038
	sub_83200038(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-19488
	r11.s64 = r11.s64 + -19488;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832000B8) {
	__imp__sub_832000B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-19384
	ctx.r3.s64 = r11.s64 + -19384;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200110) {
	__imp__sub_83200110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-19372
	ctx.r3.s64 = r11.s64 + -19372;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200120) {
	__imp__sub_83200120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200130) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19360
	r11.s64 = r11.s64 + -19360;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200130) {
	__imp__sub_83200130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r11,-19868
	ctx.r3.s64 = r11.s64 + -19868;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200178) {
	__imp__sub_83200178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200188) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19256
	r11.s64 = r11.s64 + -19256;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200188) {
	__imp__sub_83200188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832001D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-4304
	ctx.r3.s64 = r11.s64 + -4304;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832001D0) {
	__imp__sub_832001D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832001E0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-19152
	ctx.r10.s64 = ctx.r10.s64 + -19152;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832001E0) {
	__imp__sub_832001E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-19048
	ctx.r3.s64 = r11.s64 + -19048;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200238) {
	__imp__sub_83200238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200248) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19152
	ctx.r9.s64 = r11.s64 + -19152;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200248) {
	__imp__sub_83200248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832002C0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-19032
	ctx.r10.s64 = ctx.r10.s64 + -19032;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_832002C0) {
	__imp__sub_832002C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18928
	ctx.r3.s64 = r11.s64 + -18928;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200318) {
	__imp__sub_83200318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200328) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-19032
	ctx.r10.s64 = ctx.r10.s64 + -19032;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_83200328) {
	__imp__sub_83200328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200398) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18912
	r11.s64 = r11.s64 + -18912;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

PPC_WEAK_FUNC(sub_83200398) {
	__imp__sub_83200398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832003F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18808
	ctx.r3.s64 = r11.s64 + -18808;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832003F8) {
	__imp__sub_832003F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200408) {
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
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-18792
	ctx.r10.s64 = ctx.r10.s64 + -18792;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_83200408) {
	__imp__sub_83200408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18688
	ctx.r3.s64 = r11.s64 + -18688;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200450) {
	__imp__sub_83200450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200460) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,137
	ctx.r4.s64 = 137;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18672
	r11.s64 = r11.s64 + -18672;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200460) {
	__imp__sub_83200460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832004A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18568
	ctx.r3.s64 = r11.s64 + -18568;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832004A8) {
	__imp__sub_832004A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832004B8) {
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
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18560
	r11.s64 = r11.s64 + -18560;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_832004B8) {
	__imp__sub_832004B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18456
	ctx.r3.s64 = r11.s64 + -18456;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200528) {
	__imp__sub_83200528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200538) {
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
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-18448
	ctx.r10.s64 = ctx.r10.s64 + -18448;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_83200538) {
	__imp__sub_83200538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18344
	ctx.r3.s64 = r11.s64 + -18344;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200580) {
	__imp__sub_83200580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200590) {
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
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-18328
	ctx.r10.s64 = ctx.r10.s64 + -18328;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_83200590) {
	__imp__sub_83200590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832005E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18120
	ctx.r3.s64 = r11.s64 + -18120;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832005E0) {
	__imp__sub_832005E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832005F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-18000
	ctx.r3.s64 = r11.s64 + -18000;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832005F0) {
	__imp__sub_832005F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-17880
	ctx.r3.s64 = r11.s64 + -17880;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200600) {
	__imp__sub_83200600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-17760
	ctx.r3.s64 = r11.s64 + -17760;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200610) {
	__imp__sub_83200610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r11,2124
	ctx.r3.s64 = r11.s64 + 2124;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200620) {
	__imp__sub_83200620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// blt cr6,0x83200664
	if (cr6.lt) goto loc_83200664;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bgt cr6,0x83200664
	if (cr6.gt) goto loc_83200664;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = r11.s64 + 25064;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1712
	ctx.r7.s64 = 1712;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831034d8
	sub_831034D8(ctx, base);
	return;
loc_83200664:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200630) {
	__imp__sub_83200630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200678) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r29,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r29.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r8,-17744
	ctx.r8.s64 = ctx.r8.s64 + -17744;
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// lwz r10,-20548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-20548) );
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r7,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200678) {
	__imp__sub_83200678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832006E8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r31,0
	r31.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,-17640
	r11.s64 = r11.s64 + -17640;
	// stw r31,172(r29)
	PPC_STORE_U32(r29.u32 + 172, r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// stw r10,176(r29)
	PPC_STORE_U32(r29.u32 + 176, ctx.r10.u32);
	// stw r31,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r31.u32);
	// stw r31,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r31.u32);
	// stw r31,108(r29)
	PPC_STORE_U32(r29.u32 + 108, r31.u32);
	// stw r31,104(r29)
	PPC_STORE_U32(r29.u32 + 104, r31.u32);
	// lwz r3,1452(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1452) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r30,14(r28)
	PPC_STORE_U16(r28.u32 + 14, r30.u16);
	// sth r11,0(r28)
	PPC_STORE_U16(r28.u32 + 0, r11.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(r28.u32 + 2, r11.u16);
	// sth r11,4(r28)
	PPC_STORE_U16(r28.u32 + 4, r11.u16);
	// sth r10,6(r28)
	PPC_STORE_U16(r28.u32 + 6, ctx.r10.u16);
	// sth r10,8(r28)
	PPC_STORE_U16(r28.u32 + 8, ctx.r10.u16);
	// sth r11,10(r28)
	PPC_STORE_U16(r28.u32 + 10, r11.u16);
	// sth r11,12(r28)
	PPC_STORE_U16(r28.u32 + 12, r11.u16);
	// sth r31,16(r28)
	PPC_STORE_U16(r28.u32 + 16, r31.u16);
	// sth r30,18(r28)
	PPC_STORE_U16(r28.u32 + 18, r30.u16);
	// sth r31,22(r28)
	PPC_STORE_U16(r28.u32 + 22, r31.u16);
	// sth r31,24(r28)
	PPC_STORE_U16(r28.u32 + 24, r31.u16);
	// sth r31,26(r28)
	PPC_STORE_U16(r28.u32 + 26, r31.u16);
	// sth r31,28(r28)
	PPC_STORE_U16(r28.u32 + 28, r31.u16);
	// sth r31,20(r28)
	PPC_STORE_U16(r28.u32 + 20, r31.u16);
	// stw r28,184(r29)
	PPC_STORE_U32(r29.u32 + 184, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832006E8) {
	__imp__sub_832006E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832007A8) {
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
	// bl 0x83200038
	sub_83200038(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r11,-17536
	r11.s64 = r11.s64 + -17536;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832007A8) {
	__imp__sub_832007A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832007F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-17432
	ctx.r3.s64 = r11.s64 + -17432;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832007F8) {
	__imp__sub_832007F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200808) {
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
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-17408
	r11.s64 = r11.s64 + -17408;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-20540(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-20540) );
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_83200808) {
	__imp__sub_83200808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-17304
	ctx.r3.s64 = r11.s64 + -17304;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200890) {
	__imp__sub_83200890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832008A0) {
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
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r10,r10,-17296
	ctx.r10.s64 = ctx.r10.s64 + -17296;
	// stw r9,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_832008A0) {
	__imp__sub_832008A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-17192
	ctx.r3.s64 = r11.s64 + -17192;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200918) {
	__imp__sub_83200918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200928) {
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
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-17184
	r11.s64 = r11.s64 + -17184;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_83200928) {
	__imp__sub_83200928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832009A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-17080
	ctx.r3.s64 = r11.s64 + -17080;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832009A0) {
	__imp__sub_832009A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832009B0) {
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
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17064
	r11.s64 = r11.s64 + -17064;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_832009B0) {
	__imp__sub_832009B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-16960
	ctx.r3.s64 = r11.s64 + -16960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200A28) {
	__imp__sub_83200A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200A38) {
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
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16944
	r11.s64 = r11.s64 + -16944;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(2736) );
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_83200A38) {
	__imp__sub_83200A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-16840
	ctx.r3.s64 = r11.s64 + -16840;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200AB0) {
	__imp__sub_83200AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200AC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r11,r11,-16824
	r11.s64 = r11.s64 + -16824;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200AC0) {
	__imp__sub_83200AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200B18) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r11,r11,-16720
	r11.s64 = r11.s64 + -16720;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200B18) {
	__imp__sub_83200B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200B70) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,25032
	r11.s64 = r11.s64 + 25032;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x83200ba4
	if (cr0.eq) goto loc_83200BA4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_83200BA4:
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

PPC_WEAK_FUNC(sub_83200B70) {
	__imp__sub_83200B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200BC0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,141
	ctx.r4.s64 = 141;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16616
	r11.s64 = r11.s64 + -16616;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

PPC_WEAK_FUNC(sub_83200BC0) {
	__imp__sub_83200BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200C18) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16512
	r11.s64 = r11.s64 + -16512;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

PPC_WEAK_FUNC(sub_83200C18) {
	__imp__sub_83200C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200ccc
	if (cr0.eq) goto loc_83200CCC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-20016
	ctx.r10.s64 = ctx.r10.s64 + -20016;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x83200cd0
	goto loc_83200CD0;
loc_83200CCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200CD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200C70) {
	__imp__sub_83200C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200d1c
	if (cr0.eq) goto loc_83200D1C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fffd0
	sub_831FFFD0(ctx, base);
	// b 0x83200d20
	goto loc_83200D20;
loc_83200D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200CD8) {
	__imp__sub_83200CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200d88
	if (cr0.eq) goto loc_83200D88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-19912
	r11.s64 = r11.s64 + -19912;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x83200d8c
	goto loc_83200D8C;
loc_83200D88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200D28) {
	__imp__sub_83200D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200df8
	if (cr0.eq) goto loc_83200DF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,32256
	r11.s64 = r11.s64 + 32256;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x83200dfc
	goto loc_83200DFC;
loc_83200DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200DFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200D98) {
	__imp__sub_83200D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200e68
	if (cr0.eq) goto loc_83200E68;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20120
	r11.s64 = r11.s64 + -20120;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x83200e6c
	goto loc_83200E6C;
loc_83200E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200E08) {
	__imp__sub_83200E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200ebc
	if (cr0.eq) goto loc_83200EBC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x832008a0
	sub_832008A0(ctx, base);
	// b 0x83200ec0
	goto loc_83200EC0;
loc_83200EBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200E78) {
	__imp__sub_83200E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200f0c
	if (cr0.eq) goto loc_83200F0C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200928
	sub_83200928(ctx, base);
	// b 0x83200f10
	goto loc_83200F10;
loc_83200F0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200F10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200EC8) {
	__imp__sub_83200EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200f5c
	if (cr0.eq) goto loc_83200F5C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200808
	sub_83200808(ctx, base);
	// b 0x83200f60
	goto loc_83200F60;
loc_83200F5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200F18) {
	__imp__sub_83200F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200fac
	if (cr0.eq) goto loc_83200FAC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x832009b0
	sub_832009B0(ctx, base);
	// b 0x83200fb0
	goto loc_83200FB0;
loc_83200FAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200F68) {
	__imp__sub_83200F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83200ffc
	if (cr0.eq) goto loc_83200FFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200a38
	sub_83200A38(ctx, base);
	// b 0x83201000
	goto loc_83201000;
loc_83200FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83200FB8) {
	__imp__sub_83200FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201008) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
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
	// beq 0x83201068
	if (cr0.eq) goto loc_83201068;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-18792
	ctx.r10.s64 = ctx.r10.s64 + -18792;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x8320106c
	goto loc_8320106C;
loc_83201068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320106C:
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

PPC_WEAK_FUNC(sub_83201008) {
	__imp__sub_83201008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x832010cc
	if (cr0.eq) goto loc_832010CC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x832004b8
	sub_832004B8(ctx, base);
	// b 0x832010d0
	goto loc_832010D0;
loc_832010CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832010D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83201088) {
	__imp__sub_83201088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832010D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
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
	// beq 0x83201138
	if (cr0.eq) goto loc_83201138;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-18448
	ctx.r10.s64 = ctx.r10.s64 + -18448;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// b 0x8320113c
	goto loc_8320113C;
loc_83201138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320113C:
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

PPC_WEAK_FUNC(sub_832010D8) {
	__imp__sub_832010D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201158) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
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
	// beq 0x832011ac
	if (cr0.eq) goto loc_832011AC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x83200590
	sub_83200590(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-18104
	r11.s64 = r11.s64 + -18104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x832011b0
	goto loc_832011B0;
loc_832011AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832011B0:
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

PPC_WEAK_FUNC(sub_83201158) {
	__imp__sub_83201158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832011C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
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
	// beq 0x8320121c
	if (cr0.eq) goto loc_8320121C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x83200590
	sub_83200590(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-17984
	r11.s64 = r11.s64 + -17984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x83201220
	goto loc_83201220;
loc_8320121C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201220:
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

PPC_WEAK_FUNC(sub_832011C8) {
	__imp__sub_832011C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201238) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
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
	// beq 0x8320128c
	if (cr0.eq) goto loc_8320128C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x83200590
	sub_83200590(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-17864
	r11.s64 = r11.s64 + -17864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x83201290
	goto loc_83201290;
loc_8320128C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201290:
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

PPC_WEAK_FUNC(sub_83201238) {
	__imp__sub_83201238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832012A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
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
	// beq 0x832012fc
	if (cr0.eq) goto loc_832012FC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x83200590
	sub_83200590(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-18224
	r11.s64 = r11.s64 + -18224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x83201300
	goto loc_83201300;
loc_832012FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201300:
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

PPC_WEAK_FUNC(sub_832012A8) {
	__imp__sub_832012A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x8320135c
	if (cr0.eq) goto loc_8320135C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fff20
	sub_831FFF20(ctx, base);
	// b 0x83201360
	goto loc_83201360;
loc_8320135C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83201318) {
	__imp__sub_83201318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201368) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r27,1452(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// beq 0x832013bc
	if (cr0.eq) goto loc_832013BC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83200678
	sub_83200678(ctx, base);
	// b 0x832013c0
	goto loc_832013C0;
loc_832013BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832013C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83201368) {
	__imp__sub_83201368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832013C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x8320140c
	if (cr0.eq) goto loc_8320140C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x832006e8
	sub_832006E8(ctx, base);
	// b 0x83201410
	goto loc_83201410;
loc_8320140C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832013C8) {
	__imp__sub_832013C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201418) {
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
	// bl 0x831ffd48
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-20120
	ctx.r10.s64 = ctx.r10.s64 + -20120;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,-20540(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-20540) );
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83201418) {
	__imp__sub_83201418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x832014b4
	if (cr0.eq) goto loc_832014B4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83201418
	sub_83201418(ctx, base);
	// b 0x832014b8
	goto loc_832014B8;
loc_832014B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832014B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83201470) {
	__imp__sub_83201470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832014C0) {
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
	// addi r3,r4,128
	ctx.r3.s64 = ctx.r4.s64 + 128;
	// stw r4,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r4.u32);
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r10,2,0,29
	r30.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_832014C0) {
	__imp__sub_832014C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832015B0) {
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
	// li r30,0
	r30.s64 = 0;
	// b 0x83201604
	goto loc_83201604;
loc_832015CC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83201614
	if (cr6.eq) goto loc_83201614;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// beq 0x832015fc
	if (cr0.eq) goto loc_832015FC;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_832015FC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
loc_83201604:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x832015cc
	if (!cr6.eq) goto loc_832015CC;
loc_83201614:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83201630
	if (cr6.eq) goto loc_83201630;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_83201630:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x83201604
	if (!cr6.gt) goto loc_83201604;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_832015B0) {
	__imp__sub_832015B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832016C8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(32) );
	// bl 0x831e2dc8
	sub_831E2DC8(ctx, base);
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(28) );
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83201824
	if (cr6.lt) goto loc_83201824;
	// addi r22,r3,4
	r22.s64 = ctx.r3.s64 + 4;
loc_832016F4:
	// lwz r25,0(r22)
	r25.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lwz r24,72(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + int32_t(72) );
loc_83201708:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(56) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x83201720
	if (!cr6.gt) goto loc_83201720;
	// li r11,0
	r11.s64 = 0;
	// b 0x8320172c
	goto loc_8320172C;
loc_83201720:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_8320172C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83201764
	if (cr0.eq) goto loc_83201764;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// beq cr6,0x83201758
	if (cr6.eq) goto loc_83201758;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83202440
	sub_83202440(ctx, base);
loc_83201758:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x83201708
	goto loc_83201708;
loc_83201764:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_83201770:
	// lwz r11,88(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(88) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x83201788
	if (!cr6.gt) goto loc_83201788;
	// li r11,0
	r11.s64 = 0;
	// b 0x83201794
	goto loc_83201794;
loc_83201788:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r27,r10,r28
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
loc_83201794:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83201810
	if (cr0.eq) goto loc_83201810;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_832017A8:
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(92) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x832017c0
	if (!cr6.gt) goto loc_832017C0;
	// li r11,0
	r11.s64 = 0;
	// b 0x832017cc
	goto loc_832017CC;
loc_832017C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_832017CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83201804
	if (cr0.eq) goto loc_83201804;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// beq cr6,0x832017f8
	if (cr6.eq) goto loc_832017F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83202440
	sub_83202440(ctx, base);
loc_832017F8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x832017a8
	goto loc_832017A8;
loc_83201804:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x83201770
	goto loc_83201770;
loc_83201810:
	// lwz r11,28(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(28) );
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// ble cr6,0x832016f4
	if (!cr6.gt) goto loc_832016F4;
loc_83201824:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_832016C8) {
	__imp__sub_832016C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201830) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x83201878
	if (cr0.eq) goto loc_83201878;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x8320187c
	goto loc_8320187C;
loc_83201878:
	// li r29,0
	r29.s64 = 0;
loc_8320187C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// b 0x8320189c
	goto loc_8320189C;
loc_83201884:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r28,r11,r30
	r28.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
loc_8320189C:
	// rlwinm r30,r28,2,0,29
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83201884
	if (!cr6.eq) goto loc_83201884;
	// b 0x8320190c
	goto loc_8320190C;
loc_832018B8:
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x83201900
	if (!cr6.lt) goto loc_83201900;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r8.u32);
loc_83201900:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_8320190C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x832018b8
	if (!cr6.eq) goto loc_832018B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83201830) {
	__imp__sub_83201830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201930) {
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
	// rlwinm r30,r4,2,0,29
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83201960
	if (cr6.eq) goto loc_83201960;
	// bl 0x83201830
	sub_83201830(ctx, base);
loc_83201960:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
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

PPC_WEAK_FUNC(sub_83201930) {
	__imp__sub_83201930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201980) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,2148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2148) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2148(r11)
	PPC_STORE_U32(r11.u32 + 2148, ctx.r10.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x832019d8
	if (cr0.eq) goto loc_832019D8;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x832019dc
	goto loc_832019DC;
loc_832019D8:
	// li r28,0
	r28.s64 = 0;
loc_832019DC:
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r27,2
	r27.s64 = 2;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
loc_83201A28:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
loc_83201A34:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,2148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(2148) );
	// bl 0x83202330
	sub_83202330(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83201aac
	if (cr0.eq) goto loc_83201AAC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r27,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r27.u32);
	// rlwinm r11,r27,2,0,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(72) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,2148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(2148) );
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// b 0x83201a28
	goto loc_83201A28;
loc_83201AAC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83201ac8
	if (cr6.eq) goto loc_83201AC8;
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83201a34
	goto loc_83201A34;
loc_83201AC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83201980) {
	__imp__sub_83201980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201AD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r22,164(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + int32_t(164) );
	// lwz r10,72(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(72) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83201b1c
	if (!cr6.eq) goto loc_83201B1C;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// b 0x83201b10
	goto loc_83201B10;
loc_83201B04:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_83201B10:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83201b04
	if (!cr6.eq) goto loc_83201B04;
loc_83201B1C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83201980
	sub_83201980(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x831df638
	sub_831DF638(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// lwz r24,28(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(r24.u32, 1, xer);
	// ble cr6,0x83201cac
	if (!cr6.gt) goto loc_83201CAC;
	// rlwinm r29,r24,2,0,29
	r29.u64 = rotl64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_83201B4C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// li r26,1
	r26.s64 = 1;
	// lwzx r25,r29,r11
	r25.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
loc_83201B60:
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(60) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x83201b78
	if (!cr6.gt) goto loc_83201B78;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x83201b84
	goto loc_83201B84;
loc_83201B78:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r27
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_83201B84:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83201bc0
	if (cr0.eq) goto loc_83201BC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(72) );
	// bl 0x83201930
	sub_83201930(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83201bb4
	if (!cr6.lt) goto loc_83201BB4;
	// stwx r11,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r11.u32);
loc_83201BB4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x83201b60
	goto loc_83201B60;
loc_83201BC0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r30,1456(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x83201bec
	if (cr0.eq) goto loc_83201BEC;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
	// b 0x83201bf0
	goto loc_83201BF0;
loc_83201BEC:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_83201BF0:
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stwx r11,r29,r10
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x83201c94
	goto loc_83201C94;
loc_83201C48:
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83201930
	sub_83201930(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r28,2,0,29
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x83201c88
	if (!cr6.eq) goto loc_83201C88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// b 0x83201c90
	goto loc_83201C90;
loc_83201C88:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
loc_83201C90:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
loc_83201C94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83201c48
	if (!cr6.eq) goto loc_83201C48;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(r24.u32, 1, xer);
	// bgt cr6,0x83201b4c
	if (cr6.gt) goto loc_83201B4C;
loc_83201CAC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x83201d08
	if (cr6.lt) goto loc_83201D08;
	// li r11,8
	r11.s64 = 8;
loc_83201CC8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83201cf4
	if (cr6.eq) goto loc_83201CF4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83201CF4:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x83201cc8
	if (!cr6.gt) goto loc_83201CC8;
loc_83201D08:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83201d6c
	if (cr6.lt) goto loc_83201D6C;
loc_83201D18:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// bne cr6,0x83201d28
	if (!cr6.eq) goto loc_83201D28;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x83201d40
	goto loc_83201D40;
loc_83201D28:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
loc_83201D40:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r3,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r3.u32);
	// beq cr6,0x83201d5c
	if (cr6.eq) goto loc_83201D5C;
	// bl 0x83202408
	sub_83202408(ctx, base);
loc_83201D5C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x83201d18
	if (!cr6.gt) goto loc_83201D18;
loc_83201D6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832016c8
	sub_832016C8(ctx, base);
	// lwz r11,76(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83201da4
	if (!cr6.eq) goto loc_83201DA4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// b 0x83201d98
	goto loc_83201D98;
loc_83201D8C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_83201D98:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83201d8c
	if (!cr6.eq) goto loc_83201D8C;
loc_83201DA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_83201AD8) {
	__imp__sub_83201AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201DB0) {
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
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
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
	// beq 0x83201dfc
	if (cr0.eq) goto loc_83201DFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x832014c0
	sub_832014C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x83201e00
	goto loc_83201E00;
loc_83201DFC:
	// li r31,0
	r31.s64 = 0;
loc_83201E00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83201ad8
	sub_83201AD8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83201e24
	if (cr6.eq) goto loc_83201E24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832015b0
	sub_832015B0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_83201E24:
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

PPC_WEAK_FUNC(sub_83201DB0) {
	__imp__sub_83201DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201E40) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// bl 0x831fc6d8
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
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

PPC_WEAK_FUNC(sub_83201E40) {
	__imp__sub_83201E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201E88) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// bl 0x831fc6f8
	sub_831FC6F8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
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

PPC_WEAK_FUNC(sub_83201E88) {
	__imp__sub_83201E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201ED0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(948) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83201f18
	if (!cr6.eq) goto loc_83201F18;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-16376
	ctx.r6.s64 = r11.s64 + -16376;
	// addi r5,r10,-16408
	ctx.r5.s64 = ctx.r10.s64 + -16408;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,181
	ctx.r7.s64 = 181;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83201F18:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc6f8
	sub_831FC6F8(ctx, base);
	// stw r29,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83201ED0) {
	__imp__sub_83201ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201F30) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(948) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83201f78
	if (!cr6.eq) goto loc_83201F78;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-16376
	ctx.r6.s64 = r11.s64 + -16376;
	// addi r5,r10,-16296
	ctx.r5.s64 = ctx.r10.s64 + -16296;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,193
	ctx.r7.s64 = 193;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83201F78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc6d8
	sub_831FC6D8(ctx, base);
	// stw r29,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83201F30) {
	__imp__sub_83201F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201F90) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// bl 0x831fc6f8
	sub_831FC6F8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
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

PPC_WEAK_FUNC(sub_83201F90) {
	__imp__sub_83201F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201FD8) {
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
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// b 0x83202030
	goto loc_83202030;
loc_83201FF8:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320202c
	if (cr0.eq) goto loc_8320202C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8320202c
	if (!cr6.eq) goto loc_8320202C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83202058
	if (cr0.eq) goto loc_83202058;
loc_8320202C:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_83202030:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83201ff8
	if (!cr6.eq) goto loc_83201FF8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83202040:
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
loc_83202058:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83202040
	goto loc_83202040;
}

PPC_WEAK_FUNC(sub_83201FD8) {
	__imp__sub_83201FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202060) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-16268
	r11.s64 = r11.s64 + -16268;
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x831fc738
	sub_831FC738(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1388) );
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1388) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1388(r11)
	PPC_STORE_U32(r11.u32 + 1388, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// stw r8,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r8.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x83202124
	if (cr0.eq) goto loc_83202124;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x83202128
	goto loc_83202128;
loc_83202124:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_83202128:
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x83202160
	if (cr0.eq) goto loc_83202160;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x83202164
	goto loc_83202164;
loc_83202160:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_83202164:
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x8320219c
	if (cr0.eq) goto loc_8320219C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x832021a0
	goto loc_832021A0;
loc_8320219C:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_832021A0:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x832021d8
	if (cr0.eq) goto loc_832021D8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x832021dc
	goto loc_832021DC;
loc_832021D8:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_832021DC:
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r27,1452(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x83202214
	if (cr0.eq) goto loc_83202214;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// b 0x83202218
	goto loc_83202218;
loc_83202214:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_83202218:
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x8320224c
	if (cr0.eq) goto loc_8320224C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200130
	sub_83200130(ctx, base);
	// b 0x83202250
	goto loc_83202250;
loc_8320224C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83202250:
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83202284
	if (cr0.eq) goto loc_83202284;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200188
	sub_83200188(ctx, base);
	// b 0x83202288
	goto loc_83202288;
loc_83202284:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83202288:
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// bl 0x831fc7c0
	sub_831FC7C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,948(r11)
	PPC_STORE_U32(r11.u32 + 948, r31.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// stw r31,948(r11)
	PPC_STORE_U32(r11.u32 + 948, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83202060) {
	__imp__sub_83202060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832022C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-16220
	ctx.r3.s64 = r11.s64 + -16220;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832022C0) {
	__imp__sub_832022C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832022D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// li r3,1
	ctx.r3.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
loc_832022E8:
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// ble cr6,0x832022f8
	if (!cr6.gt) goto loc_832022F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83202304
	goto loc_83202304;
loc_832022F8:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
loc_83202304:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83202324
	if (cr0.eq) goto loc_83202324;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x832022e8
	goto loc_832022E8;
loc_83202324:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832022D0) {
	__imp__sub_832022D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_83202344:
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x83202354
	if (!cr6.gt) goto loc_83202354;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83202360
	goto loc_83202360;
loc_83202354:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r3,r6,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_83202360:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83202380
	if (cr0.eq) goto loc_83202380;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(128) );
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x83202344
	goto loc_83202344;
loc_83202380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202330) {
	__imp__sub_83202330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202388) {
	__imp__sub_83202388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023A0) {
	__imp__sub_832023A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023B8) {
	__imp__sub_832023B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023C8) {
	__imp__sub_832023C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023D8) {
	__imp__sub_832023D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(88) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023F0) {
	__imp__sub_832023F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202408) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(88) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

PPC_WEAK_FUNC(sub_83202408) {
	__imp__sub_83202408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202440) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(92) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

PPC_WEAK_FUNC(sub_83202440) {
	__imp__sub_83202440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202478) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,144(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(144) );
	// b 0x83202540
	goto loc_83202540;
loc_83202490:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83202548
	if (!cr6.gt) goto loc_83202548;
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
	// bne 0x83202548
	if (!cr0.eq) goto loc_83202548;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83202548
	if (!cr0.eq) goto loc_83202548;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832024fc
	if (cr0.eq) goto loc_832024FC;
	// lwz r31,156(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// b 0x83202540
	goto loc_83202540;
loc_832024FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83202520
	if (cr0.eq) goto loc_83202520;
	// lwz r31,152(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// b 0x83202540
	goto loc_83202540;
loc_83202520:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83202538
	if (!cr6.gt) goto loc_83202538;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x8320253c
	goto loc_8320253C;
loc_83202538:
	// li r11,0
	r11.s64 = 0;
loc_8320253C:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83202540:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83202490
	if (!cr6.eq) goto loc_83202490;
loc_83202548:
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

PPC_WEAK_FUNC(sub_83202478) {
	__imp__sub_83202478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202560) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,148(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83202638
	if (cr6.eq) goto loc_83202638;
loc_8320257C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83202634
	if (!cr6.gt) goto loc_83202634;
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
	// bne 0x83202634
	if (!cr0.eq) goto loc_83202634;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83202634
	if (!cr0.eq) goto loc_83202634;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832025e8
	if (cr0.eq) goto loc_832025E8;
	// lwz r31,156(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// b 0x8320262c
	goto loc_8320262C;
loc_832025E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320260c
	if (cr0.eq) goto loc_8320260C;
	// lwz r31,152(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// b 0x8320262c
	goto loc_8320262C;
loc_8320260C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83202624
	if (!cr6.gt) goto loc_83202624;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x83202628
	goto loc_83202628;
loc_83202624:
	// li r11,0
	r11.s64 = 0;
loc_83202628:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8320262C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8320257c
	if (!cr6.eq) goto loc_8320257C;
loc_83202634:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83202638:
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

PPC_WEAK_FUNC(sub_83202560) {
	__imp__sub_83202560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202650) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r26,r10,-18548
	r26.s64 = ctx.r10.s64 + -18548;
	// lwz r21,164(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + int32_t(164) );
	// addi r25,r9,5664
	r25.s64 = ctx.r9.s64 + 5664;
	// addi r24,r11,-16376
	r24.s64 = r11.s64 + -16376;
loc_8320267C:
	// lwz r28,136(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + int32_t(136) );
	// li r23,0
	r23.s64 = 0;
	// lwz r27,8(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// b 0x83202764
	goto loc_83202764;
loc_8320268C:
	// cmplw cr6,r28,r21
	cr6.compare<uint32_t>(r28.u32, r21.u32, xer);
	// beq cr6,0x8320275c
	if (cr6.eq) goto loc_8320275C;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(60) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320275c
	if (!cr6.eq) goto loc_8320275C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,559
	ctx.r7.s64 = 559;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_832026C8:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(56) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x832026e0
	if (!cr6.gt) goto loc_832026E0;
	// li r11,0
	r11.s64 = 0;
	// b 0x832026ec
	goto loc_832026EC;
loc_832026E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// li r11,1
	r11.s64 = 1;
	// lwzx r30,r10,r31
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
loc_832026EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83202754
	if (cr0.eq) goto loc_83202754;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x831fc948
	sub_831FC948(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320273c
	if (!cr6.eq) goto loc_8320273C;
	// li r23,1
	r23.s64 = 1;
loc_8320273C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x832026c8
	goto loc_832026C8;
loc_83202754:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fc6a8
	sub_831FC6A8(ctx, base);
loc_8320275C:
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
loc_83202764:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8320268c
	if (!cr6.eq) goto loc_8320268C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320267c
	if (!cr0.eq) goto loc_8320267C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_83202650) {
	__imp__sub_83202650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x832027cc
	if (!cr6.gt) goto loc_832027CC;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// li r11,0
	r11.s64 = 0;
loc_83202798:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x832027ac
	if (!cr6.lt) goto loc_832027AC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// b 0x832027b0
	goto loc_832027B0;
loc_832027AC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832027B0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x832027d4
	if (cr6.eq) goto loc_832027D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83202798
	if (cr6.lt) goto loc_83202798;
loc_832027CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832027D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202780) {
	__imp__sub_83202780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832027E0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83202810
	if (!cr6.lt) goto loc_83202810;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83202814
	goto loc_83202814;
loc_83202810:
	// li r11,0
	r11.s64 = 0;
loc_83202814:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x831fc910
	sub_831FC910(ctx, base);
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

PPC_WEAK_FUNC(sub_832027E0) {
	__imp__sub_832027E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202840) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8320286c
	if (cr6.eq) goto loc_8320286C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83202890
	if (!cr6.eq) goto loc_83202890;
loc_8320286C:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-16376
	ctx.r6.s64 = r11.s64 + -16376;
	// addi r5,r10,-16212
	ctx.r5.s64 = ctx.r10.s64 + -16212;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83202890:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(60) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

PPC_WEAK_FUNC(sub_83202840) {
	__imp__sub_83202840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832028C8) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,-16268
	r11.s64 = r11.s64 + -16268;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832028fc
	if (cr6.eq) goto loc_832028FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_832028FC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83202910
	if (cr6.eq) goto loc_83202910;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_83202910:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83202924
	if (cr6.eq) goto loc_83202924;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_83202924:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83202938
	if (cr6.eq) goto loc_83202938;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_83202938:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320294c
	if (cr6.eq) goto loc_8320294C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_8320294C:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x831fc7e0
	sub_831FC7E0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,25032
	r11.s64 = r11.s64 + 25032;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
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

PPC_WEAK_FUNC(sub_832028C8) {
	__imp__sub_832028C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202980) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
loc_832029B0:
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x832029c0
	if (!cr6.gt) goto loc_832029C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x832029cc
	goto loc_832029CC;
loc_832029C0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_832029CC:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83202a10
	if (cr0.eq) goto loc_83202A10;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x832029ec
	if (cr6.eq) goto loc_832029EC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x832029b0
	goto loc_832029B0;
loc_832029EC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x83202a08
	if (!cr6.lt) goto loc_83202A08;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83202a0c
	goto loc_83202A0C;
loc_83202A08:
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_83202A0C:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_83202A10:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
loc_83202A28:
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// ble cr6,0x83202a38
	if (!cr6.gt) goto loc_83202A38;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83202a44
	goto loc_83202A44;
loc_83202A38:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_83202A44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83202a68
	if (cr0.eq) goto loc_83202A68;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x83202a64
	if (cr6.eq) goto loc_83202A64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x83202a28
	goto loc_83202A28;
loc_83202A64:
	// bl 0x831fc910
	sub_831FC910(ctx, base);
loc_83202A68:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(60) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83202980) {
	__imp__sub_83202980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202A80) {
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
	// b 0x83202aa0
	goto loc_83202AA0;
loc_83202A98:
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// bl 0x831fd160
	sub_831FD160(ctx, base);
loc_83202AA0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83202a98
	if (!cr6.eq) goto loc_83202A98;
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

PPC_WEAK_FUNC(sub_83202A80) {
	__imp__sub_83202A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202AC8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,44(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(44) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83202780
	sub_83202780(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83202b0c
	if (!cr0.eq) goto loc_83202B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_83202B0C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fd188
	sub_831FD188(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83202AC8) {
	__imp__sub_83202AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202B28) {
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
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-16184
	r11.s64 = r11.s64 + -16184;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
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

PPC_WEAK_FUNC(sub_83202B28) {
	__imp__sub_83202B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-16136
	ctx.r3.s64 = r11.s64 + -16136;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202B70) {
	__imp__sub_83202B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202B80) {
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
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-16128
	r11.s64 = r11.s64 + -16128;
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

PPC_WEAK_FUNC(sub_83202B80) {
	__imp__sub_83202B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-16080
	ctx.r3.s64 = r11.s64 + -16080;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202BC0) {
	__imp__sub_83202BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202BD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-16072
	r11.s64 = r11.s64 + -16072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(r31.u32 + 140, ctx.r10.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// lwz r28,1452(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x83202c40
	if (cr0.eq) goto loc_83202C40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83202c44
	goto loc_83202C44;
loc_83202C40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_83202C44:
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83202BD0) {
	__imp__sub_83202BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-16020
	ctx.r3.s64 = r11.s64 + -16020;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202C60) {
	__imp__sub_83202C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202C70) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-16008
	r11.s64 = r11.s64 + -16008;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_83202C70) {
	__imp__sub_83202C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15960
	ctx.r3.s64 = r11.s64 + -15960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202CC0) {
	__imp__sub_83202CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202CD0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-15952
	r11.s64 = r11.s64 + -15952;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

PPC_WEAK_FUNC(sub_83202CD0) {
	__imp__sub_83202CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15904
	ctx.r3.s64 = r11.s64 + -15904;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D20) {
	__imp__sub_83202D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15844
	ctx.r3.s64 = r11.s64 + -15844;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D30) {
	__imp__sub_83202D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15784
	ctx.r3.s64 = r11.s64 + -15784;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D40) {
	__imp__sub_83202D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15716
	ctx.r3.s64 = r11.s64 + -15716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D50) {
	__imp__sub_83202D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15656
	ctx.r3.s64 = r11.s64 + -15656;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D60) {
	__imp__sub_83202D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D70) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x83202980
	sub_83202980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
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

PPC_WEAK_FUNC(sub_83202D70) {
	__imp__sub_83202D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202DB8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x832028c8
	sub_832028C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83202df4
	if (cr0.eq) goto loc_83202DF4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83202df4
	if (cr6.eq) goto loc_83202DF4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_83202DF4:
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

PPC_WEAK_FUNC(sub_83202DB8) {
	__imp__sub_83202DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202E10) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r27,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r11,r11,-15644
	r11.s64 = r11.s64 + -15644;
	// stb r28,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r28.u8);
	// li r4,144
	ctx.r4.s64 = 144;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r28,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r28.u8);
	// lwz r27,1452(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
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
	// beq 0x83202e94
	if (cr0.eq) goto loc_83202E94;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-15892
	ctx.r10.s64 = ctx.r10.s64 + -15892;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x83202e98
	goto loc_83202E98;
loc_83202E94:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83202E98:
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
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
	// beq 0x83202edc
	if (cr0.eq) goto loc_83202EDC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-15832
	ctx.r10.s64 = ctx.r10.s64 + -15832;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x83202ee0
	goto loc_83202EE0;
loc_83202EDC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83202EE0:
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(152) );
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r30,144(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc6d8
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83202E10) {
	__imp__sub_83202E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15596
	ctx.r3.s64 = r11.s64 + -15596;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202F30) {
	__imp__sub_83202F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202F40) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r27,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r11,r11,-16072
	r11.s64 = r11.s64 + -16072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(r31.u32 + 140, ctx.r10.u8);
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// lwz r30,1452(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
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
	// beq 0x83202fbc
	if (cr0.eq) goto loc_83202FBC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83202fc0
	goto loc_83202FC0;
loc_83202FBC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_83202FC0:
	// stw r4,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc6d8
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
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
	// beq 0x83203020
	if (cr0.eq) goto loc_83203020;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-15764
	ctx.r10.s64 = ctx.r10.s64 + -15764;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x83203024
	goto loc_83203024;
loc_83203020:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83203024:
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83202F40) {
	__imp__sub_83202F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203038) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x83202bd0
	sub_83202BD0(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// addi r11,r11,-15584
	r11.s64 = r11.s64 + -15584;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x831fc6d8
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(r30.u32 + 948, r31.u32);
	// stw r28,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r28.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r28,1452(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x832030c0
	if (cr0.eq) goto loc_832030C0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202060
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-15704
	ctx.r10.s64 = ctx.r10.s64 + -15704;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x832030c4
	goto loc_832030C4;
loc_832030C0:
	// li r11,0
	r11.s64 = 0;
loc_832030C4:
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_83203038) {
	__imp__sub_83203038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832030D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r3,r11,-15532
	ctx.r3.s64 = r11.s64 + -15532;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832030D8) {
	__imp__sub_832030D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832030E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r28,r11,-18548
	r28.s64 = r11.s64 + -18548;
	// addi r27,r10,-5824
	r27.s64 = ctx.r10.s64 + -5824;
	// blt cr6,0x8320311c
	if (cr6.lt) goto loc_8320311C;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x83203138
	if (cr6.lt) goto loc_83203138;
loc_8320311C:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-5876
	ctx.r5.s64 = r11.s64 + -5876;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203138:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r30,r31,36
	r30.s64 = r31.s64 * 36;
	// addi r31,r11,4992
	r31.s64 = r11.s64 + 4992;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83203170
	if (!cr6.eq) goto loc_83203170;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-5888
	ctx.r5.s64 = r11.s64 + -5888;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,71
	ctx.r7.s64 = 71;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203170:
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_832030E8) {
	__imp__sub_832030E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203188) {
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
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// addi r31,r11,-48
	r31.s64 = r11.s64 + -48;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// ble cr6,0x832031bc
	if (!cr6.gt) goto loc_832031BC;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// bne cr6,0x832031b8
	if (!cr6.eq) goto loc_832031B8;
	// li r31,2
	r31.s64 = 2;
	// b 0x832031f0
	goto loc_832031F0;
loc_832031B8:
	// addi r31,r11,-116
	r31.s64 = r11.s64 + -116;
loc_832031BC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x832031cc
	if (cr6.lt) goto loc_832031CC;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// ble cr6,0x832031f0
	if (!cr6.gt) goto loc_832031F0;
loc_832031CC:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5824
	ctx.r6.s64 = r11.s64 + -5824;
	// addi r5,r10,-5740
	ctx.r5.s64 = ctx.r10.s64 + -5740;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832031F0:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15456
	r11.s64 = r11.s64 + -15456;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_83203188) {
	__imp__sub_83203188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203218) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83203260
	if (!cr6.eq) goto loc_83203260;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = r11.s64 + 25064;
	// addi r5,r10,25144
	ctx.r5.s64 = ctx.r10.s64 + 25144;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203260:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
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

PPC_WEAK_FUNC(sub_83203218) {
	__imp__sub_83203218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203290) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x832032b4
	if (cr6.lt) goto loc_832032B4;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x832032d8
	if (cr6.lt) goto loc_832032D8;
loc_832032B4:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5226
	ctx.r7.s64 = 5226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832032D8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
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

PPC_WEAK_FUNC(sub_83203290) {
	__imp__sub_83203290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203310) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x83203334
	if (cr6.lt) goto loc_83203334;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x83203358
	if (cr6.lt) goto loc_83203358;
loc_83203334:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5239
	ctx.r7.s64 = 5239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203358:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_83203310) {
	__imp__sub_83203310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203380) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x832033a4
	if (cr6.lt) goto loc_832033A4;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x832033c8
	if (cr6.lt) goto loc_832033C8;
loc_832033A4:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5319
	ctx.r7.s64 = 5319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832033C8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_83203380) {
	__imp__sub_83203380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832033F0) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x83203414
	if (cr6.lt) goto loc_83203414;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x83203438
	if (cr6.lt) goto loc_83203438;
loc_83203414:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5351
	ctx.r7.s64 = 5351;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203438:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_832033F0) {
	__imp__sub_832033F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203460) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x83203484
	if (cr6.lt) goto loc_83203484;
	// cmpwi cr6,r31,136
	cr6.compare<int32_t>(r31.s32, 136, xer);
	// blt cr6,0x832034a8
	if (cr6.lt) goto loc_832034A8;
loc_83203484:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5363
	ctx.r7.s64 = 5363;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832034A8:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = r31.s64 * 36;
	// addi r11,r11,4992
	r11.s64 = r11.s64 + 4992;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

PPC_WEAK_FUNC(sub_83203460) {
	__imp__sub_83203460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832034D0) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83203538
	if (cr6.lt) goto loc_83203538;
	// beq cr6,0x83203530
	if (cr6.eq) goto loc_83203530;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x83203528
	if (cr6.lt) goto loc_83203528;
	// beq cr6,0x83203520
	if (cr6.eq) goto loc_83203520;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5399
	ctx.r7.s64 = 5399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8320353c
	goto loc_8320353C;
loc_83203520:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8320353c
	goto loc_8320353C;
loc_83203528:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8320353c
	goto loc_8320353C;
loc_83203530:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8320353c
	goto loc_8320353C;
loc_83203538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320353C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832034D0) {
	__imp__sub_832034D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203550) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x832035d4
	if (cr6.lt) goto loc_832035D4;
	// beq cr6,0x832035cc
	if (cr6.eq) goto loc_832035CC;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x832035c4
	if (cr6.lt) goto loc_832035C4;
	// beq cr6,0x832035bc
	if (cr6.eq) goto loc_832035BC;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x832035b4
	if (cr6.lt) goto loc_832035B4;
	// beq cr6,0x832035ac
	if (cr6.eq) goto loc_832035AC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5422
	ctx.r7.s64 = 5422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035AC:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035B4:
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035BC:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035C4:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035CC:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035D4:
	// li r3,5
	ctx.r3.s64 = 5;
loc_832035D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83203550) {
	__imp__sub_83203550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832035E8) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83203630
	if (cr6.lt) goto loc_83203630;
	// beq cr6,0x8320364c
	if (cr6.eq) goto loc_8320364C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x83203644
	if (cr6.lt) goto loc_83203644;
	// beq cr6,0x83203630
	if (cr6.eq) goto loc_83203630;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = r11.s64 + -5664;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5448
	ctx.r7.s64 = 5448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203630:
	// li r3,3
	ctx.r3.s64 = 3;
loc_83203634:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_83203644:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83203634
	goto loc_83203634;
loc_8320364C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83203634
	goto loc_83203634;
}

PPC_WEAK_FUNC(sub_832035E8) {
	__imp__sub_832035E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203658) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
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

PPC_WEAK_FUNC(sub_83203658) {
	__imp__sub_83203658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203698) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// b 0x832036c8
	goto loc_832036C8;
loc_832036B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x83202840
	sub_83202840(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_832036C8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832036b8
	if (!cr6.eq) goto loc_832036B8;
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

PPC_WEAK_FUNC(sub_83203698) {
	__imp__sub_83203698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832036F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
loc_83203708:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x83203708
	if (cr6.lt) goto loc_83203708;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83203760
	if (cr0.eq) goto loc_83203760;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r12,-17768
	r12.s64 = -17768;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// ori r11,r11,12816
	r11.u64 = r11.u64 | 12816;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_83203760:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832036F0) {
	__imp__sub_832036F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203768) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r27,1
	r27.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x832037bc
	if (cr6.eq) goto loc_832037BC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x832037e0
	if (!cr6.eq) goto loc_832037E0;
loc_832037BC:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5824
	ctx.r6.s64 = r11.s64 + -5824;
	// addi r5,r10,-5580
	ctx.r5.s64 = ctx.r10.s64 + -5580;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,4319
	ctx.r7.s64 = 4319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832037E0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x832038b8
	if (cr6.eq) goto loc_832038B8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320381c
	if (cr0.eq) goto loc_8320381C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r9,r11,21,11,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x83203820
	goto loc_83203820;
loc_8320381C:
	// li r11,0
	r11.s64 = 0;
loc_83203820:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83203840
	if (cr6.eq) goto loc_83203840;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// addi r10,r11,152
	ctx.r10.s64 = r11.s64 + 152;
	// lbz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	PPC_STORE_U8(r11.u32 + 152, ctx.r10.u8);
loc_83203840:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83203858
	if (cr0.eq) goto loc_83203858;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// rlwinm r11,r11,12,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// b 0x8320385c
	goto loc_8320385C;
loc_83203858:
	// li r11,0
	r11.s64 = 0;
loc_8320385C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8320386c
	if (cr6.eq) goto loc_8320386C;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// stb r27,158(r11)
	PPC_STORE_U8(r11.u32 + 158, r27.u8);
loc_8320386C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
loc_832038B8:
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// lwz r9,88(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(88) );
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,86(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,87(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r11,-15428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15428) );
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83203768) {
	__imp__sub_83203768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203980) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// bne 0x83203a60
	if (!cr0.eq) goto loc_83203A60;
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x832039d4
	if (cr0.eq) goto loc_832039D4;
	// lwz r6,2124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2124) );
	// lwz r7,2128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2128) );
	// neg r11,r6
	r11.s64 = -ctx.r6.s64;
	// lwz r5,2120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2120) );
	// stw r11,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r11.u32);
	// bl 0x831fb4b0
	sub_831FB4B0(ctx, base);
	// b 0x832039e8
	goto loc_832039E8;
loc_832039D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831fb4b0
	sub_831FB4B0(ctx, base);
	// stw r30,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r30.u32);
loc_832039E8:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r29,r31,1096
	r29.s64 = r31.s64 + 1096;
	// stw r11,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r11.u32);
loc_832039F4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83203a4c
	if (cr6.eq) goto loc_83203A4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831f08b8
	sub_831F08B8(ctx, base);
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83203a4c
	if (cr0.eq) goto loc_83203A4C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r10,2120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2120) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83203a4c
	if (!cr6.eq) goto loc_83203A4C;
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2128) );
	// lwz r10,2124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2124) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x83203a4c
	if (!cr6.lt) goto loc_83203A4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831f0850
	sub_831F0850(ctx, base);
loc_83203A4C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// blt cr6,0x832039f4
	if (cr6.lt) goto loc_832039F4;
	// b 0x83203ca4
	goto loc_83203CA4;
loc_83203A60:
	// lbz r11,2100(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2100);
	// li r23,1
	r23.s64 = 1;
	// stw r30,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r30.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// beq 0x83203b60
	if (cr0.eq) goto loc_83203B60;
	// lwz r11,2104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2104) );
	// lwz r9,2108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2108) );
	// subfic r8,r11,1
	xer.ca = r11.u32 <= 1;
	ctx.r8.s64 = 1 - r11.s64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r8,2112(r31)
	PPC_STORE_U32(r31.u32 + 2112, ctx.r8.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x83203b60
	if (!cr6.lt) goto loc_83203B60;
loc_83203AA0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// bl 0x831ee258
	sub_831EE258(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x83203b50
	if (cr0.eq) goto loc_83203B50;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_83203AC8:
	// lwz r11,40(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(40) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x83203ae0
	if (!cr6.gt) goto loc_83203AE0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x83203aec
	goto loc_83203AEC;
loc_83203AE0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mr r11,r23
	r11.u64 = r23.u64;
	// lwzx r28,r10,r27
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_83203AEC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83203b20
	if (cr0.eq) goto loc_83203B20;
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(228) );
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83203b14
	if (cr0.eq) goto loc_83203B14;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,228(r28)
	PPC_STORE_U32(r28.u32 + 228, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
loc_83203B14:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x83203ac8
	goto loc_83203AC8;
loc_83203B20:
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2112) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r23.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r11.u32);
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2112) );
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x831f08b8
	sub_831F08B8(ctx, base);
	// lwz r11,2112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2112) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x831f0850
	sub_831F0850(ctx, base);
loc_83203B50:
	// lwz r11,2108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2108) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83203aa0
	if (cr6.lt) goto loc_83203AA0;
loc_83203B60:
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83203c80
	if (cr0.eq) goto loc_83203C80;
	// lwz r11,2124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2124) );
	// lwz r10,2128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2128) );
	// subf r9,r11,r24
	ctx.r9.s64 = r24.s64 - r11.s64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r9,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, ctx.r9.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83203c80
	if (!cr6.lt) goto loc_83203C80;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r26,-32247
	r26.s64 = -2113339392;
	// addi r25,r8,-5536
	r25.s64 = ctx.r8.s64 + -5536;
	// addi r28,r9,-18548
	r28.s64 = ctx.r9.s64 + -18548;
	// addi r24,r10,-5544
	r24.s64 = ctx.r10.s64 + -5544;
	// addi r27,r11,-5824
	r27.s64 = r11.s64 + -5824;
loc_83203BAC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,2120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2120) );
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831ee258
	sub_831EE258(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83203c70
	if (cr0.eq) goto loc_83203C70;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(228) );
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// lwz r4,-15416(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-15416) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83203c0c
	if (!cr0.eq) goto loc_83203C0C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4505
	ctx.r7.s64 = 4505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203C0C:
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83203c40
	if (!cr0.eq) goto loc_83203C40;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4506
	ctx.r7.s64 = 4506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203C40:
	// lwz r11,2132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2132) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r23.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,2132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2132) );
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x831f08b8
	sub_831F08B8(ctx, base);
	// lwz r11,2132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2132) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x831f0850
	sub_831F0850(ctx, base);
loc_83203C70:
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2128) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83203bac
	if (cr6.lt) goto loc_83203BAC;
loc_83203C80:
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fb4b0
	sub_831FB4B0(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r11,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r11.u32);
loc_83203CA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831faa18
	sub_831FAA18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_83203980) {
	__imp__sub_83203980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203CB8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,1400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1400) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83203d18
	if (!cr6.eq) goto loc_83203D18;
	// lwz r27,1456(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1456) );
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x83203d10
	if (cr0.eq) goto loc_83203D10;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x831fc738
	sub_831FC738(ctx, base);
	// b 0x83203d14
	goto loc_83203D14;
loc_83203D10:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83203D14:
	// stw r31,1400(r28)
	PPC_STORE_U32(r28.u32 + 1400, r31.u32);
loc_83203D18:
	// lwz r3,1400(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1400) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83203d74
	if (cr6.eq) goto loc_83203D74;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
loc_83203D28:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x83203d5c
	if (!cr6.eq) goto loc_83203D5C;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x83203d5c
	if (!cr6.eq) goto loc_83203D5C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x83203d60
	if (cr6.eq) goto loc_83203D60;
loc_83203D5C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83203D60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83203dc4
	if (!cr0.eq) goto loc_83203DC4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83203d28
	if (!cr6.eq) goto loc_83203D28;
loc_83203D74:
	// lwz r27,1456(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1456) );
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x83203dac
	if (cr0.eq) goto loc_83203DAC;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x831fc738
	sub_831FC738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83203db0
	goto loc_83203DB0;
loc_83203DAC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83203DB0:
	// lwz r11,1400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1400) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,1400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(1400) );
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
loc_83203DC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_83203CB8) {
	__imp__sub_83203CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7504
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// stb r8,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, ctx.r8.u8);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r19,0
	r19.s64 = 0;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// extsh r26,r7
	r26.s64 = ctx.r7.s16;
	// addi r9,r9,-15520
	ctx.r9.s64 = ctx.r9.s64 + -15520;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// clrlwi. r23,r8,24
	r23.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// mr r20,r19
	r20.u64 = r19.u64;
	// rlwinm r24,r7,16,26,31
	r24.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x3F;
	// mr r17,r19
	r17.u64 = r19.u64;
	// mr r15,r26
	r15.u64 = r26.u64;
	// addi r21,r11,-18548
	r21.s64 = r11.s64 + -18548;
	// addi r14,r10,-5824
	r14.s64 = ctx.r10.s64 + -5824;
	// beq 0x8320439c
	if (cr0.eq) goto loc_8320439C;
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	r11.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// rlwinm. r10,r11,16,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r25,r11,15,29,31
	r25.u64 = rotl64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// clrlwi r27,r11,16
	r27.u64 = r11.u32 & 0xFFFF;
	// beq 0x832041a8
	if (cr0.eq) goto loc_832041A8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83203e94
	if (!cr6.eq) goto loc_83203E94;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4696
	ctx.r5.s64 = r11.s64 + -4696;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203E94:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x83203eb8
	if (cr6.eq) goto loc_83203EB8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4724
	ctx.r5.s64 = r11.s64 + -4724;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203EB8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83203edc
	if (cr6.eq) goto loc_83203EDC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4740
	ctx.r5.s64 = r11.s64 + -4740;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83203EDC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83203efc
	if (!cr6.lt) goto loc_83203EFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83203f00
	goto loc_83203F00;
loc_83203EFC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83203F00:
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// lwz r27,136(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + int32_t(136) );
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x83203fd8
	if (!cr6.eq) goto loc_83203FD8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,29(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83203fd0
	if (!cr0.eq) goto loc_83203FD0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
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
	// beq 0x83203f7c
	if (cr0.eq) goto loc_83203F7C;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200538
	sub_83200538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x83203f80
	goto loc_83203F80;
loc_83203F7C:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_83203F80:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,29(r29)
	PPC_STORE_U8(r29.u32 + 29, r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fd370
	sub_831FD370(ctx, base);
loc_83203FD0:
	// li r24,30
	r24.s64 = 30;
	// b 0x83204394
	goto loc_83204394;
loc_83203FD8:
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// beq cr6,0x83204014
	if (cr6.eq) goto loc_83204014;
	// cmpwi cr6,r24,15
	cr6.compare<int32_t>(r24.s32, 15, xer);
	// beq cr6,0x83204014
	if (cr6.eq) goto loc_83204014;
	// cmpwi cr6,r24,17
	cr6.compare<int32_t>(r24.s32, 17, xer);
	// beq cr6,0x83204014
	if (cr6.eq) goto loc_83204014;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(r24.s32, 12, xer);
	// beq cr6,0x83204014
	if (cr6.eq) goto loc_83204014;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4888
	ctx.r5.s64 = r11.s64 + -4888;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,418
	ctx.r7.s64 = 418;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83204014:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204054
	if (cr0.eq) goto loc_83204054;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// beq cr6,0x83204048
	if (cr6.eq) goto loc_83204048;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4924
	ctx.r5.s64 = r11.s64 + -4924;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83204048:
	// li r11,1
	r11.s64 = 1;
	// stb r11,2100(r31)
	PPC_STORE_U8(r31.u32 + 2100, r11.u8);
	// b 0x832040ec
	goto loc_832040EC;
loc_83204054:
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320409c
	if (cr0.eq) goto loc_8320409C;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2120) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x832040ec
	if (cr6.eq) goto loc_832040EC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4976
	ctx.r5.s64 = r11.s64 + -4976;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,426
	ctx.r7.s64 = 426;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x832040ec
	goto loc_832040EC;
loc_8320409C:
	// cmpwi cr6,r24,15
	cr6.compare<int32_t>(r24.s32, 15, xer);
	// beq cr6,0x832040d0
	if (cr6.eq) goto loc_832040D0;
	// cmpwi cr6,r24,17
	cr6.compare<int32_t>(r24.s32, 17, xer);
	// beq cr6,0x832040d0
	if (cr6.eq) goto loc_832040D0;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(r24.s32, 12, xer);
	// beq cr6,0x832040d0
	if (cr6.eq) goto loc_832040D0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-5088
	ctx.r5.s64 = r11.s64 + -5088;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,430
	ctx.r7.s64 = 430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832040D0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stb r9,2116(r31)
	PPC_STORE_U8(r31.u32 + 2116, ctx.r9.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, r11.u32);
loc_832040EC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// lwz r4,252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(252) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,29(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8320419c
	if (!cr0.eq) goto loc_8320419C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
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
	// beq 0x83204148
	if (cr0.eq) goto loc_83204148;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200538
	sub_83200538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320414c
	goto loc_8320414C;
loc_83204148:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8320414C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fd320
	sub_831FD320(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,29(r29)
	PPC_STORE_U8(r29.u32 + 29, r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fd370
	sub_831FD370(ctx, base);
loc_8320419C:
	// mr r17,r26
	r17.u64 = r26.u64;
	// li r24,31
	r24.s64 = 31;
	// b 0x83204398
	goto loc_83204398;
loc_832041A8:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// beq cr6,0x832041cc
	if (cr6.eq) goto loc_832041CC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-5128
	ctx.r5.s64 = r11.s64 + -5128;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,454
	ctx.r7.s64 = 454;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832041CC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x832041dc
	if (cr6.lt) goto loc_832041DC;
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(r25.s32, 6, xer);
	// blt cr6,0x832041f8
	if (cr6.lt) goto loc_832041F8;
loc_832041DC:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-5188
	ctx.r5.s64 = r11.s64 + -5188;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,455
	ctx.r7.s64 = 455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832041F8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8320421c
	if (cr6.eq) goto loc_8320421C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-4740
	ctx.r5.s64 = r11.s64 + -4740;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,462
	ctx.r7.s64 = 462;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320421C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
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
	// beq 0x83204254
	if (cr0.eq) goto loc_83204254;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fffd0
	sub_831FFFD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x83204258
	goto loc_83204258;
loc_83204254:
	// mr r28,r19
	r28.u64 = r19.u64;
loc_83204258:
	// li r26,31
	r26.s64 = 31;
	// stw r27,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r27.u32);
	// li r29,34
	r29.s64 = 34;
	// li r24,1
	r24.s64 = 1;
	// stw r26,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r26.u32);
	// stw r29,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r29.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r24,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r24.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831ffa38
	sub_831FFA38(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
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
	// beq 0x832042b8
	if (cr0.eq) goto loc_832042B8;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200408
	sub_83200408(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x832042bc
	goto loc_832042BC;
loc_832042B8:
	// mr r30,r19
	r30.u64 = r19.u64;
loc_832042BC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(104) );
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(84) );
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r24,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r24.u32);
	// stw r26,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r26.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x83204330
	if (cr0.eq) goto loc_83204330;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200408
	sub_83200408(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83204334
	goto loc_83204334;
loc_83204330:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_83204334:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,9416
	ctx.r10.s64 = ctx.r10.s64 + 9416;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwzx r24,r9,r10
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r27,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r27.u32);
	// stw r8,60(r29)
	PPC_STORE_U32(r29.u32 + 60, ctx.r8.u32);
	// stw r26,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r26.u32);
	// stw r11,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r11.u32);
	// stw r30,172(r28)
	PPC_STORE_U32(r28.u32 + 172, r30.u32);
	// stw r29,176(r28)
	PPC_STORE_U32(r28.u32 + 176, r29.u32);
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
loc_83204394:
	// mr r17,r15
	r17.u64 = r15.u64;
loc_83204398:
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8320439C:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204f98
	if (cr0.eq) goto loc_83204F98;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832043cc
	if (cr0.eq) goto loc_832043CC;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// andi. r11,r11,17476
	r11.u64 = r11.u64 & 17476;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x832043cc
	if (cr0.eq) goto loc_832043CC;
	// li r25,1
	r25.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x832043d4
	goto loc_832043D4;
loc_832043CC:
	// mr r11,r19
	r11.u64 = r19.u64;
	// li r25,1
	r25.s64 = 1;
loc_832043D4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f30,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f30.f64 = double(temp.f32);
	// beq 0x832045c4
	if (cr0.eq) goto loc_832045C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8320fee0
	sub_8320FEE0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8320446c
	if (cr6.eq) goto loc_8320446C;
	// stw r17,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// b 0x83204470
	goto loc_83204470;
loc_8320446C:
	// lbz r23,351(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
loc_83204470:
	// stw r19,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r19.u32);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r20,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, r20.u32);
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// lwz r11,92(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(92) );
	// lfs f31,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, r26.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// beq cr6,0x832044bc
	if (cr6.eq) goto loc_832044BC;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// bne cr6,0x832044c4
	if (!cr6.eq) goto loc_832044C4;
	// fmr f27,f30
	f27.f64 = f30.f64;
loc_832044BC:
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r19.u8);
	// b 0x832044cc
	goto loc_832044CC;
loc_832044C4:
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r25.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r30.u8);
loc_832044CC:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = f31.f64;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x832044e4
	if (cr6.eq) goto loc_832044E4;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// bne cr6,0x832044ec
	if (!cr6.eq) goto loc_832044EC;
	// fmr f28,f30
	f28.f64 = f30.f64;
loc_832044E4:
	// stb r19,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r19.u8);
	// b 0x832044f4
	goto loc_832044F4;
loc_832044EC:
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r25.u8);
	// stb r29,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, r29.u8);
loc_832044F4:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// beq cr6,0x8320450c
	if (cr6.eq) goto loc_8320450C;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// bne cr6,0x83204514
	if (!cr6.eq) goto loc_83204514;
	// fmr f29,f30
	f29.f64 = f30.f64;
loc_8320450C:
	// stb r19,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r19.u8);
	// b 0x8320451c
	goto loc_8320451C;
loc_83204514:
	// stb r25,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r25.u8);
	// stb r28,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, r28.u8);
loc_8320451C:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// beq cr6,0x83204530
	if (cr6.eq) goto loc_83204530;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// bne cr6,0x83204538
	if (!cr6.eq) goto loc_83204538;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_83204530:
	// stb r19,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r19.u8);
	// b 0x83204540
	goto loc_83204540;
loc_83204538:
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r25.u8);
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r27.u8);
loc_83204540:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r11.u32);
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832045b8
	if (cr0.eq) goto loc_832045B8;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// li r12,-17768
	r12.s64 = -17768;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// ori r11,r11,12816
	r11.u64 = r11.u64 | 12816;
	// stw r11,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r11.u32);
loc_832045B8:
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
	// b 0x832045cc
	goto loc_832045CC;
loc_832045C4:
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r23,351(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
loc_832045CC:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832045ec
	if (cr0.eq) goto loc_832045EC;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// li r12,-30584
	r12.s64 = -30584;
	// and. r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne 0x832045f0
	if (!cr0.eq) goto loc_832045F0;
loc_832045EC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_832045F0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204f98
	if (cr0.eq) goto loc_83204F98;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320460c
	if (cr6.eq) goto loc_8320460C;
	// lhz r11,4(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 4);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x83204610
	goto loc_83204610;
loc_8320460C:
	// li r11,-1
	r11.s64 = -1;
loc_83204610:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x832046d0
	if (!cr6.gt) goto loc_832046D0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x83204634
	if (!cr6.eq) goto loc_83204634;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_83204634:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stb r25,153(r30)
	PPC_STORE_U8(r30.u32 + 153, r25.u8);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x8320469c
	if (!cr6.eq) goto loc_8320469C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204690
	if (cr0.eq) goto loc_83204690;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204690:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x832036f0
	sub_832036F0(ctx, base);
loc_8320469C:
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_832046D0:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832046e8
	if (cr0.eq) goto loc_832046E8;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r11,r11,15,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
	// b 0x832046ec
	goto loc_832046EC;
loc_832046E8:
	// li r11,-1
	r11.s64 = -1;
loc_832046EC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x832047b0
	if (!cr6.gt) goto loc_832047B0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x83204710
	if (!cr6.eq) goto loc_83204710;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_83204710:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x83204774
	if (!cr6.eq) goto loc_83204774;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204768
	if (cr0.eq) goto loc_83204768;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204768:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x832036f0
	sub_832036F0(ctx, base);
loc_83204774:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// stb r25,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r25.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_832047B0:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832047c8
	if (cr0.eq) goto loc_832047C8;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r11,r11,14,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// b 0x832047cc
	goto loc_832047CC;
loc_832047C8:
	// li r11,-1
	r11.s64 = -1;
loc_832047CC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320488c
	if (!cr6.gt) goto loc_8320488C;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x832047f0
	if (!cr6.eq) goto loc_832047F0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_832047F0:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x83204854
	if (!cr6.eq) goto loc_83204854;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204848
	if (cr0.eq) goto loc_83204848;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204848:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x832036f0
	sub_832036F0(ctx, base);
loc_83204854:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_8320488C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832048a4
	if (cr0.eq) goto loc_832048A4;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r11,r11,13,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	// b 0x832048a8
	goto loc_832048A8;
loc_832048A4:
	// li r11,-1
	r11.s64 = -1;
loc_832048A8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x832049d4
	if (!cr6.gt) goto loc_832049D4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// mr r20,r29
	r20.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// rlwinm r28,r24,3,0,28
	r28.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r26.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// bne cr6,0x8320496c
	if (!cr6.eq) goto loc_8320496C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204938
	if (cr0.eq) goto loc_83204938;
	// stw r17,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r17.u32);
loc_83204938:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83204958
	if (cr6.eq) goto loc_83204958;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stb r23,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r23.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204958:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x832036f0
	sub_832036F0(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// stw r11,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r11.u32);
loc_8320496C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r20.u32);
	// stw r19,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r19.u32);
	// stw r20,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r20.u32);
	// stw r19,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r19.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// stb r25,155(r30)
	PPC_STORE_U8(r30.u32 + 155, r25.u8);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_832049D4:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832049ec
	if (cr0.eq) goto loc_832049EC;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r30,r11,11,29,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// b 0x832049f0
	goto loc_832049F0;
loc_832049EC:
	// li r30,-1
	r30.s64 = -1;
loc_832049F0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83204d88
	if (!cr6.gt) goto loc_83204D88;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// ble cr6,0x83204a20
	if (!cr6.gt) goto loc_83204A20;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-5344
	ctx.r5.s64 = r11.s64 + -5344;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
loc_83204A20:
	// bne cr6,0x83204ba0
	if (!cr6.eq) goto loc_83204BA0;
	// lwz r30,324(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x83204a40
	if (!cr6.lt) goto loc_83204A40;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_83204A40:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x83204a50
	if (!cr0.eq) goto loc_83204A50;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_83204A50:
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, xer);
	// beq cr6,0x83204ac0
	if (cr6.eq) goto loc_83204AC0;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bge cr6,0x83204a68
	if (!cr6.lt) goto loc_83204A68;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_83204A68:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x83204a78
	if (!cr0.eq) goto loc_83204A78;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_83204A78:
	// cmpwi cr6,r10,94
	cr6.compare<int32_t>(ctx.r10.s32, 94, xer);
	// beq cr6,0x83204ac0
	if (cr6.eq) goto loc_83204AC0;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bge cr6,0x83204a90
	if (!cr6.lt) goto loc_83204A90;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_83204A90:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83204a9c
	if (!cr0.eq) goto loc_83204A9C;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83204A9C:
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(r11.s32, 80, xer);
	// beq cr6,0x83204ac0
	if (cr6.eq) goto loc_83204AC0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-5520
	ctx.r5.s64 = r11.s64 + -5520;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,680
	ctx.r7.s64 = 680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83204AC0:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lbz r28,1(r30)
	r28.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r30,r11,25480
	r30.s64 = r11.s64 + 25480;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1488) );
	// lwz r27,1536(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1536) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x831da428
	sub_831DA428(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r27,r10,25480
	r27.s64 = ctx.r10.s64 + 25480;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1488) );
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r21,1536(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1536) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x831da550
	sub_831DA550(ctx, base);
	// lwz r27,12(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r21,r10,25480
	r21.s64 = ctx.r10.s64 + 25480;
	// lwz r3,1488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(1488) );
	// rlwinm r29,r11,27,31,31
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r14,1536(r27)
	r14.u64 = PPC_LOAD_U32(r27.u32 + int32_t(1536) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x831da678
	sub_831DA678(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x83204bc4
	goto loc_83204BC4;
loc_83204BA0:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// addi r9,r30,-3
	ctx.r9.s64 = r30.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r29,r10,27,31,31
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,27,31,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_83204BC4:
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83204bdc
	if (!cr0.eq) goto loc_83204BDC;
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83204bdc
	if (!cr0.eq) goto loc_83204BDC;
	// clrlwi. r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83204d88
	if (cr0.eq) goto loc_83204D88;
loc_83204BDC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83204bf4
	if (cr6.eq) goto loc_83204BF4;
	// lwz r21,12(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + int32_t(12) );
	// mr r23,r25
	r23.u64 = r25.u64;
	// lwz r22,0(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// b 0x83204c30
	goto loc_83204C30;
loc_83204BF4:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83204c0c
	if (cr0.eq) goto loc_83204C0C;
	// lwz r21,16(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + int32_t(16) );
	// li r23,2
	r23.s64 = 2;
	// lwz r22,4(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// b 0x83204c30
	goto loc_83204C30;
loc_83204C0C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204c24
	if (cr0.eq) goto loc_83204C24;
	// lwz r21,20(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + int32_t(20) );
	// li r23,3
	r23.s64 = 3;
	// lwz r22,8(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + int32_t(8) );
	// b 0x83204c30
	goto loc_83204C30;
loc_83204C24:
	// lbz r23,80(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r22,92(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r21,92(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_83204C30:
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r25,r24,3,0,28
	r25.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r27,r11,-1
	r27.s64 = r11.s64 + -1;
	// stw r27,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r27.u32);
	// mr r20,r27
	r20.u64 = r27.u64;
	// stw r19,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r19.u32);
	// stw r27,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r27.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r11.u32);
	// stw r26,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r26.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// li r3,49
	ctx.r3.s64 = 49;
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r27.u32);
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r26.u32);
	// stw r11,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r11.u32);
	// bne cr6,0x83204d18
	if (!cr6.eq) goto loc_83204D18;
	// lbz r11,351(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83204ce8
	if (cr0.eq) goto loc_83204CE8;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// stw r17,204(r29)
	PPC_STORE_U32(r29.u32 + 204, r17.u32);
loc_83204CE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83204d04
	if (cr6.eq) goto loc_83204D04;
	// stw r17,204(r28)
	PPC_STORE_U32(r28.u32 + 204, r17.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r19,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, r19.u8);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204D04:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x832036f0
	sub_832036F0(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
loc_83204D18:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// clrlwi r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	// stw r20,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r20.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r19,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r19.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// lbzx r11,r10,r9
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r11,r11,2
	r11.u64 = rotl32(r11.u32, 2);
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// stw r22,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r22.u32);
	// stw r21,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r21.u32);
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r23,351(r1)
	r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
	// li r25,1
	r25.s64 = 1;
loc_83204D88:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204dc0
	if (cr0.eq) goto loc_83204DC0;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83204db8
	if (!cr0.eq) goto loc_83204DB8;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83204db8
	if (!cr0.eq) goto loc_83204DB8;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83204db8
	if (!cr0.eq) goto loc_83204DB8;
	// rlwinm. r11,r11,0,16,16
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204dc0
	if (cr0.eq) goto loc_83204DC0;
loc_83204DB8:
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x83204dc4
	goto loc_83204DC4;
loc_83204DC0:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83204DC4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204f98
	if (cr0.eq) goto loc_83204F98;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8320ff78
	sub_8320FF78(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x83204f98
	if (cr0.eq) goto loc_83204F98;
	// cmplwi cr6,r28,34952
	cr6.compare<uint32_t>(r28.u32, 34952, xer);
	// beq cr6,0x83204f98
	if (cr6.eq) goto loc_83204F98;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x83204e00
	if (!cr6.eq) goto loc_83204E00;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r20,r11
	r20.u64 = r11.u64;
loc_83204E00:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r29,r24,3,0,28
	r29.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r19,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r19.u32);
	// stw r20,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r20.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bne cr6,0x83204e5c
	if (!cr6.eq) goto loc_83204E5C;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204e50
	if (cr0.eq) goto loc_83204E50;
	// stw r17,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r17.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204E50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x832036f0
	sub_832036F0(ctx, base);
loc_83204E5C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204e74
	if (cr0.eq) goto loc_83204E74;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r11,r11,12,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// b 0x83204e78
	goto loc_83204E78;
loc_83204E74:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83204E78:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83204e84
	if (cr6.eq) goto loc_83204E84;
	// stb r25,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r25.u8);
loc_83204E84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r30,132(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(132) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r15,r26
	cr6.compare<int32_t>(r15.s32, r26.s32, xer);
	// stw r20,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, r20.u32);
	// stw r19,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r19.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r26,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, r26.u32);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// bne cr6,0x83204ee4
	if (!cr6.eq) goto loc_83204EE4;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204ee0
	if (cr0.eq) goto loc_83204EE0;
	// stw r17,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, r17.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_83204EE0:
	// stw r30,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, r30.u32);
loc_83204EE4:
	// stb r25,153(r4)
	PPC_STORE_U8(ctx.r4.u32 + 153, r25.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204f00
	if (cr0.eq) goto loc_83204F00;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r11,r11,12,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// b 0x83204f04
	goto loc_83204F04;
loc_83204F00:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_83204F04:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83204f28
	if (cr6.eq) goto loc_83204F28;
	// stb r25,159(r4)
	PPC_STORE_U8(ctx.r4.u32 + 159, r25.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204f28
	if (cr0.eq) goto loc_83204F28;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// rlwinm r11,r11,0,12,10
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r11.u32);
loc_83204F28:
	// lwz r11,100(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(100) );
	// not r10,r28
	ctx.r10.u64 = ~r28.u64;
	// not r8,r28
	ctx.r8.u64 = ~r28.u64;
	// rlwinm r10,r10,25,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// not r7,r28
	ctx.r7.u64 = ~r28.u64;
	// not r9,r28
	ctx.r9.u64 = ~r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// rlwinm r11,r8,17,31,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// rlwinm r9,r9,21,31,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// rlwinm r10,r7,29,31,31
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, r11.u32);
	// bl 0x831fc798
	sub_831FC798(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83204f90
	if (cr0.eq) goto loc_83204F90;
	// lis r12,-1
	r12.s64 = -65536;
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(4) );
	// ori r12,r12,30583
	r12.u64 = r12.u64 | 30583;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// stw r11,4(r18)
	PPC_STORE_U32(r18.u32 + 4, r11.u32);
loc_83204F90:
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r24,4
	r24.s64 = 4;
loc_83204F98:
	// sth r26,2(r18)
	PPC_STORE_U16(r18.u32 + 2, r26.u16);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// rlwimi r11,r24,16,10,15
	r11.u64 = (rotl32(r24.u32, 16) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7550
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_83203DD0) {
	__imp__sub_83203DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83204FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// extsh r18,r11
	r18.s64 = r11.s16;
	// rlwinm r19,r11,16,26,31
	r19.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// beq 0x83205000
	if (cr0.eq) goto loc_83205000;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rlwinm r28,r11,23,28,31
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0xF;
	// b 0x83205004
	goto loc_83205004;
loc_83205000:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_83205004:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r20,1
	r20.s64 = 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// addi r22,r11,-18548
	r22.s64 = r11.s64 + -18548;
	// addi r21,r10,-5824
	r21.s64 = ctx.r10.s64 + -5824;
	// ble cr6,0x832050c0
	if (!cr6.gt) goto loc_832050C0;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// ble cr6,0x83205044
	if (!cr6.gt) goto loc_83205044;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-4440
	ctx.r5.s64 = r11.s64 + -4440;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,871
	ctx.r7.s64 = 871;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205044:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// stw r30,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// sth r30,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r30.u16);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwimi r11,r20,18,10,15
	r11.u64 = (rotl32(r20.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// addi r11,r11,-15480
	r11.s64 = r11.s64 + -15480;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
loc_832050C0:
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_832050C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x832050c8
	if (cr6.lt) goto loc_832050C8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// addi r25,r11,-4460
	r25.s64 = r11.s64 + -4460;
	// beq cr6,0x832051d4
	if (cr6.eq) goto loc_832051D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83205150
	if (!cr6.eq) goto loc_83205150;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8320512c
	if (cr6.eq) goto loc_8320512C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,895
	ctx.r7.s64 = 895;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320512C:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r27,r11
	r27.u64 = r11.u64;
	// sth r11,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r11.u16);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwimi r11,r20,18,10,15
	r11.u64 = (rotl32(r20.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_83205150:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// lfs f4,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8320518C:
	// sraw r11,r28,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	r11.s64 = r28.s32 >> temp.u32;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x832051b4
	if (!cr0.eq) goto loc_832051B4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_832051B4:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x8320518c
	if (cr6.lt) goto loc_8320518C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
loc_832051D4:
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_832051DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x832051dc
	if (cr6.lt) goto loc_832051DC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x832052e0
	if (cr6.eq) goto loc_832052E0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8320525c
	if (!cr6.eq) goto loc_8320525C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83205238
	if (cr6.eq) goto loc_83205238;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,922
	ctx.r7.s64 = 922;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205238:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// mr r27,r11
	r27.u64 = r11.u64;
	// sth r11,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r11.u16);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwimi r11,r20,18,10,15
	r11.u64 = (rotl32(r20.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_8320525C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// lfs f4,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_83205298:
	// sraw r11,r28,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	r11.s64 = r28.s32 >> temp.u32;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne 0x832052c0
	if (!cr0.eq) goto loc_832052C0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_832052C0:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x83205298
	if (cr6.lt) goto loc_83205298;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831fc798
	sub_831FC798(ctx, base);
loc_832052E0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8320ff98
	sub_8320FF98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83205348
	if (cr0.eq) goto loc_83205348;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83205300
	if (cr6.eq) goto loc_83205300;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8320531c
	if (!cr6.eq) goto loc_8320531C;
loc_83205300:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-4492
	ctx.r5.s64 = r11.s64 + -4492;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,944
	ctx.r7.s64 = 944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320531C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r27.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// bl 0x831fc798
	sub_831FC798(ctx, base);
loc_83205348:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8320554c
	if (cr6.eq) goto loc_8320554C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm. r11,r11,9,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83205490
	if (cr0.eq) goto loc_83205490;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83205388
	if (!cr0.eq) goto loc_83205388;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-4512
	ctx.r5.s64 = r11.s64 + -4512;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205388:
	// cmpwi cr6,r19,15
	cr6.compare<int32_t>(r19.s32, 15, xer);
	// beq cr6,0x832053bc
	if (cr6.eq) goto loc_832053BC;
	// cmpwi cr6,r19,17
	cr6.compare<int32_t>(r19.s32, 17, xer);
	// beq cr6,0x832053bc
	if (cr6.eq) goto loc_832053BC;
	// cmpwi cr6,r19,11
	cr6.compare<int32_t>(r19.s32, 11, xer);
	// beq cr6,0x832053bc
	if (cr6.eq) goto loc_832053BC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-4624
	ctx.r5.s64 = r11.s64 + -4624;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,959
	ctx.r7.s64 = 959;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832053BC:
	// lbz r11,2116(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 2116);
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = rotl64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// bne 0x832053e4
	if (!cr0.eq) goto loc_832053E4;
	// stb r20,2116(r29)
	PPC_STORE_U8(r29.u32 + 2116, r20.u8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,2120(r29)
	PPC_STORE_U32(r29.u32 + 2120, r11.u32);
	// b 0x83205410
	goto loc_83205410;
loc_832053E4:
	// lwz r9,2120(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(2120) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// beq cr6,0x83205410
	if (cr6.eq) goto loc_83205410;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-4676
	ctx.r5.s64 = r11.s64 + -4676;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,964
	ctx.r7.s64 = 964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205410:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r18,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r18.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// li r19,32
	r19.s64 = 32;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83205458
	if (!cr6.eq) goto loc_83205458;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,-4696
	ctx.r5.s64 = r11.s64 + -4696;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,971
	ctx.r7.s64 = 971;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205458:
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83205478
	if (!cr6.lt) goto loc_83205478;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320547c
	goto loc_8320547C;
loc_83205478:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8320547C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lwz r18,136(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_83205490:
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(92) );
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = rotl64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r18,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r18.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832054c0
	if (cr0.eq) goto loc_832054C0;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rlwinm r11,r11,24,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// b 0x832054c4
	goto loc_832054C4;
loc_832054C0:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_832054C4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x832054d0
	if (cr6.eq) goto loc_832054D0;
	// stb r20,164(r31)
	PPC_STORE_U8(r31.u32 + 164, r20.u8);
loc_832054D0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832054e8
	if (cr0.eq) goto loc_832054E8;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rlwinm r11,r11,0,24,22
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_832054E8:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_832054EC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x8320551c
	if (cr0.eq) goto loc_8320551C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8320551C:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x832054ec
	if (cr6.lt) goto loc_832054EC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320554c
	if (cr0.eq) goto loc_8320554C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// li r10,85
	ctx.r10.s64 = 85;
	// rlwimi r11,r10,0,24,31
	r11.u64 = (rotl32(ctx.r10.u32, 0) & 0xFF) | (r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_8320554C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_83204FB8) {
	__imp__sub_83204FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83205558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bne cr6,0x832055c4
	if (!cr6.eq) goto loc_832055C4;
	// lwz r11,2104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2104) );
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x832055ac
	if (cr6.lt) goto loc_832055AC;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_832055AC:
	// stw r11,2104(r31)
	PPC_STORE_U32(r31.u32 + 2104, r11.u32);
	// lwz r11,2108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2108) );
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bgt cr6,0x832055c0
	if (cr6.gt) goto loc_832055C0;
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
loc_832055C0:
	// stw r11,2108(r31)
	PPC_STORE_U32(r31.u32 + 2108, r11.u32);
loc_832055C4:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// clrlwi. r20,r30,24
	r20.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// beq 0x832055e8
	if (cr0.eq) goto loc_832055E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x83205600
	goto loc_83205600;
loc_832055E8:
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + int32_t(0) );
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_83205600:
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r7,r10,25480
	ctx.r7.s64 = ctx.r10.s64 + 25480;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1384) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x831dc328
	sub_831DC328(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r23,r11,-18548
	r23.s64 = r11.s64 + -18548;
	// addi r21,r10,-4392
	r21.s64 = ctx.r10.s64 + -4392;
	// addi r22,r9,-5824
	r22.s64 = ctx.r9.s64 + -5824;
	// beq cr6,0x83205664
	if (cr6.eq) goto loc_83205664;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1077
	ctx.r7.s64 = 1077;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205664:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x832057d8
	if (cr6.eq) goto loc_832057D8;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831db7b0
	sub_831DB7B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832057d8
	if (!cr6.eq) goto loc_832057D8;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x831dd1a0
	sub_831DD1A0(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r25,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r25.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83205770
	if (!cr0.eq) goto loc_83205770;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,25324
	ctx.r5.s64 = r11.s64 + 25324;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205770:
	// li r3,21
	ctx.r3.s64 = 21;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r25,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r25.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r25,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r25.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832057d4
	if (!cr0.eq) goto loc_832057D4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,-4412
	ctx.r5.s64 = r11.s64 + -4412;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1113
	ctx.r7.s64 = 1113;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832057D4:
	// lwz r26,28(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
loc_832057D8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83205948
	if (!cr6.gt) goto loc_83205948;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r27,r11,-15392
	r27.s64 = r11.s64 + -15392;
loc_832057F0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x83201368
	sub_83201368(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x83205850
	if (!cr6.eq) goto loc_83205850;
	// lwz r11,-36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-36) );
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83203768
	sub_83203768(ctx, base);
	// b 0x83205858
	goto loc_83205858;
loc_83205850:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_83205858:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r8,r10,25480
	ctx.r8.s64 = ctx.r10.s64 + 25480;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1536) );
	// lwz r7,1384(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1384) );
	// bl 0x831dbf58
	sub_831DBF58(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x832058a0
	if (cr6.eq) goto loc_832058A0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1146
	ctx.r7.s64 = 1146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832058A0:
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
loc_832058A8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// bl 0x83203188
	sub_83203188(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stbx r3,r29,r11
	PPC_STORE_U8(r29.u32 + r11.u32, ctx.r3.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x832058a8
	if (cr6.lt) goto loc_832058A8;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_832058CC:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8320590c
	if (cr6.lt) goto loc_8320590C;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bgt cr6,0x8320590c
	if (cr6.gt) goto loc_8320590C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83205900
	if (cr6.lt) goto loc_83205900;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// ble cr6,0x83205908
	if (!cr6.gt) goto loc_83205908;
loc_83205900:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_83205908:
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_8320590C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x832058cc
	if (cr6.lt) goto loc_832058CC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x832057f0
	if (cr6.lt) goto loc_832057F0;
loc_83205948:
	// li r11,1
	r11.s64 = 1;
	// stb r11,29(r26)
	PPC_STORE_U8(r26.u32 + 29, r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c08
	return;
}

PPC_WEAK_FUNC(sub_83205558) {
	__imp__sub_83205558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83205958) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r25,1456(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_83205958) {
	__imp__sub_83205958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832059C8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r29,r11,-18548
	r29.s64 = r11.s64 + -18548;
	// addi r28,r10,-5824
	r28.s64 = ctx.r10.s64 + -5824;
	// bne cr6,0x83205a0c
	if (!cr6.eq) goto loc_83205A0C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x83205a28
	if (!cr6.eq) goto loc_83205A28;
loc_83205A0C:
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-4208
	ctx.r5.s64 = r11.s64 + -4208;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4355
	ctx.r7.s64 = 4355;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205A28:
	// li r31,0
	r31.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// beq cr6,0x83205c08
	if (cr6.eq) goto loc_83205C08;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// rlwinm. r11,r11,9,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83205b78
	if (cr0.eq) goto loc_83205B78;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83205a80
	if (!cr0.eq) goto loc_83205A80;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-4512
	ctx.r5.s64 = r11.s64 + -4512;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4366
	ctx.r7.s64 = 4366;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205A80:
	// lwz r30,80(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + int32_t(80) );
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x83205ab8
	if (cr6.eq) goto loc_83205AB8;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// beq cr6,0x83205ab8
	if (cr6.eq) goto loc_83205AB8;
	// cmpwi cr6,r30,33
	cr6.compare<int32_t>(r30.s32, 33, xer);
	// beq cr6,0x83205ab8
	if (cr6.eq) goto loc_83205AB8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-4328
	ctx.r5.s64 = r11.s64 + -4328;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4370
	ctx.r7.s64 = 4370;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205AB8:
	// lbz r11,2116(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83205ad0
	if (!cr0.eq) goto loc_83205AD0;
	// stw r30,2120(r26)
	PPC_STORE_U32(r26.u32 + 2120, r30.u32);
	// stb r22,2116(r26)
	PPC_STORE_U8(r26.u32 + 2116, r22.u8);
	// b 0x83205af8
	goto loc_83205AF8;
loc_83205AD0:
	// lwz r11,2120(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(2120) );
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x83205af8
	if (cr6.eq) goto loc_83205AF8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-4368
	ctx.r5.s64 = r11.s64 + -4368;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4375
	ctx.r7.s64 = 4375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205AF8:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(56) );
	// stw r11,200(r25)
	PPC_STORE_U32(r25.u32 + 200, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83205b28
	if (!cr6.eq) goto loc_83205B28;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-4696
	ctx.r5.s64 = r11.s64 + -4696;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,4380
	ctx.r7.s64 = 4380;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205B28:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83205b48
	if (!cr6.lt) goto loc_83205B48;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83205b4c
	goto loc_83205B4C;
loc_83205B48:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83205B4C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r10,42
	ctx.r10.s64 = 42;
	// lwz r9,228(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(228) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(136) );
	// stw r10,80(r25)
	PPC_STORE_U32(r25.u32 + 80, ctx.r10.u32);
	// stw r9,228(r25)
	PPC_STORE_U32(r25.u32 + 228, ctx.r9.u32);
	// stw r11,56(r25)
	PPC_STORE_U32(r25.u32 + 56, r11.u32);
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
loc_83205B78:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,9,9
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83205b90
	if (cr0.eq) goto loc_83205B90;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// rlwinm r11,r11,24,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// b 0x83205b94
	goto loc_83205B94;
loc_83205B90:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83205B94:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83205ba0
	if (cr6.eq) goto loc_83205BA0;
	// stb r22,164(r25)
	PPC_STORE_U8(r25.u32 + 164, r22.u8);
loc_83205BA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-6144
	r30.s64 = r11.s64 + -6144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
loc_83205C08:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83205c60
	if (cr0.eq) goto loc_83205C60;
loc_83205C10:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831f1918
	sub_831F1918(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83205c34
	if (!cr6.eq) goto loc_83205C34;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_83205C34:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x83205c10
	if (cr6.lt) goto loc_83205C10;
	// b 0x83205ca8
	goto loc_83205CA8;
loc_83205C60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831f1918
	sub_831F1918(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x83205c80
	if (!cr0.eq) goto loc_83205C80;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
loc_83205C80:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x83205c60
	if (cr6.lt) goto loc_83205C60;
loc_83205CA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_832059C8) {
	__imp__sub_832059C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83205CB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-15376
	r11.s64 = r11.s64 + -15376;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lbz r11,100(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// bne cr6,0x83205d70
	if (!cr6.eq) goto loc_83205D70;
	// rlwinm. r8,r11,0,24,24
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83205d70
	if (cr0.eq) goto loc_83205D70;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r11,3,29,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// lwz r31,92(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(92) );
	// rlwinm r11,r9,3,29,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// lbz r9,295(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// mulli r5,r5,6
	ctx.r5.s64 = ctx.r5.s64 * 6;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(284) );
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwinm r11,r10,19,23,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1F8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,56(r25)
	PPC_STORE_U32(r25.u32 + 56, ctx.r10.u32);
	// stw r11,80(r25)
	PPC_STORE_U32(r25.u32 + 80, r11.u32);
	// bl 0x832059c8
	sub_832059C8(ctx, base);
	// b 0x83205f4c
	goto loc_83205F4C;
loc_83205D70:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r8,r8,3,29,31
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,3,29,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r10,6
	r11.s64 = ctx.r10.s64 * 6;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x83205dd4
	if (cr0.eq) goto loc_83205DD4;
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r7,r7,0,0,15
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,2(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// or r7,r11,r7
	ctx.r7.u64 = r11.u64 | ctx.r7.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwimi r11,r7,0,16,9
	r11.u64 = (rotl32(ctx.r7.u32, 0) & 0xFFFFFFFFFFC0FFFF) | (r11.u64 & 0x3F0000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwimi r7,r11,0,9,7
	ctx.r7.u64 = (rotl32(r11.u32, 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x83205ddc
	goto loc_83205DDC;
loc_83205DD4:
	// lwzx r30,r11,r7
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_83205DDC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r24,0
	r24.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r6,r11,9,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r31,r11,16,26,31
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// extsh r26,r11
	r26.s64 = r11.s16;
	// beq 0x83205e10
	if (cr0.eq) goto loc_83205E10;
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// li r27,1
	r27.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// add r24,r11,r10
	r24.u64 = r11.u64 + ctx.r10.u64;
loc_83205E10:
	// rlwinm. r11,r4,0,25,25
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83205f04
	if (!cr0.eq) goto loc_83205F04;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x83205f04
	if (!cr6.eq) goto loc_83205F04;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// stw r28,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r28.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(92) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r26,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r26.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// beq 0x83205e74
	if (cr0.eq) goto loc_83205E74;
	// stw r24,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r24.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,9,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83205E74:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83203768
	sub_83203768(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83205ed8
	if (!cr0.eq) goto loc_83205ED8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5824
	ctx.r6.s64 = r11.s64 + -5824;
	// addi r5,r10,25288
	ctx.r5.s64 = ctx.r10.s64 + 25288;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1261
	ctx.r7.s64 = 1261;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83205ED8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,4
	r31.s64 = 4;
	// rlwinm r11,r11,0,10,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// mr r26,r28
	r26.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r28.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwimi r11,r9,18,10,15
	r11.u64 = (rotl32(ctx.r9.u32, 18) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83205f18
	goto loc_83205F18;
loc_83205F04:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83203768
	sub_83203768(ctx, base);
loc_83205F18:
	// addi r11,r23,50
	r11.s64 = r23.s64 + 50;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r23,14
	ctx.r9.s64 = r23.s64 + 14;
	// addi r8,r23,20
	ctx.r8.s64 = r23.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, r24.u32);
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stwx r26,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + r25.u32, r26.u32);
	// stwx r11,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + r25.u32, r11.u32);
loc_83205F4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_83205CB0) {
	__imp__sub_83205CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83205F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7500
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r28,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, r28.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1360) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r26,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,288
	ctx.r4.s64 = 288;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// lwz r27,1456(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x83206048
	if (cr0.eq) goto loc_83206048;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r25,r30
	r25.u64 = r30.u64;
	// b 0x8320604c
	goto loc_8320604C;
loc_83206048:
	// mr r25,r29
	r25.u64 = r29.u64;
loc_8320604C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// lwz r27,1456(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
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
	// beq 0x8320608c
	if (cr0.eq) goto loc_8320608C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// mr r27,r30
	r27.u64 = r30.u64;
	// b 0x83206090
	goto loc_83206090;
loc_8320608C:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_83206090:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r27.u32);
	// lwz r24,1452(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// beq 0x832060cc
	if (cr0.eq) goto loc_832060CC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x832060d0
	goto loc_832060D0;
loc_832060CC:
	// mr r14,r29
	r14.u64 = r29.u64;
loc_832060D0:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r14.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// bl 0x831fc738
	sub_831FC738(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x831fc738
	sub_831FC738(ctx, base);
	// stb r29,2100(r31)
	PPC_STORE_U8(r31.u32 + 2100, r29.u8);
	// stb r29,2116(r31)
	PPC_STORE_U8(r31.u32 + 2116, r29.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r29,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r29.u8);
	// bl 0x831e66d8
	sub_831E66D8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-18548
	r11.s64 = r11.s64 + -18548;
	// addi r10,r10,-5824
	ctx.r10.s64 = ctx.r10.s64 + -5824;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq 0x8320c1f4
	if (cr0.eq) goto loc_8320C1F4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r8,r11,-14108
	ctx.r8.s64 = r11.s64 + -14108;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r7,r11,25340
	ctx.r7.s64 = r11.s64 + 25340;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// addi r6,r11,-3320
	ctx.r6.s64 = r11.s64 + -3320;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r6,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r6.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r11,r11,-3356
	r11.s64 = r11.s64 + -3356;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// addi r11,r8,-3296
	r11.s64 = ctx.r8.s64 + -3296;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// addi r17,r10,4992
	r17.s64 = ctx.r10.s64 + 4992;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r11.u32);
	// addi r18,r9,25032
	r18.s64 = ctx.r9.s64 + 25032;
	// addi r10,r7,-3376
	ctx.r10.s64 = ctx.r7.s64 + -3376;
	// stw r17,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r17.u32);
	// addi r9,r6,-3412
	ctx.r9.s64 = ctx.r6.s64 + -3412;
	// stw r18,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r18.u32);
	// addi r11,r5,-3432
	r11.s64 = ctx.r5.s64 + -3432;
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r11.u32);
	// lis r30,-32247
	r30.s64 = -2113339392;
	// addi r9,r3,-3448
	ctx.r9.s64 = ctx.r3.s64 + -3448;
	// addi r10,r4,-3468
	ctx.r10.s64 = ctx.r4.s64 + -3468;
	// addi r11,r30,-3484
	r11.s64 = r30.s64 + -3484;
	// stw r9,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// lis r29,-32247
	r29.s64 = -2113339392;
	// stw r10,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r10.u32);
	// lis r28,-31951
	r28.s64 = -2093940736;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// lis r27,-32247
	r27.s64 = -2113339392;
	// addi r10,r29,-3512
	ctx.r10.s64 = r29.s64 + -3512;
	// addi r9,r28,17592
	ctx.r9.s64 = r28.s64 + 17592;
	// addi r11,r27,-3532
	r11.s64 = r27.s64 + -3532;
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// lis r26,-32247
	r26.s64 = -2113339392;
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// lis r25,-32247
	r25.s64 = -2113339392;
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, r11.u32);
	// lis r24,-32248
	r24.s64 = -2113404928;
	// addi r10,r26,-3564
	ctx.r10.s64 = r26.s64 + -3564;
	// addi r9,r25,-3580
	ctx.r9.s64 = r25.s64 + -3580;
	// addi r11,r24,25264
	r11.s64 = r24.s64 + 25264;
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// lis r23,-32247
	r23.s64 = -2113339392;
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// lis r22,-32247
	r22.s64 = -2113339392;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// lis r21,-32248
	r21.s64 = -2113404928;
	// addi r10,r23,-3604
	ctx.r10.s64 = r23.s64 + -3604;
	// addi r9,r22,-3620
	ctx.r9.s64 = r22.s64 + -3620;
	// addi r11,r21,25796
	r11.s64 = r21.s64 + 25796;
	// stw r10,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lis r20,-32248
	r20.s64 = -2113404928;
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// lis r19,-32248
	r19.s64 = -2113404928;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r11.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r10,r20,25556
	ctx.r10.s64 = r20.s64 + 25556;
	// addi r9,r19,25540
	ctx.r9.s64 = r19.s64 + 25540;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f26,2708(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2708);
	f26.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r11,25680
	ctx.r3.s64 = r11.s64 + 25680;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f30,3084(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3084);
	f30.f64 = double(temp.f32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// addi r6,r11,-3668
	ctx.r6.s64 = r11.s64 + -3668;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lfs f28,-3624(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3624);
	f28.f64 = double(temp.f32);
	// addi r10,r4,5664
	ctx.r10.s64 = ctx.r4.s64 + 5664;
	// lfs f27,3056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	f27.f64 = double(temp.f32);
	// addi r5,r11,-3692
	ctx.r5.s64 = r11.s64 + -3692;
	// lfs f29,-3628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3628);
	f29.f64 = double(temp.f32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r6,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r6.u32);
	// addi r4,r11,-3708
	ctx.r4.s64 = r11.s64 + -3708;
	// stw r5,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r5.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r23,280(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(280) );
	// stw r4,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// addi r10,r10,-3764
	ctx.r10.s64 = ctx.r10.s64 + -3764;
	// addi r30,r11,-3780
	r30.s64 = r11.s64 + -3780;
	// lwz r25,304(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(304) );
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r10,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lwz r19,940(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(940) );
	// addi r29,r11,-3804
	r29.s64 = r11.s64 + -3804;
	// lwz r20,224(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r16,220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// addi r10,r9,-3836
	ctx.r10.s64 = ctx.r9.s64 + -3836;
	// lwz r21,164(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// addi r3,r11,-20720
	ctx.r3.s64 = r11.s64 + -20720;
	// lwz r22,264(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(264) );
	// lis r11,-31951
	r11.s64 = -2093940736;
	// stw r10,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r24,r11,10000
	r24.s64 = r11.s64 + 10000;
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r30,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, r30.u32);
	// addi r10,r8,-3864
	ctx.r10.s64 = ctx.r8.s64 + -3864;
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r29.u32);
	// addi r4,r11,-3872
	ctx.r4.s64 = r11.s64 + -3872;
	// stw r3,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r3.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// stw r4,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r4.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r4,r11,-3892
	ctx.r4.s64 = r11.s64 + -3892;
	// stw r24,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r24.u32);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r10,r7,-3920
	ctx.r10.s64 = ctx.r7.s64 + -3920;
	// stw r4,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// addi r9,r11,-3980
	ctx.r9.s64 = r11.s64 + -3980;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r10,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r10.u32);
	// stw r9,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r9.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r9,r11,-4012
	ctx.r9.s64 = r11.s64 + -4012;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// stw r9,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r9.u32);
	// addi r9,r6,-4032
	ctx.r9.s64 = ctx.r6.s64 + -4032;
	// addi r11,r11,-4156
	r11.s64 = r11.s64 + -4156;
	// addi r10,r5,-4112
	ctx.r10.s64 = ctx.r5.s64 + -4112;
	// stw r9,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r9.u32);
	// rotlwi r14,r14,0
	r14.u64 = rotl32(r14.u32, 0);
	// stw r11,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, r11.u32);
	// stw r10,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// b 0x832063d0
	goto loc_832063D0;
loc_832063A4:
	// lwz r22,264(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(264) );
	// lwz r17,476(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(476) );
	// lwz r21,164(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r18,544(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(544) );
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r24,460(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(460) );
	// lwz r23,280(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(280) );
	// lwz r25,304(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(304) );
	// lwz r20,224(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// lwz r16,220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
loc_832063D0:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r29,0
	r29.s64 = 0;
	// lwz r28,196(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// mr r15,r11
	r15.u64 = r11.u64;
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r15.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x832063fc
	if (!cr6.lt) goto loc_832063FC;
	// li r11,1
	r11.s64 = 1;
loc_832063FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bne 0x8320640c
	if (!cr0.eq) goto loc_8320640C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8320640C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// stb r29,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, r29.u8);
	// bl 0x83203460
	sub_83203460(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8320b1b0
	if (cr6.lt) goto loc_8320B1B0;
	// beq cr6,0x8320b1d4
	if (cr6.eq) goto loc_8320B1D4;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x8320b1a8
	if (cr6.lt) goto loc_8320B1A8;
	// beq cr6,0x8320b1a0
	if (cr6.eq) goto loc_8320B1A0;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x8320ae2c
	if (cr6.lt) goto loc_8320AE2C;
	// beq cr6,0x83206460
	if (cr6.eq) goto loc_83206460;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// blt cr6,0x83206450
	if (cr6.lt) goto loc_83206450;
	// li r7,4278
	ctx.r7.s64 = 4278;
	// b 0x8320bd38
	goto loc_8320BD38;
loc_83206450:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// addi r30,r11,116
	r30.s64 = r11.s64 + 116;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r30.u32);
loc_83206460:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// stw r29,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r29.u32);
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320648c
	if (cr0.eq) goto loc_8320648C;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r11.u32);
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
loc_8320648C:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm. r11,r11,2,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832064a8
	if (cr0.eq) goto loc_832064A8;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
loc_832064A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203290
	sub_83203290(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r18,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r18.u32);
	// ble 0x83206618
	if (!cr0.gt) goto loc_83206618;
	// mulli r9,r30,36
	ctx.r9.s64 = r30.s64 * 36;
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// subf r26,r23,r20
	r26.s64 = r20.s64 - r23.s64;
	// subf r4,r16,r23
	ctx.r4.s64 = r23.s64 - r16.s64;
	// add r27,r9,r11
	r27.u64 = ctx.r9.u64 + r11.u64;
loc_832064DC:
	// lwz r9,20(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// add r11,r10,r4
	r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stwx r9,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r9.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stwx r11,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83206530
	if (cr0.eq) goto loc_83206530;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
loc_83206530:
	// lbzx r11,r28,r27
	r11.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x832065b8
	if (cr0.eq) goto loc_832065B8;
	// clrlwi r30,r3,24
	r30.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r10,24
	r11.s64 = ctx.r10.s64 + 24;
	// addi r9,r8,72
	ctx.r9.s64 = ctx.r8.s64 + 72;
	// subf r5,r16,r20
	ctx.r5.s64 = r20.s64 - r16.s64;
loc_83206550:
	// lwz r6,20(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// beq cr6,0x83206570
	if (cr6.eq) goto loc_83206570;
	// lwz r6,20(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_83206570:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lhz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// stwx r6,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r6.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// lbzx r6,r28,r27
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x83206550
	if (cr6.lt) goto loc_83206550;
loc_832065B8:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832065cc
	if (cr0.eq) goto loc_832065CC;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_832065CC:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm. r11,r11,9,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832065f4
	if (cr0.eq) goto loc_832065F4;
	// lwz r9,20(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stwx r9,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, ctx.r9.u32);
loc_832065F4:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(r28.s32, r18.s32, xer);
	// blt cr6,0x832064dc
	if (cr6.lt) goto loc_832064DC;
loc_83206618:
	// lwz r30,192(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203310
	sub_83203310(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// add r11,r21,r18
	r11.u64 = r21.u64 + r18.u64;
	// subf. r22,r18,r11
	r22.s64 = r11.s64 - r18.s64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// ble 0x832067fc
	if (!cr0.gt) goto loc_832067FC;
	// mulli r11,r30,36
	r11.s64 = r30.s64 * 36;
	// lwz r15,264(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(264) );
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// add r9,r11,r18
	ctx.r9.u64 = r11.u64 + r18.u64;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = rotl64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// li r28,0
	r28.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// add r29,r10,r23
	r29.u64 = ctx.r10.u64 + r23.u64;
	// subf r26,r23,r20
	r26.s64 = r20.s64 - r23.s64;
	// add r25,r9,r11
	r25.u64 = ctx.r9.u64 + r11.u64;
loc_83206664:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stwx r11,r26,r29
	PPC_STORE_U32(r26.u32 + r29.u32, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm. r11,r9,10,31,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r9,9,31,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// mr r27,r11
	r27.u64 = r11.u64;
	// beq 0x832066bc
	if (cr0.eq) goto loc_832066BC;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_832066BC:
	// clrlwi. r23,r9,24
	r23.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x832066e4
	if (cr0.eq) goto loc_832066E4;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r10,r11,r15
	PPC_STORE_U32(r11.u32 + r15.u32, ctx.r10.u32);
loc_832066E4:
	// lbzx r11,r24,r25
	r11.u64 = PPC_LOAD_U8(r24.u32 + r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x832067ac
	if (cr0.eq) goto loc_832067AC;
	// addi r3,r28,18
	ctx.r3.s64 = r28.s64 + 18;
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// addi r11,r4,72
	r11.s64 = ctx.r4.s64 + 72;
	// addi r6,r29,24
	ctx.r6.s64 = r29.s64 + 24;
loc_83206704:
	// lwz r5,20(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r5,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r5.u16);
	// beq cr6,0x83206748
	if (cr6.eq) goto loc_83206748;
	// lwz r30,20(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_83206748:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83206778
	if (cr6.eq) goto loc_83206778;
	// lwz r30,20(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r20,r9,1
	r20.s64 = ctx.r9.s64 + 1;
	// rlwinm r20,r20,2,0,29
	r20.u64 = rotl64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,156(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lwzx r30,r20,r30
	r30.u64 = PPC_LOAD_U32(r20.u32 + r30.u32);
	// stwx r30,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, r30.u32);
loc_83206778:
	// stwx r5,r6,r26
	PPC_STORE_U32(ctx.r6.u32 + r26.u32, ctx.r5.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
	// addi r3,r3,18
	ctx.r3.s64 = ctx.r3.s64 + 18;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// lbzx r9,r24,r25
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + r25.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x83206704
	if (cr6.lt) goto loc_83206704;
loc_832067AC:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// beq cr6,0x832067c8
	if (cr6.eq) goto loc_832067C8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_832067C8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x832067dc
	if (cr6.eq) goto loc_832067DC;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_832067DC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r24,r22
	cr6.compare<int32_t>(r24.s32, r22.s32, xer);
	// blt cr6,0x83206664
	if (cr6.lt) goto loc_83206664;
	// lwz r30,192(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
loc_832067FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832033f0
	sub_832033F0(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r10,-1320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1320) );
	// lwz r11,-1312(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1312) );
	// lwz r29,1456(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(1456) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x83206854
	if (cr0.eq) goto loc_83206854;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// b 0x8320685c
	goto loc_8320685C;
loc_83206854:
	// li r11,0
	r11.s64 = 0;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_8320685C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,20
	ctx.r4.s64 = 20;
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
	// beq 0x83206894
	if (cr0.eq) goto loc_83206894;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831df0d8
	sub_831DF0D8(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// b 0x8320689c
	goto loc_8320689C;
loc_83206894:
	// li r11,0
	r11.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
loc_8320689C:
	// li r15,0
	r15.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// stw r15,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r15.u32);
	// mr r28,r15
	r28.u64 = r15.u64;
	// stw r15,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r15.u32);
	// stw r15,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r15.u32);
	// stw r15,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r15.u32);
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r15.u32);
	// stw r15,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, r15.u32);
	// stw r15,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r15.u32);
	// stw r15,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, r15.u32);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r15.u32);
	// stb r15,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r15.u8);
	// ble cr6,0x83206934
	if (!cr6.gt) goto loc_83206934;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// mr r26,r16
	r26.u64 = r16.u64;
	// mulli r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 * 36;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
loc_832068E8:
	// lbzx r11,r28,r27
	r11.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// mr r30,r15
	r30.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blt cr6,0x83206924
	if (cr6.lt) goto loc_83206924;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_832068FC:
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x83204fb8
	sub_83204FB8(ctx, base);
	// lbzx r11,r28,r27
	r11.u64 = PPC_LOAD_U8(r28.u32 + r27.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x832068fc
	if (!cr6.gt) goto loc_832068FC;
loc_83206924:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(r28.s32, r18.s32, xer);
	// blt cr6,0x832068e8
	if (cr6.lt) goto loc_832068E8;
loc_83206934:
	// stb r15,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, r15.u8);
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x832069d0
	if (!cr6.gt) goto loc_832069D0;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// lwz r26,180(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r10,r11,r18
	ctx.r10.u64 = r11.u64 + r18.u64;
	// addi r11,r17,28
	r11.s64 = r17.s64 + 28;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
loc_8320695C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm. r25,r11,10,31,31
	r25.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x83206974
	if (cr0.eq) goto loc_83206974;
	// li r11,1
	r11.s64 = 1;
	// stb r11,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, r11.u8);
loc_83206974:
	// lbzx r11,r27,r28
	r11.u64 = PPC_LOAD_U8(r27.u32 + r28.u32);
	// mr r30,r15
	r30.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blt cr6,0x832069c0
	if (cr6.lt) goto loc_832069C0;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_83206988:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// rlwinm r8,r11,9,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	// bl 0x83203dd0
	sub_83203DD0(ctx, base);
	// lbzx r11,r27,r28
	r11.u64 = PPC_LOAD_U8(r27.u32 + r28.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x83206988
	if (!cr6.gt) goto loc_83206988;
loc_832069C0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x8320695c
	if (cr6.lt) goto loc_8320695C;
loc_832069D0:
	// lwz r30,664(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(664) );
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// b 0x83206a2c
	goto loc_83206A2C;
loc_832069DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83206a24
	if (!cr0.eq) goto loc_83206A24;
	// li r7,2243
	ctx.r7.s64 = 2243;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(248) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83206A24:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_83206A2C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x832069dc
	if (!cr6.eq) goto loc_832069DC;
loc_83206A34:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,87
	cr6.compare<uint32_t>(ctx.r10.u32, 87, xer);
	// bgt cr6,0x8320acd4
	if (cr6.gt) goto loc_8320ACD4;
	// lis r12,-32247
	r12.s64 = -2113339392;
	// addi r12,r12,-6064
	r12.s64 = r12.s64 + -6064;
	// rlwinm r0,r10,1,0,30
	r0.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31968
	r12.s64 = -2095054848;
	// addi r12,r12,27260
	r12.s64 = r12.s64 + 27260;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8320ACCC;
	case 1:
		goto loc_83209A34;
	case 2:
		goto loc_83209A34;
	case 3:
		goto loc_83209A34;
	case 4:
		goto loc_83209A34;
	case 5:
		goto loc_83209A34;
	case 6:
		goto loc_83209A34;
	case 7:
		goto loc_83209A34;
	case 8:
		goto loc_83209A34;
	case 9:
		goto loc_83209A34;
	case 10:
		goto loc_83209A34;
	case 11:
		goto loc_83209A34;
	case 12:
		goto loc_83209A34;
	case 13:
		goto loc_83209A34;
	case 14:
		goto loc_83209A34;
	case 15:
		goto loc_83209A34;
	case 16:
		goto loc_83209A8C;
	case 17:
		goto loc_83209C28;
	case 18:
		goto loc_8320ACF4;
	case 19:
		goto loc_832099A0;
	case 20:
		goto loc_832099A0;
	case 21:
		goto loc_832099A0;
	case 22:
		goto loc_8320A81C;
	case 23:
		goto loc_8320ACD4;
	case 24:
		goto loc_8320ACD4;
	case 25:
		goto loc_8320ACD4;
	case 26:
		goto loc_8320ACD4;
	case 27:
		goto loc_8320ACD4;
	case 28:
		goto loc_8320ACD4;
	case 29:
		goto loc_8320ACD4;
	case 30:
		goto loc_832094E0;
	case 31:
		goto loc_832094B4;
	case 32:
		goto loc_8320976C;
	case 33:
		goto loc_83209808;
	case 34:
		goto loc_8320A924;
	case 35:
		goto loc_8320ACD4;
	case 36:
		goto loc_8320ABF0;
	case 37:
		goto loc_8320A5B8;
	case 38:
		goto loc_8320AC5C;
	case 39:
		goto loc_8320A654;
	case 40:
		goto loc_8320AC7C;
	case 41:
		goto loc_8320ACD4;
	case 42:
		goto loc_83206A7C;
	case 43:
		goto loc_83209B90;
	case 44:
		goto loc_8320AA28;
	case 45:
		goto loc_8320A1DC;
	case 46:
		goto loc_83209F84;
	case 47:
		goto loc_83209B60;
	case 48:
		goto loc_83209DE4;
	case 49:
		goto loc_83209C34;
	case 50:
		goto loc_83209A0C;
	case 51:
		goto loc_832094D4;
	case 52:
		goto loc_8320ACF4;
	case 53:
		goto loc_83209AC0;
	case 54:
		goto loc_8320ACF4;
	case 55:
		goto loc_8320969C;
	case 56:
		goto loc_83209AA0;
	case 57:
		goto loc_83209660;
	case 58:
		goto loc_8320ACF4;
	case 59:
		goto loc_8320ACB4;
	case 60:
		goto loc_8320ACD4;
	case 61:
		goto loc_83209BE0;
	case 62:
		goto loc_832099E0;
	case 63:
		goto loc_832099E0;
	case 64:
		goto loc_832099E0;
	case 65:
		goto loc_832099E0;
	case 66:
		goto loc_832099E0;
	case 67:
		goto loc_832099E0;
	case 68:
		goto loc_832099E0;
	case 69:
		goto loc_832096B0;
	case 70:
		goto loc_8320ACF4;
	case 71:
		goto loc_8320949C;
	case 72:
		goto loc_832096D0;
	case 73:
		goto loc_83209630;
	case 74:
		goto loc_83209630;
	case 75:
		goto loc_83209500;
	case 76:
		goto loc_83209610;
	case 77:
		goto loc_83209C1C;
	case 78:
		goto loc_83209ACC;
	case 79:
		goto loc_83209ACC;
	case 80:
		goto loc_83209ACC;
	case 81:
		goto loc_83209ACC;
	case 82:
		goto loc_83209ACC;
	case 83:
		goto loc_83209ACC;
	case 84:
		goto loc_83209ACC;
	case 85:
		goto loc_8320A150;
	case 86:
		goto loc_8320ACD4;
	case 87:
		goto loc_8320AB7C;
	default:
		__builtin_unreachable();
	}
loc_83206A7C:
	// lwz r28,176(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(268) );
	// lbz r25,1(r28)
	r25.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// rlwinm r11,r25,27,5,31
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r25,27
	ctx.r9.u64 = r25.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83206ac0
	if (!cr0.eq) goto loc_83206AC0;
	// li r7,2263
	ctx.r7.s64 = 2263;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,528(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(528) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83206AC0:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// li r29,0
	r29.s64 = 0;
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x83206b2c
	if (cr6.eq) goto loc_83206B2C;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// beq cr6,0x83206b28
	if (cr6.eq) goto loc_83206B28;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x83206b20
	if (cr6.eq) goto loc_83206B20;
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(r11.s32, 96, xer);
	// beq cr6,0x83206b18
	if (cr6.eq) goto loc_83206B18;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x83206b10
	if (cr6.eq) goto loc_83206B10;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83206b2c
	goto loc_83206B2C;
loc_83206B10:
	// li r22,32
	r22.s64 = 32;
	// b 0x83206b2c
	goto loc_83206B2C;
loc_83206B18:
	// li r22,18
	r22.s64 = 18;
	// b 0x83206b2c
	goto loc_83206B2C;
loc_83206B20:
	// li r22,9
	r22.s64 = 9;
	// b 0x83206b2c
	goto loc_83206B2C;
loc_83206B28:
	// li r22,5
	r22.s64 = 5;
loc_83206B2C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,1452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lwz r30,332(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(332) );
	// li r10,7
	ctx.r10.s64 = 7;
	// li r27,1
	r27.s64 = 1;
	// sth r11,0(r23)
	PPC_STORE_U16(r23.u32 + 0, r11.u16);
	// sth r11,2(r23)
	PPC_STORE_U16(r23.u32 + 2, r11.u16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// sth r11,4(r23)
	PPC_STORE_U16(r23.u32 + 4, r11.u16);
	// sth r10,6(r23)
	PPC_STORE_U16(r23.u32 + 6, ctx.r10.u16);
	// sth r10,8(r23)
	PPC_STORE_U16(r23.u32 + 8, ctx.r10.u16);
	// sth r11,10(r23)
	PPC_STORE_U16(r23.u32 + 10, r11.u16);
	// sth r11,12(r23)
	PPC_STORE_U16(r23.u32 + 12, r11.u16);
	// sth r27,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r27.u16);
	// sth r29,16(r23)
	PPC_STORE_U16(r23.u32 + 16, r29.u16);
	// sth r27,18(r23)
	PPC_STORE_U16(r23.u32 + 18, r27.u16);
	// sth r29,22(r23)
	PPC_STORE_U16(r23.u32 + 22, r29.u16);
	// sth r29,24(r23)
	PPC_STORE_U16(r23.u32 + 24, r29.u16);
	// sth r29,26(r23)
	PPC_STORE_U16(r23.u32 + 26, r29.u16);
	// sth r29,28(r23)
	PPC_STORE_U16(r23.u32 + 28, r29.u16);
	// sth r29,20(r23)
	PPC_STORE_U16(r23.u32 + 20, r29.u16);
	// beq cr6,0x83206c24
	if (cr6.eq) goto loc_83206C24;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// bl 0x832035e8
	sub_832035E8(ctx, base);
	// sth r3,0(r23)
	PPC_STORE_U16(r23.u32 + 0, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r3,r11,29,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x7;
	// bl 0x832035e8
	sub_832035E8(ctx, base);
	// sth r3,2(r23)
	PPC_STORE_U16(r23.u32 + 2, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// bl 0x832035e8
	sub_832035E8(ctx, base);
	// sth r3,4(r23)
	PPC_STORE_U16(r23.u32 + 4, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r3,r11,26,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x7;
	// bl 0x832035e8
	sub_832035E8(ctx, base);
	// sth r3,10(r23)
	PPC_STORE_U16(r23.u32 + 10, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r3,r11,23,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x7;
	// bl 0x832035e8
	sub_832035E8(ctx, base);
	// sth r3,12(r23)
	PPC_STORE_U16(r23.u32 + 12, ctx.r3.u16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r3,r11,17,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0x7;
	// bl 0x832035e8
	sub_832035E8(ctx, base);
	// sth r3,6(r23)
	PPC_STORE_U16(r23.u32 + 6, ctx.r3.u16);
	// rlwinm. r10,r22,0,29,29
	ctx.r10.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,14,25,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 14) & 0x7F;
	// sth r11,22(r23)
	PPC_STORE_U16(r23.u32 + 22, r11.u16);
	// beq 0x83206c24
	if (cr0.eq) goto loc_83206C24;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,7,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,16(r23)
	PPC_STORE_U16(r23.u32 + 16, r11.u16);
loc_83206C24:
	// lwz r30,256(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(256) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83206ca4
	if (cr6.eq) goto loc_83206CA4;
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// rlwinm. r10,r22,0,30,30
	ctx.r10.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,24(r23)
	PPC_STORE_U16(r23.u32 + 24, r11.u16);
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// sth r11,26(r23)
	PPC_STORE_U16(r23.u32 + 26, r11.u16);
	// beq 0x83206c9c
	if (cr0.eq) goto loc_83206C9C;
	// lwz r26,12(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r24,r11,25480
	r24.s64 = r11.s64 + 25480;
	// lwz r3,1488(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82c43198
	sub_82C43198(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83206c94
	if (!cr6.eq) goto loc_83206C94;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// b 0x83206ca0
	goto loc_83206CA0;
loc_83206C94:
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x83206ca0
	goto loc_83206CA0;
loc_83206C9C:
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
loc_83206CA0:
	// sth r11,28(r23)
	PPC_STORE_U16(r23.u32 + 28, r11.u16);
loc_83206CA4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// clrlwi. r16,r22,31
	r16.u64 = r22.u32 & 0x1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// rlwinm r20,r11,8,31,31
	r20.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0x1;
	// rlwinm r21,r11,6,30,31
	r21.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x3;
	// cntlzw r11,r20
	r11.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// sth r11,18(r23)
	PPC_STORE_U16(r23.u32 + 18, r11.u16);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm r28,r11,7,31,31
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// sth r11,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r11.u16);
	// beq 0x83206cec
	if (cr0.eq) goto loc_83206CEC;
	// rlwinm. r11,r22,0,28,28
	r11.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83206ce8
	if (cr0.eq) goto loc_83206CE8;
	// sth r27,20(r23)
	PPC_STORE_U16(r23.u32 + 20, r27.u16);
	// b 0x83206cec
	goto loc_83206CEC;
loc_83206CE8:
	// sth r27,16(r23)
	PPC_STORE_U16(r23.u32 + 16, r27.u16);
loc_83206CEC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(1508) );
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r30,-1312(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-1312) );
	// stw r5,1508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1508, ctx.r5.u32);
	// lwz r10,-1320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-1320) );
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r30.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r17,224(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// lwz r29,164(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// lwz r26,180(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r24,220(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stb r27,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r27.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83205cb0
	sub_83205CB0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83206de8
	if (!cr0.eq) goto loc_83206DE8;
	// li r7,2397
	ctx.r7.s64 = 2397;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83206DE8:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x83206eb0
	if (cr6.eq) goto loc_83206EB0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83205cb0
	sub_83205CB0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83206eb0
	if (!cr0.eq) goto loc_83206EB0;
	// li r7,2413
	ctx.r7.s64 = 2413;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83206EB0:
	// rlwinm. r24,r22,0,28,28
	r24.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x83206f78
	if (cr0.eq) goto loc_83206F78;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// addi r11,r1,152
	r11.s64 = ctx.r1.s64 + 152;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stb r3,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r3.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// bl 0x83205cb0
	sub_83205CB0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83206f78
	if (!cr0.eq) goto loc_83206F78;
	// li r7,2430
	ctx.r7.s64 = 2430;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83206F78:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// rlwinm r17,r25,3,0,28
	r17.u64 = rotl64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83206fd8
	if (cr6.eq) goto loc_83206FD8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83207374
	if (!cr6.eq) goto loc_83207374;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831d9728
	sub_831D9728(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83207374
	if (!cr6.eq) goto loc_83207374;
loc_83206FD8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// li r29,2
	r29.s64 = 2;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// li r11,0
	r11.s64 = 0;
	// li r15,1
	r15.s64 = 1;
	// stb r29,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r29.u8);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r11.u8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r29,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, r29.u8);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stb r15,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r15.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// li r11,0
	r11.s64 = 0;
	// stb r15,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r15.u8);
	// stb r29,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r29.u8);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r11,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r29.u8);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(212) );
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832070d8
	if (!cr0.eq) goto loc_832070D8;
	// li r7,2467
	ctx.r7.s64 = 2467;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832070D8:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-1296(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1296) );
	// stw r11,128(r19)
	PPC_STORE_U32(r19.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1276) );
	// stb r15,159(r19)
	PPC_STORE_U8(r19.u32 + 159, r15.u8);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r19)
	PPC_STORE_U32(r19.u32 + 132, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r19,184(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207160
	if (!cr0.eq) goto loc_83207160;
	// li r7,2478
	ctx.r7.s64 = 2478;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207160:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1276) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f26.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f3,f26
	ctx.f3.f64 = f26.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// stw r11,136(r15)
	PPC_STORE_U32(r15.u32 + 136, r11.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207284
	if (!cr0.eq) goto loc_83207284;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,2493
	ctx.r7.s64 = 2493;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207284:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207370
	if (!cr0.eq) goto loc_83207370;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,2504
	ctx.r7.s64 = 2504;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207370:
	// mr r19,r30
	r19.u64 = r30.u64;
loc_83207374:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// addi r6,r10,25480
	ctx.r6.s64 = ctx.r10.s64 + 25480;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1536) );
	// bl 0x831dd440
	sub_831DD440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhz r3,22(r23)
	ctx.r3.u64 = PPC_LOAD_U16(r23.u32 + 22);
	// bl 0x831feb98
	sub_831FEB98(ctx, base);
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831d9680
	sub_831D9680(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83207a54
	if (!cr6.eq) goto loc_83207A54;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// addi r6,r10,25480
	ctx.r6.s64 = ctx.r10.s64 + 25480;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1536) );
	// bl 0x831dd4e0
	sub_831DD4E0(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1536) );
	// bl 0x831dd590
	sub_831DD590(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// beq cr6,0x832077a8
	if (cr6.eq) goto loc_832077A8;
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,22(r23)
	PPC_STORE_U16(r23.u32 + 22, ctx.r3.u16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1272) );
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lfs f4,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207504
	if (!cr0.eq) goto loc_83207504;
	// li r7,2562
	ctx.r7.s64 = 2562;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207504:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x83207638
	if (!cr6.eq) goto loc_83207638;
	// li r3,110
	ctx.r3.s64 = 110;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r28,136(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-1292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-1292) );
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83207584
	if (cr6.lt) goto loc_83207584;
	// beq cr6,0x8320757c
	if (cr6.eq) goto loc_8320757C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83207584
	if (!cr6.lt) goto loc_83207584;
	// li r11,1
	r11.s64 = 1;
	// b 0x83207588
	goto loc_83207588;
loc_8320757C:
	// li r11,0
	r11.s64 = 0;
	// b 0x83207588
	goto loc_83207588;
loc_83207584:
	// li r11,2
	r11.s64 = 2;
loc_83207588:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1272(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-1272) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-1284) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207638
	if (!cr0.eq) goto loc_83207638;
	// li r7,2588
	ctx.r7.s64 = 2588;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207638:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r11.u16);
	// li r3,25
	ctx.r3.s64 = 25;
	// sth r10,16(r23)
	PPC_STORE_U16(r23.u32 + 16, ctx.r10.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lfs f4,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832076d4
	if (!cr0.eq) goto loc_832076D4;
	// li r7,2603
	ctx.r7.s64 = 2603;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(348) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832076D4:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lfs f4,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207760
	if (!cr0.eq) goto loc_83207760;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r7,2612
	ctx.r7.s64 = 2612;
loc_83207750:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207760:
	// li r3,113
	ctx.r3.s64 = 113;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// b 0x83207acc
	goto loc_83207ACC;
loc_832077A8:
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,22(r23)
	PPC_STORE_U16(r23.u32 + 22, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// sth r11,14(r23)
	PPC_STORE_U16(r23.u32 + 14, r11.u16);
	// sth r10,16(r23)
	PPC_STORE_U16(r23.u32 + 16, ctx.r10.u16);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x83207a24
	if (!cr6.eq) goto loc_83207A24;
	// li r3,110
	ctx.r3.s64 = 110;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83207854
	if (cr6.lt) goto loc_83207854;
	// beq cr6,0x8320784c
	if (cr6.eq) goto loc_8320784C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83207854
	if (!cr6.lt) goto loc_83207854;
	// li r11,1
	r11.s64 = 1;
	// b 0x83207858
	goto loc_83207858;
loc_8320784C:
	// li r11,0
	r11.s64 = 0;
	// b 0x83207858
	goto loc_83207858;
loc_83207854:
	// li r11,2
	r11.s64 = 2;
loc_83207858:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1272) );
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lfs f4,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207918
	if (!cr0.eq) goto loc_83207918;
	// li r7,2668
	ctx.r7.s64 = 2668;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(276) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207918:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lfs f4,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832079a4
	if (!cr0.eq) goto loc_832079A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,2677
	ctx.r7.s64 = 2677;
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(348) );
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832079A4:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lfs f4,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207760
	if (!cr0.eq) goto loc_83207760;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,2686
	ctx.r7.s64 = 2686;
	// b 0x83207750
	goto loc_83207750;
loc_83207A24:
	// lfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x83207a3c
	if (!cr6.gt) goto loc_83207A3C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_83207A3C:
	// lfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x83207b3c
	if (!cr6.lt) goto loc_83207B3C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x83207b3c
	goto loc_83207B3C;
loc_83207A54:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x83207b38
	if (cr6.eq) goto loc_83207B38;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x83207b38
	if (!cr6.eq) goto loc_83207B38;
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,113
	ctx.r3.s64 = 113;
	// sth r11,22(r23)
	PPC_STORE_U16(r23.u32 + 22, r11.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r11,-1272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1272) );
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_83207ACC:
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83207b0c
	if (cr6.lt) goto loc_83207B0C;
	// beq cr6,0x83207b04
	if (cr6.eq) goto loc_83207B04;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83207b0c
	if (!cr6.lt) goto loc_83207B0C;
	// li r11,1
	r11.s64 = 1;
	// b 0x83207b10
	goto loc_83207B10;
loc_83207B04:
	// li r11,0
	r11.s64 = 0;
	// b 0x83207b10
	goto loc_83207B10;
loc_83207B0C:
	// li r11,2
	r11.s64 = 2;
loc_83207B10:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// b 0x83207b4c
	goto loc_83207B4C;
loc_83207B38:
	// lfs f1,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
loc_83207B3C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,22(r23)
	PPC_STORE_U16(r23.u32 + 22, ctx.r3.u16);
loc_83207B4C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83207bf0
	if (cr6.eq) goto loc_83207BF0;
	// li r3,114
	ctx.r3.s64 = 114;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r30,r25,1,0,30
	r30.u64 = rotl64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,29
	r29.s64 = 29;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r30.u32);
	// stw r29,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r29.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// stw r23,184(r28)
	PPC_STORE_U32(r28.u32 + 184, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// li r3,115
	ctx.r3.s64 = 115;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r11.u32);
	// stw r29,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r29.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// stw r23,184(r28)
	PPC_STORE_U32(r28.u32 + 184, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
loc_83207BF0:
	// rlwinm. r11,r22,0,27,27
	r11.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,105
	r29.s64 = 105;
	// beq 0x83207c00
	if (cr0.eq) goto loc_83207C00;
	// li r29,108
	r29.s64 = 108;
loc_83207C00:
	// rlwinm. r11,r22,0,26,26
	r11.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83207c0c
	if (cr0.eq) goto loc_83207C0C;
	// li r29,112
	r29.s64 = 112;
loc_83207C0C:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// beq cr6,0x832081b0
	if (cr6.eq) goto loc_832081B0;
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(r21.s32, 2, xer);
	// bne cr6,0x83207c5c
	if (!cr6.eq) goto loc_83207C5C;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r28,r11,25480
	r28.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831db9f8
	sub_831DB9F8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x832081b0
	if (cr6.eq) goto loc_832081B0;
loc_83207C5C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83207cbc
	if (cr6.lt) goto loc_83207CBC;
	// beq cr6,0x83207cb4
	if (cr6.eq) goto loc_83207CB4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83207cbc
	if (!cr6.lt) goto loc_83207CBC;
	// li r11,1
	r11.s64 = 1;
	// b 0x83207cc0
	goto loc_83207CC0;
loc_83207CB4:
	// li r11,0
	r11.s64 = 0;
	// b 0x83207cc0
	goto loc_83207CC0;
loc_83207CBC:
	// li r11,2
	r11.s64 = 2;
loc_83207CC0:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(184) );
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// sth r20,18(r11)
	PPC_STORE_U16(r11.u32 + 18, r20.u16);
	// beq cr6,0x83207d28
	if (cr6.eq) goto loc_83207D28;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8320819c
	if (cr6.eq) goto loc_8320819C;
	// rlwinm r29,r25,1,0,30
	r29.u64 = rotl64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_83207D28:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(208) );
loc_83207D2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207d74
	if (!cr0.eq) goto loc_83207D74;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(272) );
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83207D74:
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
loc_83207D78:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831da8b8
	sub_831DA8B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83208f24
	if (!cr6.eq) goto loc_83208F24;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r5,r1,548
	ctx.r5.s64 = ctx.r1.s64 + 548;
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x831dd018
	sub_831DD018(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd030
	sub_831DD030(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,492
	ctx.r5.s64 = ctx.r1.s64 + 492;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd048
	sub_831DD048(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,404
	ctx.r5.s64 = ctx.r1.s64 + 404;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dc998
	sub_831DC998(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,484
	ctx.r5.s64 = ctx.r1.s64 + 484;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd060
	sub_831DD060(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,388
	ctx.r5.s64 = ctx.r1.s64 + 388;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd060
	sub_831DD060(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd060
	sub_831DD060(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,396
	ctx.r5.s64 = ctx.r1.s64 + 396;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0d8
	sub_831DD0D8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,552
	ctx.r5.s64 = ctx.r1.s64 + 552;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0d8
	sub_831DD0D8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,420
	ctx.r5.s64 = ctx.r1.s64 + 420;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd078
	sub_831DD078(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,428
	ctx.r5.s64 = ctx.r1.s64 + 428;
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd090
	sub_831DD090(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,500
	ctx.r5.s64 = ctx.r1.s64 + 500;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0d8
	sub_831DD0D8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,436
	ctx.r5.s64 = ctx.r1.s64 + 436;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0a8
	sub_831DD0A8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,508
	ctx.r5.s64 = ctx.r1.s64 + 508;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0c0
	sub_831DD0C0(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0d8
	sub_831DD0D8(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,444
	ctx.r5.s64 = ctx.r1.s64 + 444;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0d8
	sub_831DD0D8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1280) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// lfs f2,388(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,532(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f4,404(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,548(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r28,184(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208050
	if (!cr0.eq) goto loc_83208050;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,3161
	ctx.r7.s64 = 3161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208050:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// lfs f2,420(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,500(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,552(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832080f4
	if (!cr0.eq) goto loc_832080F4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3171
	ctx.r7.s64 = 3171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832080F4:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r15)
	PPC_STORE_U32(r15.u32 + 132, r11.u32);
	// lfs f1,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,508(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208f28
	if (!cr0.eq) goto loc_83208F28;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3181
	ctx.r7.s64 = 3181;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83208f28
	goto loc_83208F28;
loc_8320819C:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(208) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
	// b 0x83207d2c
	goto loc_83207D2C;
loc_832081B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r27,r11,25480
	r27.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831daaa0
	sub_831DAAA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x832085f8
	if (!cr6.eq) goto loc_832085F8;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r26,184(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + int32_t(184) );
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,24(r26)
	PPC_STORE_U16(r26.u32 + 24, r11.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1304) );
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x832082b0
	if (cr6.lt) goto loc_832082B0;
	// beq cr6,0x832082a8
	if (cr6.eq) goto loc_832082A8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x832082b0
	if (!cr6.lt) goto loc_832082B0;
	// li r11,1
	r11.s64 = 1;
	// b 0x832082b4
	goto loc_832082B4;
loc_832082A8:
	// li r11,0
	r11.s64 = 0;
	// b 0x832082b4
	goto loc_832082B4;
loc_832082B0:
	// li r11,2
	r11.s64 = 2;
loc_832082B4:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(208) );
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq cr6,0x832082d0
	if (cr6.eq) goto loc_832082D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_832082D0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r26,272(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(272) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bne 0x8320831c
	if (!cr0.eq) goto loc_8320831C;
	// li r7,2812
	ctx.r7.s64 = 2812;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320831C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r20,184(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + int32_t(184) );
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// lwz r11,-1300(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1300) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,24(r20)
	PPC_STORE_U16(r20.u32 + 24, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x832083b8
	if (cr6.lt) goto loc_832083B8;
	// beq cr6,0x832083b0
	if (cr6.eq) goto loc_832083B0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x832083b8
	if (!cr6.lt) goto loc_832083B8;
	// li r11,1
	r11.s64 = 1;
	// b 0x832083bc
	goto loc_832083BC;
loc_832083B0:
	// li r11,0
	r11.s64 = 0;
	// b 0x832083bc
	goto loc_832083BC;
loc_832083B8:
	// li r11,2
	r11.s64 = 2;
loc_832083BC:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x832083d4
	if (cr6.eq) goto loc_832083D4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_832083D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208414
	if (!cr0.eq) goto loc_83208414;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2829
	ctx.r7.s64 = 2829;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208414:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r20,184(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + int32_t(184) );
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1296) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,24(r20)
	PPC_STORE_U16(r20.u32 + 24, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x832084b0
	if (cr6.lt) goto loc_832084B0;
	// beq cr6,0x832084a8
	if (cr6.eq) goto loc_832084A8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x832084b0
	if (!cr6.lt) goto loc_832084B0;
	// li r11,1
	r11.s64 = 1;
	// b 0x832084b4
	goto loc_832084B4;
loc_832084A8:
	// li r11,0
	r11.s64 = 0;
	// b 0x832084b4
	goto loc_832084B4;
loc_832084B0:
	// li r11,2
	r11.s64 = 2;
loc_832084B4:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x832084cc
	if (cr6.eq) goto loc_832084CC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_832084CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320850c
	if (!cr0.eq) goto loc_8320850C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2846
	ctx.r7.s64 = 2846;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320850C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,24(r23)
	PPC_STORE_U16(r23.u32 + 24, ctx.r3.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,184(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(184) );
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// lwz r11,-1292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1292) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,24(r29)
	PPC_STORE_U16(r29.u32 + 24, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x832085a8
	if (cr6.lt) goto loc_832085A8;
	// beq cr6,0x832085a0
	if (cr6.eq) goto loc_832085A0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x832085a8
	if (!cr6.lt) goto loc_832085A8;
	// li r11,1
	r11.s64 = 1;
	// b 0x832085ac
	goto loc_832085AC;
loc_832085A0:
	// li r11,0
	r11.s64 = 0;
	// b 0x832085ac
	goto loc_832085AC;
loc_832085A8:
	// li r11,2
	r11.s64 = 2;
loc_832085AC:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x832085c4
	if (cr6.eq) goto loc_832085C4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_832085C4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832086d4
	if (!cr0.eq) goto loc_832086D4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,2863
	ctx.r7.s64 = 2863;
	// b 0x832086c4
	goto loc_832086C4;
loc_832085F8:
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-1304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1304) );
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8320865c
	if (cr6.lt) goto loc_8320865C;
	// beq cr6,0x83208654
	if (cr6.eq) goto loc_83208654;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8320865c
	if (!cr6.lt) goto loc_8320865C;
	// li r11,1
	r11.s64 = 1;
	// b 0x83208660
	goto loc_83208660;
loc_83208654:
	// li r11,0
	r11.s64 = 0;
	// b 0x83208660
	goto loc_83208660;
loc_8320865C:
	// li r11,2
	r11.s64 = 2;
loc_83208660:
	// lwz r21,208(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(208) );
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// beq cr6,0x8320867c
	if (cr6.eq) goto loc_8320867C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_8320867C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832086d4
	if (!cr0.eq) goto loc_832086D4;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(272) );
	// li r7,2880
	ctx.r7.s64 = 2880;
loc_832086C4:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832086D4:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831dabe0
	sub_831DABE0(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83208788
	if (!cr6.eq) goto loc_83208788;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208808
	if (!cr0.eq) goto loc_83208808;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// b 0x832087f4
	goto loc_832087F4;
loc_83208788:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208808
	if (!cr0.eq) goto loc_83208808;
	// li r7,2903
	ctx.r7.s64 = 2903;
loc_832087F4:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,364(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(364) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208808:
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,380
	ctx.r5.s64 = ctx.r1.s64 + 380;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dd0f0
	sub_831DD0F0(ctx, base);
	// lfs f4,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832088b8
	if (!cr0.eq) goto loc_832088B8;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832088B8:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831daaa0
	sub_831DAAA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83208bf8
	if (!cr6.eq) goto loc_83208BF8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83208990
	if (cr6.lt) goto loc_83208990;
	// beq cr6,0x83208988
	if (cr6.eq) goto loc_83208988;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83208990
	if (!cr6.lt) goto loc_83208990;
	// li r11,1
	r11.s64 = 1;
	// b 0x83208994
	goto loc_83208994;
loc_83208988:
	// li r11,0
	r11.s64 = 0;
	// b 0x83208994
	goto loc_83208994;
loc_83208990:
	// li r11,2
	r11.s64 = 2;
loc_83208994:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x832089ac
	if (cr6.eq) goto loc_832089AC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_832089AC:
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832089f0
	if (!cr0.eq) goto loc_832089F0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,540(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(540) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2944
	ctx.r7.s64 = 2944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832089F0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1304) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1280) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r30,240(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(240) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208aa0
	if (!cr0.eq) goto loc_83208AA0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,2957
	ctx.r7.s64 = 2957;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208AA0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1300(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1300) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r26)
	PPC_STORE_U32(r26.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r26)
	PPC_STORE_U32(r26.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,136(r26)
	PPC_STORE_U32(r26.u32 + 136, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1272(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1272) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r26)
	PPC_STORE_U32(r26.u32 + 140, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208b4c
	if (!cr0.eq) goto loc_83208B4C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2970
	ctx.r7.s64 = 2970;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208B4C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1300(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1300) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r26)
	PPC_STORE_U32(r26.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1280) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r26)
	PPC_STORE_U32(r26.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,136(r26)
	PPC_STORE_U32(r26.u32 + 136, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1280(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1280) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r26)
	PPC_STORE_U32(r26.u32 + 140, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208bf8
	if (!cr0.eq) goto loc_83208BF8;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2983
	ctx.r7.s64 = 2983;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208BF8:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831dae28
	sub_831DAE28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83208d20
	if (!cr6.eq) goto loc_83208D20;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208cac
	if (!cr0.eq) goto loc_83208CAC;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,2996
	ctx.r7.s64 = 2996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208CAC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1292) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207d78
	if (!cr0.eq) goto loc_83207D78;
	// li r7,3004
	ctx.r7.s64 = 3004;
	// b 0x83208f00
	goto loc_83208F00;
loc_83208D20:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831daf50
	sub_831DAF50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83208dc4
	if (!cr6.eq) goto loc_83208DC4;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207d78
	if (!cr0.eq) goto loc_83207D78;
	// li r7,3017
	ctx.r7.s64 = 3017;
	// b 0x83208f00
	goto loc_83208F00;
loc_83208DC4:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831db078
	sub_831DB078(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83208f18
	if (!cr6.eq) goto loc_83208F18;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1284(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1284) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83208e78
	if (!cr0.eq) goto loc_83208E78;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3029
	ctx.r7.s64 = 3029;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83208E78:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83207d78
	if (!cr0.eq) goto loc_83207D78;
	// li r7,3037
	ctx.r7.s64 = 3037;
loc_83208F00:
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
loc_83208F04:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83207d78
	goto loc_83207D78;
loc_83208F18:
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// li r7,3039
	ctx.r7.s64 = 3039;
	// b 0x83208f04
	goto loc_83208F04;
loc_83208F24:
	// lwz r28,184(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
loc_83208F28:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831db708
	sub_831DB708(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83209150
	if (!cr6.eq) goto loc_83209150;
	// li r3,30
	ctx.r3.s64 = 30;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r26.u8);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1296) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// stb r26,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r26.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r30,320(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(320) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320901c
	if (!cr0.eq) goto loc_8320901C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,3201
	ctx.r7.s64 = 3201;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320901C:
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1296) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r11,136(r29)
	PPC_STORE_U32(r29.u32 + 136, r11.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832090d0
	if (!cr0.eq) goto loc_832090D0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832090D0:
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1296(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1296) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1276(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1276) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83209154
	if (!cr0.eq) goto loc_83209154;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3224
	ctx.r7.s64 = 3224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83209154
	goto loc_83209154;
loc_83209150:
	// li r26,1
	r26.s64 = 1;
loc_83209154:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r29,r11,25480
	r29.s64 = r11.s64 + 25480;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x831d9600
	sub_831D9600(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832093e4
	if (!cr6.eq) goto loc_832093E4;
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dc9b0
	sub_831DC9B0(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dca60
	sub_831DCA60(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dcb10
	sub_831DCB10(ctx, base);
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r5,r1,356
	ctx.r5.s64 = ctx.r1.s64 + 356;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r6,r11,25480
	ctx.r6.s64 = r11.s64 + 25480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x831dcbc0
	sub_831DCBC0(ctx, base);
	// lfs f0,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	f0.f64 = double(temp.f32);
	// lfs f13,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// lfs f12,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x83209234
	if (!cr6.eq) goto loc_83209234;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// bne cr6,0x83209234
	if (!cr6.eq) goto loc_83209234;
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, f31.f64);
	// bne cr6,0x83209234
	if (!cr6.eq) goto loc_83209234;
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, f31.f64);
	// beq cr6,0x8320acf4
	if (cr6.eq) goto loc_8320ACF4;
loc_83209234:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x83209254
	if (!cr6.eq) goto loc_83209254;
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// bne cr6,0x83209254
	if (!cr6.eq) goto loc_83209254;
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// bne cr6,0x83209254
	if (!cr6.eq) goto loc_83209254;
	// fcmpu cr6,f11,f30
	cr6.compare(ctx.f11.f64, f30.f64);
	// beq cr6,0x8320acf4
	if (cr6.eq) goto loc_8320ACF4;
loc_83209254:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lwz r11,-1288(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1288) );
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x832092bc
	if (cr6.eq) goto loc_832092BC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_832092BC:
	// stw r25,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r17
	r11.u64 = PPC_LOAD_U32(r11.u32 + r17.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x832092fc
	if (cr6.lt) goto loc_832092FC;
	// beq cr6,0x832092f4
	if (cr6.eq) goto loc_832092F4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x832092fc
	if (!cr6.lt) goto loc_832092FC;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x83209300
	goto loc_83209300;
loc_832092F4:
	// li r11,0
	r11.s64 = 0;
	// b 0x83209300
	goto loc_83209300;
loc_832092FC:
	// li r11,2
	r11.s64 = 2;
loc_83209300:
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83209348
	if (!cr0.eq) goto loc_83209348;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3283
	ctx.r7.s64 = 3283;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209348:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f4,356(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f3,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832093e4
	if (!cr0.eq) goto loc_832093E4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3293
	ctx.r7.s64 = 3293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_832093E4:
	// lwz r11,-1320(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1320) );
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r30,-1312(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1312) );
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r30.u32);
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// addi r29,r1,152
	r29.s64 = ctx.r1.s64 + 152;
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r26.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x83205cb0
	sub_83205CB0(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320acf4
	if (!cr0.eq) goto loc_8320ACF4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,3309
	ctx.r7.s64 = 3309;
loc_83209490:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320949C:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lwz r10,184(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + int32_t(184) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// sth r11,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, r11.u16);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_832094B4:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwbrx r11,r9,r10
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_832094D4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, r11.u8);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_832094E0:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwbrx r11,r9,r10
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209500:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// addi r28,r11,25480
	r28.s64 = r11.s64 + 25480;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1488) );
	// lwz r27,1536(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1536) );
	// lbz r30,1(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x831d9680
	sub_831D9680(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8320958c
	if (!cr6.eq) goto loc_8320958C;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// addi r11,r11,14
	r11.s64 = r11.s64 + 14;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, ctx.r10.u32);
	// stwx r30,r11,r15
	PPC_STORE_U32(r11.u32 + r15.u32, r30.u32);
	// lwz r11,20(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(20) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r15)
	PPC_STORE_U32(r15.u32 + 20, r11.u32);
loc_8320958C:
	// rlwinm r11,r30,27,5,31
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(268) );
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832095c0
	if (!cr0.eq) goto loc_832095C0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(452) );
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x829ce870
	sub_829CE870(ctx, base);
loc_832095C0:
	// stw r30,176(r15)
	PPC_STORE_U32(r15.u32 + 176, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r15)
	PPC_STORE_U32(r15.u32 + 172, ctx.r3.u32);
	// rlwinm r11,r30,3,0,28
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83209604
	if (cr6.lt) goto loc_83209604;
	// beq cr6,0x832095fc
	if (cr6.eq) goto loc_832095FC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x83209604
	if (!cr6.lt) goto loc_83209604;
	// li r11,1
	r11.s64 = 1;
	// b 0x83209608
	goto loc_83209608;
loc_832095FC:
	// li r11,0
	r11.s64 = 0;
	// b 0x83209608
	goto loc_83209608;
loc_83209604:
	// li r11,2
	r11.s64 = 2;
loc_83209608:
	// stw r11,180(r15)
	PPC_STORE_U32(r15.u32 + 180, r11.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209610:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stw r10,176(r15)
	PPC_STORE_U32(r15.u32 + 176, ctx.r10.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831c5ab8
	sub_831C5AB8(ctx, base);
	// stw r3,172(r15)
	PPC_STORE_U32(r15.u32 + 172, ctx.r3.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209630:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,184(r15)
	r30.u64 = PPC_LOAD_U32(r15.u32 + int32_t(184) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831feae8
	sub_831FEAE8(ctx, base);
	// sth r3,24(r30)
	PPC_STORE_U16(r30.u32 + 24, ctx.r3.u16);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209660:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi. r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r7,r11,4916
	ctx.r7.s64 = r11.s64 + 4916;
	// beq 0x8320967c
	if (cr0.eq) goto loc_8320967C;
	// addi r7,r11,4868
	ctx.r7.s64 = r11.s64 + 4868;
loc_8320967C:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
loc_83209680:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// bl 0x83205958
	sub_83205958(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320969C:
	// li r7,3389
	ctx.r7.s64 = 3389;
loc_832096A0:
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
loc_832096A4:
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// b 0x83209490
	goto loc_83209490;
loc_832096B0:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r7,r11,6708
	ctx.r7.s64 = r11.s64 + 6708;
	// bne 0x8320967c
	if (!cr0.eq) goto loc_8320967C;
	// addi r7,r11,6852
	ctx.r7.s64 = r11.s64 + 6852;
	// b 0x8320967c
	goto loc_8320967C;
loc_832096D0:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83209758
	if (cr6.lt) goto loc_83209758;
	// beq cr6,0x8320974c
	if (cr6.eq) goto loc_8320974C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x83209740
	if (cr6.lt) goto loc_83209740;
	// beq cr6,0x83209734
	if (cr6.eq) goto loc_83209734;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x83209728
	if (cr6.lt) goto loc_83209728;
	// beq cr6,0x8320971c
	if (cr6.eq) goto loc_8320971C;
	// li r7,3424
	ctx.r7.s64 = 3424;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83209764
	goto loc_83209764;
loc_8320971C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1568
	r11.s64 = r11.s64 + 1568;
	// b 0x83209760
	goto loc_83209760;
loc_83209728:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1596
	r11.s64 = r11.s64 + 1596;
	// b 0x83209760
	goto loc_83209760;
loc_83209734:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1540
	r11.s64 = r11.s64 + 1540;
	// b 0x83209760
	goto loc_83209760;
loc_83209740:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1512
	r11.s64 = r11.s64 + 1512;
	// b 0x83209760
	goto loc_83209760;
loc_8320974C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1456
	r11.s64 = r11.s64 + 1456;
	// b 0x83209760
	goto loc_83209760;
loc_83209758:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1484
	r11.s64 = r11.s64 + 1484;
loc_83209760:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
loc_83209764:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(228) );
	// b 0x8320967c
	goto loc_8320967C;
loc_8320976C:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x832097f4
	if (cr6.lt) goto loc_832097F4;
	// beq cr6,0x832097e8
	if (cr6.eq) goto loc_832097E8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x832097dc
	if (cr6.lt) goto loc_832097DC;
	// beq cr6,0x832097d0
	if (cr6.eq) goto loc_832097D0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x832097c4
	if (cr6.lt) goto loc_832097C4;
	// beq cr6,0x832097b8
	if (cr6.eq) goto loc_832097B8;
	// li r7,3455
	ctx.r7.s64 = 3455;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x83209800
	goto loc_83209800;
loc_832097B8:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1408
	r11.s64 = r11.s64 + 1408;
	// b 0x832097fc
	goto loc_832097FC;
loc_832097C4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1372
	r11.s64 = r11.s64 + 1372;
	// b 0x832097fc
	goto loc_832097FC;
loc_832097D0:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1336
	r11.s64 = r11.s64 + 1336;
	// b 0x832097fc
	goto loc_832097FC;
loc_832097DC:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1300
	r11.s64 = r11.s64 + 1300;
	// b 0x832097fc
	goto loc_832097FC;
loc_832097E8:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1264
	r11.s64 = r11.s64 + 1264;
	// b 0x832097fc
	goto loc_832097FC;
loc_832097F4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r11,r11,1228
	r11.s64 = r11.s64 + 1228;
loc_832097FC:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
loc_83209800:
	// lwz r7,236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// b 0x8320967c
	goto loc_8320967C;
loc_83209808:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm. r29,r11,10,29,31
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x7;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8320acf4
	if (cr0.eq) goto loc_8320ACF4;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r27,564(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(564) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8320984c
	if (!cr6.eq) goto loc_8320984C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r27,r11
	r27.u64 = r11.u64;
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r11.u32);
	// stw r27,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r27.u32);
loc_8320984C:
	// stw r27,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r27.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r26,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r26.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r28,168(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// rlwinm r10,r8,19,23,28
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1F8;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// bl 0x83203768
	sub_83203768(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x83209908
	if (cr6.eq) goto loc_83209908;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x832098f4
	if (cr6.eq) goto loc_832098F4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// beq cr6,0x832098d0
	if (cr6.eq) goto loc_832098D0;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x83209930
	if (!cr6.eq) goto loc_83209930;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x832098e0
	goto loc_832098E0;
loc_832098D0:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
loc_832098E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// b 0x83209930
	goto loc_83209930;
loc_832098F4:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x83209918
	goto loc_83209918;
loc_83209908:
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f27.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
loc_83209918:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r11.u8);
loc_83209930:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83209970
	if (!cr0.eq) goto loc_83209970;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,516(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(516) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209970:
	// addi r11,r28,14
	r11.s64 = r28.s64 + 14;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// addi r9,r28,20
	ctx.r9.s64 = r28.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stwx r27,r11,r15
	PPC_STORE_U32(r11.u32 + r15.u32, r27.u32);
	// stwx r26,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, r26.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_832099A0:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// bne cr6,0x832099bc
	if (!cr6.eq) goto loc_832099BC;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// b 0x832099d4
	goto loc_832099D4;
loc_832099BC:
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// bne cr6,0x832099d0
	if (!cr6.eq) goto loc_832099D0;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x832099d4
	goto loc_832099D4;
loc_832099D0:
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_832099D4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x8320967c
	goto loc_8320967C;
loc_832099E0:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// addi r11,r11,-63
	r11.s64 = r11.s64 + -63;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(260) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x8320967c
	goto loc_8320967C;
loc_83209A0C:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209A34:
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lbz r7,201(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 201);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// addi r4,r11,-2
	ctx.r4.s64 = r11.s64 + -2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(232) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// bl 0x83205cb0
	sub_83205CB0(ctx, base);
loc_83209A80:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
loc_83209A84:
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209A8C:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// stb r10,158(r11)
	PPC_STORE_U8(r11.u32 + 158, ctx.r10.u8);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209AA0:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// addi r10,r11,152
	ctx.r10.s64 = r11.s64 + 152;
	// lbz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	PPC_STORE_U8(r11.u32 + 152, ctx.r10.u8);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209AC0:
	// li r11,1
	r11.s64 = 1;
	// stb r11,164(r15)
	PPC_STORE_U8(r15.u32 + 164, r11.u8);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209ACC:
	// addi r11,r11,-79
	r11.s64 = r11.s64 + -79;
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83209af8
	if (!cr6.eq) goto loc_83209AF8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1508(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(1508) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// stw r11,1508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1508, r11.u32);
loc_83209AF8:
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// li r11,0
	r11.s64 = 0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r30,14
	ctx.r9.s64 = r30.s64 + 14;
	// addi r8,r30,20
	ctx.r8.s64 = r30.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stwx r10,r9,r15
	PPC_STORE_U32(ctx.r9.u32 + r15.u32, ctx.r10.u32);
	// stwx r11,r8,r15
	PPC_STORE_U32(ctx.r8.u32 + r15.u32, r11.u32);
	// bne cr6,0x83209b48
	if (!cr6.eq) goto loc_83209B48;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(232) );
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x832059c8
	sub_832059C8(ctx, base);
	// b 0x83209a80
	goto loc_83209A80;
loc_83209B48:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x83203768
	sub_83203768(ctx, base);
	// b 0x83209a80
	goto loc_83209A80;
loc_83209B60:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,14
	ctx.r8.s64 = r11.s64 + 14;
	// addi r7,r11,20
	ctx.r7.s64 = r11.s64 + 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// stwx r9,r8,r15
	PPC_STORE_U32(ctx.r8.u32 + r15.u32, ctx.r9.u32);
	// stwx r10,r7,r15
	PPC_STORE_U32(ctx.r7.u32 + r15.u32, ctx.r10.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209B90:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lfs f1,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r29,168(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfsx f4,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// b 0x83209a84
	goto loc_83209A84;
loc_83209BE0:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,168(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// b 0x83209a80
	goto loc_83209A80;
loc_83209C1C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r7,r11,-548
	ctx.r7.s64 = r11.s64 + -548;
	// b 0x8320967c
	goto loc_8320967C;
loc_83209C28:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// addi r7,r11,5092
	ctx.r7.s64 = r11.s64 + 5092;
	// b 0x8320967c
	goto loc_8320967C;
loc_83209C34:
	// lwz r28,164(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83209c70
	if (cr6.eq) goto loc_83209C70;
	// rotlwi r10,r11,0
	ctx.r10.u64 = rotl32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83209c68
	if (!cr6.lt) goto loc_83209C68;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83209c6c
	goto loc_83209C6C;
loc_83209C68:
	// li r11,0
	r11.s64 = 0;
loc_83209C6C:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_83209C70:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r10,25480
	r27.s64 = ctx.r10.s64 + 25480;
	// addi r26,r1,536
	r26.s64 = ctx.r1.s64 + 536;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r25,1536(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1536) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r24,r11,16
	r24.u64 = r11.u32 & 0xFFFF;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x831dbb88
	sub_831DBB88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83209ce0
	if (cr6.eq) goto loc_83209CE0;
	// li r7,3713
	ctx.r7.s64 = 3713;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(296) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209CE0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83209d10
	if (cr0.eq) goto loc_83209D10;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,536(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(536) );
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202e10
	sub_83202E10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x83209d14
	goto loc_83209D14;
loc_83209D10:
	// li r30,0
	r30.s64 = 0;
loc_83209D14:
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(144) );
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// addic. r28,r29,1
	xer.ca = r29.u32 > 4294967294;
	r28.s64 = r29.s64 + 1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// bge 0x83209d5c
	if (!cr0.lt) goto loc_83209D5C;
	// li r7,3722
	ctx.r7.s64 = 3722;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(336) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209D5C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,1360(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1360) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bgt cr6,0x8320c2f0
	if (cr6.gt) goto loc_8320C2F0;
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83209db8
	if (cr0.eq) goto loc_83209DB8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x83209dbc
	goto loc_83209DBC;
loc_83209DB8:
	// li r14,0
	r14.s64 = 0;
loc_83209DBC:
	// stw r28,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r28.u32);
loc_83209DC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
loc_83209DDC:
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209DE4:
	// lwz r27,164(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83209e08
	if (!cr6.lt) goto loc_83209E08;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83209e0c
	goto loc_83209E0C;
loc_83209E08:
	// li r11,0
	r11.s64 = 0;
loc_83209E0C:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83209e30
	if (!cr6.eq) goto loc_83209E30;
	// li r7,3742
	ctx.r7.s64 = 3742;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(468) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209E30:
	// lwz r28,152(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(152) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,160(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83209e8c
	if (!cr0.eq) goto loc_83209E8C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83209e8c
	if (!cr0.eq) goto loc_83209E8C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
loc_83209E8C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83209eb4
	if (cr0.eq) goto loc_83209EB4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83209eb8
	goto loc_83209EB8;
loc_83209EB4:
	// li r29,0
	r29.s64 = 0;
loc_83209EB8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,156(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(156) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83209f1c
	if (cr0.eq) goto loc_83209F1C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x83209f20
	goto loc_83209F20;
loc_83209F1C:
	// li r14,0
	r14.s64 = 0;
loc_83209F20:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r27.u32);
	// bge 0x83209f70
	if (!cr0.lt) goto loc_83209F70;
	// li r7,3772
	ctx.r7.s64 = 3772;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(336) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209F70:
	// stw r27,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r27.u32);
	// stw r27,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r27.u32);
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// stw r27,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r27.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_83209F84:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r27,128(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r28,132(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83209fb4
	if (cr6.eq) goto loc_83209FB4;
	// li r7,3787
	ctx.r7.s64 = 3787;
	// lwz r5,524(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(524) );
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209FB4:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83209fdc
	if (cr6.eq) goto loc_83209FDC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(372) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3788
	ctx.r7.s64 = 3788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_83209FDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// bl 0x832030e8
	sub_832030E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(104) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,180(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r11,25480
	r26.s64 = r11.s64 + 25480;
	// addi r25,r1,376
	r25.s64 = ctx.r1.s64 + 376;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r24,12(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r23,1536(r24)
	r23.u64 = PPC_LOAD_U32(r24.u32 + int32_t(1536) );
	// extsh r22,r11
	r22.s64 = r11.s16;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// bl 0x831dbba0
	sub_831DBBA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8320a070
	if (cr6.eq) goto loc_8320A070;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(296) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3805
	ctx.r7.s64 = 3805;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320A070:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,376(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(376) );
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r10,3,23,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1F8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r9.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// stw r30,120(r14)
	PPC_STORE_U32(r14.u32 + 120, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320a0d8
	if (!cr0.eq) goto loc_8320A0D8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,3812
	ctx.r7.s64 = 3812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320A0D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df3d0
	sub_831DF3D0(ctx, base);
	// lwz r10,940(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(940) );
	// li r14,0
	r14.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r14,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, r14.u32);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r14,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, r14.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r11.u32);
	// bl 0x83203cb8
	sub_83203CB8(ctx, base);
	// bl 0x83203698
	sub_83203698(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a140
	if (cr0.eq) goto loc_8320A140;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
loc_8320A140:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// stw r11,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r11.u32);
	// b 0x83209dc0
	goto loc_83209DC0;
loc_8320A150:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a178
	if (cr0.eq) goto loc_8320A178;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x8320a17c
	goto loc_8320A17C;
loc_8320A178:
	// li r14,0
	r14.s64 = 0;
loc_8320A17C:
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// lwz r10,940(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(940) );
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r11,0
	r11.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, r11.u32);
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, r11.u32);
	// stw r10,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r10.u32);
	// bl 0x83203cb8
	sub_83203CB8(ctx, base);
	// stw r14,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r14.u32);
	// bl 0x83203698
	sub_83203698(ctx, base);
	// b 0x83209ddc
	goto loc_83209DDC;
loc_8320A1DC:
	// lwz r22,216(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// li r23,0
	r23.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320a224
	if (cr6.eq) goto loc_8320A224;
	// rotlwi r10,r11,0
	ctx.r10.u64 = rotl32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a218
	if (!cr6.lt) goto loc_8320A218;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a21c
	goto loc_8320A21C;
loc_8320A218:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8320A21C:
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stb r23,140(r25)
	PPC_STORE_U8(r25.u32 + 140, r23.u8);
loc_8320A224:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// beq cr6,0x8320a4f0
	if (cr6.eq) goto loc_8320A4F0;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// beq cr6,0x8320a3f4
	if (cr6.eq) goto loc_8320A3F4;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// bne cr6,0x8320a580
	if (!cr6.eq) goto loc_8320A580;
	// lwz r24,180(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// rlwinm r29,r10,16,26,31
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// rlwinm r27,r9,16,26,31
	r27.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// extsh r26,r9
	r26.s64 = ctx.r9.s16;
	// blt cr6,0x8320a2f4
	if (cr6.lt) goto loc_8320A2F4;
	// beq cr6,0x8320a2ec
	if (cr6.eq) goto loc_8320A2EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8320a2e4
	if (cr6.lt) goto loc_8320A2E4;
	// beq cr6,0x8320a2dc
	if (cr6.eq) goto loc_8320A2DC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x8320a2d4
	if (cr6.lt) goto loc_8320A2D4;
	// beq cr6,0x8320a2c8
	if (cr6.eq) goto loc_8320A2C8;
	// li r7,3905
	ctx.r7.s64 = 3905;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x8320a2fc
	goto loc_8320A2FC;
loc_8320A2C8:
	// li r11,40
	r11.s64 = 40;
loc_8320A2CC:
	// li r30,1
	r30.s64 = 1;
	// b 0x8320a2f8
	goto loc_8320A2F8;
loc_8320A2D4:
	// li r11,41
	r11.s64 = 41;
	// b 0x8320a2cc
	goto loc_8320A2CC;
loc_8320A2DC:
	// li r11,40
	r11.s64 = 40;
	// b 0x8320a2f8
	goto loc_8320A2F8;
loc_8320A2E4:
	// li r11,41
	r11.s64 = 41;
	// b 0x8320a2f8
	goto loc_8320A2F8;
loc_8320A2EC:
	// li r11,39
	r11.s64 = 39;
	// b 0x8320a2f8
	goto loc_8320A2F8;
loc_8320A2F4:
	// li r11,42
	r11.s64 = 42;
loc_8320A2F8:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
loc_8320A2FC:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(244) );
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// rlwinm r11,r9,27,31,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r6,14
	ctx.r9.s64 = ctx.r6.s64 + 14;
	// addi r10,r6,20
	ctx.r10.s64 = ctx.r6.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r30,14
	r11.s64 = r30.s64 + 14;
	// stwx r28,r9,r21
	PPC_STORE_U32(ctx.r9.u32 + r21.u32, r28.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stwx r8,r7,r21
	PPC_STORE_U32(ctx.r7.u32 + r21.u32, ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,20
	ctx.r8.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stwx r26,r9,r21
	PPC_STORE_U32(ctx.r9.u32 + r21.u32, r26.u32);
	// stwx r11,r8,r21
	PPC_STORE_U32(ctx.r8.u32 + r21.u32, r11.u32);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// bl 0x83203768
	sub_83203768(ctx, base);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83203768
	sub_83203768(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,1508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1508) );
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// stw r29,56(r21)
	PPC_STORE_U32(r21.u32 + 56, r29.u32);
	// stw r23,80(r21)
	PPC_STORE_U32(r21.u32 + 80, r23.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r23,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r23.u32);
	// b 0x8320a51c
	goto loc_8320A51C;
loc_8320A3F4:
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,25480
	r28.s64 = r11.s64 + 25480;
	// addi r27,r1,392
	r27.s64 = ctx.r1.s64 + 392;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r26,1536(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1536) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// extsh r24,r11
	r24.s64 = r11.s16;
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x831dbba0
	sub_831DBBA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8320a464
	if (cr6.eq) goto loc_8320A464;
	// li r7,3969
	ctx.r7.s64 = 3969;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(296) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320A464:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi. r30,r11,26
	r30.u64 = r11.u32 & 0x3F;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8320a48c
	if (cr0.eq) goto loc_8320A48C;
	// li r7,3972
	ctx.r7.s64 = 3972;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(384) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320A48C:
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,392(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(392) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r9.u32);
	// stw r10,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r10.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a558
	if (cr0.eq) goto loc_8320A558;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83203038
	sub_83203038(ctx, base);
	// b 0x8320a550
	goto loc_8320A550;
loc_8320A4F0:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
loc_8320A51C:
	// li r11,1
	r11.s64 = 1;
	// li r3,160
	ctx.r3.s64 = 160;
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a558
	if (cr0.eq) goto loc_8320A558;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83202f40
	sub_83202F40(ctx, base);
loc_8320A550:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8320a55c
	goto loc_8320A55C;
loc_8320A558:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8320A55C:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_8320A580:
	// lwz r30,160(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r14,144(r29)
	r14.u64 = PPC_LOAD_U32(r29.u32 + int32_t(144) );
loc_8320A5A8:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// b 0x83209ddc
	goto loc_83209DDC;
loc_8320A5B8:
	// lwz r30,216(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320a5e0
	if (!cr6.eq) goto loc_8320A5E0;
	// li r7,4002
	ctx.r7.s64 = 4002;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(352) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320A5E0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a600
	if (!cr6.lt) goto loc_8320A600;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a604
	goto loc_8320A604;
loc_8320A600:
	// li r11,0
	r11.s64 = 0;
loc_8320A604:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,1452(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a630
	if (cr0.eq) goto loc_8320A630;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x8320a634
	goto loc_8320A634;
loc_8320A630:
	// li r14,0
	r14.s64 = 0;
loc_8320A634:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r11.u32);
	// stw r14,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r14.u32);
	// bl 0x83202840
	sub_83202840(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// b 0x8320a5a8
	goto loc_8320A5A8;
loc_8320A654:
	// lwz r25,216(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320a67c
	if (!cr6.eq) goto loc_8320A67C;
	// li r7,4015
	ctx.r7.s64 = 4015;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(352) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320A67C:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a69c
	if (!cr6.lt) goto loc_8320A69C;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a6a0
	goto loc_8320A6A0;
loc_8320A69C:
	// li r11,0
	r11.s64 = 0;
loc_8320A6A0:
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r26,160(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r28,152(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(152) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r27,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r27.u32);
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83202478
	sub_83202478(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320a714
	if (!cr0.eq) goto loc_8320A714;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320a714
	if (!cr0.eq) goto loc_8320A714;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
loc_8320A714:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83202560
	sub_83202560(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// bne cr6,0x8320a77c
	if (!cr6.eq) goto loc_8320A77C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a754
	if (cr0.eq) goto loc_8320A754;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320a758
	goto loc_8320A758;
loc_8320A754:
	// li r30,0
	r30.s64 = 0;
loc_8320A758:
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
loc_8320A77C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320a7c0
	if (!cr0.eq) goto loc_8320A7C0;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320a7c0
	if (!cr0.eq) goto loc_8320A7C0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
loc_8320A7C0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,136
	ctx.r3.s64 = 136;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a7e8
	if (cr0.eq) goto loc_8320A7E8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202060
	sub_83202060(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x8320a7ec
	goto loc_8320A7EC;
loc_8320A7E8:
	// li r14,0
	r14.s64 = 0;
loc_8320A7EC:
	// stw r27,52(r14)
	PPC_STORE_U32(r14.u32 + 52, r27.u32);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r14,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r14.u32);
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320A81C:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320acf4
	if (cr6.eq) goto loc_8320ACF4;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a850
	if (!cr6.lt) goto loc_8320A850;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a854
	goto loc_8320A854;
loc_8320A850:
	// li r11,0
	r11.s64 = 0;
loc_8320A854:
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320a914
	if (cr6.eq) goto loc_8320A914;
	// rotlwi r10,r11,0
	ctx.r10.u64 = rotl32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a888
	if (!cr6.lt) goto loc_8320A888;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a88c
	goto loc_8320A88C;
loc_8320A888:
	// li r11,0
	r11.s64 = 0;
loc_8320A88C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x8320a914
	if (cr6.lt) goto loc_8320A914;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r29,156(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + int32_t(156) );
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a8d0
	if (cr0.eq) goto loc_8320A8D0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202c70
	sub_83202C70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320a8d4
	goto loc_8320A8D4;
loc_8320A8D0:
	// li r30,0
	r30.s64 = 0;
loc_8320A8D4:
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r27,160(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// stb r11,140(r28)
	PPC_STORE_U8(r28.u32 + 140, r11.u8);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320A914:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-24
	ctx.r7.s64 = r11.s64 + -24;
	// b 0x83209680
	goto loc_83209680;
loc_8320A924:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320acf4
	if (cr6.eq) goto loc_8320ACF4;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320aa1c
	if (cr6.eq) goto loc_8320AA1C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = rotl32(r11.u32, 0);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a964
	if (!cr6.lt) goto loc_8320A964;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a968
	goto loc_8320A968;
loc_8320A964:
	// li r11,0
	r11.s64 = 0;
loc_8320A968:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x8320aa1c
	if (cr6.lt) goto loc_8320AA1C;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320a9a0
	if (!cr6.lt) goto loc_8320A9A0;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8320a9a4
	goto loc_8320A9A4;
loc_8320A9A0:
	// li r11,0
	r11.s64 = 0;
loc_8320A9A4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,140
	ctx.r3.s64 = 140;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,1452(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1452) );
	// lwz r29,152(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + int32_t(152) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320a9d8
	if (cr0.eq) goto loc_8320A9D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83202cd0
	sub_83202CD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320a9dc
	goto loc_8320A9DC;
loc_8320A9D8:
	// li r30,0
	r30.s64 = 0;
loc_8320A9DC:
	// stw r27,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r27.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r27,160(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831df030
	sub_831DF030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83202840
	sub_83202840(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// stb r11,141(r28)
	PPC_STORE_U8(r28.u32 + 141, r11.u8);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320AA1C:
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83209680
	goto loc_83209680;
loc_8320AA28:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x83203658
	sub_83203658(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// beq cr6,0x8320ab58
	if (cr6.eq) goto loc_8320AB58;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x8320ab1c
	if (cr6.eq) goto loc_8320AB1C;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// beq cr6,0x8320aae0
	if (cr6.eq) goto loc_8320AAE0;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x8320aa98
	if (cr6.eq) goto loc_8320AA98;
	// li r11,0
	r11.s64 = 0;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,4159
	ctx.r7.s64 = 4159;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x8320ab68
	goto loc_8320AB68;
loc_8320AA98:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r28,r11,25480
	r28.s64 = r11.s64 + 25480;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x831db3e0
	sub_831DB3E0(ctx, base);
loc_8320AAD0:
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x8320ab64
	goto loc_8320AB64;
loc_8320AAE0:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r28,r11,25480
	r28.s64 = r11.s64 + 25480;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x831db2b8
	sub_831DB2B8(ctx, base);
	// b 0x8320aad0
	goto loc_8320AAD0;
loc_8320AB1C:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r11,-31972
	r11.s64 = -2095316992;
	// addi r28,r11,25480
	r28.s64 = r11.s64 + 25480;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(1488) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x831db198
	sub_831DB198(ctx, base);
	// b 0x8320aad0
	goto loc_8320AAD0;
loc_8320AB58:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
loc_8320AB64:
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_8320AB68:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320AB7C:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320aba0
	if (!cr6.lt) goto loc_8320ABA0;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320aba4
	goto loc_8320ABA4;
loc_8320ABA0:
	// li r11,0
	r11.s64 = 0;
loc_8320ABA4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8320acf4
	if (!cr0.eq) goto loc_8320ACF4;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8320ABBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r9,51
	cr6.compare<uint32_t>(ctx.r9.u32, 51, xer);
	// bne cr6,0x8320abd0
	if (!cr6.eq) goto loc_8320ABD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8320ABD0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r9,37
	cr6.compare<uint32_t>(ctx.r9.u32, 37, xer);
	// bne cr6,0x8320abbc
	if (!cr6.eq) goto loc_8320ABBC;
loc_8320ABE4:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320ABF0:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8320ac14
	if (!cr6.lt) goto loc_8320AC14;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8320ac18
	goto loc_8320AC18;
loc_8320AC14:
	// li r11,0
	r11.s64 = 0;
loc_8320AC18:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320acf4
	if (cr0.eq) goto loc_8320ACF4;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8320AC30:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r9,51
	cr6.compare<uint32_t>(ctx.r9.u32, 51, xer);
	// bne cr6,0x8320ac44
	if (!cr6.eq) goto loc_8320AC44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8320AC44:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r9,39
	cr6.compare<uint32_t>(ctx.r9.u32, 39, xer);
	// bne cr6,0x8320ac30
	if (!cr6.eq) goto loc_8320AC30;
	// b 0x8320abe4
	goto loc_8320ABE4;
loc_8320AC5C:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8320acf4
	if (cr0.eq) goto loc_8320ACF4;
loc_8320AC6C:
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// b 0x8320acf4
	goto loc_8320ACF4;
loc_8320AC7C:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320acec
	if (cr6.eq) goto loc_8320ACEC;
	// bl 0x832027e0
	sub_832027E0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320aca0
	if (cr6.eq) goto loc_8320ACA0;
	// mr r14,r11
	r14.u64 = r11.u64;
loc_8320ACA0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x8320ac6c
	goto loc_8320AC6C;
loc_8320ACB4:
	// lbz r11,202(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 202);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8320acf4
	if (!cr0.eq) goto loc_8320ACF4;
	// lwz r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(400) );
	// li r7,4227
	ctx.r7.s64 = 4227;
	// b 0x832096a4
	goto loc_832096A4;
loc_8320ACCC:
	// li r7,4233
	ctx.r7.s64 = 4233;
	// b 0x832096a0
	goto loc_832096A0;
loc_8320ACD4:
	// li r7,4238
	ctx.r7.s64 = 4238;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320ACEC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, r11.u8);
loc_8320ACF4:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x8320ad7c
	if (cr6.eq) goto loc_8320AD7C;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8320ad7c
	if (!cr6.eq) goto loc_8320AD7C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320ad60
	if (!cr0.eq) goto loc_8320AD60;
	// li r7,4253
	ctx.r7.s64 = 4253;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320AD60:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r15,0
	r15.s64 = 0;
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r15.u32);
	// lwz r11,-1320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-1320) );
	// lwz r10,-1312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-1312) );
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
loc_8320AD7C:
	// lbz r11,172(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8320ad98
	if (!cr0.eq) goto loc_8320AD98;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// b 0x83206a34
	goto loc_83206A34;
loc_8320AD98:
	// lwz r30,632(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(632) );
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// b 0x8320adf4
	goto loc_8320ADF4;
loc_8320ADA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320adec
	if (!cr0.eq) goto loc_8320ADEC;
	// li r7,4269
	ctx.r7.s64 = 4269;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(248) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320ADEC:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_8320ADF4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8320ada4
	if (!cr6.eq) goto loc_8320ADA4;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320ae10
	if (cr6.eq) goto loc_8320AE10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_8320AE10:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320c1d4
	if (cr6.eq) goto loc_8320C1D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320AE2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832030e8
	sub_832030E8(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// bl 0x83203290
	sub_83203290(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8320ae70
	if (cr6.eq) goto loc_8320AE70;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(408) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1955
	ctx.r7.s64 = 1955;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320AE70:
	// lwz r30,20(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320aebc
	if (cr0.eq) goto loc_8320AEBC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204fb8
	sub_83204FB8(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320AEBC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320aed0
	if (cr0.eq) goto loc_8320AED0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320AED0:
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// rlwinm r10,r7,19,23,28
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x1F8;
	// lwz r23,136(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,56(r29)
	PPC_STORE_U32(r29.u32 + 56, ctx.r10.u32);
	// stw r11,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r11.u32);
	// lwz r5,-1312(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-1312) );
	// bl 0x832059c8
	sub_832059C8(ctx, base);
	// lwz r20,192(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x83203310
	sub_83203310(ctx, base);
	// addi r25,r3,1
	r25.s64 = ctx.r3.s64 + 1;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// ble cr6,0x8320b074
	if (!cr6.gt) goto loc_8320B074;
loc_8320AF30:
	// lwz r28,20(r19)
	r28.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-1320(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(-1320) );
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// rlwinm. r9,r7,10,31,31
	ctx.r9.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r8,r7,9,31,31
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1;
	// stw r7,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r7.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// beq 0x8320af64
	if (cr0.eq) goto loc_8320AF64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r11.u32);
loc_8320AF64:
	// clrlwi. r26,r8,24
	r26.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x8320af78
	if (cr0.eq) goto loc_8320AF78;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stwx r10,r11,r22
	PPC_STORE_U32(r11.u32 + r22.u32, ctx.r10.u32);
loc_8320AF78:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// bne cr6,0x8320af94
	if (!cr6.eq) goto loc_8320AF94;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8320afac
	if (cr6.eq) goto loc_8320AFAC;
loc_8320AF94:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83203dd0
	sub_83203DD0(ctx, base);
loc_8320AFAC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8320afc0
	if (cr6.eq) goto loc_8320AFC0;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320AFC0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8320afd4
	if (cr6.eq) goto loc_8320AFD4;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320AFD4:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// rlwinm. r8,r11,9,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// rlwinm r10,r11,16,26,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// beq 0x8320affc
	if (cr0.eq) goto loc_8320AFFC;
	// addi r8,r30,50
	ctx.r8.s64 = r30.s64 + 50;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stwx r11,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, r11.u32);
loc_8320AFFC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r30,14
	ctx.r8.s64 = r30.s64 + 14;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r9.u32);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r24
	r11.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320b050
	if (cr0.eq) goto loc_8320B050;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// addi r11,r23,-1272
	r11.s64 = r23.s64 + -1272;
	// beq cr6,0x8320b048
	if (cr6.eq) goto loc_8320B048;
	// addi r11,r23,-1284
	r11.s64 = r23.s64 + -1284;
loc_8320B048:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
loc_8320B050:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83203768
	sub_83203768(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// blt cr6,0x8320af30
	if (cr6.lt) goto loc_8320AF30;
loc_8320B074:
	// lwz r30,664(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(664) );
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
loc_8320B084:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8320b0e0
	if (cr6.eq) goto loc_8320B0E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320b0d4
	if (!cr0.eq) goto loc_8320B0D4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(248) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2035
	ctx.r7.s64 = 2035;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B0D4:
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// b 0x8320b084
	goto loc_8320B084;
loc_8320B0E0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320b120
	if (!cr0.eq) goto loc_8320B120;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2040
	ctx.r7.s64 = 2040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B120:
	// lwz r30,632(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(632) );
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// b 0x8320b17c
	goto loc_8320B17C;
loc_8320B12C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320b174
	if (!cr0.eq) goto loc_8320B174;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(248) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B174:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_8320B17C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8320b12c
	if (!cr6.eq) goto loc_8320B12C;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x83203380
	sub_83203380(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8320c1d4
	if (cr0.eq) goto loc_8320C1D4;
	// lwz r5,416(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(416) );
	// li r7,2051
	ctx.r7.s64 = 2051;
	// b 0x8320bd3c
	goto loc_8320BD3C;
loc_8320B1A0:
	// li r7,1936
	ctx.r7.s64 = 1936;
	// b 0x8320bd38
	goto loc_8320BD38;
loc_8320B1A8:
	// li r7,1916
	ctx.r7.s64 = 1916;
	// b 0x8320bd38
	goto loc_8320BD38;
loc_8320B1B0:
	// cmpwi cr6,r30,79
	cr6.compare<int32_t>(r30.s32, 79, xer);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1388
	ctx.r7.s64 = 1388;
	// bne cr6,0x8320b1d0
	if (!cr6.eq) goto loc_8320B1D0;
	// li r7,1385
	ctx.r7.s64 = 1385;
loc_8320B1D0:
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B1D4:
	// cmpwi cr6,r30,66
	cr6.compare<int32_t>(r30.s32, 66, xer);
	// bgt cr6,0x8320c090
	if (cr6.gt) goto loc_8320C090;
	// beq cr6,0x8320bd50
	if (cr6.eq) goto loc_8320BD50;
	// addi r11,r30,-20
	r11.s64 = r30.s64 + -20;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bgt cr6,0x8320c1d4
	if (cr6.gt) goto loc_8320C1D4;
	// lis r12,-32247
	r12.s64 = -2113339392;
	// addi r12,r12,-6088
	r12.s64 = r12.s64 + -6088;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31967
	r12.s64 = -2094989312;
	// addi r12,r12,-19948
	r12.s64 = r12.s64 + -19948;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8320B214;
	case 1:
		goto loc_8320C1D4;
	case 2:
		goto loc_8320B344;
	case 3:
		goto loc_8320B5FC;
	case 4:
		goto loc_8320B480;
	case 5:
		goto loc_8320B994;
	case 6:
		goto loc_8320BA34;
	case 7:
		goto loc_8320B5FC;
	case 8:
		goto loc_8320BC60;
	case 9:
		goto loc_8320BD34;
	default:
		__builtin_unreachable();
	}
loc_8320B214:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r8,r6,19,23,28
	ctx.r8.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1F8;
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r29,4(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// cmpwi cr6,r29,19
	cr6.compare<int32_t>(r29.s32, 19, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r7.u32);
	// extsh r28,r11
	r28.s64 = r11.s16;
	// beq cr6,0x8320b284
	if (cr6.eq) goto loc_8320B284;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(r29.s32, 20, xer);
	// beq cr6,0x8320b284
	if (cr6.eq) goto loc_8320B284;
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,1409
	ctx.r7.s64 = 1409;
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(424) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x8320b28c
	goto loc_8320B28C;
loc_8320B284:
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
loc_8320B28C:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bgt cr6,0x8320b2ac
	if (cr6.gt) goto loc_8320B2AC;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,432(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(432) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1410
	ctx.r7.s64 = 1410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B2AC:
	// lbz r11,2116(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8320b2d0
	if (cr0.eq) goto loc_8320B2D0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(440) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B2D0:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// stw r29,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,2124(r31)
	PPC_STORE_U32(r31.u32 + 2124, r30.u32);
	// stw r11,2128(r31)
	PPC_STORE_U32(r31.u32 + 2128, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,2116(r31)
	PPC_STORE_U8(r31.u32 + 2116, ctx.r10.u8);
	// bl 0x831df090
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c1d4
	if (cr0.eq) goto loc_8320C1D4;
	// lwz r30,2124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2124) );
	// b 0x8320b334
	goto loc_8320B334;
loc_8320B300:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,-1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1312) );
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8320B334:
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2128) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8320b300
	if (cr6.lt) goto loc_8320B300;
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320B344:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320b380
	if (cr0.eq) goto loc_8320B380;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,1448
	ctx.r7.s64 = 1448;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320B380:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r3,r11,12,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r3,r11,10,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x3;
	// lwz r28,16(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lbz r11,0(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r11,r11,7,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320B480:
	// li r11,1
	r11.s64 = 1;
	// lbz r29,1(r15)
	r29.u64 = PPC_LOAD_U8(r15.u32 + 1);
	// stb r11,2057(r31)
	PPC_STORE_U8(r31.u32 + 2057, r11.u8);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320b4c8
	if (cr0.eq) goto loc_8320B4C8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,1493
	ctx.r7.s64 = 1493;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320B4C8:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x831eeb20
	sub_831EEB20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320b52c
	if (!cr0.eq) goto loc_8320B52C;
	// li r7,1504
	ctx.r7.s64 = 1504;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(448) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B52C:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// addi r29,r31,184
	r29.s64 = r31.s64 + 184;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r3,r11,12,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r3,r11,10,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x3;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// lbz r11,0(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm r11,r11,7,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320B5FC:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// bl 0x83203550
	sub_83203550(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// rlwinm r24,r10,11,24,31
	r24.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFF;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320b684
	if (cr0.eq) goto loc_8320B684;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// bl 0x832034d0
	sub_832034D0(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// rlwinm r20,r10,24,31,31
	r20.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// stw r30,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r30.u32);
	// b 0x8320b698
	goto loc_8320B698;
loc_8320B684:
	// li r27,5
	r27.s64 = 5;
	// li r25,5
	r25.s64 = 5;
	// li r23,5
	r23.s64 = 5;
	// li r21,5
	r21.s64 = 5;
	// li r20,0
	r20.s64 = 0;
loc_8320B698:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r17,128(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r18,132(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r28,33
	cr6.compare<int32_t>(r28.s32, 33, xer);
	// beq cr6,0x8320b6d8
	if (cr6.eq) goto loc_8320B6D8;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(456) );
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B6D8:
	// lwz r11,2124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2124) );
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8320b6e8
	if (cr6.lt) goto loc_8320B6E8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8320B6E8:
	// stw r11,2124(r31)
	PPC_STORE_U32(r31.u32 + 2124, r11.u32);
	// lwz r11,2128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(2128) );
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x8320b6fc
	if (cr6.gt) goto loc_8320B6FC;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
loc_8320B6FC:
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,2128(r31)
	PPC_STORE_U32(r31.u32 + 2128, r11.u32);
	// stw r10,2120(r31)
	PPC_STORE_U32(r31.u32 + 2120, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320b72c
	if (cr0.eq) goto loc_8320B72C;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,464(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(464) );
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B72C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831ee258
	sub_831EE258(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r26,r19
	r26.u64 = r19.u64;
	// bne 0x8320b770
	if (!cr0.eq) goto loc_8320B770;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x831ee278
	sub_831EE278(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8320B770:
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r11,-1308(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1308) );
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// beq cr6,0x8320b7a4
	if (cr6.eq) goto loc_8320B7A4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// stb r19,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, r19.u8);
loc_8320B7A4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8320b7cc
	if (cr6.eq) goto loc_8320B7CC;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// stb r19,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, r19.u8);
loc_8320B7CC:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x8320b7f4
	if (cr6.eq) goto loc_8320B7F4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// stb r19,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, r19.u8);
loc_8320B7F4:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x8320b81c
	if (cr6.eq) goto loc_8320B81C;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x831fa890
	sub_831FA890(ctx, base);
	// stb r19,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, r19.u8);
loc_8320B81C:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bne cr6,0x8320b838
	if (!cr6.eq) goto loc_8320B838;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x8320c1d4
	if (!cr6.eq) goto loc_8320C1D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_8320B838:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// bne cr6,0x8320c1d4
	if (!cr6.eq) goto loc_8320C1D4;
	// lwz r28,156(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq 0x8320b870
	if (cr0.eq) goto loc_8320B870;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8320b87c
	goto loc_8320B87C;
loc_8320B870:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8320B87C:
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(r22.s32, 5, xer);
	// beq cr6,0x8320b88c
	if (cr6.eq) goto loc_8320B88C;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// bne cr6,0x8320c1d4
	if (!cr6.eq) goto loc_8320C1D4;
loc_8320B88C:
	// lwz r11,-1312(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1312) );
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x8320b8b0
	if (cr6.eq) goto loc_8320B8B0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(472) );
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1628
	ctx.r7.s64 = 1628;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B8B0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// bl 0x831ee278
	sub_831EE278(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1452) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x8320b918
	if (cr0.eq) goto loc_8320B918;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83200038
	sub_83200038(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8320b91c
	goto loc_8320B91C;
loc_8320B918:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_8320B91C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831fd370
	sub_831FD370(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(r22.s32, 5, xer);
	// bne cr6,0x8320b968
	if (!cr6.eq) goto loc_8320B968;
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// b 0x8320b97c
	goto loc_8320B97C;
loc_8320B968:
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(r22.s32, 6, xer);
	// bne cr6,0x8320b97c
	if (!cr6.eq) goto loc_8320B97C;
	// li r11,1
	r11.s64 = 1;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// stb r11,126(r31)
	PPC_STORE_U8(r31.u32 + 126, r11.u8);
loc_8320B97C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320B994:
	// lbz r11,0(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 0);
	// clrlwi r30,r11,29
	r30.u64 = r11.u32 & 0x7;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// blt cr6,0x8320b9bc
	if (cr6.lt) goto loc_8320B9BC;
	// li r7,1657
	ctx.r7.s64 = 1657;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,480(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(480) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320B9BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lbz r11,1(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 1);
	// lwz r10,1360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(1360) );
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8320c308
	if (cr6.gt) goto loc_8320C308;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(268) );
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// rlwinm r10,r10,5,30,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// beq cr6,0x8320ba24
	if (cr6.eq) goto loc_8320BA24;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_8320BA24:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320BA34:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x831fc738
	sub_831FC738(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lhz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// clrlwi r28,r9,26
	r28.u64 = ctx.r9.u32 & 0x3F;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// lwz r11,-1316(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1316) );
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm. r11,r11,1,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320bad0
	if (cr0.eq) goto loc_8320BAD0;
	// lwz r11,-1308(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1308) );
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// clrlwi. r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// beq 0x8320ba8c
	if (cr0.eq) goto loc_8320BA8C;
	// li r11,4
	r11.s64 = 4;
	// li r30,1
	r30.s64 = 1;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r11.u8);
loc_8320BA8C:
	// rlwinm. r11,r9,0,28,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320baa0
	if (cr0.eq) goto loc_8320BAA0;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r11.u8);
loc_8320BAA0:
	// rlwinm. r11,r9,0,26,27
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320bab4
	if (cr0.eq) goto loc_8320BAB4;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, r11.u8);
loc_8320BAB4:
	// rlwinm. r11,r9,0,24,25
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320bac8
	if (cr0.eq) goto loc_8320BAC8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, r11.u8);
loc_8320BAC8:
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320BAD0:
	// lwz r29,20(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320bbc4
	if (cr0.eq) goto loc_8320BBC4;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm. r11,r11,1,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320bb04
	if (cr0.eq) goto loc_8320BB04;
	// li r7,1713
	ctx.r7.s64 = 1713;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(488) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320BB04:
	// lwz r11,-1308(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1308) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320bb38
	if (!cr6.eq) goto loc_8320BB38;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, r11.u8);
loc_8320BB38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320bb64
	if (!cr6.eq) goto loc_8320BB64;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, r11.u8);
loc_8320BB64:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320bb90
	if (!cr6.eq) goto loc_8320BB90;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, r11.u8);
loc_8320BB90:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320bbb8
	if (!cr6.eq) goto loc_8320BBB8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, r11.u8);
loc_8320BBB8:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320BBC4:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83205558
	sub_83205558(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r30,696(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(696) );
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// b 0x8320bc4c
	goto loc_8320BC4C;
loc_8320BBFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fc718
	sub_831FC718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320bc44
	if (!cr0.eq) goto loc_8320BC44;
	// li r7,1746
	ctx.r7.s64 = 1746;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(248) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320BC44:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_8320BC4C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8320bbfc
	if (!cr6.eq) goto loc_8320BBFC;
	// stw r18,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, r18.u32);
	// stw r18,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, r18.u32);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320BC60:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8320bcb0
	if (!cr6.gt) goto loc_8320BCB0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x8320bcb8
	goto loc_8320BCB8;
loc_8320BCB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fc9d0
	sub_831FC9D0(ctx, base);
loc_8320BCB8:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8320bcdc
	if (!cr6.eq) goto loc_8320BCDC;
	// li r7,1765
	ctx.r7.s64 = 1765;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,496(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(496) );
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320BCDC:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// bl 0x83203380
	sub_83203380(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8320c1d4
	if (!cr0.gt) goto loc_8320C1D4;
	// addi r9,r30,928
	ctx.r9.s64 = r30.s64 + 928;
	// addi r11,r30,896
	r11.s64 = r30.s64 + 896;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8320BCF8:
	// lwz r8,20(r19)
	ctx.r8.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r8,20(r19)
	ctx.r8.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r8.u32);
	// bne 0x8320bcf8
	if (!cr0.eq) goto loc_8320BCF8;
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320BD34:
	// li r7,1906
	ctx.r7.s64 = 1906;
loc_8320BD38:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8320BD3C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320BD50:
	// lwz r11,7484(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(7484) );
	// li r3,143
	ctx.r3.s64 = 143;
	// lwz r10,504(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(504) );
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831ff250
	sub_831FF250(ctx, base);
	// lbz r21,200(r1)
	r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r21,0
	cr0.compare<uint32_t>(r21.u32, 0, xer);
	// stw r10,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r10.u32);
	// beq 0x8320bdbc
	if (cr0.eq) goto loc_8320BDBC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_8320BDBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// lwz r17,128(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r18,132(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320be04
	if (!cr0.eq) goto loc_8320BE04;
	// li r7,1794
	ctx.r7.s64 = 1794;
	// lwz r5,512(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(512) );
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320BE04:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// rlwinm. r20,r11,9,26,31
	r20.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x3F;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// rlwinm r22,r11,16,26,31
	r22.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0x3F;
	// beq 0x8320be38
	if (cr0.eq) goto loc_8320BE38;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(520) );
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1802
	ctx.r7.s64 = 1802;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320BE38:
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(r20.s32, 4, xer);
	// ble cr6,0x8320be44
	if (!cr6.gt) goto loc_8320BE44;
	// li r20,0
	r20.s64 = 0;
loc_8320BE44:
	// lwz r29,20(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320be5c
	if (cr0.eq) goto loc_8320BE5C;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320BE5C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r9,r8,19,23,28
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1F8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm. r9,r7,10,31,31
	ctx.r9.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r27,4(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// beq 0x8320be94
	if (cr0.eq) goto loc_8320BE94;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
loc_8320BE94:
	// lwz r10,20(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// rlwinm r10,r9,19,23,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1F8;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r24,4(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x831eeac8
	sub_831EEAC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x831fede8
	sub_831FEDE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r29,136(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// li r19,1
	r19.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r19,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r19.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r28.u32);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// stw r27,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-1320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1320) );
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r11.u32);
	// bl 0x83203768
	sub_83203768(ctx, base);
	// lwz r11,-1284(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-1284) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x831ffe70
	sub_831FFE70(ctx, base);
	// extsh r11,r22
	r11.s64 = r22.s16;
	// li r10,14
	ctx.r10.s64 = 14;
	// sth r11,342(r1)
	PPC_STORE_U16(ctx.r1.u32 + 342, r11.u16);
	// li r9,39
	ctx.r9.s64 = 39;
	// li r8,40
	ctx.r8.s64 = 40;
	// sth r11,314(r1)
	PPC_STORE_U16(ctx.r1.u32 + 314, r11.u16);
	// li r7,41
	ctx.r7.s64 = 41;
	// sth r9,340(r1)
	PPC_STORE_U16(ctx.r1.u32 + 340, ctx.r9.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r10,316(r1)
	PPC_STORE_U16(ctx.r1.u32 + 316, ctx.r10.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// sth r7,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r7.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,318(r1)
	PPC_STORE_U16(ctx.r1.u32 + 318, r11.u16);
	// sth r8,324(r1)
	PPC_STORE_U16(ctx.r1.u32 + 324, ctx.r8.u16);
	// sth r11,326(r1)
	PPC_STORE_U16(ctx.r1.u32 + 326, r11.u16);
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(316) );
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(312) );
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(340) );
	// bl 0x831ffec8
	sub_831FFEC8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8320bfc8
	if (cr6.eq) goto loc_8320BFC8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
loc_8320BFC8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c008
	if (!cr0.eq) goto loc_8320C008;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(240) );
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1846
	ctx.r7.s64 = 1846;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320C008:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x83201318
	sub_83201318(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// stw r24,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83203218
	sub_83203218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df980
	sub_831DF980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x83201e40
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831fee78
	sub_831FEE78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c088
	if (!cr0.eq) goto loc_8320C088;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(288) );
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r7,1857
	ctx.r7.s64 = 1857;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320C088:
	// stb r19,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r19.u8);
	// b 0x8320c1d4
	goto loc_8320C1D4;
loc_8320C090:
	// cmpwi cr6,r30,67
	cr6.compare<int32_t>(r30.s32, 67, xer);
	// bne cr6,0x8320c1d4
	if (!cr6.eq) goto loc_8320C1D4;
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r30,0
	r30.s64 = 0;
	// lhz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,-1316(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1316) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c18c
	if (cr0.eq) goto loc_8320C18C;
	// lwz r11,-1308(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-1308) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320c0fc
	if (!cr6.eq) goto loc_8320C0FC;
	// li r11,4
	r11.s64 = 4;
	// li r30,1
	r30.s64 = 1;
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, r11.u8);
loc_8320C0FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320c128
	if (!cr6.eq) goto loc_8320C128;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, r11.u8);
loc_8320C128:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320c154
	if (!cr6.eq) goto loc_8320C154;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r11,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, r11.u8);
loc_8320C154:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320fe80
	sub_8320FE80(ctx, base);
	// addi r11,r27,7964
	r11.s64 = r27.s64 + 7964;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320c17c
	if (!cr6.eq) goto loc_8320C17C;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stb r11,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, r11.u8);
loc_8320C17C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320C18C:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r9,20(r19)
	PPC_STORE_U32(r19.u32 + 20, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// rlwinm. r11,r11,10,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c1ac
	if (cr0.eq) goto loc_8320C1AC;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
loc_8320C1AC:
	// lwz r11,20(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(20) );
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,20(r19)
	PPC_STORE_U32(r19.u32 + 20, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83205558
	sub_83205558(ctx, base);
loc_8320C1D4:
	// lwz r19,940(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(940) );
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x831e66d8
	sub_831E66D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x832063a4
	if (!cr0.eq) goto loc_832063A4;
	// lwz r25,164(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r26,268(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(268) );
	// lwz r27,216(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
loc_8320C1F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831e0790
	sub_831E0790(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(168) );
	// bl 0x83202840
	sub_83202840(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8320c21c
	if (cr6.eq) goto loc_8320C21C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_8320C21C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8320c230
	if (cr6.eq) goto loc_8320C230;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8320d3d0
	sub_8320D3D0(ctx, base);
loc_8320C230:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(264) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(304) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(280) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(224) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8320c2a4
	if (cr6.eq) goto loc_8320C2A4;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// lwz r3,-4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320C2A4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831f2730
	sub_831F2730(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c2e0
	if (!cr0.eq) goto loc_8320C2E0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r7,4297
	ctx.r7.s64 = 4297;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r5,r11,-4172
	ctx.r5.s64 = r11.s64 + -4172;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320C2E0:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca754c
	// b 0x82ca2c00
	return;
loc_8320C2F0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r10,26
	ctx.r10.s64 = 26;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ca9260
	sub_82CA9260(ctx, base);
loc_8320C308:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r10,25
	ctx.r10.s64 = 25;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,1364(r11)
	PPC_STORE_U32(r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82ca9260
	sub_82CA9260(ctx, base);
}

PPC_WEAK_FUNC(sub_83205F58) {
	__imp__sub_83205F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320C320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8320C344:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// andc r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8320c36c
	if (cr6.eq) goto loc_8320C36C;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8320C36C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// blt cr6,0x8320c344
	if (cr6.lt) goto loc_8320C344;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320C320) {
	__imp__sub_8320C320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320C388) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,1
	r26.s64 = 1;
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8320c428
	if (!cr6.gt) goto loc_8320C428;
	// addi r11,r31,7
	r11.s64 = r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
loc_8320C3BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83210060
	sub_83210060(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8320c41c
	if (cr0.lt) goto loc_8320C41C;
	// rlwinm r11,r3,27,5,31
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8320c41c
	if (!cr0.eq) goto loc_8320C41C;
	// lwz r9,176(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(176) );
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8320C41C:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bgt 0x8320c3bc
	if (cr0.gt) goto loc_8320C3BC;
loc_8320C428:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8320c474
	if (!cr6.gt) goto loc_8320C474;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(228) );
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c474
	if (!cr0.eq) goto loc_8320C474;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83210060
	sub_83210060(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8320c474
	if (cr0.lt) goto loc_8320C474;
	// rlwinm r11,r3,27,5,31
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
loc_8320C474:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8320C388) {
	__imp__sub_8320C388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320C480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_8320C498:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8320c498
	if (cr6.lt) goto loc_8320C498;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320C480) {
	__imp__sub_8320C480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320C4B8) {
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
	// bl 0x831e2dc8
	sub_831E2DC8(ctx, base);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8320c560
	if (cr6.lt) goto loc_8320C560;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r29,0
	r29.s64 = 0;
loc_8320C4F0:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320c50c
	if (cr6.eq) goto loc_8320C50C;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320C50C:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320c528
	if (cr6.eq) goto loc_8320C528;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320C528:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8320c544
	if (cr6.eq) goto loc_8320C544;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x831c59e0
	sub_831C59E0(ctx, base);
loc_8320C544:
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// ble cr6,0x8320c4f0
	if (!cr6.gt) goto loc_8320C4F0;
loc_8320C560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8320C4B8) {
	__imp__sub_8320C4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320C568) {
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
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// lwz r28,136(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(136) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8320c5fc
	goto loc_8320C5FC;
loc_8320C594:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8320c5c4
	if (!cr6.gt) goto loc_8320C5C4;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
loc_8320C5A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8320c5a8
	if (cr6.lt) goto loc_8320C5A8;
loc_8320C5C4:
	// lwz r31,28(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// b 0x8320c5ec
	goto loc_8320C5EC;
loc_8320C5CC:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c5e8
	if (cr0.eq) goto loc_8320C5E8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8320c388
	sub_8320C388(ctx, base);
loc_8320C5E8:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_8320C5EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320c5cc
	if (!cr6.eq) goto loc_8320C5CC;
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
loc_8320C5FC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8320c594
	if (!cr6.eq) goto loc_8320C594;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320C568) {
	__imp__sub_8320C568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320C610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// stw r3,180(r27)
	PPC_STORE_U32(r27.u32 + 180, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831e2d20
	sub_831E2D20(ctx, base);
	// addi r18,r27,128
	r18.s64 = r27.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r19,1
	r19.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8320c8e4
	if (cr6.lt) goto loc_8320C8E4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r22,r31,4
	r22.s64 = r31.s64 + 4;
	// addi r20,r11,-3056
	r20.s64 = r11.s64 + -3056;
loc_8320C66C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1456) );
	// bl 0x831dfd68
	sub_831DFD68(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// mr r11,r19
	r11.u64 = r19.u64;
	// lwz r23,100(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// stw r25,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r25.u32);
	// b 0x8320c8c0
	goto loc_8320C8C0;
loc_8320C6C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c8b0
	if (cr0.eq) goto loc_8320C8B0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8320c8b0
	if (!cr0.eq) goto loc_8320C8B0;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8320C6EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c81c
	if (!cr0.eq) goto loc_8320C81C;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c804
	if (cr0.eq) goto loc_8320C804;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8320c7b8
	if (cr6.lt) goto loc_8320C7B8;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_8320C714:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8320c74c
	if (cr6.eq) goto loc_8320C74C;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(228) );
	// rlwinm. r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c74c
	if (!cr0.eq) goto loc_8320C74C;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne 0x8320c750
	if (!cr0.eq) goto loc_8320C750;
loc_8320C74C:
	// li r11,0
	r11.s64 = 0;
loc_8320C750:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c7a4
	if (cr0.eq) goto loc_8320C7A4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831ff940
	sub_831FF940(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c7a4
	if (!cr0.eq) goto loc_8320C7A4;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// rlwinm r11,r10,27,5,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8320c7a4
	if (!cr0.eq) goto loc_8320C7A4;
	// lwzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// slw r10,r19,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r23
	PPC_STORE_U32(r11.u32 + r23.u32, ctx.r10.u32);
loc_8320C7A4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8320c714
	if (!cr6.gt) goto loc_8320C714;
loc_8320C7B8:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// rlwinm. r11,r11,23,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320c804
	if (cr0.eq) goto loc_8320C804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831df190
	sub_831DF190(ctx, base);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(180) );
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8320c804
	if (!cr0.eq) goto loc_8320C804;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_8320C804:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(228) );
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// rlwinm r11,r11,30,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x8320c6ec
	if (!cr6.eq) goto loc_8320C6EC;
loc_8320C81C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8320C824:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8320c8b0
	if (!cr0.eq) goto loc_8320C8B0;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(228) );
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8320c898
	if (cr0.eq) goto loc_8320C898;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8320c868
	if (cr6.eq) goto loc_8320C868;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8320c868
	if (!cr0.eq) goto loc_8320C868;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bne 0x8320c86c
	if (!cr0.eq) goto loc_8320C86C;
loc_8320C868:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8320C86C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8320c898
	if (cr0.eq) goto loc_8320C898;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + r25.u32, ctx.r9.u32);
loc_8320C898:
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(228) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bne cr6,0x8320c824
	if (!cr6.eq) goto loc_8320C824;
loc_8320C8B0:
	// lwz r11,228(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(228) );
	// lwz r26,8(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,30,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
loc_8320C8C0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8320c6c0
	if (!cr6.eq) goto loc_8320C6C0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// cmpw cr6,r21,r3
	cr6.compare<int32_t>(r21.s32, ctx.r3.s32, xer);
	// ble cr6,0x8320c66c
	if (!cr6.gt) goto loc_8320C66C;
loc_8320C8E4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831e2dc8
	sub_831E2DC8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8320C8F0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8320ca64
	if (cr6.lt) goto loc_8320CA64;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
loc_8320C90C:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320ca4c
	if (!cr0.eq) goto loc_8320CA4C;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8320c960
	if (!cr6.gt) goto loc_8320C960;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8320C944:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8320c944
	if (cr6.lt) goto loc_8320C944;
loc_8320C960:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_8320C970:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8320c988
	if (!cr6.gt) goto loc_8320C988;
	// li r11,0
	r11.s64 = 0;
	// b 0x8320c994
	goto loc_8320C994;
loc_8320C988:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mr r11,r19
	r11.u64 = r19.u64;
	// lwzx r7,r10,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_8320C994:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8320ca30
	if (cr0.eq) goto loc_8320CA30;
	// lwz r8,100(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(100) );
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8320c9e8
	if (cr0.eq) goto loc_8320C9E8;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8320c9e0
	if (!cr6.gt) goto loc_8320C9E0;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
loc_8320C9C4:
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8320c9c4
	if (cr6.lt) goto loc_8320C9C4;
loc_8320C9E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8320ca24
	goto loc_8320CA24;
loc_8320C9E8:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8320ca24
	if (!cr6.gt) goto loc_8320CA24;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8320CA00:
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// or r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 | r26.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x8320ca00
	if (cr6.lt) goto loc_8320CA00;
loc_8320CA24:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x8320c970
	goto loc_8320C970;
loc_8320CA30:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// bl 0x8320c320
	sub_8320C320(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// or r28,r11,r10
	r28.u64 = r11.u64 | ctx.r10.u64;
loc_8320CA4C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bl 0x831fc770
	sub_831FC770(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x8320c90c
	if (!cr6.gt) goto loc_8320C90C;
loc_8320CA64:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8320c8f0
	if (!cr0.eq) goto loc_8320C8F0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	return;
}

PPC_WEAK_FUNC(sub_8320C610) {
	__imp__sub_8320C610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CA78) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cac4
	if (cr0.eq) goto loc_8320CAC4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fdcb0
	sub_831FDCB0(ctx, base);
	// b 0x8320cac8
	goto loc_8320CAC8;
loc_8320CAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CAC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CA78) {
	__imp__sub_8320CA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CAD0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cb1c
	if (cr0.eq) goto loc_8320CB1C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fdb70
	sub_831FDB70(ctx, base);
	// b 0x8320cb20
	goto loc_8320CB20;
loc_8320CB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CB20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CAD0) {
	__imp__sub_8320CAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CB28) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cb74
	if (cr0.eq) goto loc_8320CB74;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fdd58
	sub_831FDD58(ctx, base);
	// b 0x8320cb78
	goto loc_8320CB78;
loc_8320CB74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CB78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CB28) {
	__imp__sub_8320CB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CB80) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cbcc
	if (cr0.eq) goto loc_8320CBCC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe7b0
	sub_831FE7B0(ctx, base);
	// b 0x8320cbd0
	goto loc_8320CBD0;
loc_8320CBCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CBD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CB80) {
	__imp__sub_8320CB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CBD8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cc24
	if (cr0.eq) goto loc_8320CC24;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe040
	sub_831FE040(ctx, base);
	// b 0x8320cc28
	goto loc_8320CC28;
loc_8320CC24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CC28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CBD8) {
	__imp__sub_8320CBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CC30) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cc7c
	if (cr0.eq) goto loc_8320CC7C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fdf98
	sub_831FDF98(ctx, base);
	// b 0x8320cc80
	goto loc_8320CC80;
loc_8320CC7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CC80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CC30) {
	__imp__sub_8320CC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CC88) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320ccd4
	if (cr0.eq) goto loc_8320CCD4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe7f0
	sub_831FE7F0(ctx, base);
	// b 0x8320ccd8
	goto loc_8320CCD8;
loc_8320CCD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CCD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CC88) {
	__imp__sub_8320CC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CCE0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cd2c
	if (cr0.eq) goto loc_8320CD2C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fea80
	sub_831FEA80(ctx, base);
	// b 0x8320cd30
	goto loc_8320CD30;
loc_8320CD2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CD30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CCE0) {
	__imp__sub_8320CCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CD38) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cd84
	if (cr0.eq) goto loc_8320CD84;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fea18
	sub_831FEA18(ctx, base);
	// b 0x8320cd88
	goto loc_8320CD88;
loc_8320CD84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CD88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CD38) {
	__imp__sub_8320CD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CD90) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cddc
	if (cr0.eq) goto loc_8320CDDC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe9b0
	sub_831FE9B0(ctx, base);
	// b 0x8320cde0
	goto loc_8320CDE0;
loc_8320CDDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CDE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CD90) {
	__imp__sub_8320CD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CDE8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320ce34
	if (cr0.eq) goto loc_8320CE34;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe5a8
	sub_831FE5A8(ctx, base);
	// b 0x8320ce38
	goto loc_8320CE38;
loc_8320CE34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CE38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CDE8) {
	__imp__sub_8320CDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CE40) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320ce8c
	if (cr0.eq) goto loc_8320CE8C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe840
	sub_831FE840(ctx, base);
	// b 0x8320ce90
	goto loc_8320CE90;
loc_8320CE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CE90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CE40) {
	__imp__sub_8320CE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CE98) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cee4
	if (cr0.eq) goto loc_8320CEE4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe8c8
	sub_831FE8C8(ctx, base);
	// b 0x8320cee8
	goto loc_8320CEE8;
loc_8320CEE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CEE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CE98) {
	__imp__sub_8320CE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CEF0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cf3c
	if (cr0.eq) goto loc_8320CF3C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fdf40
	sub_831FDF40(ctx, base);
	// b 0x8320cf40
	goto loc_8320CF40;
loc_8320CF3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CF40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CEF0) {
	__imp__sub_8320CEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CF48) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cf94
	if (cr0.eq) goto loc_8320CF94;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fdd10
	sub_831FDD10(ctx, base);
	// b 0x8320cf98
	goto loc_8320CF98;
loc_8320CF94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CF98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CF48) {
	__imp__sub_8320CF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CFA0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r28,1452(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1452) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x8320cfec
	if (cr0.eq) goto loc_8320CFEC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831fe490
	sub_831FE490(ctx, base);
	// b 0x8320cff0
	goto loc_8320CFF0;
loc_8320CFEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320CFF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320CFA0) {
	__imp__sub_8320CFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320CFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8320d018
	if (!cr6.eq) goto loc_8320D018;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8320D018:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x8320d038
	goto loc_8320D038;
loc_8320D024:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_8320D038:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8320d024
	if (cr6.lt) goto loc_8320D024;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320CFF8) {
	__imp__sub_8320CFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D068) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// beq 0x8320d0d0
	if (cr0.eq) goto loc_8320D0D0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,-15704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15704) );
	// bl 0x8320fe10
	sub_8320FE10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8320d0c8
	if (cr6.lt) goto loc_8320D0C8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-2480
	ctx.r6.s64 = r11.s64 + -2480;
	// addi r5,r10,-2392
	ctx.r5.s64 = ctx.r10.s64 + -2392;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
loc_8320D0C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8320d0dc
	goto loc_8320D0DC;
loc_8320D0D0:
	// lwz r11,-15704(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-15704) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_8320D0DC:
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

PPC_WEAK_FUNC(sub_8320D068) {
	__imp__sub_8320D068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D0F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bne cr6,0x8320d13c
	if (!cr6.eq) goto loc_8320D13C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-2480
	ctx.r6.s64 = r11.s64 + -2480;
	// addi r5,r10,-2372
	ctx.r5.s64 = ctx.r10.s64 + -2372;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,690
	ctx.r7.s64 = 690;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	sub_831034D8(ctx, base);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
loc_8320D13C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// blt cr6,0x8320d148
	if (cr6.lt) goto loc_8320D148;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8320D148:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bgt cr6,0x8320d158
	if (cr6.gt) goto loc_8320D158;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8320D158:
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_8320D0F0) {
	__imp__sub_8320D0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D188) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x8320d23c
	if (!cr6.eq) goto loc_8320D23C;
	// li r29,0
	r29.s64 = 0;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320d1f8
	if (!cr6.eq) goto loc_8320D1F8;
	// lwz r28,1456(r6)
	r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(1456) );
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// b 0x8320d238
	goto loc_8320D238;
loc_8320D1F8:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8320d230
	if (!cr6.eq) goto loc_8320D230;
	// lwz r31,1456(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(1456) );
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831c58b0
	sub_831C58B0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
loc_8320D230:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
loc_8320D238:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8320D23C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8320D188) {
	__imp__sub_8320D188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8320D248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
loc_8320D260:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8320d260
	if (cr6.lt) goto loc_8320D260;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8320D248) {
	__imp__sub_8320D248(ctx, base);
}

