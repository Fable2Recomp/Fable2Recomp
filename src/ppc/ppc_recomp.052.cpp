#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82648BA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82648c10
	if (cr6.eq) goto loc_82648C10;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,12104
	ctx.r7.s64 = ctx.r9.s64 + 12104;
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82648c14
	goto loc_82648C14;
loc_82648C10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82648C14:
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

PPC_WEAK_FUNC(sub_82648BA0) {
	__imp__sub_82648BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648C30) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82648ca0
	if (cr6.eq) goto loc_82648CA0;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-17320
	ctx.r10.s64 = r11.s64 + -17320;
	// stb r29,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r29.u8);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648c80
	if (cr6.eq) goto loc_82648C80;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82648C80:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82648c8c
	if (cr0.eq) goto loc_82648C8C;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82648C8C:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82648CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82648C30) {
	__imp__sub_82648C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648CB0) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648d18
	if (cr6.eq) goto loc_82648D18;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,15576
	ctx.r9.s64 = ctx.r10.s64 + 15576;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r8,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r8.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82648D18:
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

PPC_WEAK_FUNC(sub_82648CB0) {
	__imp__sub_82648CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648D30) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648e30
	if (cr6.eq) goto loc_82648E30;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r5,r10,-17428
	ctx.r5.s64 = ctx.r10.s64 + -17428;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r4,r8,-16344
	ctx.r4.s64 = ctx.r8.s64 + -16344;
	// lfs f13,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r7,-16280
	ctx.r10.s64 = ctx.r7.s64 + -16280;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r8,r9,-27456
	ctx.r8.s64 = ctx.r9.s64 + -27456;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r7,r6,5732
	ctx.r7.s64 = ctx.r6.s64 + 5732;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lfs f0,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	f0.f64 = double(temp.f32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stvx128 v0,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, r11.u8);
	// stb r11,113(r3)
	PPC_STORE_U8(ctx.r3.u32 + 113, r11.u8);
	// stb r9,114(r3)
	PPC_STORE_U8(ctx.r3.u32 + 114, ctx.r9.u8);
	// stb r9,115(r3)
	PPC_STORE_U8(ctx.r3.u32 + 115, ctx.r9.u8);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, r11.u8);
	// stb r11,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, r11.u8);
	// stb r11,118(r3)
	PPC_STORE_U8(ctx.r3.u32 + 118, r11.u8);
	// stb r11,119(r3)
	PPC_STORE_U8(ctx.r3.u32 + 119, r11.u8);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, r11.u8);
	// stb r11,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82648E30:
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

PPC_WEAK_FUNC(sub_82648D30) {
	__imp__sub_82648D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648E48) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648eb0
	if (cr6.eq) goto loc_82648EB0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,14096
	ctx.r8.s64 = ctx.r10.s64 + 14096;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82648EB0:
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

PPC_WEAK_FUNC(sub_82648E48) {
	__imp__sub_82648E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648EC8) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648f20
	if (cr6.eq) goto loc_82648F20;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-15792
	ctx.r9.s64 = ctx.r10.s64 + -15792;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82648F20:
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

PPC_WEAK_FUNC(sub_82648EC8) {
	__imp__sub_82648EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648F38) {
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82648fac
	if (cr6.eq) goto loc_82648FAC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,14680
	ctx.r10.s64 = r11.s64 + 14680;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x821ee1b8
	sub_821EE1B8(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x821ee1b8
	sub_821EE1B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x821ee1b8
	sub_821EE1B8(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82648FAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82648F38) {
	__imp__sub_82648F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82648FB8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649014
	if (cr6.eq) goto loc_82649014;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26592
	ctx.r9.s64 = ctx.r10.s64 + -26592;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649014:
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

PPC_WEAK_FUNC(sub_82648FB8) {
	__imp__sub_82648FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649030) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29376
	ctx.r4.s64 = r11.s64 + -29376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_82649030) {
	__imp__sub_82649030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649070) {
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
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826490a8
	if (cr6.eq) goto loc_826490A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x8264ef58
	sub_8264EF58(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_826490A8:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-29424
	ctx.r9.s64 = ctx.r10.s64 + -29424;
	// clrlwi r8,r29,31
	ctx.r8.u64 = r29.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826490dc
	if (cr6.eq) goto loc_826490DC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826490DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82649070) {
	__imp__sub_82649070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826490E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649128
	if (cr6.eq) goto loc_82649128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82450038
	sub_82450038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649128:
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

PPC_WEAK_FUNC(sub_826490E8) {
	__imp__sub_826490E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649140) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826491b0
	if (cr6.eq) goto loc_826491B0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,18336
	ctx.r9.s64 = ctx.r10.s64 + 18336;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826491B0:
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

PPC_WEAK_FUNC(sub_82649140) {
	__imp__sub_82649140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826491C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264927c
	if (cr6.eq) goto loc_8264927C;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r7,r9,-27468
	ctx.r7.s64 = ctx.r9.s64 + -27468;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lwz r10,-31348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-31348) );
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-13104
	ctx.r5.s64 = ctx.r8.s64 + -13104;
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	f0.f64 = double(temp.f32);
	// addi r4,r6,5732
	ctx.r4.s64 = ctx.r6.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264927C:
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

PPC_WEAK_FUNC(sub_826491C8) {
	__imp__sub_826491C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649298) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82649338
	if (cr6.eq) goto loc_82649338;
	// lis r28,-32246
	r28.s64 = -2113273856;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r28,-27456
	ctx.r10.s64 = r28.s64 + -27456;
	// addi r9,r11,13000
	ctx.r9.s64 = r11.s64 + 13000;
	// li r30,0
	r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f31,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	f31.f64 = double(temp.f32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x824ed318
	sub_824ED318(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x824ed318
	sub_824ED318(ctx, base);
	// lfs f0,-27456(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
loc_82649338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82649298) {
	__imp__sub_82649298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649348) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649448
	if (cr6.eq) goto loc_82649448;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r8,r10,-27456
	ctx.r8.s64 = ctx.r10.s64 + -27456;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-28812
	ctx.r4.s64 = ctx.r9.s64 + -28812;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f0.f64 = double(temp.f32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r9,96
	ctx.r9.s64 = 96;
	// lfs f13,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,-396(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -396);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,16280
	ctx.r7.s64 = ctx.r7.s64 + 16280;
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r6,r6,-6944
	ctx.r6.s64 = ctx.r6.s64 + -6944;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// addi r5,r5,5732
	ctx.r5.s64 = ctx.r5.s64 + 5732;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// addi r7,r8,-32268
	ctx.r7.s64 = ctx.r8.s64 + -32268;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// stvx128 v0,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, r11.u8);
	// stvx128 v0,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// stw r7,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r7.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, r11.u8);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649448:
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

PPC_WEAK_FUNC(sub_82649348) {
	__imp__sub_82649348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826494a0
	if (cr6.eq) goto loc_826494A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239fa90
	sub_8239FA90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826494A0:
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

PPC_WEAK_FUNC(sub_82649460) {
	__imp__sub_82649460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826494B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826494f8
	if (cr6.eq) goto loc_826494F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8281fa40
	sub_8281FA40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826494F8:
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

PPC_WEAK_FUNC(sub_826494B8) {
	__imp__sub_826494B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649510) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264959c
	if (cr6.eq) goto loc_8264959C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,11912
	ctx.r8.s64 = ctx.r9.s64 + 11912;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r3,r7,-4072
	ctx.r3.s64 = ctx.r7.s64 + -4072;
	// stb r11,30(r31)
	PPC_STORE_U8(r31.u32 + 30, r11.u8);
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,27600(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(27600) );
	// bl 0x822cdc48
	sub_822CDC48(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826495a0
	goto loc_826495A0;
loc_8264959C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826495A0:
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

PPC_WEAK_FUNC(sub_82649510) {
	__imp__sub_82649510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826495B8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649694
	if (cr6.eq) goto loc_82649694;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-12944
	ctx.r7.s64 = ctx.r10.s64 + -12944;
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r5,r9,-27468
	ctx.r5.s64 = ctx.r9.s64 + -27468;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lfs f12,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lfs f13,18768(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 18768);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stvx128 v0,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r8,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r8.u8);
	// stfs f0,96(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stb r11,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, r11.u8);
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, r11.u8);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649694:
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

PPC_WEAK_FUNC(sub_826495B8) {
	__imp__sub_826495B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826496B0) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649770
	if (cr6.eq) goto loc_82649770;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,16088
	ctx.r8.s64 = ctx.r10.s64 + 16088;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, r11.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, r11.u8);
	// stb r11,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, r11.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
	// stb r11,74(r3)
	PPC_STORE_U8(ctx.r3.u32 + 74, r11.u8);
	// stb r11,75(r3)
	PPC_STORE_U8(ctx.r3.u32 + 75, r11.u8);
	// stb r6,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r6.u8);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649770:
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

PPC_WEAK_FUNC(sub_826496B0) {
	__imp__sub_826496B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649788) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826497d8
	if (cr6.eq) goto loc_826497D8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,18144
	ctx.r9.s64 = ctx.r10.s64 + 18144;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826497D8:
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

PPC_WEAK_FUNC(sub_82649788) {
	__imp__sub_82649788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826497F0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649848
	if (cr6.eq) goto loc_82649848;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-5848
	ctx.r9.s64 = ctx.r10.s64 + -5848;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649848:
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

PPC_WEAK_FUNC(sub_826497F0) {
	__imp__sub_826497F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649860) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826498c0
	if (cr6.eq) goto loc_826498C0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,26080
	ctx.r8.s64 = ctx.r10.s64 + 26080;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826498C0:
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

PPC_WEAK_FUNC(sub_82649860) {
	__imp__sub_82649860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826498D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649918
	if (cr6.eq) goto loc_82649918;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828addb0
	sub_828ADDB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649918:
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

PPC_WEAK_FUNC(sub_826498D8) {
	__imp__sub_826498D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649930) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826499c4
	if (cr6.eq) goto loc_826499C4;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,3600
	ctx.r9.s64 = r11.s64 + 3600;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfs f0,-27468(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lbz r5,144(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stb r4,144(r6)
	PPC_STORE_U8(ctx.r6.u32 + 144, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_826499C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82649930) {
	__imp__sub_82649930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826499D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649a10
	if (cr6.eq) goto loc_82649A10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8279ded0
	sub_8279DED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649A10:
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

PPC_WEAK_FUNC(sub_826499D0) {
	__imp__sub_826499D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649A28) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82649a88
	if (cr6.eq) goto loc_82649A88;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-1472
	ctx.r9.s64 = ctx.r10.s64 + -1472;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82649a8c
	goto loc_82649A8C;
loc_82649A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82649A8C:
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

PPC_WEAK_FUNC(sub_82649A28) {
	__imp__sub_82649A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649AA8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82649b5c
	if (cr6.eq) goto loc_82649B5C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,15384
	ctx.r10.s64 = r11.s64 + 15384;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649af8
	if (cr6.eq) goto loc_82649AF8;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82649AF8:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82649b04
	if (cr0.eq) goto loc_82649B04;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82649B04:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649b20
	if (cr6.eq) goto loc_82649B20;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82649B20:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82649b2c
	if (cr0.eq) goto loc_82649B2C;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82649B2C:
	// li r11,1
	r11.s64 = 1;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// stb r30,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r30.u8);
	// stb r30,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82649B5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82649AA8) {
	__imp__sub_82649AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649ba8
	if (cr6.eq) goto loc_82649BA8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8299ae78
	sub_8299AE78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649BA8:
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

PPC_WEAK_FUNC(sub_82649B68) {
	__imp__sub_82649B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649c00
	if (cr6.eq) goto loc_82649C00;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x829343a0
	sub_829343A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649C00:
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

PPC_WEAK_FUNC(sub_82649BC0) {
	__imp__sub_82649BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649C18) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649ca4
	if (cr6.eq) goto loc_82649CA4;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r9,-27456
	ctx.r7.s64 = ctx.r9.s64 + -27456;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,19720
	ctx.r8.s64 = ctx.r10.s64 + 19720;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f10,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	f0.f64 = double(temp.f32);
	// lfs f13,23092(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23092);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10896(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10896);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8224(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8224);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649CA4:
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

PPC_WEAK_FUNC(sub_82649C18) {
	__imp__sub_82649C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649CC0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649d10
	if (cr6.eq) goto loc_82649D10;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4984
	ctx.r9.s64 = ctx.r10.s64 + -4984;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649D10:
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

PPC_WEAK_FUNC(sub_82649CC0) {
	__imp__sub_82649CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649D28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82649dac
	if (cr6.eq) goto loc_82649DAC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-8700
	ctx.r9.s64 = r11.s64 + -8700;
	// addi r8,r10,-4776
	ctx.r8.s64 = ctx.r10.s64 + -4776;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-8700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8700);
	f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stb r7,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r7.u8);
	// lfs f0,-18768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18768);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r6,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r6.u8);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82649db0
	goto loc_82649DB0;
loc_82649DAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82649DB0:
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

PPC_WEAK_FUNC(sub_82649D28) {
	__imp__sub_82649D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649e08
	if (cr6.eq) goto loc_82649E08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82975a00
	sub_82975A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649E08:
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

PPC_WEAK_FUNC(sub_82649DC8) {
	__imp__sub_82649DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649e60
	if (cr6.eq) goto loc_82649E60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82894d58
	sub_82894D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649E60:
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

PPC_WEAK_FUNC(sub_82649E20) {
	__imp__sub_82649E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649E78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82649f1c
	if (cr6.eq) goto loc_82649F1C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,152
	ctx.r7.s64 = ctx.r9.s64 + 152;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stb r11,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r11.u8);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stb r11,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r11.u8);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82649f20
	goto loc_82649F20;
loc_82649F1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82649F20:
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

PPC_WEAK_FUNC(sub_82649E78) {
	__imp__sub_82649E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649f78
	if (cr6.eq) goto loc_82649F78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8289b3e0
	sub_8289B3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82649F78:
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

PPC_WEAK_FUNC(sub_82649F38) {
	__imp__sub_82649F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82649F90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a040
	if (cr6.eq) goto loc_8264A040;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,-17584
	ctx.r9.s64 = r11.s64 + -17584;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r7,-27468
	ctx.r6.s64 = ctx.r7.s64 + -27468;
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// stb r30,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r30.u8);
	// stb r30,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r30.u8);
	// lfs f13,-27468(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,51(r31)
	PPC_STORE_U8(r31.u32 + 51, r30.u8);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r30.u8);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stb r30,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r30.u8);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264A040:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82649F90) {
	__imp__sub_82649F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A050) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a0c8
	if (cr6.eq) goto loc_8264A0C8;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,-16960
	ctx.r9.s64 = r11.s64 + -16960;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264A0C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264A050) {
	__imp__sub_8264A050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a118
	if (cr6.eq) goto loc_8264A118;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8272f0d8
	sub_8272F0D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A118:
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

PPC_WEAK_FUNC(sub_8264A0D8) {
	__imp__sub_8264A0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A130) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a19c
	if (cr6.eq) goto loc_8264A19C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-6040
	ctx.r9.s64 = ctx.r10.s64 + -6040;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A19C:
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

PPC_WEAK_FUNC(sub_8264A130) {
	__imp__sub_8264A130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a27c
	if (cr6.eq) goto loc_8264A27C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,-18712
	ctx.r7.s64 = ctx.r9.s64 + -18712;
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// lfs f31,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f31.f64 = double(temp.f32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,27524(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 27524);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x8293c6d8
	sub_8293C6D8(ctx, base);
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8293c9e0
	sub_8293C9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264a280
	goto loc_8264A280;
loc_8264A27C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_8264A1B8) {
	__imp__sub_8264A1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a2e0
	if (cr6.eq) goto loc_8264A2E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82794330
	sub_82794330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A2E0:
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

PPC_WEAK_FUNC(sub_8264A2A0) {
	__imp__sub_8264A2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a378
	if (cr6.eq) goto loc_8264A378;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-9360
	ctx.r7.s64 = ctx.r10.s64 + -9360;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r5,r6,28344
	ctx.r5.s64 = ctx.r6.s64 + 28344;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_8264A340:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8264a340
	if (!cr0.eq) goto loc_8264A340;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A378:
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

PPC_WEAK_FUNC(sub_8264A2F8) {
	__imp__sub_8264A2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A390) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a418
	if (cr6.eq) goto loc_8264A418;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-8320
	ctx.r8.s64 = ctx.r10.s64 + -8320;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lbz r5,144(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 144);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stb r4,144(r6)
	PPC_STORE_U8(ctx.r6.u32 + 144, ctx.r4.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A418:
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

PPC_WEAK_FUNC(sub_8264A390) {
	__imp__sub_8264A390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A430) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a494
	if (cr6.eq) goto loc_8264A494;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,15000
	ctx.r9.s64 = ctx.r10.s64 + 15000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r8,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r8.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264a498
	goto loc_8264A498;
loc_8264A494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A498:
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

PPC_WEAK_FUNC(sub_8264A430) {
	__imp__sub_8264A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A4B0) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a50c
	if (cr6.eq) goto loc_8264A50C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2800
	ctx.r9.s64 = ctx.r10.s64 + -2800;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A50C:
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

PPC_WEAK_FUNC(sub_8264A4B0) {
	__imp__sub_8264A4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A528) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a580
	if (cr6.eq) goto loc_8264A580;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4920
	ctx.r9.s64 = r11.s64 + -4920;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264a584
	goto loc_8264A584;
loc_8264A580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A584:
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

PPC_WEAK_FUNC(sub_8264A528) {
	__imp__sub_8264A528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A5A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a634
	if (cr6.eq) goto loc_8264A634;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-27456
	ctx.r8.s64 = ctx.r10.s64 + -27456;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,13904
	ctx.r7.s64 = ctx.r9.s64 + 13904;
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lfs f0,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	f0.f64 = double(temp.f32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r11,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r11.u8);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264a638
	goto loc_8264A638;
loc_8264A634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A638:
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

PPC_WEAK_FUNC(sub_8264A5A0) {
	__imp__sub_8264A5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A650) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a6fc
	if (cr6.eq) goto loc_8264A6FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r7,r10,6016
	ctx.r7.s64 = ctx.r10.s64 + 6016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r5,r8,5732
	ctx.r5.s64 = ctx.r8.s64 + 5732;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stb r30,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r30.u8);
	// stb r6,29(r31)
	PPC_STORE_U8(r31.u32 + 29, ctx.r6.u8);
	// stb r30,30(r31)
	PPC_STORE_U8(r31.u32 + 30, r30.u8);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264A6FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264A650) {
	__imp__sub_8264A650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A708) {
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a758
	if (cr6.eq) goto loc_8264A758;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,18208
	ctx.r9.s64 = ctx.r10.s64 + 18208;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A758:
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

PPC_WEAK_FUNC(sub_8264A708) {
	__imp__sub_8264A708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A770) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a7e0
	if (cr6.eq) goto loc_8264A7E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,17824
	ctx.r10.s64 = r11.s64 + 17824;
	// stb r29,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r29.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a7c0
	if (cr6.eq) goto loc_8264A7C0;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8264A7C0:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8264a7cc
	if (cr0.eq) goto loc_8264A7CC;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_8264A7CC:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264A7E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264A770) {
	__imp__sub_8264A770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a830
	if (cr6.eq) goto loc_8264A830;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823e58e8
	sub_823E58E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A830:
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

PPC_WEAK_FUNC(sub_8264A7F0) {
	__imp__sub_8264A7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A848) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a8dc
	if (cr6.eq) goto loc_8264A8DC;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,16600
	ctx.r8.s64 = ctx.r9.s64 + 16600;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, r11.u8);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264A8DC:
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

PPC_WEAK_FUNC(sub_8264A848) {
	__imp__sub_8264A848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A8F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264a968
	if (cr6.eq) goto loc_8264A968;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,17376
	ctx.r9.s64 = r11.s64 + 17376;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r7,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r7.u8);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// b 0x8264a96c
	goto loc_8264A96C;
loc_8264A968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264A96C:
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

PPC_WEAK_FUNC(sub_8264A8F8) {
	__imp__sub_8264A8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264A988) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264aa30
	if (cr6.eq) goto loc_8264AA30;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-20632
	ctx.r10.s64 = r11.s64 + -20632;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264a9dc
	if (cr6.eq) goto loc_8264A9DC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_8264A9DC:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8264a9e8
	if (cr0.eq) goto loc_8264A9E8;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
loc_8264A9E8:
	// addic. r10,r11,8
	xer.ca = r11.u32 > 4294967287;
	ctx.r10.s64 = r11.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8264a9f4
	if (cr0.eq) goto loc_8264A9F4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
loc_8264A9F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,33(r11)
	PPC_STORE_U8(r11.u32 + 33, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r10.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stb r10,33(r11)
	PPC_STORE_U8(r11.u32 + 33, ctx.r10.u8);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264AA30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264A988) {
	__imp__sub_8264A988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264aae8
	if (cr6.eq) goto loc_8264AAE8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,16024
	ctx.r10.s64 = r11.s64 + 16024;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x821ee1b8
	sub_821EE1B8(ctx, base);
	// vspltisw128 v127,0
	simd::store_i32(v127.u32, simd::set1_i32(int32_t(0x0)));
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-6576
	ctx.r4.s64 = ctx.r8.s64 + -6576;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stvx128 v127,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,96
	ctx.r6.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v127,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r30,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r30.u8);
	// stvx128 v127,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r30,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r30.u8);
	// stb r30,113(r31)
	PPC_STORE_U8(r31.u32 + 113, r30.u8);
	// stb r30,114(r31)
	PPC_STORE_U8(r31.u32 + 114, r30.u8);
	// stb r30,115(r31)
	PPC_STORE_U8(r31.u32 + 115, r30.u8);
	// stb r30,116(r31)
	PPC_STORE_U8(r31.u32 + 116, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// b 0x82ca2c3c
	return;
loc_8264AAE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264AA40) {
	__imp__sub_8264AA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AB00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264abdc
	if (cr6.eq) goto loc_8264ABDC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r30,0
	r30.s64 = 0;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r11,-28812
	ctx.r7.s64 = r11.s64 + -28812;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r6,r10,-4848
	ctx.r6.s64 = ctx.r10.s64 + -4848;
	// addi r5,r9,-4784
	ctx.r5.s64 = ctx.r9.s64 + -4784;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// addi r29,r8,5732
	r29.s64 = ctx.r8.s64 + 5732;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r4,-32268
	ctx.r10.s64 = ctx.r4.s64 + -32268;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
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
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r30.u8);
	// lbz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 144);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stb r7,144(r9)
	PPC_STORE_U8(ctx.r9.u32 + 144, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264ABDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264AB00) {
	__imp__sub_8264AB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264ABE8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ac54
	if (cr6.eq) goto loc_8264AC54;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r9,r11,-4768
	ctx.r9.s64 = r11.s64 + -4768;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264AC54:
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

PPC_WEAK_FUNC(sub_8264ABE8) {
	__imp__sub_8264ABE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AC70) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264ace8
	if (cr6.eq) goto loc_8264ACE8;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-4704
	ctx.r8.s64 = ctx.r10.s64 + -4704;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// stb r11,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r11.u8);
	// stb r11,34(r31)
	PPC_STORE_U8(r31.u32 + 34, r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x821ee1b8
	sub_821EE1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264acec
	goto loc_8264ACEC;
loc_8264ACE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264ACEC:
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

PPC_WEAK_FUNC(sub_8264AC70) {
	__imp__sub_8264AC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AD08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264ada8
	if (cr6.eq) goto loc_8264ADA8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r30,0
	r30.s64 = 0;
	// addi r7,r10,-12272
	ctx.r7.s64 = ctx.r10.s64 + -12272;
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// addi r5,r6,5732
	ctx.r5.s64 = ctx.r6.s64 + 5732;
	// stvx128 v0,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,10652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10652);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r5,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264ADA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264AD08) {
	__imp__sub_8264AD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264ADB8) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ae50
	if (cr6.eq) goto loc_8264AE50;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-28812
	ctx.r7.s64 = ctx.r10.s64 + -28812;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r5,r9,16152
	ctx.r5.s64 = ctx.r9.s64 + 16152;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r8,-11880
	ctx.r4.s64 = ctx.r8.s64 + -11880;
	// addi r10,r6,-32268
	ctx.r10.s64 = ctx.r6.s64 + -32268;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264AE50:
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

PPC_WEAK_FUNC(sub_8264ADB8) {
	__imp__sub_8264ADB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AE68) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264aee0
	if (cr6.eq) goto loc_8264AEE0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r10,-28812
	ctx.r6.s64 = ctx.r10.s64 + -28812;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r5,r9,-11864
	ctx.r5.s64 = ctx.r9.s64 + -11864;
	// addi r4,r8,-11800
	ctx.r4.s64 = ctx.r8.s64 + -11800;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r10,r7,-32268
	ctx.r10.s64 = ctx.r7.s64 + -32268;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264AEE0:
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

PPC_WEAK_FUNC(sub_8264AE68) {
	__imp__sub_8264AE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264af38
	if (cr6.eq) goto loc_8264AF38;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824d45d8
	sub_824D45D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264AF38:
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

PPC_WEAK_FUNC(sub_8264AEF8) {
	__imp__sub_8264AEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264AF50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264b008
	if (cr6.eq) goto loc_8264B008;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-10872
	ctx.r8.s64 = ctx.r10.s64 + -10872;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d9f40
	sub_821D9F40(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r30,r11,-10912
	r30.s64 = r11.s64 + -10912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x829fb978
	sub_829FB978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264affc
	if (cr6.eq) goto loc_8264AFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821d9f40
	sub_821D9F40(ctx, base);
	// bl 0x821b2710
	sub_821B2710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82196e10
	sub_82196E10(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_8264AFFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_8264B008:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264AF50) {
	__imp__sub_8264AF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B018) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b068
	if (cr6.eq) goto loc_8264B068;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-10744
	ctx.r9.s64 = ctx.r10.s64 + -10744;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B068:
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

PPC_WEAK_FUNC(sub_8264B018) {
	__imp__sub_8264B018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b108
	if (cr6.eq) goto loc_8264B108;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-10008
	ctx.r7.s64 = ctx.r10.s64 + -10008;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r5,r6,28344
	ctx.r5.s64 = ctx.r6.s64 + 28344;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
loc_8264B0D8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8264b0d8
	if (!cr0.eq) goto loc_8264B0D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B108:
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

PPC_WEAK_FUNC(sub_8264B080) {
	__imp__sub_8264B080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B120) {
	PPC_FUNC_PROLOGUE();
	// li r3,167
	ctx.r3.s64 = 167;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8264B120) {
	__imp__sub_8264B120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B128) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b178
	if (cr6.eq) goto loc_8264B178;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-27232
	ctx.r9.s64 = ctx.r10.s64 + -27232;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B178:
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

PPC_WEAK_FUNC(sub_8264B128) {
	__imp__sub_8264B128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B190) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28616
	ctx.r4.s64 = r11.s64 + -28616;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264B190) {
	__imp__sub_8264B190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B1D0) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b238
	if (cr6.eq) goto loc_8264B238;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-7704
	ctx.r8.s64 = ctx.r10.s64 + -7704;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B238:
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

PPC_WEAK_FUNC(sub_8264B1D0) {
	__imp__sub_8264B1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B250) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b2b8
	if (cr6.eq) goto loc_8264B2B8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-7464
	ctx.r8.s64 = ctx.r10.s64 + -7464;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r6,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r6.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B2B8:
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

PPC_WEAK_FUNC(sub_8264B250) {
	__imp__sub_8264B250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b310
	if (cr6.eq) goto loc_8264B310;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8284d4e8
	sub_8284D4E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B310:
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

PPC_WEAK_FUNC(sub_8264B2D0) {
	__imp__sub_8264B2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B328) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b378
	if (cr6.eq) goto loc_8264B378;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,15256
	ctx.r9.s64 = ctx.r10.s64 + 15256;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B378:
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

PPC_WEAK_FUNC(sub_8264B328) {
	__imp__sub_8264B328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B390) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b428
	if (cr6.eq) goto loc_8264B428;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,-7240
	ctx.r7.s64 = ctx.r9.s64 + -7240;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// addi r5,r8,5732
	ctx.r5.s64 = ctx.r8.s64 + 5732;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stb r6,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r6.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B428:
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

PPC_WEAK_FUNC(sub_8264B390) {
	__imp__sub_8264B390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b4e0
	if (cr6.eq) goto loc_8264B4E0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,13712
	ctx.r6.s64 = ctx.r8.s64 + 13712;
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	f0.f64 = double(temp.f32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r4,r5,28344
	ctx.r4.s64 = ctx.r5.s64 + 28344;
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
loc_8264B4A0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8264b4a0
	if (!cr0.eq) goto loc_8264B4A0;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B4E0:
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

PPC_WEAK_FUNC(sub_8264B440) {
	__imp__sub_8264B440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B4F8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264b568
	if (cr6.eq) goto loc_8264B568;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-20496
	ctx.r10.s64 = r11.s64 + -20496;
	// stb r29,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r29.u8);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b548
	if (cr6.eq) goto loc_8264B548;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8264B548:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8264b554
	if (cr0.eq) goto loc_8264B554;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_8264B554:
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264B568:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264B4F8) {
	__imp__sub_8264B4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b5b8
	if (cr6.eq) goto loc_8264B5B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8291ac50
	sub_8291AC50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B5B8:
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

PPC_WEAK_FUNC(sub_8264B578) {
	__imp__sub_8264B578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B5D0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b634
	if (cr6.eq) goto loc_8264B634;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21760
	ctx.r9.s64 = ctx.r10.s64 + 21760;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lbz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stb r7,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r7.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B634:
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

PPC_WEAK_FUNC(sub_8264B5D0) {
	__imp__sub_8264B5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B650) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264b6c8
	if (cr6.eq) goto loc_8264B6C8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,-27468
	ctx.r8.s64 = ctx.r10.s64 + -27468;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,-21736
	ctx.r7.s64 = ctx.r9.s64 + -21736;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264b6cc
	goto loc_8264B6CC;
loc_8264B6C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264B6CC:
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

PPC_WEAK_FUNC(sub_8264B650) {
	__imp__sub_8264B650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B6E8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264b758
	if (cr6.eq) goto loc_8264B758;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,-6920
	ctx.r10.s64 = r11.s64 + -6920;
	// stb r29,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r29.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b738
	if (cr6.eq) goto loc_8264B738;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8264B738:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8264b744
	if (cr0.eq) goto loc_8264B744;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_8264B744:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264B758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264B6E8) {
	__imp__sub_8264B6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B768) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b7c4
	if (cr6.eq) goto loc_8264B7C4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,1
	r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-6576
	ctx.r8.s64 = ctx.r10.s64 + -6576;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B7C4:
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

PPC_WEAK_FUNC(sub_8264B768) {
	__imp__sub_8264B768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B7E0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b838
	if (cr6.eq) goto loc_8264B838;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,17440
	ctx.r9.s64 = ctx.r10.s64 + 17440;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B838:
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

PPC_WEAK_FUNC(sub_8264B7E0) {
	__imp__sub_8264B7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B850) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b8a0
	if (cr6.eq) goto loc_8264B8A0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-6368
	ctx.r9.s64 = ctx.r10.s64 + -6368;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B8A0:
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

PPC_WEAK_FUNC(sub_8264B850) {
	__imp__sub_8264B850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B8B8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b908
	if (cr6.eq) goto loc_8264B908;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-6200
	ctx.r9.s64 = ctx.r10.s64 + -6200;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B908:
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

PPC_WEAK_FUNC(sub_8264B8B8) {
	__imp__sub_8264B8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B920) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b978
	if (cr6.eq) goto loc_8264B978;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-5952
	ctx.r9.s64 = r11.s64 + -5952;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B978:
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

PPC_WEAK_FUNC(sub_8264B920) {
	__imp__sub_8264B920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264B990) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b9f4
	if (cr6.eq) goto loc_8264B9F4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,14616
	ctx.r8.s64 = ctx.r9.s64 + 14616;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264B9F4:
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

PPC_WEAK_FUNC(sub_8264B990) {
	__imp__sub_8264B990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BA10) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ba64
	if (cr6.eq) goto loc_8264BA64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,13520
	ctx.r9.s64 = ctx.r10.s64 + 13520;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BA64:
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

PPC_WEAK_FUNC(sub_8264BA10) {
	__imp__sub_8264BA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BA80) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28340
	ctx.r4.s64 = r11.s64 + -28340;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264BA80) {
	__imp__sub_8264BA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BAC0) {
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
	// bl 0x8298f320
	sub_8298F320(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264baf8
	if (cr6.eq) goto loc_8264BAF8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8264BAF8:
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

PPC_WEAK_FUNC(sub_8264BAC0) {
	__imp__sub_8264BAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BB10) {
	PPC_FUNC_PROLOGUE();
	// li r3,186
	ctx.r3.s64 = 186;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8264BB10) {
	__imp__sub_8264BB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BB18) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bb74
	if (cr6.eq) goto loc_8264BB74;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-27168
	ctx.r9.s64 = ctx.r10.s64 + -27168;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BB74:
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

PPC_WEAK_FUNC(sub_8264BB18) {
	__imp__sub_8264BB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BB90) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28320
	ctx.r4.s64 = r11.s64 + -28320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264BB90) {
	__imp__sub_8264BB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BBD0) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82356698
	sub_82356698(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-29424
	ctx.r9.s64 = r11.s64 + -29424;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8264bc18
	if (cr6.eq) goto loc_8264BC18;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8264BC18:
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

PPC_WEAK_FUNC(sub_8264BBD0) {
	__imp__sub_8264BBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BC30) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bc80
	if (cr6.eq) goto loc_8264BC80;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-6264
	ctx.r9.s64 = ctx.r10.s64 + -6264;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BC80:
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

PPC_WEAK_FUNC(sub_8264BC30) {
	__imp__sub_8264BC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BC98) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bce8
	if (cr6.eq) goto loc_8264BCE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,15320
	ctx.r9.s64 = ctx.r10.s64 + 15320;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BCE8:
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

PPC_WEAK_FUNC(sub_8264BC98) {
	__imp__sub_8264BC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BD00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bd40
	if (cr6.eq) goto loc_8264BD40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8273adc8
	sub_8273ADC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BD40:
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

PPC_WEAK_FUNC(sub_8264BD00) {
	__imp__sub_8264BD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BD58) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bdb4
	if (cr6.eq) goto loc_8264BDB4;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-4344
	ctx.r8.s64 = ctx.r9.s64 + -4344;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,-17752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17752);
	f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BDB4:
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

PPC_WEAK_FUNC(sub_8264BD58) {
	__imp__sub_8264BD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BDD0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264be90
	if (cr6.eq) goto loc_8264BE90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,15832
	ctx.r10.s64 = r11.s64 + 15832;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lfs f0,-27852(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	f0.f64 = double(temp.f32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r6.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r6.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r30.u8);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264BE90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264BDD0) {
	__imp__sub_8264BDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BEA0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bef0
	if (cr6.eq) goto loc_8264BEF0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-5752
	ctx.r9.s64 = ctx.r10.s64 + -5752;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264BEF0:
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

PPC_WEAK_FUNC(sub_8264BEA0) {
	__imp__sub_8264BEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BF08) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264bfb8
	if (cr6.eq) goto loc_8264BFB8;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,100
	ctx.r10.s64 = 100;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// addi r6,r7,13968
	ctx.r6.s64 = ctx.r7.s64 + 13968;
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	f0.f64 = double(temp.f32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r5.u32);
	// stb r9,104(r31)
	PPC_STORE_U8(r31.u32 + 104, ctx.r9.u8);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264bfbc
	goto loc_8264BFBC;
loc_8264BFB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264BFBC:
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

PPC_WEAK_FUNC(sub_8264BF08) {
	__imp__sub_8264BF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264BFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c018
	if (cr6.eq) goto loc_8264C018;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8299e1f8
	sub_8299E1F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C018:
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

PPC_WEAK_FUNC(sub_8264BFD8) {
	__imp__sub_8264BFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C030) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c0a0
	if (cr6.eq) goto loc_8264C0A0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-4056
	ctx.r8.s64 = ctx.r9.s64 + -4056;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C0A0:
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

PPC_WEAK_FUNC(sub_8264C030) {
	__imp__sub_8264C030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C0B8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264c120
	if (cr6.eq) goto loc_8264C120;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,-17776
	ctx.r9.s64 = r11.s64 + -17776;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264C120:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264C0B8) {
	__imp__sub_8264C0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C130) {
	PPC_FUNC_PROLOGUE();
	// li r3,196
	ctx.r3.s64 = 196;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8264C130) {
	__imp__sub_8264C130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C138) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c188
	if (cr6.eq) goto loc_8264C188;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-27040
	ctx.r9.s64 = ctx.r10.s64 + -27040;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C188:
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

PPC_WEAK_FUNC(sub_8264C138) {
	__imp__sub_8264C138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C1A0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21776
	ctx.r4.s64 = r11.s64 + 21776;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264C1A0) {
	__imp__sub_8264C1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c220
	if (cr6.eq) goto loc_8264C220;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82533c38
	sub_82533C38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C220:
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

PPC_WEAK_FUNC(sub_8264C1E0) {
	__imp__sub_8264C1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C238) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c288
	if (cr6.eq) goto loc_8264C288;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,4384
	ctx.r9.s64 = ctx.r10.s64 + 4384;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C288:
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

PPC_WEAK_FUNC(sub_8264C238) {
	__imp__sub_8264C238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C2A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264c30c
	if (cr6.eq) goto loc_8264C30C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,16344
	ctx.r8.s64 = ctx.r10.s64 + 16344;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264c310
	goto loc_8264C310;
loc_8264C30C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264C310:
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

PPC_WEAK_FUNC(sub_8264C2A0) {
	__imp__sub_8264C2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C328) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264c3b8
	if (cr6.eq) goto loc_8264C3B8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-17912
	ctx.r8.s64 = ctx.r10.s64 + -17912;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,-15608
	ctx.r7.s64 = ctx.r9.s64 + -15608;
	// lfs f0,-17912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17912);
	f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// lfs f0,-9556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9556);
	f0.f64 = double(temp.f32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lfs f13,-952(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -952);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lfs f12,-9948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9948);
	ctx.f12.f64 = double(temp.f32);
	// stb r6,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r6.u8);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r11,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r11.u8);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264c3bc
	goto loc_8264C3BC;
loc_8264C3B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264C3BC:
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

PPC_WEAK_FUNC(sub_8264C328) {
	__imp__sub_8264C328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c418
	if (cr6.eq) goto loc_8264C418;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82509cc8
	sub_82509CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C418:
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

PPC_WEAK_FUNC(sub_8264C3D8) {
	__imp__sub_8264C3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C430) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264c4d0
	if (cr6.eq) goto loc_8264C4D0;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r11,-13180
	ctx.r8.s64 = r11.s64 + -13180;
	// addi r7,r10,17696
	ctx.r7.s64 = ctx.r10.s64 + 17696;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r6,r9,4320
	ctx.r6.s64 = ctx.r9.s64 + 4320;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// bl 0x823d2790
	sub_823D2790(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r11,r5,-19236
	r11.s64 = ctx.r5.s64 + -19236;
	// addi r10,r4,-32268
	ctx.r10.s64 = ctx.r4.s64 + -32268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lfs f12,-19236(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -19236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// lfs f0,-8232(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8232);
	f0.f64 = double(temp.f32);
	// stb r30,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r30.u8);
	// lfs f13,14872(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 14872);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264C4D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264C430) {
	__imp__sub_8264C430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c520
	if (cr6.eq) goto loc_8264C520;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826f7958
	sub_826F7958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C520:
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

PPC_WEAK_FUNC(sub_8264C4E0) {
	__imp__sub_8264C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C538) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c5ac
	if (cr6.eq) goto loc_8264C5AC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-3296
	ctx.r9.s64 = ctx.r10.s64 + -3296;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lbz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 144);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stb r6,144(r8)
	PPC_STORE_U8(ctx.r8.u32 + 144, ctx.r6.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C5AC:
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

PPC_WEAK_FUNC(sub_8264C538) {
	__imp__sub_8264C538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C5C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c658
	if (cr6.eq) goto loc_8264C658;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r8,r10,-27468
	ctx.r8.s64 = ctx.r10.s64 + -27468;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,-12688
	ctx.r6.s64 = ctx.r9.s64 + -12688;
	// lfs f12,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f12.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	f0.f64 = double(temp.f32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lfs f13,9364(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9364);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stvx128 v0,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C658:
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

PPC_WEAK_FUNC(sub_8264C5C8) {
	__imp__sub_8264C5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C670) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c6d0
	if (cr6.eq) goto loc_8264C6D0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-11696
	ctx.r9.s64 = ctx.r10.s64 + -11696;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C6D0:
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

PPC_WEAK_FUNC(sub_8264C670) {
	__imp__sub_8264C670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C6E8) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c76c
	if (cr6.eq) goto loc_8264C76C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-11504
	ctx.r8.s64 = ctx.r10.s64 + -11504;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lbz r5,144(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 144);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stb r4,144(r6)
	PPC_STORE_U8(ctx.r6.u32 + 144, ctx.r4.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C76C:
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

PPC_WEAK_FUNC(sub_8264C6E8) {
	__imp__sub_8264C6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c7c8
	if (cr6.eq) goto loc_8264C7C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b2138
	sub_826B2138(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C7C8:
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

PPC_WEAK_FUNC(sub_8264C788) {
	__imp__sub_8264C788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C7E0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c84c
	if (cr6.eq) goto loc_8264C84C;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,12296
	ctx.r9.s64 = ctx.r10.s64 + 12296;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,-27468(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C84C:
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

PPC_WEAK_FUNC(sub_8264C7E0) {
	__imp__sub_8264C7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C868) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c8b8
	if (cr6.eq) goto loc_8264C8B8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26976
	ctx.r9.s64 = ctx.r10.s64 + -26976;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C8B8:
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

PPC_WEAK_FUNC(sub_8264C868) {
	__imp__sub_8264C868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C8D0) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27968
	ctx.r4.s64 = r11.s64 + -27968;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264C8D0) {
	__imp__sub_8264C8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C910) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c96c
	if (cr6.eq) goto loc_8264C96C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,19368
	ctx.r9.s64 = ctx.r10.s64 + 19368;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stb r8,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C96C:
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

PPC_WEAK_FUNC(sub_8264C910) {
	__imp__sub_8264C910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C988) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c9e0
	if (cr6.eq) goto loc_8264C9E0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8984
	ctx.r9.s64 = ctx.r10.s64 + -8984;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264C9E0:
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

PPC_WEAK_FUNC(sub_8264C988) {
	__imp__sub_8264C988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264C9F8) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ca78
	if (cr6.eq) goto loc_8264CA78;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-5488
	ctx.r9.s64 = ctx.r10.s64 + -5488;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lbz r7,144(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 144);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stb r6,144(r8)
	PPC_STORE_U8(ctx.r8.u32 + 144, ctx.r6.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CA78:
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

PPC_WEAK_FUNC(sub_8264C9F8) {
	__imp__sub_8264C9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CA90) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cb08
	if (cr6.eq) goto loc_8264CB08;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-27880
	ctx.r8.s64 = ctx.r10.s64 + -27880;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r6,r9,5732
	ctx.r6.s64 = ctx.r9.s64 + 5732;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stb r7,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r7.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, r11.u8);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CB08:
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

PPC_WEAK_FUNC(sub_8264CA90) {
	__imp__sub_8264CA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CB20) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cb74
	if (cr6.eq) goto loc_8264CB74;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,13648
	ctx.r9.s64 = ctx.r10.s64 + 13648;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CB74:
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

PPC_WEAK_FUNC(sub_8264CB20) {
	__imp__sub_8264CB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CB90) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cbe0
	if (cr6.eq) goto loc_8264CBE0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8152
	ctx.r9.s64 = ctx.r10.s64 + -8152;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CBE0:
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

PPC_WEAK_FUNC(sub_8264CB90) {
	__imp__sub_8264CB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CBF8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cc88
	if (cr6.eq) goto loc_8264CC88;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,1040
	ctx.r8.s64 = ctx.r9.s64 + 1040;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, r11.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, r11.u8);
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CC88:
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

PPC_WEAK_FUNC(sub_8264CBF8) {
	__imp__sub_8264CBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CCA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,223
	ctx.r3.s64 = 223;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8264CCA0) {
	__imp__sub_8264CCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CCA8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cd08
	if (cr6.eq) goto loc_8264CD08;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-26912
	ctx.r8.s64 = ctx.r10.s64 + -26912;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CD08:
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

PPC_WEAK_FUNC(sub_8264CCA8) {
	__imp__sub_8264CCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CD20) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27892
	ctx.r4.s64 = r11.s64 + -27892;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264CD20) {
	__imp__sub_8264CD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CD60) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cdb0
	if (cr6.eq) goto loc_8264CDB0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-17680
	ctx.r9.s64 = ctx.r10.s64 + -17680;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CDB0:
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

PPC_WEAK_FUNC(sub_8264CD60) {
	__imp__sub_8264CD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CDC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,225
	ctx.r3.s64 = 225;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8264CDC8) {
	__imp__sub_8264CDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CDD0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ce24
	if (cr6.eq) goto loc_8264CE24;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26848
	ctx.r9.s64 = ctx.r10.s64 + -26848;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CE24:
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

PPC_WEAK_FUNC(sub_8264CDD0) {
	__imp__sub_8264CDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CE40) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27860
	ctx.r4.s64 = r11.s64 + -27860;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264CE40) {
	__imp__sub_8264CE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CE80) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264cef4
	if (cr6.eq) goto loc_8264CEF4;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-17024
	ctx.r10.s64 = r11.s64 + -17024;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,3224
	ctx.r4.s64 = ctx.r9.s64 + 3224;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264CEF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264CE80) {
	__imp__sub_8264CE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cf40
	if (cr6.eq) goto loc_8264CF40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82721010
	sub_82721010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CF40:
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

PPC_WEAK_FUNC(sub_8264CF00) {
	__imp__sub_8264CF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CF58) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264cfc0
	if (cr6.eq) goto loc_8264CFC0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-16064
	ctx.r9.s64 = ctx.r10.s64 + -16064;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264CFC0:
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

PPC_WEAK_FUNC(sub_8264CF58) {
	__imp__sub_8264CF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264CFD8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d090
	if (cr6.eq) goto loc_8264D090;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,560
	ctx.r8.s64 = ctx.r9.s64 + 560;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, r11.u8);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, r11.u8);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r7,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r7.u8);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D090:
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

PPC_WEAK_FUNC(sub_8264CFD8) {
	__imp__sub_8264CFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D0A8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264d14c
	if (cr6.eq) goto loc_8264D14C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-14904
	ctx.r10.s64 = r11.s64 + -14904;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x821ee1b8
	sub_821EE1B8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d120
	if (cr6.eq) goto loc_8264D120;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8264D120:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8264d12c
	if (cr0.eq) goto loc_8264D12C;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_8264D12C:
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264D14C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264D0A8) {
	__imp__sub_8264D0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d1e0
	if (cr6.eq) goto loc_8264D1E0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-18440
	ctx.r7.s64 = ctx.r10.s64 + -18440;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r5,r6,28344
	ctx.r5.s64 = ctx.r6.s64 + 28344;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_8264D1A0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8264d1a0
	if (!cr0.eq) goto loc_8264D1A0;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D1E0:
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

PPC_WEAK_FUNC(sub_8264D158) {
	__imp__sub_8264D158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D1F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d278
	if (cr6.eq) goto loc_8264D278;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,16616
	ctx.r7.s64 = ctx.r10.s64 + 16616;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r5,r9,-6136
	ctx.r5.s64 = ctx.r9.s64 + -6136;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r4,r8,10920
	ctx.r4.s64 = ctx.r8.s64 + 10920;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f0,-8700(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8700);
	f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D278:
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

PPC_WEAK_FUNC(sub_8264D1F8) {
	__imp__sub_8264D1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D290) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d2fc
	if (cr6.eq) goto loc_8264D2FC;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r9,r11,-14688
	ctx.r9.s64 = r11.s64 + -14688;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D2FC:
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

PPC_WEAK_FUNC(sub_8264D290) {
	__imp__sub_8264D290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D318) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d368
	if (cr6.eq) goto loc_8264D368;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2136
	ctx.r9.s64 = ctx.r10.s64 + -2136;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D368:
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

PPC_WEAK_FUNC(sub_8264D318) {
	__imp__sub_8264D318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D380) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264d414
	if (cr6.eq) goto loc_8264D414;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,18912
	ctx.r10.s64 = r11.s64 + 18912;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// stb r7,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264D414:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264D380) {
	__imp__sub_8264D380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d460
	if (cr6.eq) goto loc_8264D460;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8295c748
	sub_8295C748(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D460:
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

PPC_WEAK_FUNC(sub_8264D420) {
	__imp__sub_8264D420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D478) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d4d8
	if (cr6.eq) goto loc_8264D4D8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-13240
	ctx.r9.s64 = ctx.r10.s64 + -13240;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// lbz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stb r7,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r7.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D4D8:
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

PPC_WEAK_FUNC(sub_8264D478) {
	__imp__sub_8264D478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d530
	if (cr6.eq) goto loc_8264D530;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82998ef0
	sub_82998EF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D530:
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

PPC_WEAK_FUNC(sub_8264D4F0) {
	__imp__sub_8264D4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D548) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d5a8
	if (cr6.eq) goto loc_8264D5A8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-12760
	ctx.r9.s64 = ctx.r10.s64 + -12760;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D5A8:
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

PPC_WEAK_FUNC(sub_8264D548) {
	__imp__sub_8264D548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D5C0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d610
	if (cr6.eq) goto loc_8264D610;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,13584
	ctx.r9.s64 = ctx.r10.s64 + 13584;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D610:
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

PPC_WEAK_FUNC(sub_8264D5C0) {
	__imp__sub_8264D5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D628) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d678
	if (cr6.eq) goto loc_8264D678;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4856
	ctx.r9.s64 = ctx.r10.s64 + -4856;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D678:
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

PPC_WEAK_FUNC(sub_8264D628) {
	__imp__sub_8264D628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D690) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264d74c
	if (cr6.eq) goto loc_8264D74C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-12560
	ctx.r8.s64 = ctx.r9.s64 + -12560;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
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
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264d750
	goto loc_8264D750;
loc_8264D74C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264D750:
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

PPC_WEAK_FUNC(sub_8264D690) {
	__imp__sub_8264D690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D768) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d7c0
	if (cr6.eq) goto loc_8264D7C0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4280
	ctx.r9.s64 = ctx.r10.s64 + -4280;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D7C0:
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

PPC_WEAK_FUNC(sub_8264D768) {
	__imp__sub_8264D768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D7D8) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264d858
	if (cr6.eq) goto loc_8264D858;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,8440
	ctx.r9.s64 = r11.s64 + 8440;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lbz r6,144(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 144);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stb r5,144(r7)
	PPC_STORE_U8(ctx.r7.u32 + 144, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264D858:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264D7D8) {
	__imp__sub_8264D7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D868) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d8c4
	if (cr6.eq) goto loc_8264D8C4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,13192
	ctx.r9.s64 = ctx.r10.s64 + 13192;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D8C4:
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

PPC_WEAK_FUNC(sub_8264D868) {
	__imp__sub_8264D868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D8E0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d948
	if (cr6.eq) goto loc_8264D948;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,13840
	ctx.r8.s64 = ctx.r9.s64 + 13840;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D948:
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

PPC_WEAK_FUNC(sub_8264D8E0) {
	__imp__sub_8264D8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D960) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d9b0
	if (cr6.eq) goto loc_8264D9B0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-18376
	ctx.r9.s64 = ctx.r10.s64 + -18376;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264D9B0:
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

PPC_WEAK_FUNC(sub_8264D960) {
	__imp__sub_8264D960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264D9C8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264da18
	if (cr6.eq) goto loc_8264DA18;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-17520
	ctx.r9.s64 = ctx.r10.s64 + -17520;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264DA18:
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

PPC_WEAK_FUNC(sub_8264D9C8) {
	__imp__sub_8264D9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264dab4
	if (cr6.eq) goto loc_8264DAB4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-27104
	ctx.r7.s64 = ctx.r10.s64 + -27104;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r5,r6,28344
	ctx.r5.s64 = ctx.r6.s64 + 28344;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_8264DA78:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8264da78
	if (!cr0.eq) goto loc_8264DA78;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264DAB4:
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

PPC_WEAK_FUNC(sub_8264DA30) {
	__imp__sub_8264DA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DAD0) {
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
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27424
	ctx.r4.s64 = r11.s64 + -27424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_8264DAD0) {
	__imp__sub_8264DAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DB10) {
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
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264db38
	if (cr6.eq) goto loc_8264DB38;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8264DB38:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// addi r9,r11,-29424
	ctx.r9.s64 = r11.s64 + -29424;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8264db74
	if (cr6.eq) goto loc_8264DB74;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8264DB74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264DB10) {
	__imp__sub_8264DB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DB80) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264dc1c
	if (cr6.eq) goto loc_8264DC1C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-15944
	ctx.r10.s64 = r11.s64 + -15944;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264dbf8
	if (cr6.eq) goto loc_8264DBF8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,-17752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -17752);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x8264dbfc
	goto loc_8264DBFC;
loc_8264DBF8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8264DBFC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82974048
	sub_82974048(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_8264DC1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8264DB80) {
	__imp__sub_8264DB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DC28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264dcb0
	if (cr6.eq) goto loc_8264DCB0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,12232
	ctx.r8.s64 = ctx.r10.s64 + 12232;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// stb r11,37(r31)
	PPC_STORE_U8(r31.u32 + 37, r11.u8);
	// stb r11,38(r31)
	PPC_STORE_U8(r31.u32 + 38, r11.u8);
	// stb r11,39(r31)
	PPC_STORE_U8(r31.u32 + 39, r11.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8264dcb4
	goto loc_8264DCB4;
loc_8264DCB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264DCB4:
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

PPC_WEAK_FUNC(sub_8264DC28) {
	__imp__sub_8264DC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DCD0) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264dd58
	if (cr6.eq) goto loc_8264DD58;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,-14184
	ctx.r9.s64 = r11.s64 + -14184;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r7,r10,5732
	ctx.r7.s64 = ctx.r10.s64 + 5732;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82392c88
	sub_82392C88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264DD58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264DCD0) {
	__imp__sub_8264DCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DD68) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ddc4
	if (cr6.eq) goto loc_8264DDC4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-13400
	ctx.r9.s64 = ctx.r10.s64 + -13400;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264DDC4:
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

PPC_WEAK_FUNC(sub_8264DD68) {
	__imp__sub_8264DD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264dea8
	if (cr6.eq) goto loc_8264DEA8;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,-28812
	ctx.r4.s64 = ctx.r10.s64 + -28812;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// addi r10,r8,-7768
	ctx.r10.s64 = ctx.r8.s64 + -7768;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r8,r6,-7704
	ctx.r8.s64 = ctx.r6.s64 + -7704;
	// addi r6,r5,5732
	ctx.r6.s64 = ctx.r5.s64 + 5732;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r4,r5,28344
	ctx.r4.s64 = ctx.r5.s64 + 28344;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
loc_8264DE50:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8264de50
	if (!cr0.eq) goto loc_8264DE50;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// addi r9,r10,-32268
	ctx.r9.s64 = ctx.r10.s64 + -32268;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r11.u8);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264DEA8:
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

PPC_WEAK_FUNC(sub_8264DDE0) {
	__imp__sub_8264DDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DEC0) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264df6c
	if (cr6.eq) goto loc_8264DF6C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,12040
	ctx.r10.s64 = r11.s64 + 12040;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8246c600
	sub_8246C600(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// stb r30,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r30.u8);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82349c08
	sub_82349C08(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x828926e0
	sub_828926E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_8264DF6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264DEC0) {
	__imp__sub_8264DEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DF78) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264dfd0
	if (cr6.eq) goto loc_8264DFD0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-12184
	ctx.r9.s64 = ctx.r10.s64 + -12184;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264DFD0:
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

PPC_WEAK_FUNC(sub_8264DF78) {
	__imp__sub_8264DF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264DFE8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264e044
	if (cr6.eq) goto loc_8264E044;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-26088
	ctx.r9.s64 = ctx.r10.s64 + -26088;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264E044:
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

PPC_WEAK_FUNC(sub_8264DFE8) {
	__imp__sub_8264DFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264E060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264e100
	if (cr6.eq) goto loc_8264E100;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r10,-11368
	ctx.r6.s64 = ctx.r10.s64 + -11368;
	// addi r5,r8,28344
	ctx.r5.s64 = ctx.r8.s64 + 28344;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
loc_8264E0B0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8264e0b0
	if (!cr0.eq) goto loc_8264E0B0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_8264E0D0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8264e0d0
	if (!cr0.eq) goto loc_8264E0D0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264E100:
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

PPC_WEAK_FUNC(sub_8264E060) {
	__imp__sub_8264E060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264E118) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8264f058
	sub_8264F058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f1c8
	sub_8264F1C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f350
	sub_8264F350(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f4d8
	sub_8264F4D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f660
	sub_8264F660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f7e8
	sub_8264F7E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f970
	sub_8264F970(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264faf8
	sub_8264FAF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fc80
	sub_8264FC80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fe08
	sub_8264FE08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ff90
	sub_8264FF90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650118
	sub_82650118(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650288
	sub_82650288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650410
	sub_82650410(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650580
	sub_82650580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826506f0
	sub_826506F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650860
	sub_82650860(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826509e8
	sub_826509E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650b70
	sub_82650B70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650cf8
	sub_82650CF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650e68
	sub_82650E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650fd8
	sub_82650FD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651148
	sub_82651148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826512d0
	sub_826512D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651458
	sub_82651458(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826515d0
	sub_826515D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826517c8
	sub_826517C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651950
	sub_82651950(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651ad8
	sub_82651AD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651c60
	sub_82651C60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651de8
	sub_82651DE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651f70
	sub_82651F70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826520f8
	sub_826520F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652280
	sub_82652280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652408
	sub_82652408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652590
	sub_82652590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652700
	sub_82652700(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826528f8
	sub_826528F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652a80
	sub_82652A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652c00
	sub_82652C00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652d88
	sub_82652D88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652ef8
	sub_82652EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653080
	sub_82653080(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653208
	sub_82653208(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653390
	sub_82653390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653518
	sub_82653518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826536a0
	sub_826536A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653828
	sub_82653828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653a20
	sub_82653A20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653b90
	sub_82653B90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653d18
	sub_82653D18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653ea0
	sub_82653EA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654028
	sub_82654028(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826541b0
	sub_826541B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654338
	sub_82654338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826544c0
	sub_826544C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654648
	sub_82654648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826547d0
	sub_826547D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654958
	sub_82654958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654ae0
	sub_82654AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654c68
	sub_82654C68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654df0
	sub_82654DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f78
	sub_82654F78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655100
	sub_82655100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655288
	sub_82655288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655410
	sub_82655410(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655608
	sub_82655608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655790
	sub_82655790(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655918
	sub_82655918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655a88
	sub_82655A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655c10
	sub_82655C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655d98
	sub_82655D98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655f20
	sub_82655F20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826560a8
	sub_826560A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826562a0
	sub_826562A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656428
	sub_82656428(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826565b0
	sub_826565B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656720
	sub_82656720(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826568a8
	sub_826568A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656a30
	sub_82656A30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656ba0
	sub_82656BA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656d10
	sub_82656D10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656e98
	sub_82656E98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657020
	sub_82657020(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826571a8
	sub_826571A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657330
	sub_82657330(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826574d8
	sub_826574D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657660
	sub_82657660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826577e8
	sub_826577E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657970
	sub_82657970(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657ae0
	sub_82657AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657c68
	sub_82657C68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657df0
	sub_82657DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657f78
	sub_82657F78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658100
	sub_82658100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658270
	sub_82658270(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826583f8
	sub_826583F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658568
	sub_82658568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826586f0
	sub_826586F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658878
	sub_82658878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658a00
	sub_82658A00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658b88
	sub_82658B88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658d10
	sub_82658D10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658e98
	sub_82658E98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659020
	sub_82659020(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659190
	sub_82659190(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659318
	sub_82659318(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659510
	sub_82659510(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659698
	sub_82659698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659820
	sub_82659820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659a18
	sub_82659A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659ba0
	sub_82659BA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659d28
	sub_82659D28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659e98
	sub_82659E98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a020
	sub_8265A020(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a218
	sub_8265A218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a3a0
	sub_8265A3A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a528
	sub_8265A528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a6b0
	sub_8265A6B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a838
	sub_8265A838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a9c0
	sub_8265A9C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ab48
	sub_8265AB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265acb8
	sub_8265ACB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ae40
	sub_8265AE40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b008
	sub_8265B008(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b200
	sub_8265B200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b388
	sub_8265B388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b510
	sub_8265B510(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b680
	sub_8265B680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b808
	sub_8265B808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b990
	sub_8265B990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265bb00
	sub_8265BB00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265bcf8
	sub_8265BCF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265be68
	sub_8265BE68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c030
	sub_8265C030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c1b8
	sub_8265C1B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c3b0
	sub_8265C3B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c520
	sub_8265C520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c6a8
	sub_8265C6A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c818
	sub_8265C818(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c988
	sub_8265C988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265caf8
	sub_8265CAF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265cc68
	sub_8265CC68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265cdd8
	sub_8265CDD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265cf60
	sub_8265CF60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265d0e8
	sub_8265D0E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265d258
	sub_8265D258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265d450
	sub_8265D450(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265d5d8
	sub_8265D5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265d760
	sub_8265D760(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265d8d0
	sub_8265D8D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265da40
	sub_8265DA40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265dbc8
	sub_8265DBC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265dd38
	sub_8265DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265df30
	sub_8265DF30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e0b8
	sub_8265E0B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e240
	sub_8265E240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e3c8
	sub_8265E3C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e550
	sub_8265E550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e6c0
	sub_8265E6C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e848
	sub_8265E848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265e9d0
	sub_8265E9D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ebd0
	sub_8265EBD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ed40
	sub_8265ED40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ef38
	sub_8265EF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f0c0
	sub_8265F0C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f230
	sub_8265F230(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f3b8
	sub_8265F3B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f5b0
	sub_8265F5B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f738
	sub_8265F738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265f8a8
	sub_8265F8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265fa30
	sub_8265FA30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265fba0
	sub_8265FBA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265fd28
	sub_8265FD28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265ff20
	sub_8265FF20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826600a8
	sub_826600A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660230
	sub_82660230(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826603a0
	sub_826603A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660528
	sub_82660528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826606b0
	sub_826606B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826608a8
	sub_826608A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660a30
	sub_82660A30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660bb8
	sub_82660BB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660d28
	sub_82660D28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660f20
	sub_82660F20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661090
	sub_82661090(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661200
	sub_82661200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661370
	sub_82661370(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826614e0
	sub_826614E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661650
	sub_82661650(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826617c0
	sub_826617C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661930
	sub_82661930(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661aa0
	sub_82661AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661c28
	sub_82661C28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661d98
	sub_82661D98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661f20
	sub_82661F20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662090
	sub_82662090(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662218
	sub_82662218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662410
	sub_82662410(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662580
	sub_82662580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826626f0
	sub_826626F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662860
	sub_82662860(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826629e8
	sub_826629E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662b58
	sub_82662B58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662ce0
	sub_82662CE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662e68
	sub_82662E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82662ff0
	sub_82662FF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663178
	sub_82663178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663370
	sub_82663370(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826634f8
	sub_826634F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663680
	sub_82663680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663808
	sub_82663808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663990
	sub_82663990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663b18
	sub_82663B18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663ca0
	sub_82663CA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663e28
	sub_82663E28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82663fb0
	sub_82663FB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664138
	sub_82664138(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826642a8
	sub_826642A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664430
	sub_82664430(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664628
	sub_82664628(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664820
	sub_82664820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664990
	sub_82664990(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664b00
	sub_82664B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664c70
	sub_82664C70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664df8
	sub_82664DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82664fa0
	sub_82664FA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665198
	sub_82665198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665308
	sub_82665308(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665490
	sub_82665490(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665618
	sub_82665618(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826657a0
	sub_826657A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665928
	sub_82665928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665ab0
	sub_82665AB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665c38
	sub_82665C38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665dc0
	sub_82665DC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665f48
	sub_82665F48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666140
	sub_82666140(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826662c8
	sub_826662C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666450
	sub_82666450(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826665c0
	sub_826665C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826667b8
	sub_826667B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666928
	sub_82666928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666a98
	sub_82666A98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666c20
	sub_82666C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666d90
	sub_82666D90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666f00
	sub_82666F00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826670f8
	sub_826670F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667280
	sub_82667280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826673f0
	sub_826673F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667560
	sub_82667560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667758
	sub_82667758(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667900
	sub_82667900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667a88
	sub_82667A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667c10
	sub_82667C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667d98
	sub_82667D98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82667f20
	sub_82667F20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826680a8
	sub_826680A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82668218
	sub_82668218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82668408
	sub_82668408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82668590
	sub_82668590(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264edac
	if (cr6.eq) goto loc_8264EDAC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lbz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// divw r5,r8,r9
	ctx.r5.s32 = ctx.r8.s32 / ctx.r9.s32;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668b38
	sub_82668B38(ctx, base);
	// stb r29,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r29.u8);
loc_8264EDAC:
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264edf0
	if (cr6.eq) goto loc_8264EDF0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// lbz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi r5,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82551a88
	sub_82551A88(ctx, base);
	// stb r29,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r29.u8);
loc_8264EDF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264E118) {
	__imp__sub_8264E118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264EDF8) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// beq cr6,0x8264ee48
	if (cr6.eq) goto loc_8264EE48;
loc_8264EE30:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8264ee30
	if (!cr6.eq) goto loc_8264EE30;
loc_8264EE48:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_8264EDF8) {
	__imp__sub_8264EDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264EE60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// stw r28,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r28.u32);
	// beq cr6,0x8264ef4c
	if (cr6.eq) goto loc_8264EF4C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r26,r11,5732
	r26.s64 = r11.s64 + 5732;
loc_8264EEA0:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// stw r26,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264eeec
	if (cr6.eq) goto loc_8264EEEC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8264eee8
	if (!cr6.eq) goto loc_8264EEE8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264eee8
	if (!cr6.eq) goto loc_8264EEE8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8264EEE8:
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
loc_8264EEEC:
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// beq cr6,0x8264ef30
	if (cr6.eq) goto loc_8264EF30;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8264ef2c
	if (!cr6.eq) goto loc_8264EF2C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264ef2c
	if (!cr6.eq) goto loc_8264EF2C;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8264EF2C:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
loc_8264EF30:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x8264eea0
	if (!cr6.eq) goto loc_8264EEA0;
loc_8264EF4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_8264EE60) {
	__imp__sub_8264EE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264EF58) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, xer);
	// beq cr6,0x8264efd4
	if (cr6.eq) goto loc_8264EFD4;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r4,4
	r31.s64 = ctx.r4.s64 + 4;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,5732
	r29.s64 = r11.s64 + 5732;
loc_8264EF80:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r29,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264efc0
	if (cr6.eq) goto loc_8264EFC0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8264efbc
	if (!cr6.eq) goto loc_8264EFBC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264efbc
	if (!cr6.eq) goto loc_8264EFBC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_8264EFBC:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8264EFC0:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x8264ef80
	if (!cr6.eq) goto loc_8264EF80;
loc_8264EFD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_8264EF58) {
	__imp__sub_8264EF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264EFE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264f034
	if (cr6.eq) goto loc_8264F034;
	// li r11,-1
	r11.s64 = -1;
	// divwu r10,r11,r31
	ctx.r10.u32 = r11.u32 / r31.u32;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// bge cr6,0x8264f034
	if (!cr6.lt) goto loc_8264F034;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8264F034:
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
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

PPC_WEAK_FUNC(sub_8264EFE0) {
	__imp__sub_8264EFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F058) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f1bc
	if (cr6.eq) goto loc_8264F1BC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30548
	ctx.r4.s64 = r11.s64 + -30548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f0a0
	if (!cr6.eq) goto loc_8264F0A0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f0a4
	goto loc_8264F0A4;
loc_8264F0A0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F0A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,19336
	ctx.r9.s64 = r11.s64 + 19336;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f110
	if (!cr6.eq) goto loc_8264F110;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264f11c
	goto loc_8264F11C;
loc_8264F110:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264F11C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264f158
	if (!cr6.lt) goto loc_8264F158;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264f14c
	if (cr6.eq) goto loc_8264F14C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264F14C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264f174
	goto loc_8264F174;
loc_8264F158:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264F174:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r26,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r26,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r26.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264F1BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F058) {
	__imp__sub_8264F058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F1C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f334
	if (cr6.eq) goto loc_8264F334;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30536
	ctx.r4.s64 = r11.s64 + -30536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f214
	if (!cr6.eq) goto loc_8264F214;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f218
	goto loc_8264F218;
loc_8264F214:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F218:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,19544
	ctx.r9.s64 = r11.s64 + 19544;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,71
	ctx.r7.s64 = 71;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f284
	if (!cr6.eq) goto loc_8264F284;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264f290
	goto loc_8264F290;
loc_8264F284:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264F290:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264f2cc
	if (!cr6.lt) goto loc_8264F2CC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264f2c0
	if (cr6.eq) goto loc_8264F2C0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264F2C0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264f2e8
	goto loc_8264F2E8;
loc_8264F2CC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264F2E8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264F334:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264f344
	if (cr6.eq) goto loc_8264F344;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82910988
	sub_82910988(ctx, base);
loc_8264F344:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F1C8) {
	__imp__sub_8264F1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F350) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f4bc
	if (cr6.eq) goto loc_8264F4BC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30524
	ctx.r4.s64 = r11.s64 + -30524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f39c
	if (!cr6.eq) goto loc_8264F39C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f3a0
	goto loc_8264F3A0;
loc_8264F39C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F3A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,19688
	ctx.r9.s64 = r11.s64 + 19688;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f40c
	if (!cr6.eq) goto loc_8264F40C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264f418
	goto loc_8264F418;
loc_8264F40C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264F418:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264f454
	if (!cr6.lt) goto loc_8264F454;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264f448
	if (cr6.eq) goto loc_8264F448;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264F448:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264f470
	goto loc_8264F470;
loc_8264F454:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264F470:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264F4BC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264f4cc
	if (cr6.eq) goto loc_8264F4CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_8264F4CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F350) {
	__imp__sub_8264F350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F4D8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f644
	if (cr6.eq) goto loc_8264F644;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30504
	ctx.r4.s64 = r11.s64 + -30504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f524
	if (!cr6.eq) goto loc_8264F524;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f528
	goto loc_8264F528;
loc_8264F524:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F528:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,20008
	ctx.r9.s64 = r11.s64 + 20008;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f594
	if (!cr6.eq) goto loc_8264F594;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264f5a0
	goto loc_8264F5A0;
loc_8264F594:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264F5A0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264f5dc
	if (!cr6.lt) goto loc_8264F5DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264f5d0
	if (cr6.eq) goto loc_8264F5D0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264F5D0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264f5f8
	goto loc_8264F5F8;
loc_8264F5DC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264F5F8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264F644:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264f654
	if (cr6.eq) goto loc_8264F654;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_8264F654:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F4D8) {
	__imp__sub_8264F4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F660) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f7cc
	if (cr6.eq) goto loc_8264F7CC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30480
	ctx.r4.s64 = r11.s64 + -30480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f6ac
	if (!cr6.eq) goto loc_8264F6AC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f6b0
	goto loc_8264F6B0;
loc_8264F6AC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F6B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,20272
	ctx.r9.s64 = r11.s64 + 20272;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f71c
	if (!cr6.eq) goto loc_8264F71C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264f728
	goto loc_8264F728;
loc_8264F71C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264F728:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264f764
	if (!cr6.lt) goto loc_8264F764;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264f758
	if (cr6.eq) goto loc_8264F758;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264F758:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264f780
	goto loc_8264F780;
loc_8264F764:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264F780:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264F7CC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264f7dc
	if (cr6.eq) goto loc_8264F7DC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_8264F7DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F660) {
	__imp__sub_8264F660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F7E8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264f954
	if (cr6.eq) goto loc_8264F954;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-12228
	ctx.r4.s64 = r11.s64 + -12228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f834
	if (!cr6.eq) goto loc_8264F834;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f838
	goto loc_8264F838;
loc_8264F834:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F838:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,20808
	ctx.r9.s64 = r11.s64 + 20808;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f8a4
	if (!cr6.eq) goto loc_8264F8A4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264f8b0
	goto loc_8264F8B0;
loc_8264F8A4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264F8B0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264f8ec
	if (!cr6.lt) goto loc_8264F8EC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264f8e0
	if (cr6.eq) goto loc_8264F8E0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264F8E0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264f908
	goto loc_8264F908;
loc_8264F8EC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264F908:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264F954:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264f964
	if (cr6.eq) goto loc_8264F964;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_8264F964:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F7E8) {
	__imp__sub_8264F7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264F970) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264fadc
	if (cr6.eq) goto loc_8264FADC;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-15732
	ctx.r4.s64 = r11.s64 + -15732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264f9bc
	if (!cr6.eq) goto loc_8264F9BC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264f9c0
	goto loc_8264F9C0;
loc_8264F9BC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264F9C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,21000
	ctx.r9.s64 = r11.s64 + 21000;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fa2c
	if (!cr6.eq) goto loc_8264FA2C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264fa38
	goto loc_8264FA38;
loc_8264FA2C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264FA38:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264fa74
	if (!cr6.lt) goto loc_8264FA74;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264fa68
	if (cr6.eq) goto loc_8264FA68;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264FA68:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264fa90
	goto loc_8264FA90;
loc_8264FA74:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264FA90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264FADC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264faec
	if (cr6.eq) goto loc_8264FAEC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_8264FAEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264F970) {
	__imp__sub_8264F970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264FAF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264fc64
	if (cr6.eq) goto loc_8264FC64;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27816
	ctx.r4.s64 = r11.s64 + -27816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fb44
	if (!cr6.eq) goto loc_8264FB44;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264fb48
	goto loc_8264FB48;
loc_8264FB44:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264FB48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,20584
	ctx.r9.s64 = r11.s64 + 20584;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fbb4
	if (!cr6.eq) goto loc_8264FBB4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264fbc0
	goto loc_8264FBC0;
loc_8264FBB4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264FBC0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264fbfc
	if (!cr6.lt) goto loc_8264FBFC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264fbf0
	if (cr6.eq) goto loc_8264FBF0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264FBF0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264fc18
	goto loc_8264FC18;
loc_8264FBFC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264FC18:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264FC64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264fc74
	if (cr6.eq) goto loc_8264FC74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_8264FC74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264FAF8) {
	__imp__sub_8264FAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264FC80) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264fdec
	if (cr6.eq) goto loc_8264FDEC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30456
	ctx.r4.s64 = r11.s64 + -30456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fccc
	if (!cr6.eq) goto loc_8264FCCC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264fcd0
	goto loc_8264FCD0;
loc_8264FCCC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264FCD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,21144
	ctx.r9.s64 = r11.s64 + 21144;
	// addi r8,r10,17760
	ctx.r8.s64 = ctx.r10.s64 + 17760;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fd3c
	if (!cr6.eq) goto loc_8264FD3C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264fd48
	goto loc_8264FD48;
loc_8264FD3C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264FD48:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264fd84
	if (!cr6.lt) goto loc_8264FD84;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264fd78
	if (cr6.eq) goto loc_8264FD78;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264FD78:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264fda0
	goto loc_8264FDA0;
loc_8264FD84:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264FDA0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264FDEC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264fdfc
	if (cr6.eq) goto loc_8264FDFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82958d70
	sub_82958D70(ctx, base);
loc_8264FDFC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264FC80) {
	__imp__sub_8264FC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264FE08) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264ff74
	if (cr6.eq) goto loc_8264FF74;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30416
	ctx.r4.s64 = r11.s64 + -30416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fe54
	if (!cr6.eq) goto loc_8264FE54;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264fe58
	goto loc_8264FE58;
loc_8264FE54:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264FE58:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,21272
	ctx.r9.s64 = r11.s64 + 21272;
	// addi r8,r10,17760
	ctx.r8.s64 = ctx.r10.s64 + 17760;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264fec4
	if (!cr6.eq) goto loc_8264FEC4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8264fed0
	goto loc_8264FED0;
loc_8264FEC4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8264FED0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264ff0c
	if (!cr6.lt) goto loc_8264FF0C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264ff00
	if (cr6.eq) goto loc_8264FF00;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8264FF00:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8264ff28
	goto loc_8264FF28;
loc_8264FF0C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8264FF28:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8264FF74:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8264ff84
	if (cr6.eq) goto loc_8264FF84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824c3fe0
	sub_824C3FE0(ctx, base);
loc_8264FF84:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264FE08) {
	__imp__sub_8264FE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8264FF90) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826500fc
	if (cr6.eq) goto loc_826500FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12176
	ctx.r4.s64 = r11.s64 + 12176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264ffdc
	if (!cr6.eq) goto loc_8264FFDC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8264ffe0
	goto loc_8264FFE0;
loc_8264FFDC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8264FFE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,21464
	ctx.r9.s64 = r11.s64 + 21464;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265004c
	if (!cr6.eq) goto loc_8265004C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650058
	goto loc_82650058;
loc_8265004C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650058:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650094
	if (!cr6.lt) goto loc_82650094;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650088
	if (cr6.eq) goto loc_82650088;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650088:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826500b0
	goto loc_826500B0;
loc_82650094:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826500B0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826500FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265010c
	if (cr6.eq) goto loc_8265010C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826779b0
	sub_826779B0(ctx, base);
loc_8265010C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_8264FF90) {
	__imp__sub_8264FF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650118) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650280
	if (cr6.eq) goto loc_82650280;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30376
	ctx.r4.s64 = r11.s64 + -30376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650160
	if (!cr6.eq) goto loc_82650160;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82650164
	goto loc_82650164;
loc_82650160:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82650164:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,21552
	ctx.r9.s64 = r11.s64 + 21552;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,72
	ctx.r7.s64 = 72;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826501d0
	if (!cr6.eq) goto loc_826501D0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826501dc
	goto loc_826501DC;
loc_826501D0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826501DC:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650218
	if (!cr6.lt) goto loc_82650218;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8265020c
	if (cr6.eq) goto loc_8265020C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8265020C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82650234
	goto loc_82650234;
loc_82650218:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82650234:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650280:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82650118) {
	__imp__sub_82650118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650288) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826503f4
	if (cr6.eq) goto loc_826503F4;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8468
	ctx.r4.s64 = r11.s64 + -8468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826502d4
	if (!cr6.eq) goto loc_826502D4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826502d8
	goto loc_826502D8;
loc_826502D4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826502D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,21680
	ctx.r9.s64 = r11.s64 + 21680;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650344
	if (!cr6.eq) goto loc_82650344;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650350
	goto loc_82650350;
loc_82650344:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650350:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265038c
	if (!cr6.lt) goto loc_8265038C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650380
	if (cr6.eq) goto loc_82650380;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650380:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826503a8
	goto loc_826503A8;
loc_8265038C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826503A8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826503F4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82650404
	if (cr6.eq) goto loc_82650404;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82549cb8
	sub_82549CB8(ctx, base);
loc_82650404:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82650288) {
	__imp__sub_82650288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650410) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650578
	if (cr6.eq) goto loc_82650578;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30356
	ctx.r4.s64 = r11.s64 + -30356;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650458
	if (!cr6.eq) goto loc_82650458;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8265045c
	goto loc_8265045C;
loc_82650458:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8265045C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,21768
	ctx.r9.s64 = r11.s64 + 21768;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826504c8
	if (!cr6.eq) goto loc_826504C8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826504d4
	goto loc_826504D4;
loc_826504C8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826504D4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650510
	if (!cr6.lt) goto loc_82650510;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650504
	if (cr6.eq) goto loc_82650504;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650504:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8265052c
	goto loc_8265052C;
loc_82650510:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8265052C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650578:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82650410) {
	__imp__sub_82650410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650580) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826506e8
	if (cr6.eq) goto loc_826506E8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30324
	ctx.r4.s64 = r11.s64 + -30324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826505c8
	if (!cr6.eq) goto loc_826505C8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826505cc
	goto loc_826505CC;
loc_826505C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826505CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,21920
	ctx.r9.s64 = r11.s64 + 21920;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650638
	if (!cr6.eq) goto loc_82650638;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650644
	goto loc_82650644;
loc_82650638:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650644:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650680
	if (!cr6.lt) goto loc_82650680;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650674
	if (cr6.eq) goto loc_82650674;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650674:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8265069c
	goto loc_8265069C;
loc_82650680:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8265069C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826506E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82650580) {
	__imp__sub_82650580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826506F0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650858
	if (cr6.eq) goto loc_82650858;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30032
	ctx.r4.s64 = r11.s64 + 30032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650738
	if (!cr6.eq) goto loc_82650738;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x8265073c
	goto loc_8265073C;
loc_82650738:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_8265073C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,22064
	ctx.r9.s64 = r11.s64 + 22064;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826507a8
	if (!cr6.eq) goto loc_826507A8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826507b4
	goto loc_826507B4;
loc_826507A8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826507B4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826507f0
	if (!cr6.lt) goto loc_826507F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826507e4
	if (cr6.eq) goto loc_826507E4;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826507E4:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8265080c
	goto loc_8265080C;
loc_826507F0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8265080C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650858:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_826506F0) {
	__imp__sub_826506F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650860) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826509cc
	if (cr6.eq) goto loc_826509CC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30204
	ctx.r4.s64 = r11.s64 + 30204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826508ac
	if (!cr6.eq) goto loc_826508AC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826508b0
	goto loc_826508B0;
loc_826508AC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826508B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,22152
	ctx.r9.s64 = r11.s64 + 22152;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265091c
	if (!cr6.eq) goto loc_8265091C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650928
	goto loc_82650928;
loc_8265091C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650928:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650964
	if (!cr6.lt) goto loc_82650964;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650958
	if (cr6.eq) goto loc_82650958;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650958:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82650980
	goto loc_82650980;
loc_82650964:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82650980:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826509CC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826509dc
	if (cr6.eq) goto loc_826509DC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246be68
	sub_8246BE68(ctx, base);
loc_826509DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82650860) {
	__imp__sub_82650860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826509E8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650b54
	if (cr6.eq) goto loc_82650B54;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30176
	ctx.r4.s64 = r11.s64 + 30176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650a34
	if (!cr6.eq) goto loc_82650A34;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82650a38
	goto loc_82650A38;
loc_82650A34:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82650A38:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,22240
	ctx.r9.s64 = r11.s64 + 22240;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650aa4
	if (!cr6.eq) goto loc_82650AA4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650ab0
	goto loc_82650AB0;
loc_82650AA4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650AB0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650aec
	if (!cr6.lt) goto loc_82650AEC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650ae0
	if (cr6.eq) goto loc_82650AE0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650AE0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82650b08
	goto loc_82650B08;
loc_82650AEC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82650B08:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650B54:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82650b64
	if (cr6.eq) goto loc_82650B64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82543230
	sub_82543230(ctx, base);
loc_82650B64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826509E8) {
	__imp__sub_826509E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650B70) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650cdc
	if (cr6.eq) goto loc_82650CDC;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-6812
	ctx.r4.s64 = r11.s64 + -6812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650bbc
	if (!cr6.eq) goto loc_82650BBC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82650bc0
	goto loc_82650BC0;
loc_82650BBC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82650BC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,22488
	ctx.r9.s64 = r11.s64 + 22488;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650c2c
	if (!cr6.eq) goto loc_82650C2C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650c38
	goto loc_82650C38;
loc_82650C2C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650C38:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650c74
	if (!cr6.lt) goto loc_82650C74;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650c68
	if (cr6.eq) goto loc_82650C68;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650C68:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82650c90
	goto loc_82650C90;
loc_82650C74:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82650C90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650CDC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82650cec
	if (cr6.eq) goto loc_82650CEC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8255f6f0
	sub_8255F6F0(ctx, base);
loc_82650CEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82650B70) {
	__imp__sub_82650B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650CF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650e60
	if (cr6.eq) goto loc_82650E60;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30284
	ctx.r4.s64 = r11.s64 + -30284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650d40
	if (!cr6.eq) goto loc_82650D40;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82650d44
	goto loc_82650D44;
loc_82650D40:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82650D44:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,22800
	ctx.r9.s64 = r11.s64 + 22800;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650db0
	if (!cr6.eq) goto loc_82650DB0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650dbc
	goto loc_82650DBC;
loc_82650DB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650DBC:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650df8
	if (!cr6.lt) goto loc_82650DF8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650dec
	if (cr6.eq) goto loc_82650DEC;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650DEC:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82650e14
	goto loc_82650E14;
loc_82650DF8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82650E14:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650E60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82650CF8) {
	__imp__sub_82650CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650E68) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82650fd0
	if (cr6.eq) goto loc_82650FD0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27712
	ctx.r4.s64 = r11.s64 + -27712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650eb0
	if (!cr6.eq) goto loc_82650EB0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82650eb4
	goto loc_82650EB4;
loc_82650EB0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82650EB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32155
	r11.s64 = -2107310080;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,-11784
	ctx.r9.s64 = r11.s64 + -11784;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82650f20
	if (!cr6.eq) goto loc_82650F20;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82650f2c
	goto loc_82650F2C;
loc_82650F20:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82650F2C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82650f68
	if (!cr6.lt) goto loc_82650F68;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82650f5c
	if (cr6.eq) goto loc_82650F5C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82650F5C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82650f84
	goto loc_82650F84;
loc_82650F68:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82650F84:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82650FD0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82650E68) {
	__imp__sub_82650E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82650FD8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651140
	if (cr6.eq) goto loc_82651140;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12136
	ctx.r4.s64 = r11.s64 + 12136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651020
	if (!cr6.eq) goto loc_82651020;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651024
	goto loc_82651024;
loc_82651020:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651024:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,22944
	ctx.r9.s64 = r11.s64 + 22944;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651090
	if (!cr6.eq) goto loc_82651090;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8265109c
	goto loc_8265109C;
loc_82651090:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265109C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826510d8
	if (!cr6.lt) goto loc_826510D8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826510cc
	if (cr6.eq) goto loc_826510CC;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826510CC:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826510f4
	goto loc_826510F4;
loc_826510D8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826510F4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651140:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82650FD8) {
	__imp__sub_82650FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651148) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826512b4
	if (cr6.eq) goto loc_826512B4;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30256
	ctx.r4.s64 = r11.s64 + -30256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651194
	if (!cr6.eq) goto loc_82651194;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651198
	goto loc_82651198;
loc_82651194:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651198:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,23104
	ctx.r9.s64 = r11.s64 + 23104;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,1
	r27.s64 = 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,67
	ctx.r7.s64 = 67;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651204
	if (!cr6.eq) goto loc_82651204;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82651210
	goto loc_82651210;
loc_82651204:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651210:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265124c
	if (!cr6.lt) goto loc_8265124C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82651240
	if (cr6.eq) goto loc_82651240;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82651240:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8265126c
	goto loc_8265126C;
loc_8265124C:
	// li r11,0
	r11.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_8265126C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r27,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r27,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r27.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826512B4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826512c4
	if (cr6.eq) goto loc_826512C4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82751560
	sub_82751560(ctx, base);
loc_826512C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82651148) {
	__imp__sub_82651148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826512D0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651440
	if (cr6.eq) goto loc_82651440;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,4308
	ctx.r4.s64 = r11.s64 + 4308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265131c
	if (!cr6.eq) goto loc_8265131C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651320
	goto loc_82651320;
loc_8265131C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651320:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,23192
	ctx.r9.s64 = r11.s64 + 23192;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265138c
	if (!cr6.eq) goto loc_8265138C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82651398
	goto loc_82651398;
loc_8265138C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651398:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826513d4
	if (!cr6.lt) goto loc_826513D4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826513c8
	if (cr6.eq) goto loc_826513C8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826513C8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826513f4
	goto loc_826513F4;
loc_826513D4:
	// li r11,0
	r11.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826513F4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651440:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82651450
	if (cr6.eq) goto loc_82651450;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824398a0
	sub_824398A0(ctx, base);
loc_82651450:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_826512D0) {
	__imp__sub_826512D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651458) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826515c4
	if (cr6.eq) goto loc_826515C4;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30244
	ctx.r4.s64 = r11.s64 + -30244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826514a0
	if (!cr6.eq) goto loc_826514A0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826514a4
	goto loc_826514A4;
loc_826514A0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826514A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,23280
	ctx.r9.s64 = r11.s64 + 23280;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r6,73
	ctx.r6.s64 = 73;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651510
	if (!cr6.eq) goto loc_82651510;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8265151c
	goto loc_8265151C;
loc_82651510:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_8265151C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82651558
	if (!cr6.lt) goto loc_82651558;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8265154c
	if (cr6.eq) goto loc_8265154C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_8265154C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82651578
	goto loc_82651578;
loc_82651558:
	// li r11,0
	r11.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82651578:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826515C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82651458) {
	__imp__sub_82651458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826515D0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651740
	if (cr6.eq) goto loc_82651740;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30232
	ctx.r4.s64 = r11.s64 + -30232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265161c
	if (!cr6.eq) goto loc_8265161C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651620
	goto loc_82651620;
loc_8265161C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651620:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,23400
	ctx.r9.s64 = r11.s64 + 23400;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r6,74
	ctx.r6.s64 = 74;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265168c
	if (!cr6.eq) goto loc_8265168C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82651698
	goto loc_82651698;
loc_8265168C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651698:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826516d4
	if (!cr6.lt) goto loc_826516D4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826516c8
	if (cr6.eq) goto loc_826516C8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826516C8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826516f4
	goto loc_826516F4;
loc_826516D4:
	// li r11,0
	r11.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826516F4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651740:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826517c0
	if (cr6.eq) goto loc_826517C0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-15616
	r31.s64 = r11.s64 + -15616;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827bdad0
	sub_827BDAD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,24896
	ctx.r4.s64 = ctx.r10.s64 + 24896;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,4672
	ctx.r6.s64 = ctx.r9.s64 + 4672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827bdd18
	sub_827BDD18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826517C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_826515D0) {
	__imp__sub_826515D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826517C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651934
	if (cr6.eq) goto loc_82651934;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-13040
	ctx.r4.s64 = r11.s64 + -13040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651814
	if (!cr6.eq) goto loc_82651814;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651818
	goto loc_82651818;
loc_82651814:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651818:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,23520
	ctx.r9.s64 = r11.s64 + 23520;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,76
	ctx.r7.s64 = 76;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651884
	if (!cr6.eq) goto loc_82651884;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82651890
	goto loc_82651890;
loc_82651884:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651890:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826518cc
	if (!cr6.lt) goto loc_826518CC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826518c0
	if (cr6.eq) goto loc_826518C0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826518C0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826518e8
	goto loc_826518E8;
loc_826518CC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826518E8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651934:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82651944
	if (cr6.eq) goto loc_82651944;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8252a428
	sub_8252A428(ctx, base);
loc_82651944:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826517C8) {
	__imp__sub_826517C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651950) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651abc
	if (cr6.eq) goto loc_82651ABC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-31544
	ctx.r4.s64 = r11.s64 + -31544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265199c
	if (!cr6.eq) goto loc_8265199C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826519a0
	goto loc_826519A0;
loc_8265199C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826519A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,23848
	ctx.r9.s64 = r11.s64 + 23848;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,33
	ctx.r7.s64 = 33;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651a0c
	if (!cr6.eq) goto loc_82651A0C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82651a18
	goto loc_82651A18;
loc_82651A0C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651A18:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82651a54
	if (!cr6.lt) goto loc_82651A54;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82651a48
	if (cr6.eq) goto loc_82651A48;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82651A48:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82651a70
	goto loc_82651A70;
loc_82651A54:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82651A70:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651ABC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82651acc
	if (cr6.eq) goto loc_82651ACC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823c6030
	sub_823C6030(ctx, base);
loc_82651ACC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82651950) {
	__imp__sub_82651950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651AD8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651c44
	if (cr6.eq) goto loc_82651C44;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30220
	ctx.r4.s64 = r11.s64 + -30220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651b24
	if (!cr6.eq) goto loc_82651B24;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651b28
	goto loc_82651B28;
loc_82651B24:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651B28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// addi r9,r11,23936
	ctx.r9.s64 = r11.s64 + 23936;
	// addi r8,r10,25616
	ctx.r8.s64 = ctx.r10.s64 + 25616;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,77
	ctx.r7.s64 = 77;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651b94
	if (!cr6.eq) goto loc_82651B94;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82651ba0
	goto loc_82651BA0;
loc_82651B94:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651BA0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82651bdc
	if (!cr6.lt) goto loc_82651BDC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82651bd0
	if (cr6.eq) goto loc_82651BD0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82651BD0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82651bf8
	goto loc_82651BF8;
loc_82651BDC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82651BF8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651C44:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82651c54
	if (cr6.eq) goto loc_82651C54;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82986420
	sub_82986420(ctx, base);
loc_82651C54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82651AD8) {
	__imp__sub_82651AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651C60) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651dcc
	if (cr6.eq) goto loc_82651DCC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30204
	ctx.r4.s64 = r11.s64 + -30204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651cac
	if (!cr6.eq) goto loc_82651CAC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651cb0
	goto loc_82651CB0;
loc_82651CAC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651CB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// addi r9,r11,24024
	ctx.r9.s64 = r11.s64 + 24024;
	// addi r8,r10,25616
	ctx.r8.s64 = ctx.r10.s64 + 25616;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,77
	ctx.r7.s64 = 77;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651d1c
	if (!cr6.eq) goto loc_82651D1C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82651d28
	goto loc_82651D28;
loc_82651D1C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651D28:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82651d64
	if (!cr6.lt) goto loc_82651D64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82651d58
	if (cr6.eq) goto loc_82651D58;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82651D58:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82651d80
	goto loc_82651D80;
loc_82651D64:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82651D80:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651DCC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82651ddc
	if (cr6.eq) goto loc_82651DDC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82986420
	sub_82986420(ctx, base);
loc_82651DDC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82651C60) {
	__imp__sub_82651C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651DE8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82651f54
	if (cr6.eq) goto loc_82651F54;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30188
	ctx.r4.s64 = r11.s64 + -30188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651e34
	if (!cr6.eq) goto loc_82651E34;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651e38
	goto loc_82651E38;
loc_82651E34:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651E38:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// addi r9,r11,24112
	ctx.r9.s64 = r11.s64 + 24112;
	// addi r8,r10,25616
	ctx.r8.s64 = ctx.r10.s64 + 25616;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,77
	ctx.r7.s64 = 77;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651ea4
	if (!cr6.eq) goto loc_82651EA4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82651eb0
	goto loc_82651EB0;
loc_82651EA4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82651EB0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82651eec
	if (!cr6.lt) goto loc_82651EEC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82651ee0
	if (cr6.eq) goto loc_82651EE0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82651EE0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82651f08
	goto loc_82651F08;
loc_82651EEC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82651F08:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82651F54:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82651f64
	if (cr6.eq) goto loc_82651F64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82986420
	sub_82986420(ctx, base);
loc_82651F64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82651DE8) {
	__imp__sub_82651DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82651F70) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826520dc
	if (cr6.eq) goto loc_826520DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30840
	ctx.r4.s64 = r11.s64 + -30840;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82651fbc
	if (!cr6.eq) goto loc_82651FBC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82651fc0
	goto loc_82651FC0;
loc_82651FBC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82651FC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,24200
	ctx.r9.s64 = r11.s64 + 24200;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,23
	ctx.r7.s64 = 23;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265202c
	if (!cr6.eq) goto loc_8265202C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82652038
	goto loc_82652038;
loc_8265202C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82652038:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652074
	if (!cr6.lt) goto loc_82652074;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652068
	if (cr6.eq) goto loc_82652068;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652068:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652090
	goto loc_82652090;
loc_82652074:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652090:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826520DC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826520ec
	if (cr6.eq) goto loc_826520EC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239b930
	sub_8239B930(ctx, base);
loc_826520EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82651F70) {
	__imp__sub_82651F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826520F8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652264
	if (cr6.eq) goto loc_82652264;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30168
	ctx.r4.s64 = r11.s64 + -30168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652144
	if (!cr6.eq) goto loc_82652144;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652148
	goto loc_82652148;
loc_82652144:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652148:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,24288
	ctx.r9.s64 = r11.s64 + 24288;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,78
	ctx.r7.s64 = 78;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826521b4
	if (!cr6.eq) goto loc_826521B4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826521c0
	goto loc_826521C0;
loc_826521B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826521C0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826521fc
	if (!cr6.lt) goto loc_826521FC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826521f0
	if (cr6.eq) goto loc_826521F0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826521F0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652218
	goto loc_82652218;
loc_826521FC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652218:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82652264:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82652274
	if (cr6.eq) goto loc_82652274;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82754f98
	sub_82754F98(ctx, base);
loc_82652274:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826520F8) {
	__imp__sub_826520F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652280) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826523ec
	if (cr6.eq) goto loc_826523EC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30152
	ctx.r4.s64 = r11.s64 + -30152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826522cc
	if (!cr6.eq) goto loc_826522CC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826522d0
	goto loc_826522D0;
loc_826522CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826522D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,24504
	ctx.r9.s64 = r11.s64 + 24504;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,79
	ctx.r7.s64 = 79;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265233c
	if (!cr6.eq) goto loc_8265233C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82652348
	goto loc_82652348;
loc_8265233C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82652348:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652384
	if (!cr6.lt) goto loc_82652384;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652378
	if (cr6.eq) goto loc_82652378;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652378:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826523a0
	goto loc_826523A0;
loc_82652384:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826523A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826523EC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826523fc
	if (cr6.eq) goto loc_826523FC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827eb730
	sub_827EB730(ctx, base);
loc_826523FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82652280) {
	__imp__sub_82652280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652408) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652574
	if (cr6.eq) goto loc_82652574;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29236
	ctx.r4.s64 = r11.s64 + 29236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652454
	if (!cr6.eq) goto loc_82652454;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652458
	goto loc_82652458;
loc_82652454:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652458:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,24728
	ctx.r9.s64 = r11.s64 + 24728;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826524c4
	if (!cr6.eq) goto loc_826524C4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826524d0
	goto loc_826524D0;
loc_826524C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826524D0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265250c
	if (!cr6.lt) goto loc_8265250C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652500
	if (cr6.eq) goto loc_82652500;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652500:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652528
	goto loc_82652528;
loc_8265250C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652528:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82652574:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82652584
	if (cr6.eq) goto loc_82652584;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8261c7e0
	sub_8261C7E0(ctx, base);
loc_82652584:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82652408) {
	__imp__sub_82652408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652590) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826526f8
	if (cr6.eq) goto loc_826526F8;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30136
	ctx.r4.s64 = r11.s64 + -30136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826525d8
	if (!cr6.eq) goto loc_826525D8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826525dc
	goto loc_826525DC;
loc_826525D8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826525DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,24888
	ctx.r9.s64 = r11.s64 + 24888;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,80
	ctx.r7.s64 = 80;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652648
	if (!cr6.eq) goto loc_82652648;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82652654
	goto loc_82652654;
loc_82652648:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82652654:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652690
	if (!cr6.lt) goto loc_82652690;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652684
	if (cr6.eq) goto loc_82652684;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652684:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826526ac
	goto loc_826526AC;
loc_82652690:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826526AC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826526F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82652590) {
	__imp__sub_82652590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652700) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265286c
	if (cr6.eq) goto loc_8265286C;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8692
	ctx.r4.s64 = r11.s64 + -8692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265274c
	if (!cr6.eq) goto loc_8265274C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652750
	goto loc_82652750;
loc_8265274C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652750:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,24592
	ctx.r9.s64 = r11.s64 + 24592;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,82
	ctx.r7.s64 = 82;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826527bc
	if (!cr6.eq) goto loc_826527BC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826527c8
	goto loc_826527C8;
loc_826527BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826527C8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652804
	if (!cr6.lt) goto loc_82652804;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826527f8
	if (cr6.eq) goto loc_826527F8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826527F8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652820
	goto loc_82652820;
loc_82652804:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652820:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265286C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826528ec
	if (cr6.eq) goto loc_826528EC;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-8512
	r31.s64 = r11.s64 + -8512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82546350
	sub_82546350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8500
	ctx.r4.s64 = ctx.r10.s64 + -8500;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,19848
	ctx.r6.s64 = ctx.r9.s64 + 19848;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82546598
	sub_82546598(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826528EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82652700) {
	__imp__sub_82652700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826528F8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652a64
	if (cr6.eq) goto loc_82652A64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29360
	ctx.r4.s64 = r11.s64 + -29360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652944
	if (!cr6.eq) goto loc_82652944;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652948
	goto loc_82652948;
loc_82652944:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652948:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25024
	ctx.r9.s64 = r11.s64 + 25024;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,81
	ctx.r7.s64 = 81;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826529b4
	if (!cr6.eq) goto loc_826529B4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826529c0
	goto loc_826529C0;
loc_826529B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826529C0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826529fc
	if (!cr6.lt) goto loc_826529FC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826529f0
	if (cr6.eq) goto loc_826529F0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826529F0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652a18
	goto loc_82652A18;
loc_826529FC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652A18:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82652A64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82652a74
	if (cr6.eq) goto loc_82652A74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239eee0
	sub_8239EEE0(ctx, base);
loc_82652A74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826528F8) {
	__imp__sub_826528F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652A80) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lbz r11,44(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652be8
	if (cr6.eq) goto loc_82652BE8;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-17012
	ctx.r4.s64 = r11.s64 + -17012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652acc
	if (!cr6.eq) goto loc_82652ACC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652ad0
	goto loc_82652AD0;
loc_82652ACC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652AD0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25152
	ctx.r9.s64 = r11.s64 + 25152;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r26,0
	r26.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r29,24
	r29.s64 = 24;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652b38
	if (!cr6.eq) goto loc_82652B38;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x82652b44
	goto loc_82652B44;
loc_82652B38:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r9,r29
	ctx.r10.s32 = ctx.r9.s32 / r29.s32;
loc_82652B44:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r29
	ctx.r9.s32 = r11.s32 / r29.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652b80
	if (!cr6.lt) goto loc_82652B80;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652b74
	if (cr6.eq) goto loc_82652B74;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652B74:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652b9c
	goto loc_82652B9C;
loc_82652B80:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652B9C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r28,24
	r31.s64 = r28.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r28)
	PPC_STORE_U8(r28.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82652BE8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82652bf8
	if (cr6.eq) goto loc_82652BF8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82504788
	sub_82504788(ctx, base);
loc_82652BF8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82652A80) {
	__imp__sub_82652A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652C00) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652d6c
	if (cr6.eq) goto loc_82652D6C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30116
	ctx.r4.s64 = r11.s64 + -30116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652c4c
	if (!cr6.eq) goto loc_82652C4C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652c50
	goto loc_82652C50;
loc_82652C4C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652C50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25328
	ctx.r9.s64 = r11.s64 + 25328;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,83
	ctx.r7.s64 = 83;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652cbc
	if (!cr6.eq) goto loc_82652CBC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82652cc8
	goto loc_82652CC8;
loc_82652CBC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82652CC8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652d04
	if (!cr6.lt) goto loc_82652D04;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652cf8
	if (cr6.eq) goto loc_82652CF8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652CF8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652d20
	goto loc_82652D20;
loc_82652D04:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652D20:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82652D6C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82652d7c
	if (cr6.eq) goto loc_82652D7C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828aa2a0
	sub_828AA2A0(ctx, base);
loc_82652D7C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82652C00) {
	__imp__sub_82652C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652D88) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82652ef0
	if (cr6.eq) goto loc_82652EF0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-15752
	ctx.r4.s64 = r11.s64 + -15752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652dd0
	if (!cr6.eq) goto loc_82652DD0;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652dd4
	goto loc_82652DD4;
loc_82652DD0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652DD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25560
	ctx.r9.s64 = r11.s64 + 25560;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,84
	ctx.r7.s64 = 84;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652e40
	if (!cr6.eq) goto loc_82652E40;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82652e4c
	goto loc_82652E4C;
loc_82652E40:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82652E4C:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652e88
	if (!cr6.lt) goto loc_82652E88;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652e7c
	if (cr6.eq) goto loc_82652E7C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652E7C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82652ea4
	goto loc_82652EA4;
loc_82652E88:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82652EA4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82652EF0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82652D88) {
	__imp__sub_82652D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82652EF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653064
	if (cr6.eq) goto loc_82653064;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29988
	ctx.r4.s64 = r11.s64 + 29988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652f44
	if (!cr6.eq) goto loc_82652F44;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82652f48
	goto loc_82652F48;
loc_82652F44:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82652F48:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25688
	ctx.r9.s64 = r11.s64 + 25688;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,19
	ctx.r7.s64 = 19;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82652fb4
	if (!cr6.eq) goto loc_82652FB4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82652fc0
	goto loc_82652FC0;
loc_82652FB4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82652FC0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82652ffc
	if (!cr6.lt) goto loc_82652FFC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82652ff0
	if (cr6.eq) goto loc_82652FF0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82652FF0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653018
	goto loc_82653018;
loc_82652FFC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653018:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653064:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82653074
	if (cr6.eq) goto loc_82653074;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825176f8
	sub_825176F8(ctx, base);
loc_82653074:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82652EF8) {
	__imp__sub_82652EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653080) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826531ec
	if (cr6.eq) goto loc_826531EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30008
	ctx.r4.s64 = r11.s64 + 30008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826530cc
	if (!cr6.eq) goto loc_826530CC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826530d0
	goto loc_826530D0;
loc_826530CC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826530D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25776
	ctx.r9.s64 = r11.s64 + 25776;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,21
	ctx.r7.s64 = 21;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265313c
	if (!cr6.eq) goto loc_8265313C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82653148
	goto loc_82653148;
loc_8265313C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653148:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82653184
	if (!cr6.lt) goto loc_82653184;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653178
	if (cr6.eq) goto loc_82653178;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653178:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826531a0
	goto loc_826531A0;
loc_82653184:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826531A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826531EC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826531fc
	if (cr6.eq) goto loc_826531FC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823f3450
	sub_823F3450(ctx, base);
loc_826531FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653080) {
	__imp__sub_82653080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653208) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653374
	if (cr6.eq) goto loc_82653374;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30232
	ctx.r4.s64 = r11.s64 + 30232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653254
	if (!cr6.eq) goto loc_82653254;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653258
	goto loc_82653258;
loc_82653254:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653258:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,25864
	ctx.r9.s64 = r11.s64 + 25864;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,49
	ctx.r7.s64 = 49;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826532c4
	if (!cr6.eq) goto loc_826532C4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826532d0
	goto loc_826532D0;
loc_826532C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826532D0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265330c
	if (!cr6.lt) goto loc_8265330C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653300
	if (cr6.eq) goto loc_82653300;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653300:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653328
	goto loc_82653328;
loc_8265330C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653328:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653374:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82653384
	if (cr6.eq) goto loc_82653384;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8297b2e0
	sub_8297B2E0(ctx, base);
loc_82653384:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653208) {
	__imp__sub_82653208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653390) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653500
	if (cr6.eq) goto loc_82653500;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,10468
	ctx.r4.s64 = r11.s64 + 10468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826533dc
	if (!cr6.eq) goto loc_826533DC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826533e0
	goto loc_826533E0;
loc_826533DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826533E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26040
	ctx.r9.s64 = r11.s64 + 26040;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r6,87
	ctx.r6.s64 = 87;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265344c
	if (!cr6.eq) goto loc_8265344C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82653458
	goto loc_82653458;
loc_8265344C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653458:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82653494
	if (!cr6.lt) goto loc_82653494;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653488
	if (cr6.eq) goto loc_82653488;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653488:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826534b4
	goto loc_826534B4;
loc_82653494:
	// li r11,0
	r11.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826534B4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653500:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82653510
	if (cr6.eq) goto loc_82653510;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824408f0
	sub_824408F0(ctx, base);
loc_82653510:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82653390) {
	__imp__sub_82653390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653518) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653684
	if (cr6.eq) goto loc_82653684;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30104
	ctx.r4.s64 = r11.s64 + -30104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653564
	if (!cr6.eq) goto loc_82653564;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653568
	goto loc_82653568;
loc_82653564:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653568:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26128
	ctx.r9.s64 = r11.s64 + 26128;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,88
	ctx.r7.s64 = 88;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826535d4
	if (!cr6.eq) goto loc_826535D4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826535e0
	goto loc_826535E0;
loc_826535D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826535E0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265361c
	if (!cr6.lt) goto loc_8265361C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653610
	if (cr6.eq) goto loc_82653610;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653610:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653638
	goto loc_82653638;
loc_8265361C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653638:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653684:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82653694
	if (cr6.eq) goto loc_82653694;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82982060
	sub_82982060(ctx, base);
loc_82653694:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653518) {
	__imp__sub_82653518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826536A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265380c
	if (cr6.eq) goto loc_8265380C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30088
	ctx.r4.s64 = r11.s64 + -30088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826536ec
	if (!cr6.eq) goto loc_826536EC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826536f0
	goto loc_826536F0;
loc_826536EC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826536F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26384
	ctx.r9.s64 = r11.s64 + 26384;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,89
	ctx.r7.s64 = 89;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265375c
	if (!cr6.eq) goto loc_8265375C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82653768
	goto loc_82653768;
loc_8265375C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653768:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826537a4
	if (!cr6.lt) goto loc_826537A4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653798
	if (cr6.eq) goto loc_82653798;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653798:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826537c0
	goto loc_826537C0;
loc_826537A4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826537C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265380C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265381c
	if (cr6.eq) goto loc_8265381C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82846e88
	sub_82846E88(ctx, base);
loc_8265381C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826536A0) {
	__imp__sub_826536A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653828) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653994
	if (cr6.eq) goto loc_82653994;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30068
	ctx.r4.s64 = r11.s64 + -30068;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653874
	if (!cr6.eq) goto loc_82653874;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653878
	goto loc_82653878;
loc_82653874:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653878:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26512
	ctx.r9.s64 = r11.s64 + 26512;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826538e4
	if (!cr6.eq) goto loc_826538E4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826538f0
	goto loc_826538F0;
loc_826538E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826538F0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265392c
	if (!cr6.lt) goto loc_8265392C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653920
	if (cr6.eq) goto loc_82653920;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653920:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653948
	goto loc_82653948;
loc_8265392C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653948:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653994:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82653a14
	if (cr6.eq) goto loc_82653A14;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-8256
	r31.s64 = r11.s64 + -8256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8298b4c8
	sub_8298B4C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-8244
	ctx.r4.s64 = ctx.r10.s64 + -8244;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32059
	ctx.r9.s64 = -2101018624;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,-9712
	ctx.r6.s64 = ctx.r9.s64 + -9712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8298b710
	sub_8298B710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653A14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653828) {
	__imp__sub_82653828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653A20) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653b88
	if (cr6.eq) goto loc_82653B88;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12080
	ctx.r4.s64 = r11.s64 + 12080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653a68
	if (!cr6.eq) goto loc_82653A68;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653a6c
	goto loc_82653A6C;
loc_82653A68:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653A6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26616
	ctx.r9.s64 = r11.s64 + 26616;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,91
	ctx.r7.s64 = 91;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653ad8
	if (!cr6.eq) goto loc_82653AD8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82653ae4
	goto loc_82653AE4;
loc_82653AD8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653AE4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82653b20
	if (!cr6.lt) goto loc_82653B20;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653b14
	if (cr6.eq) goto loc_82653B14;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653B14:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653b3c
	goto loc_82653B3C;
loc_82653B20:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653B3C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653B88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82653A20) {
	__imp__sub_82653A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653B90) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653cfc
	if (cr6.eq) goto loc_82653CFC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29916
	ctx.r4.s64 = r11.s64 + -29916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653bdc
	if (!cr6.eq) goto loc_82653BDC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653be0
	goto loc_82653BE0;
loc_82653BDC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653BE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r9,r11,29936
	ctx.r9.s64 = r11.s64 + 29936;
	// addi r8,r10,-26368
	ctx.r8.s64 = ctx.r10.s64 + -26368;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653c4c
	if (!cr6.eq) goto loc_82653C4C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82653c58
	goto loc_82653C58;
loc_82653C4C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653C58:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82653c94
	if (!cr6.lt) goto loc_82653C94;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653c88
	if (cr6.eq) goto loc_82653C88;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653C88:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653cb0
	goto loc_82653CB0;
loc_82653C94:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653CB0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653CFC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82653d0c
	if (cr6.eq) goto loc_82653D0C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82749510
	sub_82749510(ctx, base);
loc_82653D0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653B90) {
	__imp__sub_82653B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653D18) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82653e84
	if (cr6.eq) goto loc_82653E84;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30052
	ctx.r4.s64 = r11.s64 + -30052;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653d64
	if (!cr6.eq) goto loc_82653D64;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653d68
	goto loc_82653D68;
loc_82653D64:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653D68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26792
	ctx.r9.s64 = r11.s64 + 26792;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,36
	ctx.r7.s64 = 36;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653dd4
	if (!cr6.eq) goto loc_82653DD4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82653de0
	goto loc_82653DE0;
loc_82653DD4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653DE0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82653e1c
	if (!cr6.lt) goto loc_82653E1C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653e10
	if (cr6.eq) goto loc_82653E10;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653E10:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653e38
	goto loc_82653E38;
loc_82653E1C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653E38:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82653E84:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82653e94
	if (cr6.eq) goto loc_82653E94;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8268ca18
	sub_8268CA18(ctx, base);
loc_82653E94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653D18) {
	__imp__sub_82653D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82653EA0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265400c
	if (cr6.eq) goto loc_8265400C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19948
	ctx.r4.s64 = r11.s64 + 19948;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653eec
	if (!cr6.eq) goto loc_82653EEC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82653ef0
	goto loc_82653EF0;
loc_82653EEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82653EF0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26880
	ctx.r9.s64 = r11.s64 + 26880;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,85
	ctx.r7.s64 = 85;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82653f5c
	if (!cr6.eq) goto loc_82653F5C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82653f68
	goto loc_82653F68;
loc_82653F5C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82653F68:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82653fa4
	if (!cr6.lt) goto loc_82653FA4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82653f98
	if (cr6.eq) goto loc_82653F98;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82653F98:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82653fc0
	goto loc_82653FC0;
loc_82653FA4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82653FC0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265400C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265401c
	if (cr6.eq) goto loc_8265401C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8247ffc8
	sub_8247FFC8(ctx, base);
loc_8265401C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82653EA0) {
	__imp__sub_82653EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654028) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82654194
	if (cr6.eq) goto loc_82654194;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30040
	ctx.r4.s64 = r11.s64 + -30040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654074
	if (!cr6.eq) goto loc_82654074;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654078
	goto loc_82654078;
loc_82654074:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654078:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26968
	ctx.r9.s64 = r11.s64 + 26968;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,86
	ctx.r7.s64 = 86;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826540e4
	if (!cr6.eq) goto loc_826540E4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826540f0
	goto loc_826540F0;
loc_826540E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826540F0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265412c
	if (!cr6.lt) goto loc_8265412C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654120
	if (cr6.eq) goto loc_82654120;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654120:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654148
	goto loc_82654148;
loc_8265412C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654148:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82654194:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826541a4
	if (cr6.eq) goto loc_826541A4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8285eeb0
	sub_8285EEB0(ctx, base);
loc_826541A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654028) {
	__imp__sub_82654028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826541B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265431c
	if (cr6.eq) goto loc_8265431C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30020
	ctx.r4.s64 = r11.s64 + -30020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826541fc
	if (!cr6.eq) goto loc_826541FC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654200
	goto loc_82654200;
loc_826541FC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654200:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27128
	ctx.r9.s64 = r11.s64 + 27128;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,92
	ctx.r7.s64 = 92;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265426c
	if (!cr6.eq) goto loc_8265426C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654278
	goto loc_82654278;
loc_8265426C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654278:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826542b4
	if (!cr6.lt) goto loc_826542B4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826542a8
	if (cr6.eq) goto loc_826542A8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826542A8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826542d0
	goto loc_826542D0;
loc_826542B4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826542D0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265431C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265432c
	if (cr6.eq) goto loc_8265432C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828ba750
	sub_828BA750(ctx, base);
loc_8265432C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826541B0) {
	__imp__sub_826541B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654338) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826544a4
	if (cr6.eq) goto loc_826544A4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22992
	ctx.r4.s64 = r11.s64 + 22992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654384
	if (!cr6.eq) goto loc_82654384;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654388
	goto loc_82654388;
loc_82654384:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654388:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27264
	ctx.r9.s64 = r11.s64 + 27264;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826543f4
	if (!cr6.eq) goto loc_826543F4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654400
	goto loc_82654400;
loc_826543F4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654400:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265443c
	if (!cr6.lt) goto loc_8265443C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654430
	if (cr6.eq) goto loc_82654430;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654430:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654458
	goto loc_82654458;
loc_8265443C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654458:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826544A4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826544b4
	if (cr6.eq) goto loc_826544B4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824acb38
	sub_824ACB38(ctx, base);
loc_826544B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654338) {
	__imp__sub_82654338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826544C0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265462c
	if (cr6.eq) goto loc_8265462C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30008
	ctx.r4.s64 = r11.s64 + -30008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265450c
	if (!cr6.eq) goto loc_8265450C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654510
	goto loc_82654510;
loc_8265450C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654510:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27352
	ctx.r9.s64 = r11.s64 + 27352;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,93
	ctx.r7.s64 = 93;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265457c
	if (!cr6.eq) goto loc_8265457C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654588
	goto loc_82654588;
loc_8265457C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654588:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826545c4
	if (!cr6.lt) goto loc_826545C4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826545b8
	if (cr6.eq) goto loc_826545B8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826545B8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826545e0
	goto loc_826545E0;
loc_826545C4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826545E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265462C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265463c
	if (cr6.eq) goto loc_8265463C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827be9b8
	sub_827BE9B8(ctx, base);
loc_8265463C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826544C0) {
	__imp__sub_826544C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654648) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826547b4
	if (cr6.eq) goto loc_826547B4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,14072
	ctx.r4.s64 = r11.s64 + 14072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654694
	if (!cr6.eq) goto loc_82654694;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654698
	goto loc_82654698;
loc_82654694:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654698:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27480
	ctx.r9.s64 = r11.s64 + 27480;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,94
	ctx.r7.s64 = 94;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654704
	if (!cr6.eq) goto loc_82654704;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654710
	goto loc_82654710;
loc_82654704:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654710:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265474c
	if (!cr6.lt) goto loc_8265474C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654740
	if (cr6.eq) goto loc_82654740;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654740:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654768
	goto loc_82654768;
loc_8265474C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654768:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826547B4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826547c4
	if (cr6.eq) goto loc_826547C4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82458000
	sub_82458000(ctx, base);
loc_826547C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654648) {
	__imp__sub_82654648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826547D0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265493c
	if (cr6.eq) goto loc_8265493C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-30000
	ctx.r4.s64 = r11.s64 + -30000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265481c
	if (!cr6.eq) goto loc_8265481C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654820
	goto loc_82654820;
loc_8265481C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654820:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27656
	ctx.r9.s64 = r11.s64 + 27656;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,61
	ctx.r7.s64 = 61;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265488c
	if (!cr6.eq) goto loc_8265488C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654898
	goto loc_82654898;
loc_8265488C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654898:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826548d4
	if (!cr6.lt) goto loc_826548D4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826548c8
	if (cr6.eq) goto loc_826548C8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826548C8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826548f0
	goto loc_826548F0;
loc_826548D4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826548F0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265493C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265494c
	if (cr6.eq) goto loc_8265494C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8287e9a8
	sub_8287E9A8(ctx, base);
loc_8265494C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826547D0) {
	__imp__sub_826547D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654958) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82654ac4
	if (cr6.eq) goto loc_82654AC4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13692
	ctx.r4.s64 = r11.s64 + 13692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826549a4
	if (!cr6.eq) goto loc_826549A4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826549a8
	goto loc_826549A8;
loc_826549A4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826549A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27784
	ctx.r9.s64 = r11.s64 + 27784;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,59
	ctx.r7.s64 = 59;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654a14
	if (!cr6.eq) goto loc_82654A14;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654a20
	goto loc_82654A20;
loc_82654A14:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654A20:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82654a5c
	if (!cr6.lt) goto loc_82654A5C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654a50
	if (cr6.eq) goto loc_82654A50;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654A50:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654a78
	goto loc_82654A78;
loc_82654A5C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654A78:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82654AC4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82654ad4
	if (cr6.eq) goto loc_82654AD4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82683240
	sub_82683240(ctx, base);
loc_82654AD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654958) {
	__imp__sub_82654958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654AE0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82654c4c
	if (cr6.eq) goto loc_82654C4C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29984
	ctx.r4.s64 = r11.s64 + -29984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654b2c
	if (!cr6.eq) goto loc_82654B2C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654b30
	goto loc_82654B30;
loc_82654B2C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654B30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,27928
	ctx.r9.s64 = r11.s64 + 27928;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,63
	ctx.r7.s64 = 63;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654b9c
	if (!cr6.eq) goto loc_82654B9C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654ba8
	goto loc_82654BA8;
loc_82654B9C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654BA8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82654be4
	if (!cr6.lt) goto loc_82654BE4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654bd8
	if (cr6.eq) goto loc_82654BD8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654BD8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654c00
	goto loc_82654C00;
loc_82654BE4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654C00:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82654C4C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82654c5c
	if (cr6.eq) goto loc_82654C5C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828c1058
	sub_828C1058(ctx, base);
loc_82654C5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654AE0) {
	__imp__sub_82654AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654C68) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82654dd4
	if (cr6.eq) goto loc_82654DD4;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-12200
	ctx.r4.s64 = r11.s64 + -12200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654cb4
	if (!cr6.eq) goto loc_82654CB4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654cb8
	goto loc_82654CB8;
loc_82654CB4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654CB8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,28040
	ctx.r9.s64 = r11.s64 + 28040;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654d24
	if (!cr6.eq) goto loc_82654D24;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654d30
	goto loc_82654D30;
loc_82654D24:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654D30:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82654d6c
	if (!cr6.lt) goto loc_82654D6C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654d60
	if (cr6.eq) goto loc_82654D60;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654D60:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654d88
	goto loc_82654D88;
loc_82654D6C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654D88:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82654DD4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82654de4
	if (cr6.eq) goto loc_82654DE4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828abe40
	sub_828ABE40(ctx, base);
loc_82654DE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654C68) {
	__imp__sub_82654C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654DF0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82654f5c
	if (cr6.eq) goto loc_82654F5C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29968
	ctx.r4.s64 = r11.s64 + -29968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654e3c
	if (!cr6.eq) goto loc_82654E3C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654e40
	goto loc_82654E40;
loc_82654E3C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654E40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,28168
	ctx.r9.s64 = r11.s64 + 28168;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,95
	ctx.r7.s64 = 95;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654eac
	if (!cr6.eq) goto loc_82654EAC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82654eb8
	goto loc_82654EB8;
loc_82654EAC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82654EB8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82654ef4
	if (!cr6.lt) goto loc_82654EF4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82654ee8
	if (cr6.eq) goto loc_82654EE8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82654EE8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82654f10
	goto loc_82654F10;
loc_82654EF4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82654F10:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82654F5C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82654f6c
	if (cr6.eq) goto loc_82654F6C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827e80c8
	sub_827E80C8(ctx, base);
loc_82654F6C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654DF0) {
	__imp__sub_82654DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82654F78) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826550e4
	if (cr6.eq) goto loc_826550E4;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29952
	ctx.r4.s64 = r11.s64 + -29952;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82654fc4
	if (!cr6.eq) goto loc_82654FC4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82654fc8
	goto loc_82654FC8;
loc_82654FC4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82654FC8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,28304
	ctx.r9.s64 = r11.s64 + 28304;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655034
	if (!cr6.eq) goto loc_82655034;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655040
	goto loc_82655040;
loc_82655034:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655040:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265507c
	if (!cr6.lt) goto loc_8265507C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655070
	if (cr6.eq) goto loc_82655070;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655070:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655098
	goto loc_82655098;
loc_8265507C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655098:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826550E4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826550f4
	if (cr6.eq) goto loc_826550F4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82992cc0
	sub_82992CC0(ctx, base);
loc_826550F4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82654F78) {
	__imp__sub_82654F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655100) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265526c
	if (cr6.eq) goto loc_8265526C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29940
	ctx.r4.s64 = r11.s64 + -29940;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265514c
	if (!cr6.eq) goto loc_8265514C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655150
	goto loc_82655150;
loc_8265514C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655150:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,28600
	ctx.r9.s64 = r11.s64 + 28600;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,97
	ctx.r7.s64 = 97;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826551bc
	if (!cr6.eq) goto loc_826551BC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826551c8
	goto loc_826551C8;
loc_826551BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826551C8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655204
	if (!cr6.lt) goto loc_82655204;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826551f8
	if (cr6.eq) goto loc_826551F8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826551F8:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655220
	goto loc_82655220;
loc_82655204:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655220:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265526C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265527c
	if (cr6.eq) goto loc_8265527C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827832f0
	sub_827832F0(ctx, base);
loc_8265527C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655100) {
	__imp__sub_82655100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655288) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826553f4
	if (cr6.eq) goto loc_826553F4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30084
	ctx.r4.s64 = r11.s64 + 30084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826552d4
	if (!cr6.eq) goto loc_826552D4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826552d8
	goto loc_826552D8;
loc_826552D4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826552D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,28688
	ctx.r9.s64 = r11.s64 + 28688;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,99
	ctx.r7.s64 = 99;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655344
	if (!cr6.eq) goto loc_82655344;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655350
	goto loc_82655350;
loc_82655344:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655350:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265538c
	if (!cr6.lt) goto loc_8265538C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655380
	if (cr6.eq) goto loc_82655380;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655380:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826553a8
	goto loc_826553A8;
loc_8265538C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826553A8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826553F4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82655404
	if (cr6.eq) goto loc_82655404;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8284a450
	sub_8284A450(ctx, base);
loc_82655404:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655288) {
	__imp__sub_82655288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655410) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265557c
	if (cr6.eq) goto loc_8265557C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30256
	ctx.r4.s64 = r11.s64 + 30256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265545c
	if (!cr6.eq) goto loc_8265545C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655460
	goto loc_82655460;
loc_8265545C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655460:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,29224
	ctx.r9.s64 = r11.s64 + 29224;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,98
	ctx.r7.s64 = 98;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826554cc
	if (!cr6.eq) goto loc_826554CC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826554d8
	goto loc_826554D8;
loc_826554CC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826554D8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655514
	if (!cr6.lt) goto loc_82655514;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655508
	if (cr6.eq) goto loc_82655508;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655508:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655530
	goto loc_82655530;
loc_82655514:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655530:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265557C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826555fc
	if (cr6.eq) goto loc_826555FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,10400
	r31.s64 = r11.s64 + 10400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827380a0
	sub_827380A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,2804
	ctx.r4.s64 = ctx.r10.s64 + 2804;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,32000
	ctx.r6.s64 = ctx.r9.s64 + 32000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827382e8
	sub_827382E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826555FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655410) {
	__imp__sub_82655410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655608) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82655774
	if (cr6.eq) goto loc_82655774;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30108
	ctx.r4.s64 = r11.s64 + 30108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655654
	if (!cr6.eq) goto loc_82655654;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655658
	goto loc_82655658;
loc_82655654:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655658:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,29592
	ctx.r9.s64 = r11.s64 + 29592;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826556c4
	if (!cr6.eq) goto loc_826556C4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826556d0
	goto loc_826556D0;
loc_826556C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826556D0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265570c
	if (!cr6.lt) goto loc_8265570C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655700
	if (cr6.eq) goto loc_82655700;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655700:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655728
	goto loc_82655728;
loc_8265570C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655728:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82655774:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82655784
	if (cr6.eq) goto loc_82655784;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8244b8b0
	sub_8244B8B0(ctx, base);
loc_82655784:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655608) {
	__imp__sub_82655608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655790) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826558fc
	if (cr6.eq) goto loc_826558FC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29932
	ctx.r4.s64 = r11.s64 + -29932;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826557dc
	if (!cr6.eq) goto loc_826557DC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826557e0
	goto loc_826557E0;
loc_826557DC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826557E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,29848
	ctx.r9.s64 = r11.s64 + 29848;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,101
	ctx.r7.s64 = 101;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265584c
	if (!cr6.eq) goto loc_8265584C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655858
	goto loc_82655858;
loc_8265584C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655858:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655894
	if (!cr6.lt) goto loc_82655894;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655888
	if (cr6.eq) goto loc_82655888;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655888:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826558b0
	goto loc_826558B0;
loc_82655894:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826558B0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_826558FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265590c
	if (cr6.eq) goto loc_8265590C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82879778
	sub_82879778(ctx, base);
loc_8265590C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655790) {
	__imp__sub_82655790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655918) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82655a80
	if (cr6.eq) goto loc_82655A80;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29892
	ctx.r4.s64 = r11.s64 + -29892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655960
	if (!cr6.eq) goto loc_82655960;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655964
	goto loc_82655964;
loc_82655960:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655964:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,30424
	ctx.r9.s64 = r11.s64 + 30424;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,42
	ctx.r7.s64 = 42;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826559d0
	if (!cr6.eq) goto loc_826559D0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826559dc
	goto loc_826559DC;
loc_826559D0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826559DC:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655a18
	if (!cr6.lt) goto loc_82655A18;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655a0c
	if (cr6.eq) goto loc_82655A0C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655A0C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655a34
	goto loc_82655A34;
loc_82655A18:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655A34:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82655A80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82655918) {
	__imp__sub_82655918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655A88) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82655bf4
	if (cr6.eq) goto loc_82655BF4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30336
	ctx.r4.s64 = r11.s64 + 30336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655ad4
	if (!cr6.eq) goto loc_82655AD4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655ad8
	goto loc_82655AD8;
loc_82655AD4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655AD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,30560
	ctx.r9.s64 = r11.s64 + 30560;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,44
	ctx.r7.s64 = 44;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655b44
	if (!cr6.eq) goto loc_82655B44;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655b50
	goto loc_82655B50;
loc_82655B44:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655B50:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655b8c
	if (!cr6.lt) goto loc_82655B8C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655b80
	if (cr6.eq) goto loc_82655B80;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655B80:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655ba8
	goto loc_82655BA8;
loc_82655B8C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655BA8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82655BF4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82655c04
	if (cr6.eq) goto loc_82655C04;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82704a98
	sub_82704A98(ctx, base);
loc_82655C04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655A88) {
	__imp__sub_82655A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655C10) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82655d7c
	if (cr6.eq) goto loc_82655D7C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,7128
	ctx.r4.s64 = r11.s64 + 7128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655c5c
	if (!cr6.eq) goto loc_82655C5C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655c60
	goto loc_82655C60;
loc_82655C5C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655C60:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,26704
	ctx.r9.s64 = r11.s64 + 26704;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,31
	ctx.r7.s64 = 31;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655ccc
	if (!cr6.eq) goto loc_82655CCC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655cd8
	goto loc_82655CD8;
loc_82655CCC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655CD8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655d14
	if (!cr6.lt) goto loc_82655D14;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655d08
	if (cr6.eq) goto loc_82655D08;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655D08:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655d30
	goto loc_82655D30;
loc_82655D14:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655D30:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82655D7C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82655d8c
	if (cr6.eq) goto loc_82655D8C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82487b00
	sub_82487B00(ctx, base);
loc_82655D8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655C10) {
	__imp__sub_82655C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655D98) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82655f04
	if (cr6.eq) goto loc_82655F04;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22672
	ctx.r4.s64 = r11.s64 + 22672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655de4
	if (!cr6.eq) goto loc_82655DE4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655de8
	goto loc_82655DE8;
loc_82655DE4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655DE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,28440
	ctx.r9.s64 = r11.s64 + 28440;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,102
	ctx.r7.s64 = 102;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655e54
	if (!cr6.eq) goto loc_82655E54;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655e60
	goto loc_82655E60;
loc_82655E54:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655E60:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82655e9c
	if (!cr6.lt) goto loc_82655E9C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82655e90
	if (cr6.eq) goto loc_82655E90;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82655E90:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82655eb8
	goto loc_82655EB8;
loc_82655E9C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82655EB8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82655F04:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82655f14
	if (cr6.eq) goto loc_82655F14;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825fe168
	sub_825FE168(ctx, base);
loc_82655F14:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655D98) {
	__imp__sub_82655D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82655F20) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265608c
	if (cr6.eq) goto loc_8265608C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29876
	ctx.r4.s64 = r11.s64 + -29876;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655f6c
	if (!cr6.eq) goto loc_82655F6C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82655f70
	goto loc_82655F70;
loc_82655F6C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82655F70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,30648
	ctx.r9.s64 = r11.s64 + 30648;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,103
	ctx.r7.s64 = 103;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82655fdc
	if (!cr6.eq) goto loc_82655FDC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82655fe8
	goto loc_82655FE8;
loc_82655FDC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82655FE8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82656024
	if (!cr6.lt) goto loc_82656024;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82656018
	if (cr6.eq) goto loc_82656018;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82656018:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82656040
	goto loc_82656040;
loc_82656024:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82656040:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265608C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265609c
	if (cr6.eq) goto loc_8265609C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82978ef0
	sub_82978EF0(ctx, base);
loc_8265609C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82655F20) {
	__imp__sub_82655F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826560A8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82656214
	if (cr6.eq) goto loc_82656214;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29860
	ctx.r4.s64 = r11.s64 + -29860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826560f4
	if (!cr6.eq) goto loc_826560F4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826560f8
	goto loc_826560F8;
loc_826560F4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826560F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,30800
	ctx.r9.s64 = r11.s64 + 30800;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,104
	ctx.r7.s64 = 104;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82656164
	if (!cr6.eq) goto loc_82656164;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82656170
	goto loc_82656170;
loc_82656164:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82656170:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826561ac
	if (!cr6.lt) goto loc_826561AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826561a0
	if (cr6.eq) goto loc_826561A0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826561A0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826561c8
	goto loc_826561C8;
loc_826561AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826561C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82656214:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82656294
	if (cr6.eq) goto loc_82656294;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-11136
	r31.s64 = r11.s64 + -11136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8297ac38
	sub_8297AC38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-11060
	ctx.r4.s64 = ctx.r10.s64 + -11060;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r9,6320
	ctx.r6.s64 = ctx.r9.s64 + 6320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8297ae80
	sub_8297AE80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82656294:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826560A8) {
	__imp__sub_826560A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826562A0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265640c
	if (cr6.eq) goto loc_8265640C;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-9176
	ctx.r4.s64 = r11.s64 + -9176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826562ec
	if (!cr6.eq) goto loc_826562EC;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826562f0
	goto loc_826562F0;
loc_826562EC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826562F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,30920
	ctx.r9.s64 = r11.s64 + 30920;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265635c
	if (!cr6.eq) goto loc_8265635C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82656368
	goto loc_82656368;
loc_8265635C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82656368:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826563a4
	if (!cr6.lt) goto loc_826563A4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82656398
	if (cr6.eq) goto loc_82656398;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82656398:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826563c0
	goto loc_826563C0;
loc_826563A4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826563C0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265640C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265641c
	if (cr6.eq) goto loc_8265641C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8253e2f8
	sub_8253E2F8(ctx, base);
loc_8265641C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826562A0) {
	__imp__sub_826562A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82656428) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82656594
	if (cr6.eq) goto loc_82656594;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29848
	ctx.r4.s64 = r11.s64 + -29848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82656474
	if (!cr6.eq) goto loc_82656474;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82656478
	goto loc_82656478;
loc_82656474:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82656478:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,31072
	ctx.r9.s64 = r11.s64 + 31072;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,47
	ctx.r7.s64 = 47;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826564e4
	if (!cr6.eq) goto loc_826564E4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826564f0
	goto loc_826564F0;
loc_826564E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826564F0:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265652c
	if (!cr6.lt) goto loc_8265652C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82656520
	if (cr6.eq) goto loc_82656520;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82656520:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82656548
	goto loc_82656548;
loc_8265652C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82656548:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82656594:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826565a4
	if (cr6.eq) goto loc_826565A4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82757238
	sub_82757238(ctx, base);
loc_826565A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82656428) {
	__imp__sub_82656428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826565B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82656718
	if (cr6.eq) goto loc_82656718;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22864
	ctx.r4.s64 = r11.s64 + 22864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826565f8
	if (!cr6.eq) goto loc_826565F8;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826565fc
	goto loc_826565FC;
loc_826565F8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826565FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,31160
	ctx.r9.s64 = r11.s64 + 31160;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,105
	ctx.r7.s64 = 105;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82656668
	if (!cr6.eq) goto loc_82656668;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82656674
	goto loc_82656674;
loc_82656668:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82656674:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826566b0
	if (!cr6.lt) goto loc_826566B0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826566a4
	if (cr6.eq) goto loc_826566A4;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826566A4:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826566cc
	goto loc_826566CC;
loc_826566B0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826566CC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82656718:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_826565B0) {
	__imp__sub_826565B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82656720) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265688c
	if (cr6.eq) goto loc_8265688C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30068
	ctx.r4.s64 = r11.s64 + 30068;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265676c
	if (!cr6.eq) goto loc_8265676C;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82656770
	goto loc_82656770;
loc_8265676C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82656770:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,31264
	ctx.r9.s64 = r11.s64 + 31264;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826567dc
	if (!cr6.eq) goto loc_826567DC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x826567e8
	goto loc_826567E8;
loc_826567DC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_826567E8:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82656824
	if (!cr6.lt) goto loc_82656824;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82656818
	if (cr6.eq) goto loc_82656818;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82656818:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82656840
	goto loc_82656840;
loc_82656824:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82656840:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_8265688C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8265689c
	if (cr6.eq) goto loc_8265689C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826e9bd8
	sub_826E9BD8(ctx, base);
loc_8265689C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82656720) {
	__imp__sub_82656720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_826568A8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82656a14
	if (cr6.eq) goto loc_82656A14;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29808
	ctx.r4.s64 = r11.s64 + -29808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826568f4
	if (!cr6.eq) goto loc_826568F4;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x826568f8
	goto loc_826568F8;
loc_826568F4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_826568F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,31512
	ctx.r9.s64 = r11.s64 + 31512;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,106
	ctx.r7.s64 = 106;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82656964
	if (!cr6.eq) goto loc_82656964;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82656970
	goto loc_82656970;
loc_82656964:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82656970:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x826569ac
	if (!cr6.lt) goto loc_826569AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826569a0
	if (cr6.eq) goto loc_826569A0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_826569A0:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826569c8
	goto loc_826569C8;
loc_826569AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_826569C8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82656A14:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82656a24
	if (cr6.eq) goto loc_82656A24;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82924b28
	sub_82924B28(ctx, base);
loc_82656A24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_826568A8) {
	__imp__sub_826568A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82656A30) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82656b98
	if (cr6.eq) goto loc_82656B98;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29828
	ctx.r4.s64 = r11.s64 + -29828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82656a78
	if (!cr6.eq) goto loc_82656A78;
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = r11.s64 + 63;
	// b 0x82656a7c
	goto loc_82656A7C;
loc_82656A78:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82656A7C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82644a10
	sub_82644A10(ctx, base);
	// lis r11,-32156
	r11.s64 = -2107375616;
	// lis r10,-32099
	ctx.r10.s64 = -2103640064;
	// addi r9,r11,31352
	ctx.r9.s64 = r11.s64 + 31352;
	// addi r8,r10,-6032
	ctx.r8.s64 = ctx.r10.s64 + -6032;
	// li r27,0
	r27.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// li r7,107
	ctx.r7.s64 = 107;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// bl 0x82668718
	sub_82668718(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r9,24
	ctx.r9.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82656ae8
	if (!cr6.eq) goto loc_82656AE8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82656af4
	goto loc_82656AF4;
loc_82656AE8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82656AF4:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82656b30
	if (!cr6.lt) goto loc_82656B30;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82656b24
	if (cr6.eq) goto loc_82656B24;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82668718
	sub_82668718(ctx, base);
loc_82656B24:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82656b4c
	goto loc_82656B4C;
loc_82656B30:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82668848
	sub_82668848(ctx, base);
loc_82656B4C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824804a8
	sub_824804A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// stb r30,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r30.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
loc_82656B98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82656A30) {
	__imp__sub_82656A30(ctx, base);
}

