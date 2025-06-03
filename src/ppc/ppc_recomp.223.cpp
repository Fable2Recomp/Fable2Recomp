#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_83291148) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-22240
	ctx.r4.s64 = r11.s64 + -22240;
	// addi r3,r10,19996
	ctx.r3.s64 = ctx.r10.s64 + 19996;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,880
	ctx.r3.s64 = ctx.r9.s64 + 880;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291148) {
	__imp__sub_83291148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291188) {
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
	// bl 0x82b4f448
	sub_82B4F448(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r10,20000
	r31.s64 = ctx.r10.s64 + 20000;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// bl 0x82b4f378
	sub_82B4F378(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832911e0
	if (cr6.eq) goto loc_832911E0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r29.u64);
	// b 0x832911e4
	goto loc_832911E4;
loc_832911E0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_832911E4:
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r10,896
	ctx.r3.s64 = ctx.r10.s64 + 896;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83291188) {
	__imp__sub_83291188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291210) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-13764
	ctx.r4.s64 = r11.s64 + -13764;
	// addi r3,r10,20040
	ctx.r3.s64 = ctx.r10.s64 + 20040;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,912
	ctx.r3.s64 = ctx.r9.s64 + 912;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291210) {
	__imp__sub_83291210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291250) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-13752
	ctx.r4.s64 = r11.s64 + -13752;
	// addi r3,r10,20044
	ctx.r3.s64 = ctx.r10.s64 + 20044;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,928
	ctx.r3.s64 = ctx.r9.s64 + 928;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291250) {
	__imp__sub_83291250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291290) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20048
	ctx.r3.s64 = r11.s64 + 20048;
	// bl 0x82c49540
	sub_82C49540(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,944
	ctx.r3.s64 = ctx.r10.s64 + 944;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291290) {
	__imp__sub_83291290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832912C8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20168
	ctx.r3.s64 = r11.s64 + 20168;
	// bl 0x82c49540
	sub_82C49540(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1032
	ctx.r3.s64 = ctx.r10.s64 + 1032;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832912C8) {
	__imp__sub_832912C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291300) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20296
	ctx.r3.s64 = r11.s64 + 20296;
	// bl 0x82c03b90
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1120
	ctx.r3.s64 = ctx.r10.s64 + 1120;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291300) {
	__imp__sub_83291300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20380(r11)
	PPC_STORE_U32(r11.u32 + 20380, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291338) {
	__imp__sub_83291338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20384(r11)
	PPC_STORE_U32(r11.u32 + 20384, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291348) {
	__imp__sub_83291348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291358) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20420
	ctx.r3.s64 = r11.s64 + 20420;
	// bl 0x82c42f48
	sub_82C42F48(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1136
	ctx.r3.s64 = ctx.r10.s64 + 1136;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291358) {
	__imp__sub_83291358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	r11.s64 = -2094202880;
	// li r5,69
	ctx.r5.s64 = 69;
	// addi r31,r11,24976
	r31.s64 = r11.s64 + 24976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,207
	ctx.r3.s64 = r31.s64 + 207;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-10980
	ctx.r9.s64 = r11.s64 + -10980;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,-10980(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-10980) );
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// lfs f31,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stfs f31,276(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stfs f31,280(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// stw r8,288(r31)
	PPC_STORE_U32(r31.u32 + 288, ctx.r8.u32);
	// stw r7,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r7.u32);
	// stw r6,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r6.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r31,380
	ctx.r10.s64 = r31.s64 + 380;
	// lfs f0,-11544(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11544);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-11008
	r11.s64 = r11.s64 + -11008;
	// lfs f13,-11552(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11552);
	ctx.f13.f64 = double(temp.f32);
	// li r9,13
	ctx.r9.s64 = 13;
	// lfs f12,-11548(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -11548);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 376, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8329143C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8329143c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8329143C;
	// li r5,54
	ctx.r5.s64 = 54;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,406
	ctx.r3.s64 = r31.s64 + 406;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stfs f31,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 460, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r31,472
	ctx.r10.s64 = r31.s64 + 472;
	// addi r7,r8,-11032
	ctx.r7.s64 = ctx.r8.s64 + -11032;
	// lfs f30,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
	// lfs f0,27524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27524);
	f0.f64 = double(temp.f32);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// stfs f30,464(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stfs f0,468(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83291494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83291494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83291494;
	// li r5,59
	ctx.r5.s64 = 59;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,493
	ctx.r3.s64 = r31.s64 + 493;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r31,564
	ctx.r7.s64 = r31.s64 + 564;
	// addi r6,r8,-11052
	ctx.r6.s64 = ctx.r8.s64 + -11052;
	// lfs f0,-11536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11536);
	f0.f64 = double(temp.f32);
	// lfs f13,3052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f12,-30920(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30920);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// stfs f0,552(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 552, temp.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f13,556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 556, temp.u32);
	// stfs f12,560(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 560, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832914F8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x832914f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832914F8;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,582
	ctx.r3.s64 = r31.s64 + 582;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 644, temp.u32);
	// addi r8,r31,656
	ctx.r8.s64 = r31.s64 + 656;
	// addi r7,r9,-11068
	ctx.r7.s64 = ctx.r9.s64 + -11068;
	// stfs f30,648(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 648, temp.u32);
	// stfs f31,652(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 652, temp.u32);
	// addi r11,r31,672
	r11.s64 = r31.s64 + 672;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,-11068(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-11068) );
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(8) );
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(12) );
	// stw r6,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r6.u32);
	// stw r5,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r5.u32);
	// stw r4,664(r31)
	PPC_STORE_U32(r31.u32 + 664, ctx.r4.u32);
	// stw r3,668(r31)
	PPC_STORE_U32(r31.u32 + 668, ctx.r3.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83291564:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x83291564
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83291564;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,736
	ctx.r3.s64 = r31.s64 + 736;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_83291390) {
	__imp__sub_83291390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832915A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,20460
	ctx.r3.s64 = ctx.r9.s64 + 20460;
	// addi r4,r10,-10536
	ctx.r4.s64 = ctx.r10.s64 + -10536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-26808
	ctx.r7.s64 = r11.s64 + -26808;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832915A0) {
	__imp__sub_832915A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832915D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,20432
	ctx.r3.s64 = ctx.r9.s64 + 20432;
	// addi r4,r10,-10528
	ctx.r4.s64 = ctx.r10.s64 + -10528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-26744
	ctx.r7.s64 = r11.s64 + -26744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832915D0) {
	__imp__sub_832915D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,22168
	ctx.r3.s64 = ctx.r9.s64 + 22168;
	// addi r6,r11,-9608
	ctx.r6.s64 = r11.s64 + -9608;
	// addi r4,r10,-9312
	ctx.r4.s64 = ctx.r10.s64 + -9312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291600) {
	__imp__sub_83291600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r9,-9312
	ctx.r4.s64 = ctx.r9.s64 + -9312;
	// addi r3,r8,22084
	ctx.r3.s64 = ctx.r8.s64 + 22084;
	// addi r6,r10,-9608
	ctx.r6.s64 = ctx.r10.s64 + -9608;
	// addi r9,r11,-14744
	ctx.r9.s64 = r11.s64 + -14744;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291630) {
	__imp__sub_83291630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r4,-31949
	ctx.r4.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// lis r5,-32058
	ctx.r5.s64 = -2100953088;
	// addi r3,r4,21972
	ctx.r3.s64 = ctx.r4.s64 + 21972;
	// addi r9,r11,-15296
	ctx.r9.s64 = r11.s64 + -15296;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-16024
	ctx.r7.s64 = ctx.r10.s64 + -16024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,-16072
	ctx.r5.s64 = ctx.r5.s64 + -16072;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291660) {
	__imp__sub_83291660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r9,-9612
	ctx.r4.s64 = ctx.r9.s64 + -9612;
	// addi r3,r8,22336
	ctx.r3.s64 = ctx.r8.s64 + 22336;
	// addi r6,r10,-9320
	ctx.r6.s64 = ctx.r10.s64 + -9320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-15840
	ctx.r7.s64 = r11.s64 + -15840;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291690) {
	__imp__sub_83291690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832916C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r9,-9824
	ctx.r4.s64 = ctx.r9.s64 + -9824;
	// addi r3,r8,22308
	ctx.r3.s64 = ctx.r8.s64 + 22308;
	// addi r6,r10,-9600
	ctx.r6.s64 = ctx.r10.s64 + -9600;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-17216
	ctx.r8.s64 = r11.s64 + -17216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832916C0) {
	__imp__sub_832916C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832916F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// addi r6,r9,-9592
	ctx.r6.s64 = ctx.r9.s64 + -9592;
	// addi r4,r8,12224
	ctx.r4.s64 = ctx.r8.s64 + 12224;
	// addi r3,r7,22224
	ctx.r3.s64 = ctx.r7.s64 + 22224;
	// addi r9,r11,-16968
	ctx.r9.s64 = r11.s64 + -16968;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-17080
	ctx.r7.s64 = ctx.r10.s64 + -17080;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832916F0) {
	__imp__sub_832916F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r9,22364
	ctx.r3.s64 = ctx.r9.s64 + 22364;
	// addi r6,r11,-9592
	ctx.r6.s64 = r11.s64 + -9592;
	// addi r4,r10,12224
	ctx.r4.s64 = ctx.r10.s64 + 12224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291728) {
	__imp__sub_83291728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,22028
	ctx.r3.s64 = ctx.r9.s64 + 22028;
	// addi r6,r11,-9608
	ctx.r6.s64 = r11.s64 + -9608;
	// addi r4,r10,-9328
	ctx.r4.s64 = ctx.r10.s64 + -9328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291758) {
	__imp__sub_83291758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,22196
	ctx.r3.s64 = ctx.r9.s64 + 22196;
	// addi r6,r11,-9320
	ctx.r6.s64 = r11.s64 + -9320;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291788) {
	__imp__sub_83291788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832917B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r9,-9336
	ctx.r4.s64 = ctx.r9.s64 + -9336;
	// addi r3,r8,21944
	ctx.r3.s64 = ctx.r8.s64 + 21944;
	// addi r6,r10,-9592
	ctx.r6.s64 = ctx.r10.s64 + -9592;
	// addi r9,r11,-16480
	ctx.r9.s64 = r11.s64 + -16480;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832917B8) {
	__imp__sub_832917B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832917E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// addi r6,r9,-9592
	ctx.r6.s64 = ctx.r9.s64 + -9592;
	// addi r4,r8,-9336
	ctx.r4.s64 = ctx.r8.s64 + -9336;
	// addi r3,r7,22420
	ctx.r3.s64 = ctx.r7.s64 + 22420;
	// addi r9,r11,-16480
	ctx.r9.s64 = r11.s64 + -16480;
	// addi r8,r10,-16248
	ctx.r8.s64 = ctx.r10.s64 + -16248;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832917E8) {
	__imp__sub_832917E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r9,22056
	ctx.r3.s64 = ctx.r9.s64 + 22056;
	// addi r6,r11,-9320
	ctx.r6.s64 = r11.s64 + -9320;
	// addi r4,r10,-4136
	ctx.r4.s64 = ctx.r10.s64 + -4136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291820) {
	__imp__sub_83291820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r9,22252
	ctx.r3.s64 = ctx.r9.s64 + 22252;
	// addi r6,r11,-9608
	ctx.r6.s64 = r11.s64 + -9608;
	// addi r4,r10,-4136
	ctx.r4.s64 = ctx.r10.s64 + -4136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291850) {
	__imp__sub_83291850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// addi r6,r9,-9592
	ctx.r6.s64 = ctx.r9.s64 + -9592;
	// addi r4,r8,-9336
	ctx.r4.s64 = ctx.r8.s64 + -9336;
	// addi r3,r7,22140
	ctx.r3.s64 = ctx.r7.s64 + 22140;
	// addi r9,r11,-16672
	ctx.r9.s64 = r11.s64 + -16672;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-16784
	ctx.r7.s64 = ctx.r10.s64 + -16784;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291880) {
	__imp__sub_83291880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832918B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r9,21888
	ctx.r3.s64 = ctx.r9.s64 + 21888;
	// addi r6,r11,-9320
	ctx.r6.s64 = r11.s64 + -9320;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832918B8) {
	__imp__sub_832918B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832918E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// lis r8,-32058
	ctx.r8.s64 = -2100953088;
	// addi r3,r7,22000
	ctx.r3.s64 = ctx.r7.s64 + 22000;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r9,r10,-15448
	ctx.r9.s64 = ctx.r10.s64 + -15448;
	// addi r8,r8,-15664
	ctx.r8.s64 = ctx.r8.s64 + -15664;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832918E8) {
	__imp__sub_832918E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r9,22392
	ctx.r3.s64 = ctx.r9.s64 + 22392;
	// addi r6,r11,-9344
	ctx.r6.s64 = r11.s64 + -9344;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291918) {
	__imp__sub_83291918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r9,3224
	ctx.r4.s64 = ctx.r9.s64 + 3224;
	// addi r3,r8,21916
	ctx.r3.s64 = ctx.r8.s64 + 21916;
	// addi r6,r10,-9352
	ctx.r6.s64 = ctx.r10.s64 + -9352;
	// addi r9,r11,-15016
	ctx.r9.s64 = r11.s64 + -15016;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291948) {
	__imp__sub_83291948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r9,22280
	ctx.r3.s64 = ctx.r9.s64 + 22280;
	// addi r6,r11,-9592
	ctx.r6.s64 = r11.s64 + -9592;
	// addi r4,r10,10208
	ctx.r4.s64 = ctx.r10.s64 + 10208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291978) {
	__imp__sub_83291978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832919A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r9,22112
	ctx.r3.s64 = ctx.r9.s64 + 22112;
	// addi r6,r11,-9592
	ctx.r6.s64 = r11.s64 + -9592;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832919A8) {
	__imp__sub_832919A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832919D8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22464
	ctx.r3.s64 = r11.s64 + 22464;
	// bl 0x82c63ed8
	sub_82C63ED8(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1360
	ctx.r3.s64 = ctx.r10.s64 + 1360;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832919D8) {
	__imp__sub_832919D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291A10) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22472
	ctx.r3.s64 = r11.s64 + 22472;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291A10) {
	__imp__sub_83291A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291A48) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22468
	ctx.r3.s64 = r11.s64 + 22468;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1264
	ctx.r3.s64 = ctx.r10.s64 + 1264;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291A48) {
	__imp__sub_83291A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291A80) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// addi r3,r11,22488
	ctx.r3.s64 = r11.s64 + 22488;
	// bl 0x82c660f8
	sub_82C660F8(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1440
	ctx.r3.s64 = ctx.r10.s64 + 1440;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291A80) {
	__imp__sub_83291A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291AB8) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-6252
	r31.s64 = r11.s64 + -6252;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x82b38560
	sub_82B38560(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// bl 0x82c6cf68
	sub_82C6CF68(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83291b0c
	if (cr6.eq) goto loc_83291B0C;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_83291B0C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83291b18
	if (cr0.eq) goto loc_83291B18;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_83291B18:
	// li r11,0
	r11.s64 = 0;
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// addi r3,r11,1496
	ctx.r3.s64 = r11.s64 + 1496;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291AB8) {
	__imp__sub_83291AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291B50) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22508
	ctx.r3.s64 = r11.s64 + 22508;
	// bl 0x82b38560
	sub_82B38560(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1512
	ctx.r3.s64 = ctx.r10.s64 + 1512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291B50) {
	__imp__sub_83291B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c81908
	sub_82C81908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291B88) {
	__imp__sub_83291B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1704
	ctx.r3.s64 = r11.s64 + 1704;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291B90) {
	__imp__sub_83291B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1616
	ctx.r3.s64 = r11.s64 + 1616;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291BA0) {
	__imp__sub_83291BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1528
	ctx.r3.s64 = r11.s64 + 1528;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291BB0) {
	__imp__sub_83291BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1824
	ctx.r3.s64 = r11.s64 + 1824;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291BC0) {
	__imp__sub_83291BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291BD0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,28680
	ctx.r3.s64 = r11.s64 + 28680;
	// bl 0x82cd1ef0
	sub_82CD1EF0(ctx, base);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1904
	ctx.r3.s64 = r11.s64 + 1904;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291BD0) {
	__imp__sub_83291BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291C08) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,28756
	ctx.r3.s64 = r11.s64 + 28756;
	// bl 0x82cd1ef0
	sub_82CD1EF0(ctx, base);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1920
	ctx.r3.s64 = r11.s64 + 1920;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291C08) {
	__imp__sub_83291C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,1936
	ctx.r3.s64 = r11.s64 + 1936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291C40) {
	__imp__sub_83291C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291C50) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,768
	r11.s64 = r11.s64 + 768;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1952
	ctx.r3.s64 = ctx.r10.s64 + 1952;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291C50) {
	__imp__sub_83291C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291C88) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,800
	r11.s64 = r11.s64 + 800;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1976
	ctx.r3.s64 = ctx.r10.s64 + 1976;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291C88) {
	__imp__sub_83291C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291CC0) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,876
	r11.s64 = r11.s64 + 876;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,2000
	ctx.r3.s64 = r11.s64 + 2000;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291CC0) {
	__imp__sub_83291CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,28976
	ctx.r3.s64 = r11.s64 + 28976;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83291CF8) {
	__imp__sub_83291CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,27916
	r11.s64 = r11.s64 + 27916;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29996) );
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291D10) {
	__imp__sub_83291D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r9,r9,29264
	ctx.r9.s64 = ctx.r9.s64 + 29264;
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r8,r1,-224
	ctx.r8.s64 = ctx.r1.s64 + -224;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, r11.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r10,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r10.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, r11.u32);
	// stw r10,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// stw r10,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// stvx128 v0,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r10,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// stw r10,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r10.u32);
	// stw r10,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stw r10,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r10.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, r11.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, r11.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, r11.u32);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, r11.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, r11.u32);
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, r11.u32);
	// stw r11,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, r11.u32);
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, r11.u32);
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, r11.u32);
	// stvx128 v0,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, r11.u32);
	// stw r11,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, r11.u32);
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, r11.u32);
	// stw r11,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, r11.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, r11.u32);
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r11.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, r11.u32);
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, r11.u32);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, r11.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, r11.u32);
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, r11.u32);
	// addi r11,r1,-160
	r11.s64 = ctx.r1.s64 + -160;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,48
	r11.s64 = 48;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	r11.s64 = 64;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-128
	r11.s64 = ctx.r1.s64 + -128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,80
	r11.s64 = 80;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-192
	r11.s64 = ctx.r1.s64 + -192;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,96
	r11.s64 = 96;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-96
	r11.s64 = ctx.r1.s64 + -96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,112
	r11.s64 = 112;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-176
	r11.s64 = ctx.r1.s64 + -176;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,128
	r11.s64 = 128;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,144
	r11.s64 = 144;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-112
	r11.s64 = ctx.r1.s64 + -112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,160
	r11.s64 = 160;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,176
	r11.s64 = 176;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,192
	r11.s64 = 192;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,208
	r11.s64 = 208;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-224
	r11.s64 = ctx.r1.s64 + -224;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,224
	r11.s64 = 224;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-208
	r11.s64 = ctx.r1.s64 + -208;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,240
	r11.s64 = 240;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291D30) {
	__imp__sub_83291D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83291F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r9,r9,29520
	ctx.r9.s64 = ctx.r9.s64 + 29520;
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r11.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, r11.u32);
	// addi r8,r1,-224
	ctx.r8.s64 = ctx.r1.s64 + -224;
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, r11.u32);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, r11.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, r11.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, r11.u32);
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, r11.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, r11.u32);
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, r11.u32);
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, r11.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, r11.u32);
	// stvx128 v0,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, r11.u32);
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, r11.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r11.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r11.u32);
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r11.u32);
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, r11.u32);
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, r11.u32);
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, r11.u32);
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, r11.u32);
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,32
	r11.s64 = 32;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// stw r10,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-160
	r11.s64 = ctx.r1.s64 + -160;
	// stw r10,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// stw r10,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r10.u32);
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r10,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r10.u32);
	// stw r10,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r10.u32);
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// li r11,48
	r11.s64 = 48;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	r11.s64 = 64;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-128
	r11.s64 = ctx.r1.s64 + -128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,80
	r11.s64 = 80;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-192
	r11.s64 = ctx.r1.s64 + -192;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,96
	r11.s64 = 96;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-96
	r11.s64 = ctx.r1.s64 + -96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,112
	r11.s64 = 112;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-176
	r11.s64 = ctx.r1.s64 + -176;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,128
	r11.s64 = 128;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,144
	r11.s64 = 144;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-112
	r11.s64 = ctx.r1.s64 + -112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,160
	r11.s64 = 160;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,176
	r11.s64 = 176;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,192
	r11.s64 = 192;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,208
	r11.s64 = 208;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-224
	r11.s64 = ctx.r1.s64 + -224;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,224
	r11.s64 = 224;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,-208
	r11.s64 = ctx.r1.s64 + -208;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,240
	r11.s64 = 240;
	// stvx128 v0,r9,r11
	ea = (ctx.r9.u32 + r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83291F40) {
	__imp__sub_83291F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,29776
	r11.s64 = r11.s64 + 29776;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292150) {
	__imp__sub_83292150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,28536
	r11.s64 = r11.s64 + 28536;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29996) );
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292188) {
	__imp__sub_83292188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832921A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r10,r10,28576
	ctx.r10.s64 = ctx.r10.s64 + 28576;
	// lwz r11,28556(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28556) );
	// stw r11,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832921A8) {
	__imp__sub_832921A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832921C0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r9,r10,18132
	ctx.r9.s64 = ctx.r10.s64 + 18132;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,28576
	ctx.r8.s64 = r11.s64 + 28576;
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r3,r10,29804
	ctx.r3.s64 = ctx.r10.s64 + 29804;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832921C0) {
	__imp__sub_832921C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292230) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,18236
	ctx.r7.s64 = r11.s64 + 18236;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18284
	ctx.r4.s64 = ctx.r10.s64 + 18284;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,29852
	ctx.r3.s64 = ctx.r10.s64 + 29852;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292230) {
	__imp__sub_83292230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832922A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r10,r10,28856
	ctx.r10.s64 = ctx.r10.s64 + 28856;
	// lwz r11,28816(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28816) );
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832922A0) {
	__imp__sub_832922A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832922B8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r9,r10,18216
	ctx.r9.s64 = ctx.r10.s64 + 18216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,28856
	ctx.r8.s64 = r11.s64 + 28856;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r10,18300
	ctx.r4.s64 = ctx.r10.s64 + 18300;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r3,r10,29900
	ctx.r3.s64 = ctx.r10.s64 + 29900;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832922B8) {
	__imp__sub_832922B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r10,28952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28952) );
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,28984
	r11.s64 = r11.s64 + 28984;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lwz r10,28956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28956) );
	// stw r10,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292328) {
	__imp__sub_83292328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292350) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r9,r10,19360
	ctx.r9.s64 = ctx.r10.s64 + 19360;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,28984
	ctx.r8.s64 = r11.s64 + 28984;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r4,r10,19420
	ctx.r4.s64 = ctx.r10.s64 + 19420;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r10,29948
	ctx.r3.s64 = ctx.r10.s64 + 29948;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292350) {
	__imp__sub_83292350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832923C0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,20492
	ctx.r7.s64 = r11.s64 + 20492;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,20564
	ctx.r4.s64 = ctx.r10.s64 + 20564;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30008
	ctx.r3.s64 = ctx.r10.s64 + 30008;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832923C0) {
	__imp__sub_832923C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292430) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,20540
	ctx.r7.s64 = r11.s64 + 20540;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,20592
	ctx.r4.s64 = ctx.r10.s64 + 20592;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30056
	ctx.r3.s64 = ctx.r10.s64 + 30056;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292430) {
	__imp__sub_83292430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832924A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,30168
	r11.s64 = r11.s64 + 30168;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29996) );
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832924A0) {
	__imp__sub_832924A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832924C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,30188
	r11.s64 = r11.s64 + 30188;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29996) );
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832924C0) {
	__imp__sub_832924C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832924E0) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r10,30404
	ctx.r5.s64 = ctx.r10.s64 + 30404;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,21024
	ctx.r8.s64 = r11.s64 + 21024;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,21096
	ctx.r4.s64 = ctx.r10.s64 + 21096;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,30116
	ctx.r3.s64 = ctx.r10.s64 + 30116;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832924E0) {
	__imp__sub_832924E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292550) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r11,21228
	ctx.r9.s64 = r11.s64 + 21228;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r10,21288
	ctx.r4.s64 = ctx.r10.s64 + 21288;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r11,30164
	ctx.r3.s64 = r11.s64 + 30164;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292550) {
	__imp__sub_83292550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832925C0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,21688
	ctx.r7.s64 = r11.s64 + 21688;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,22336
	ctx.r4.s64 = ctx.r10.s64 + 22336;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30212
	ctx.r3.s64 = ctx.r10.s64 + 30212;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832925C0) {
	__imp__sub_832925C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292630) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,21904
	ctx.r7.s64 = r11.s64 + 21904;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,22384
	ctx.r4.s64 = ctx.r10.s64 + 22384;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30260
	ctx.r3.s64 = ctx.r10.s64 + 30260;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292630) {
	__imp__sub_83292630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832926A0) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r10,30404
	ctx.r5.s64 = ctx.r10.s64 + 30404;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,22048
	ctx.r8.s64 = r11.s64 + 22048;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r4,r10,22432
	ctx.r4.s64 = ctx.r10.s64 + 22432;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,30308
	ctx.r3.s64 = ctx.r10.s64 + 30308;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,92
	ctx.r6.s64 = 92;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832926A0) {
	__imp__sub_832926A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292710) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,22460
	ctx.r4.s64 = ctx.r10.s64 + 22460;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,30356
	ctx.r3.s64 = ctx.r10.s64 + 30356;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292710) {
	__imp__sub_83292710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r10,r10,30600
	ctx.r10.s64 = ctx.r10.s64 + 30600;
	// lwz r11,30592(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(30592) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292778) {
	__imp__sub_83292778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292790) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,30600
	ctx.r8.s64 = r11.s64 + 30600;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,22684
	ctx.r9.s64 = ctx.r10.s64 + 22684;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r4,r10,22768
	ctx.r4.s64 = ctx.r10.s64 + 22768;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,30404
	ctx.r3.s64 = r11.s64 + 30404;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292790) {
	__imp__sub_83292790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r10,r10,30744
	ctx.r10.s64 = ctx.r10.s64 + 30744;
	// lwz r11,30720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(30720) );
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292808) {
	__imp__sub_83292808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292820) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r9,r10,22884
	ctx.r9.s64 = ctx.r10.s64 + 22884;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,30744
	ctx.r8.s64 = r11.s64 + 30744;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r10,22904
	ctx.r4.s64 = ctx.r10.s64 + 22904;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r10,30452
	ctx.r3.s64 = ctx.r10.s64 + 30452;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292820) {
	__imp__sub_83292820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292890) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,22984
	ctx.r7.s64 = r11.s64 + 22984;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r4,r10,23104
	ctx.r4.s64 = ctx.r10.s64 + 23104;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30500
	ctx.r3.s64 = ctx.r10.s64 + 30500;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292890) {
	__imp__sub_83292890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292900) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,23140
	ctx.r7.s64 = r11.s64 + 23140;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,23236
	ctx.r4.s64 = ctx.r10.s64 + 23236;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30548
	ctx.r3.s64 = ctx.r10.s64 + 30548;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292900) {
	__imp__sub_83292900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292970) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,23188
	ctx.r7.s64 = r11.s64 + 23188;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,23268
	ctx.r4.s64 = ctx.r10.s64 + 23268;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30596
	ctx.r3.s64 = ctx.r10.s64 + 30596;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292970) {
	__imp__sub_83292970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832929E0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,23304
	ctx.r7.s64 = r11.s64 + 23304;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,23352
	ctx.r4.s64 = ctx.r10.s64 + 23352;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30644
	ctx.r3.s64 = ctx.r10.s64 + 30644;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832929E0) {
	__imp__sub_832929E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292A50) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,23408
	ctx.r7.s64 = r11.s64 + 23408;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,23504
	ctx.r4.s64 = ctx.r10.s64 + 23504;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30692
	ctx.r3.s64 = ctx.r10.s64 + 30692;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292A50) {
	__imp__sub_83292A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292AC0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,23592
	ctx.r7.s64 = r11.s64 + 23592;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,24072
	ctx.r4.s64 = ctx.r10.s64 + 24072;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30740
	ctx.r3.s64 = ctx.r10.s64 + 30740;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292AC0) {
	__imp__sub_83292AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292B30) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r10,30404
	ctx.r5.s64 = ctx.r10.s64 + 30404;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,23736
	ctx.r8.s64 = r11.s64 + 23736;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r10,24128
	ctx.r4.s64 = ctx.r10.s64 + 24128;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,30788
	ctx.r3.s64 = ctx.r10.s64 + 30788;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292B30) {
	__imp__sub_83292B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292BA0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,24224
	ctx.r7.s64 = r11.s64 + 24224;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,24344
	ctx.r4.s64 = ctx.r10.s64 + 24344;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30836
	ctx.r3.s64 = ctx.r10.s64 + 30836;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292BA0) {
	__imp__sub_83292BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292C10) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,24248
	ctx.r7.s64 = r11.s64 + 24248;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,24368
	ctx.r4.s64 = ctx.r10.s64 + 24368;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30884
	ctx.r3.s64 = ctx.r10.s64 + 30884;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292C10) {
	__imp__sub_83292C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292C80) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,24424
	ctx.r7.s64 = r11.s64 + 24424;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,24520
	ctx.r4.s64 = ctx.r10.s64 + 24520;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30932
	ctx.r3.s64 = ctx.r10.s64 + 30932;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292C80) {
	__imp__sub_83292C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292CF0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,24752
	ctx.r7.s64 = r11.s64 + 24752;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,25112
	ctx.r4.s64 = ctx.r10.s64 + 25112;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30980
	ctx.r3.s64 = ctx.r10.s64 + 30980;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292CF0) {
	__imp__sub_83292CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292D60) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,24824
	ctx.r7.s64 = r11.s64 + 24824;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,25148
	ctx.r4.s64 = ctx.r10.s64 + 25148;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31028
	ctx.r3.s64 = ctx.r10.s64 + 31028;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292D60) {
	__imp__sub_83292D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292DD0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,24968
	ctx.r7.s64 = r11.s64 + 24968;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,25184
	ctx.r4.s64 = ctx.r10.s64 + 25184;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31076
	ctx.r3.s64 = ctx.r10.s64 + 31076;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292DD0) {
	__imp__sub_83292DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292E40) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r10,30356
	ctx.r5.s64 = ctx.r10.s64 + 30356;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,25248
	ctx.r8.s64 = r11.s64 + 25248;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,25372
	ctx.r4.s64 = ctx.r10.s64 + 25372;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,31124
	ctx.r3.s64 = ctx.r10.s64 + 31124;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292E40) {
	__imp__sub_83292E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292EB0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,27016
	ctx.r7.s64 = r11.s64 + 27016;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,27112
	ctx.r4.s64 = ctx.r10.s64 + 27112;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31172
	ctx.r3.s64 = ctx.r10.s64 + 31172;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292EB0) {
	__imp__sub_83292EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292F20) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,27088
	ctx.r7.s64 = r11.s64 + 27088;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,27148
	ctx.r4.s64 = ctx.r10.s64 + 27148;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31220
	ctx.r3.s64 = ctx.r10.s64 + 31220;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292F20) {
	__imp__sub_83292F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r11,27172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27172) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,31764
	r11.s64 = r11.s64 + 31764;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292F90) {
	__imp__sub_83292F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,31904
	r11.s64 = r11.s64 + 31904;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29996) );
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292FB8) {
	__imp__sub_83292FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,32088
	r11.s64 = r11.s64 + 32088;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29996) );
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292FD8) {
	__imp__sub_83292FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83292FF8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28068
	ctx.r7.s64 = r11.s64 + 28068;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,28092
	ctx.r4.s64 = ctx.r10.s64 + 28092;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31276
	ctx.r3.s64 = ctx.r10.s64 + 31276;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83292FF8) {
	__imp__sub_83292FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293068) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28128
	ctx.r7.s64 = r11.s64 + 28128;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,28152
	ctx.r4.s64 = ctx.r10.s64 + 28152;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31324
	ctx.r3.s64 = ctx.r10.s64 + 31324;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293068) {
	__imp__sub_83293068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832930D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r10,r10,32312
	ctx.r10.s64 = ctx.r10.s64 + 32312;
	// lwz r11,32376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32376) );
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832930D8) {
	__imp__sub_832930D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832930F0) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,32312
	ctx.r7.s64 = r11.s64 + 32312;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,28184
	ctx.r4.s64 = ctx.r10.s64 + 28184;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31372
	ctx.r3.s64 = ctx.r10.s64 + 31372;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832930F0) {
	__imp__sub_832930F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293160) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28216
	ctx.r7.s64 = r11.s64 + 28216;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,28264
	ctx.r4.s64 = ctx.r10.s64 + 28264;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31420
	ctx.r3.s64 = ctx.r10.s64 + 31420;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293160) {
	__imp__sub_83293160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832931D0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,28424
	ctx.r9.s64 = r11.s64 + 28424;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// addi r4,r10,28492
	ctx.r4.s64 = ctx.r10.s64 + 28492;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r10,31468
	ctx.r3.s64 = ctx.r10.s64 + 31468;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832931D0) {
	__imp__sub_832931D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293240) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28528
	ctx.r7.s64 = r11.s64 + 28528;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,28552
	ctx.r4.s64 = ctx.r10.s64 + 28552;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31516
	ctx.r3.s64 = ctx.r10.s64 + 31516;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293240) {
	__imp__sub_83293240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832932B0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28580
	ctx.r7.s64 = r11.s64 + 28580;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,28628
	ctx.r4.s64 = ctx.r10.s64 + 28628;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31564
	ctx.r3.s64 = ctx.r10.s64 + 31564;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832932B0) {
	__imp__sub_832932B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293320) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28660
	ctx.r7.s64 = r11.s64 + 28660;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,28708
	ctx.r4.s64 = ctx.r10.s64 + 28708;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31612
	ctx.r3.s64 = ctx.r10.s64 + 31612;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293320) {
	__imp__sub_83293320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293390) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28740
	ctx.r7.s64 = r11.s64 + 28740;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,28764
	ctx.r4.s64 = ctx.r10.s64 + 28764;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31660
	ctx.r3.s64 = ctx.r10.s64 + 31660;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293390) {
	__imp__sub_83293390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293400) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28800
	ctx.r7.s64 = r11.s64 + 28800;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,28824
	ctx.r4.s64 = ctx.r10.s64 + 28824;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31708
	ctx.r3.s64 = ctx.r10.s64 + 31708;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293400) {
	__imp__sub_83293400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293470) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,28888
	ctx.r7.s64 = r11.s64 + 28888;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r4,r10,29056
	ctx.r4.s64 = ctx.r10.s64 + 29056;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31756
	ctx.r3.s64 = ctx.r10.s64 + 31756;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293470) {
	__imp__sub_83293470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832934E0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,29272
	ctx.r7.s64 = r11.s64 + 29272;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r4,r10,29560
	ctx.r4.s64 = ctx.r10.s64 + 29560;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31804
	ctx.r3.s64 = ctx.r10.s64 + 31804;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832934E0) {
	__imp__sub_832934E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293550) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,29592
	ctx.r7.s64 = r11.s64 + 29592;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31852
	ctx.r3.s64 = ctx.r10.s64 + 31852;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293550) {
	__imp__sub_83293550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832935C0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,29656
	ctx.r7.s64 = r11.s64 + 29656;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,29680
	ctx.r4.s64 = ctx.r10.s64 + 29680;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31900
	ctx.r3.s64 = ctx.r10.s64 + 31900;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832935C0) {
	__imp__sub_832935C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293630) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,29716
	ctx.r7.s64 = r11.s64 + 29716;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,29788
	ctx.r4.s64 = ctx.r10.s64 + 29788;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31948
	ctx.r3.s64 = ctx.r10.s64 + 31948;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293630) {
	__imp__sub_83293630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832936A0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,29764
	ctx.r7.s64 = r11.s64 + 29764;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,29812
	ctx.r4.s64 = ctx.r10.s64 + 29812;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,31996
	ctx.r3.s64 = ctx.r10.s64 + 31996;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832936A0) {
	__imp__sub_832936A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293710) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,29848
	ctx.r7.s64 = r11.s64 + 29848;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,29992
	ctx.r4.s64 = ctx.r10.s64 + 29992;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32044
	ctx.r3.s64 = ctx.r10.s64 + 32044;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293710) {
	__imp__sub_83293710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293780) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,30016
	ctx.r7.s64 = r11.s64 + 30016;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r4,r10,30208
	ctx.r4.s64 = ctx.r10.s64 + 30208;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32092
	ctx.r3.s64 = ctx.r10.s64 + 32092;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293780) {
	__imp__sub_83293780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832937F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r10,r10,32632
	ctx.r10.s64 = ctx.r10.s64 + 32632;
	// lwz r11,32608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32608) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832937F0) {
	__imp__sub_832937F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293808) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r9,r10,30400
	ctx.r9.s64 = ctx.r10.s64 + 30400;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,32632
	ctx.r8.s64 = r11.s64 + 32632;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r4,r10,30420
	ctx.r4.s64 = ctx.r10.s64 + 30420;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r3,r10,32140
	ctx.r3.s64 = ctx.r10.s64 + 32140;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293808) {
	__imp__sub_83293808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293878) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,30504
	ctx.r7.s64 = r11.s64 + 30504;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,30720
	ctx.r4.s64 = ctx.r10.s64 + 30720;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32188
	ctx.r3.s64 = ctx.r10.s64 + 32188;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293878) {
	__imp__sub_83293878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832938E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-32744
	ctx.r10.s64 = ctx.r10.s64 + -32744;
	// lwz r11,-32768(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-32768) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832938E8) {
	__imp__sub_832938E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293900) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r9,r10,30816
	ctx.r9.s64 = ctx.r10.s64 + 30816;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,-32744
	ctx.r8.s64 = r11.s64 + -32744;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r4,r10,30836
	ctx.r4.s64 = ctx.r10.s64 + 30836;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r3,r10,32236
	ctx.r3.s64 = ctx.r10.s64 + 32236;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293900) {
	__imp__sub_83293900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293970) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,30880
	ctx.r7.s64 = r11.s64 + 30880;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r4,r10,31072
	ctx.r4.s64 = ctx.r10.s64 + 31072;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32284
	ctx.r3.s64 = ctx.r10.s64 + 32284;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293970) {
	__imp__sub_83293970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832939E0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,31372
	ctx.r7.s64 = r11.s64 + 31372;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,31616
	ctx.r4.s64 = ctx.r10.s64 + 31616;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32332
	ctx.r3.s64 = ctx.r10.s64 + 32332;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832939E0) {
	__imp__sub_832939E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293A50) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r11,31352
	ctx.r9.s64 = r11.s64 + 31352;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,72
	ctx.r8.s64 = ctx.r9.s64 + 72;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r5,r10,31660
	ctx.r5.s64 = ctx.r10.s64 + 31660;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r10,31640
	ctx.r4.s64 = ctx.r10.s64 + 31640;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r11,32380
	ctx.r3.s64 = r11.s64 + 32380;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293A50) {
	__imp__sub_83293A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293AC0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,31656
	ctx.r7.s64 = r11.s64 + 31656;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r4,r10,31824
	ctx.r4.s64 = ctx.r10.s64 + 31824;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32428
	ctx.r3.s64 = ctx.r10.s64 + 32428;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293AC0) {
	__imp__sub_83293AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-32528
	ctx.r10.s64 = ctx.r10.s64 + -32528;
	// lwz r11,-32552(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-32552) );
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293B30) {
	__imp__sub_83293B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293B48) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r9,r10,32000
	ctx.r9.s64 = ctx.r10.s64 + 32000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,-32528
	ctx.r8.s64 = r11.s64 + -32528;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r10,32020
	ctx.r4.s64 = ctx.r10.s64 + 32020;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r10,32476
	ctx.r3.s64 = ctx.r10.s64 + 32476;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293B48) {
	__imp__sub_83293B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293BB8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,32060
	ctx.r7.s64 = r11.s64 + 32060;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,32084
	ctx.r4.s64 = ctx.r10.s64 + 32084;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32524
	ctx.r3.s64 = ctx.r10.s64 + 32524;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293BB8) {
	__imp__sub_83293BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293C28) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,32132
	ctx.r7.s64 = r11.s64 + 32132;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,32156
	ctx.r4.s64 = ctx.r10.s64 + 32156;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32572
	ctx.r3.s64 = ctx.r10.s64 + 32572;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293C28) {
	__imp__sub_83293C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293C98) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r10,31660
	ctx.r5.s64 = ctx.r10.s64 + 31660;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,32216
	ctx.r8.s64 = r11.s64 + 32216;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,32312
	ctx.r4.s64 = ctx.r10.s64 + 32312;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,32620
	ctx.r3.s64 = ctx.r10.s64 + 32620;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293C98) {
	__imp__sub_83293C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293D08) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,32264
	ctx.r7.s64 = r11.s64 + 32264;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,32336
	ctx.r4.s64 = ctx.r10.s64 + 32336;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32668
	ctx.r3.s64 = ctx.r10.s64 + 32668;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293D08) {
	__imp__sub_83293D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293D78) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,32392
	ctx.r7.s64 = r11.s64 + 32392;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,32488
	ctx.r4.s64 = ctx.r10.s64 + 32488;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32716
	ctx.r3.s64 = ctx.r10.s64 + 32716;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293D78) {
	__imp__sub_83293D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293DE8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,32568
	ctx.r7.s64 = r11.s64 + 32568;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-32752
	ctx.r4.s64 = ctx.r10.s64 + -32752;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,32764
	ctx.r3.s64 = ctx.r10.s64 + 32764;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293DE8) {
	__imp__sub_83293DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293E58) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r5,r10,31660
	ctx.r5.s64 = ctx.r10.s64 + 31660;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,32616
	ctx.r8.s64 = r11.s64 + 32616;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r4,r10,-32728
	ctx.r4.s64 = ctx.r10.s64 + -32728;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-32724
	ctx.r3.s64 = ctx.r10.s64 + -32724;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,52
	ctx.r6.s64 = 52;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293E58) {
	__imp__sub_83293E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293EC8) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,31660
	ctx.r5.s64 = ctx.r10.s64 + 31660;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-32704
	ctx.r8.s64 = r11.s64 + -32704;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-32656
	ctx.r4.s64 = ctx.r10.s64 + -32656;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-32676
	ctx.r3.s64 = ctx.r10.s64 + -32676;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293EC8) {
	__imp__sub_83293EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293F38) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-32464
	r11.s64 = r11.s64 + -32464;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r8,r11,312
	ctx.r8.s64 = r11.s64 + 312;
	// addi r4,r10,-32052
	ctx.r4.s64 = ctx.r10.s64 + -32052;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r10,-32628
	ctx.r3.s64 = ctx.r10.s64 + -32628;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293F38) {
	__imp__sub_83293F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83293FA8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-32008
	ctx.r7.s64 = r11.s64 + -32008;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-31912
	ctx.r4.s64 = ctx.r10.s64 + -31912;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32580
	ctx.r3.s64 = ctx.r10.s64 + -32580;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83293FA8) {
	__imp__sub_83293FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294018) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-31880
	ctx.r7.s64 = r11.s64 + -31880;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-31832
	ctx.r4.s64 = ctx.r10.s64 + -31832;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32532
	ctx.r3.s64 = ctx.r10.s64 + -32532;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294018) {
	__imp__sub_83294018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294088) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-32436
	ctx.r5.s64 = ctx.r10.s64 + -32436;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-31808
	ctx.r8.s64 = r11.s64 + -31808;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-31784
	ctx.r4.s64 = ctx.r10.s64 + -31784;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-32484
	ctx.r3.s64 = ctx.r10.s64 + -32484;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294088) {
	__imp__sub_83294088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832940F8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-31752
	ctx.r7.s64 = r11.s64 + -31752;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-31704
	ctx.r4.s64 = ctx.r10.s64 + -31704;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32436
	ctx.r3.s64 = ctx.r10.s64 + -32436;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832940F8) {
	__imp__sub_832940F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294168) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-31672
	ctx.r7.s64 = r11.s64 + -31672;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-31600
	ctx.r4.s64 = ctx.r10.s64 + -31600;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32388
	ctx.r3.s64 = ctx.r10.s64 + -32388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294168) {
	__imp__sub_83294168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832941D8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-31648
	ctx.r7.s64 = r11.s64 + -31648;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-31564
	ctx.r4.s64 = ctx.r10.s64 + -31564;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32340
	ctx.r3.s64 = ctx.r10.s64 + -32340;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832941D8) {
	__imp__sub_832941D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-32200
	ctx.r10.s64 = ctx.r10.s64 + -32200;
	// lwz r11,32376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32376) );
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294248) {
	__imp__sub_83294248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294260) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-32200
	ctx.r7.s64 = r11.s64 + -32200;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-31528
	ctx.r4.s64 = ctx.r10.s64 + -31528;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32292
	ctx.r3.s64 = ctx.r10.s64 + -32292;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294260) {
	__imp__sub_83294260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832942D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-32136
	ctx.r10.s64 = ctx.r10.s64 + -32136;
	// lwz r11,32376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32376) );
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832942D0) {
	__imp__sub_832942D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832942E8) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-32136
	ctx.r7.s64 = r11.s64 + -32136;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-31496
	ctx.r4.s64 = ctx.r10.s64 + -31496;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32244
	ctx.r3.s64 = ctx.r10.s64 + -32244;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832942E8) {
	__imp__sub_832942E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294358) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-28628
	ctx.r7.s64 = r11.s64 + -28628;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-28504
	ctx.r4.s64 = ctx.r10.s64 + -28504;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32192
	ctx.r3.s64 = ctx.r10.s64 + -32192;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294358) {
	__imp__sub_83294358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832943C8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-28580
	ctx.r8.s64 = r11.s64 + -28580;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-28468
	ctx.r4.s64 = ctx.r10.s64 + -28468;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-32144
	ctx.r3.s64 = ctx.r10.s64 + -32144;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,176
	ctx.r6.s64 = 176;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832943C8) {
	__imp__sub_832943C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294438) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-28328
	ctx.r7.s64 = r11.s64 + -28328;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-28112
	ctx.r4.s64 = ctx.r10.s64 + -28112;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32096
	ctx.r3.s64 = ctx.r10.s64 + -32096;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294438) {
	__imp__sub_83294438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832944A8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-28232
	ctx.r7.s64 = r11.s64 + -28232;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r4,r10,-28064
	ctx.r4.s64 = ctx.r10.s64 + -28064;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32048
	ctx.r3.s64 = ctx.r10.s64 + -32048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832944A8) {
	__imp__sub_832944A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294518) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-27960
	ctx.r8.s64 = r11.s64 + -27960;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-27804
	ctx.r4.s64 = ctx.r10.s64 + -27804;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-32000
	ctx.r3.s64 = ctx.r10.s64 + -32000;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294518) {
	__imp__sub_83294518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294588) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-27736
	ctx.r9.s64 = r11.s64 + -27736;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-27564
	ctx.r4.s64 = ctx.r10.s64 + -27564;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// addi r3,r10,-31952
	ctx.r3.s64 = ctx.r10.s64 + -31952;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294588) {
	__imp__sub_83294588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832945F8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-27640
	ctx.r8.s64 = r11.s64 + -27640;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-27536
	ctx.r4.s64 = ctx.r10.s64 + -27536;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31904
	ctx.r3.s64 = ctx.r10.s64 + -31904;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,176
	ctx.r6.s64 = 176;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832945F8) {
	__imp__sub_832945F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294668) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-27384
	ctx.r7.s64 = r11.s64 + -27384;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,-26972
	ctx.r4.s64 = ctx.r10.s64 + -26972;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-31856
	ctx.r3.s64 = ctx.r10.s64 + -31856;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294668) {
	__imp__sub_83294668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832946D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-26936
	ctx.r10.s64 = r11.s64 + -26936;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-31808
	r11.s64 = r11.s64 + -31808;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-7136
	ctx.r10.s64 = ctx.r8.s64 + -7136;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-7112
	ctx.r10.s64 = ctx.r9.s64 + -7112;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832946D8) {
	__imp__sub_832946D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294738) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27240
	r11.s64 = r11.s64 + -27240;
	// addi r5,r10,-28640
	ctx.r5.s64 = ctx.r10.s64 + -28640;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,216
	ctx.r8.s64 = r11.s64 + 216;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r4,r10,-26936
	ctx.r4.s64 = ctx.r10.s64 + -26936;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r3,r10,-31792
	ctx.r3.s64 = ctx.r10.s64 + -31792;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294738) {
	__imp__sub_83294738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832947A8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-26824
	ctx.r9.s64 = r11.s64 + -26824;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-26652
	ctx.r4.s64 = ctx.r10.s64 + -26652;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// addi r3,r10,-31744
	ctx.r3.s64 = ctx.r10.s64 + -31744;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832947A8) {
	__imp__sub_832947A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294818) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26728
	ctx.r8.s64 = r11.s64 + -26728;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-26628
	ctx.r4.s64 = ctx.r10.s64 + -26628;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31696
	ctx.r3.s64 = ctx.r10.s64 + -31696;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,160
	ctx.r6.s64 = 160;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294818) {
	__imp__sub_83294818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294888) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-26504
	ctx.r9.s64 = r11.s64 + -26504;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-26236
	ctx.r4.s64 = ctx.r10.s64 + -26236;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// addi r3,r10,-31648
	ctx.r3.s64 = ctx.r10.s64 + -31648;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294888) {
	__imp__sub_83294888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832948F8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26312
	ctx.r8.s64 = r11.s64 + -26312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-26204
	ctx.r4.s64 = ctx.r10.s64 + -26204;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31600
	ctx.r3.s64 = ctx.r10.s64 + -31600;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832948F8) {
	__imp__sub_832948F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294968) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-26128
	ctx.r9.s64 = r11.s64 + -26128;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-25884
	ctx.r4.s64 = ctx.r10.s64 + -25884;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// addi r3,r10,-31552
	ctx.r3.s64 = ctx.r10.s64 + -31552;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294968) {
	__imp__sub_83294968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832949D8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-25960
	ctx.r8.s64 = r11.s64 + -25960;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-25848
	ctx.r4.s64 = ctx.r10.s64 + -25848;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31504
	ctx.r3.s64 = ctx.r10.s64 + -31504;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,224
	ctx.r6.s64 = 224;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832949D8) {
	__imp__sub_832949D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294A48) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-25792
	ctx.r7.s64 = r11.s64 + -25792;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-25668
	ctx.r4.s64 = ctx.r10.s64 + -25668;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-31456
	ctx.r3.s64 = ctx.r10.s64 + -31456;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294A48) {
	__imp__sub_83294A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294AB8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-25744
	ctx.r8.s64 = r11.s64 + -25744;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-25636
	ctx.r4.s64 = ctx.r10.s64 + -25636;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31408
	ctx.r3.s64 = ctx.r10.s64 + -31408;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294AB8) {
	__imp__sub_83294AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-30016
	ctx.r10.s64 = ctx.r10.s64 + -30016;
	// lwz r11,-30040(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-30040) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294B28) {
	__imp__sub_83294B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294B40) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r9,r10,-25444
	ctx.r9.s64 = ctx.r10.s64 + -25444;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-30016
	ctx.r8.s64 = r11.s64 + -30016;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r10,-25424
	ctx.r4.s64 = ctx.r10.s64 + -25424;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r10,-31360
	ctx.r3.s64 = ctx.r10.s64 + -31360;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294B40) {
	__imp__sub_83294B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294BB0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-25188
	ctx.r9.s64 = r11.s64 + -25188;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// addi r4,r10,-24976
	ctx.r4.s64 = ctx.r10.s64 + -24976;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,304
	ctx.r6.s64 = 304;
	// addi r3,r10,-31312
	ctx.r3.s64 = ctx.r10.s64 + -31312;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294BB0) {
	__imp__sub_83294BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294C20) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,-25232
	ctx.r9.s64 = r11.s64 + -25232;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,232
	ctx.r8.s64 = ctx.r9.s64 + 232;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r6,320
	ctx.r6.s64 = 320;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r10,-24944
	ctx.r4.s64 = ctx.r10.s64 + -24944;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r11,-31264
	ctx.r3.s64 = r11.s64 + -31264;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294C20) {
	__imp__sub_83294C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294C90) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-24888
	ctx.r9.s64 = r11.s64 + -24888;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-24692
	ctx.r4.s64 = ctx.r10.s64 + -24692;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,176
	ctx.r6.s64 = 176;
	// addi r3,r10,-31216
	ctx.r3.s64 = ctx.r10.s64 + -31216;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294C90) {
	__imp__sub_83294C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294D00) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-24768
	ctx.r8.s64 = r11.s64 + -24768;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-24664
	ctx.r4.s64 = ctx.r10.s64 + -24664;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31168
	ctx.r3.s64 = ctx.r10.s64 + -31168;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294D00) {
	__imp__sub_83294D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294D70) {
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
	// lis r7,-32040
	ctx.r7.s64 = -2099773440;
	// addi r10,r11,-28768
	ctx.r10.s64 = r11.s64 + -28768;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r9,r11,-29728
	ctx.r9.s64 = r11.s64 + -29728;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-31120
	r11.s64 = r11.s64 + -31120;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r7,-6224
	ctx.r10.s64 = ctx.r7.s64 + -6224;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r8,-6248
	ctx.r10.s64 = ctx.r8.s64 + -6248;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294D70) {
	__imp__sub_83294D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294DD0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-29040
	ctx.r5.s64 = ctx.r10.s64 + -29040;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-28768
	ctx.r4.s64 = ctx.r10.s64 + -28768;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-31104
	ctx.r3.s64 = ctx.r10.s64 + -31104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294DD0) {
	__imp__sub_83294DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294E38) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-24640
	ctx.r7.s64 = r11.s64 + -24640;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-24516
	ctx.r4.s64 = ctx.r10.s64 + -24516;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-31056
	ctx.r3.s64 = ctx.r10.s64 + -31056;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294E38) {
	__imp__sub_83294E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294EA8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-24592
	ctx.r8.s64 = r11.s64 + -24592;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-24480
	ctx.r4.s64 = ctx.r10.s64 + -24480;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31008
	ctx.r3.s64 = ctx.r10.s64 + -31008;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294EA8) {
	__imp__sub_83294EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294F18) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-24432
	ctx.r7.s64 = r11.s64 + -24432;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-24336
	ctx.r4.s64 = ctx.r10.s64 + -24336;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30960
	ctx.r3.s64 = ctx.r10.s64 + -30960;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294F18) {
	__imp__sub_83294F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294F88) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-24408
	ctx.r7.s64 = r11.s64 + -24408;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-24316
	ctx.r4.s64 = ctx.r10.s64 + -24316;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30912
	ctx.r3.s64 = ctx.r10.s64 + -30912;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294F88) {
	__imp__sub_83294F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83294FF8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-24272
	ctx.r7.s64 = r11.s64 + -24272;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-24224
	ctx.r4.s64 = ctx.r10.s64 + -24224;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30864
	ctx.r3.s64 = ctx.r10.s64 + -30864;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83294FF8) {
	__imp__sub_83294FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-24184
	ctx.r10.s64 = r11.s64 + -24184;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30816
	r11.s64 = r11.s64 + -30816;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-5968
	ctx.r10.s64 = ctx.r8.s64 + -5968;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-5992
	ctx.r10.s64 = ctx.r9.s64 + -5992;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295068) {
	__imp__sub_83295068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832950C8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-27888
	ctx.r5.s64 = ctx.r10.s64 + -27888;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-24248
	ctx.r8.s64 = r11.s64 + -24248;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-24184
	ctx.r4.s64 = ctx.r10.s64 + -24184;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30800
	ctx.r3.s64 = ctx.r10.s64 + -30800;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,352
	ctx.r6.s64 = 352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832950C8) {
	__imp__sub_832950C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r10,-29696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-29696) );
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r11,r11,-29672
	r11.s64 = r11.s64 + -29672;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-29704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-29704) );
	// stw r10,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295138) {
	__imp__sub_83295138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295160) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,-23760
	ctx.r9.s64 = ctx.r10.s64 + -23760;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r4,r10,-23656
	ctx.r4.s64 = ctx.r10.s64 + -23656;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r11,r11,-29672
	r11.s64 = r11.s64 + -29672;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30752
	ctx.r3.s64 = ctx.r10.s64 + -30752;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295160) {
	__imp__sub_83295160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832951D8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-23344
	ctx.r7.s64 = r11.s64 + -23344;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-23100
	ctx.r4.s64 = ctx.r10.s64 + -23100;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30704
	ctx.r3.s64 = ctx.r10.s64 + -30704;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832951D8) {
	__imp__sub_832951D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295248) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-27936
	ctx.r5.s64 = ctx.r10.s64 + -27936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-23296
	ctx.r8.s64 = r11.s64 + -23296;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r4,r10,-23060
	ctx.r4.s64 = ctx.r10.s64 + -23060;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30656
	ctx.r3.s64 = ctx.r10.s64 + -30656;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295248) {
	__imp__sub_83295248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832952B8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28192
	ctx.r5.s64 = ctx.r10.s64 + -28192;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-23028
	ctx.r4.s64 = ctx.r10.s64 + -23028;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-30608
	ctx.r3.s64 = ctx.r10.s64 + -30608;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832952B8) {
	__imp__sub_832952B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295320) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22980
	ctx.r8.s64 = r11.s64 + -22980;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-22912
	ctx.r4.s64 = ctx.r10.s64 + -22912;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30560
	ctx.r3.s64 = ctx.r10.s64 + -30560;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295320) {
	__imp__sub_83295320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295390) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-29792
	ctx.r5.s64 = ctx.r10.s64 + -29792;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-22880
	ctx.r4.s64 = ctx.r10.s64 + -22880;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-30512
	ctx.r3.s64 = ctx.r10.s64 + -30512;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295390) {
	__imp__sub_83295390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832953F8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-30608
	ctx.r5.s64 = ctx.r10.s64 + -30608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-22856
	ctx.r4.s64 = ctx.r10.s64 + -22856;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-30464
	ctx.r3.s64 = ctx.r10.s64 + -30464;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832953F8) {
	__imp__sub_832953F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-22692
	ctx.r10.s64 = r11.s64 + -22692;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30416
	r11.s64 = r11.s64 + -30416;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-5128
	ctx.r10.s64 = ctx.r8.s64 + -5128;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-5152
	ctx.r10.s64 = ctx.r9.s64 + -5152;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295460) {
	__imp__sub_83295460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832954C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-27984
	ctx.r5.s64 = ctx.r10.s64 + -27984;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22796
	ctx.r8.s64 = r11.s64 + -22796;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-22692
	ctx.r4.s64 = ctx.r10.s64 + -22692;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30400
	ctx.r3.s64 = ctx.r10.s64 + -30400;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832954C0) {
	__imp__sub_832954C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295530) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22656
	ctx.r7.s64 = r11.s64 + -22656;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-22464
	ctx.r4.s64 = ctx.r10.s64 + -22464;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30352
	ctx.r3.s64 = ctx.r10.s64 + -30352;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295530) {
	__imp__sub_83295530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832955A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85388
	sub_82D85388(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-22424
	ctx.r10.s64 = r11.s64 + -22424;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30304
	r11.s64 = r11.s64 + -30304;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4840
	ctx.r10.s64 = ctx.r8.s64 + -4840;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4816
	ctx.r10.s64 = ctx.r9.s64 + -4816;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832955A0) {
	__imp__sub_832955A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295600) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28640
	ctx.r5.s64 = ctx.r10.s64 + -28640;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22584
	ctx.r8.s64 = r11.s64 + -22584;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,-22424
	ctx.r4.s64 = ctx.r10.s64 + -22424;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30288
	ctx.r3.s64 = ctx.r10.s64 + -30288;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295600) {
	__imp__sub_83295600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295670) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22392
	ctx.r7.s64 = r11.s64 + -22392;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-22268
	ctx.r4.s64 = ctx.r10.s64 + -22268;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30240
	ctx.r3.s64 = ctx.r10.s64 + -30240;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295670) {
	__imp__sub_83295670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832956E0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22344
	ctx.r8.s64 = r11.s64 + -22344;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-22232
	ctx.r4.s64 = ctx.r10.s64 + -22232;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30192
	ctx.r3.s64 = ctx.r10.s64 + -30192;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832956E0) {
	__imp__sub_832956E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295750) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22200
	ctx.r7.s64 = r11.s64 + -22200;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-22076
	ctx.r4.s64 = ctx.r10.s64 + -22076;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30144
	ctx.r3.s64 = ctx.r10.s64 + -30144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295750) {
	__imp__sub_83295750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832957C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22152
	ctx.r8.s64 = r11.s64 + -22152;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-22040
	ctx.r4.s64 = ctx.r10.s64 + -22040;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30096
	ctx.r3.s64 = ctx.r10.s64 + -30096;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832957C0) {
	__imp__sub_832957C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295830) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22008
	ctx.r7.s64 = r11.s64 + -22008;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-21816
	ctx.r4.s64 = ctx.r10.s64 + -21816;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30048
	ctx.r3.s64 = ctx.r10.s64 + -30048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295830) {
	__imp__sub_83295830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832958A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x82d9b5b8
	sub_82D9B5B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-21776
	ctx.r10.s64 = r11.s64 + -21776;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30000
	r11.s64 = r11.s64 + -30000;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4560
	ctx.r10.s64 = ctx.r8.s64 + -4560;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4536
	ctx.r10.s64 = ctx.r9.s64 + -4536;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832958A0) {
	__imp__sub_832958A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295900) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28640
	ctx.r5.s64 = ctx.r10.s64 + -28640;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21960
	ctx.r8.s64 = r11.s64 + -21960;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r10,-21776
	ctx.r4.s64 = ctx.r10.s64 + -21776;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29984
	ctx.r3.s64 = ctx.r10.s64 + -29984;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,52
	ctx.r6.s64 = 52;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295900) {
	__imp__sub_83295900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295970) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-29792
	ctx.r5.s64 = ctx.r10.s64 + -29792;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-21752
	ctx.r4.s64 = ctx.r10.s64 + -21752;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-29936
	ctx.r3.s64 = ctx.r10.s64 + -29936;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295970) {
	__imp__sub_83295970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832959D8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-21536
	ctx.r9.s64 = r11.s64 + -21536;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-21220
	ctx.r4.s64 = ctx.r10.s64 + -21220;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r6,304
	ctx.r6.s64 = 304;
	// addi r3,r10,-29888
	ctx.r3.s64 = ctx.r10.s64 + -29888;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832959D8) {
	__imp__sub_832959D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295A48) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21344
	ctx.r8.s64 = r11.s64 + -21344;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-21192
	ctx.r4.s64 = ctx.r10.s64 + -21192;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29840
	ctx.r3.s64 = ctx.r10.s64 + -29840;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,352
	ctx.r6.s64 = 352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295A48) {
	__imp__sub_83295A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295AB8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28192
	ctx.r5.s64 = ctx.r10.s64 + -28192;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-21168
	ctx.r4.s64 = ctx.r10.s64 + -21168;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-29792
	ctx.r3.s64 = ctx.r10.s64 + -29792;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295AB8) {
	__imp__sub_83295AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295B20) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21096
	ctx.r8.s64 = r11.s64 + -21096;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-21004
	ctx.r4.s64 = ctx.r10.s64 + -21004;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29744
	ctx.r3.s64 = ctx.r10.s64 + -29744;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295B20) {
	__imp__sub_83295B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295B90) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9c638
	sub_82D9C638(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-20640
	ctx.r10.s64 = r11.s64 + -20640;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29696
	r11.s64 = r11.s64 + -29696;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4136
	ctx.r10.s64 = ctx.r8.s64 + -4136;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4160
	ctx.r10.s64 = ctx.r9.s64 + -4160;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295B90) {
	__imp__sub_83295B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295BF0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-20832
	ctx.r8.s64 = r11.s64 + -20832;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r10,-20640
	ctx.r4.s64 = ctx.r10.s64 + -20640;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29680
	ctx.r3.s64 = ctx.r10.s64 + -29680;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295BF0) {
	__imp__sub_83295BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x82d7f080
	sub_82D7F080(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-20588
	ctx.r10.s64 = r11.s64 + -20588;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29632
	r11.s64 = r11.s64 + -29632;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4040
	ctx.r10.s64 = ctx.r8.s64 + -4040;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4064
	ctx.r10.s64 = ctx.r9.s64 + -4064;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295C60) {
	__imp__sub_83295C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295CC0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-27888
	ctx.r5.s64 = ctx.r10.s64 + -27888;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-20612
	ctx.r8.s64 = r11.s64 + -20612;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-20588
	ctx.r4.s64 = ctx.r10.s64 + -20588;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29616
	ctx.r3.s64 = ctx.r10.s64 + -29616;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,352
	ctx.r6.s64 = 352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295CC0) {
	__imp__sub_83295CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d76050
	sub_82D76050(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-30464
	ctx.r10.s64 = r11.s64 + -30464;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29568
	r11.s64 = r11.s64 + -29568;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-3760
	ctx.r10.s64 = ctx.r8.s64 + -3760;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-3736
	ctx.r10.s64 = ctx.r9.s64 + -3736;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295D30) {
	__imp__sub_83295D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295D90) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,-17980
	ctx.r9.s64 = ctx.r10.s64 + -17980;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r10,-30464
	ctx.r4.s64 = ctx.r10.s64 + -30464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r11,r11,-17936
	r11.s64 = r11.s64 + -17936;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29552
	ctx.r3.s64 = ctx.r10.s64 + -29552;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r6,784
	ctx.r6.s64 = 784;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295D90) {
	__imp__sub_83295D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-28704
	ctx.r10.s64 = ctx.r10.s64 + -28704;
	// lwz r11,-28728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-28728) );
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295E08) {
	__imp__sub_83295E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295E20) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-28704
	ctx.r8.s64 = r11.s64 + -28704;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-16080
	ctx.r9.s64 = ctx.r10.s64 + -16080;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,-16040
	ctx.r4.s64 = ctx.r10.s64 + -16040;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-29504
	ctx.r3.s64 = r11.s64 + -29504;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295E20) {
	__imp__sub_83295E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7f908
	sub_82D7F908(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-14736
	ctx.r10.s64 = r11.s64 + -14736;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29456
	r11.s64 = r11.s64 + -29456;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-3592
	ctx.r10.s64 = ctx.r8.s64 + -3592;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-3568
	ctx.r10.s64 = ctx.r9.s64 + -3568;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295E98) {
	__imp__sub_83295E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r10,-28524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-28524) );
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r11,r11,-28520
	r11.s64 = r11.s64 + -28520;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-28528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-28528) );
	// stw r10,320(r11)
	PPC_STORE_U32(r11.u32 + 320, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-28532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-28532) );
	// stw r10,824(r11)
	PPC_STORE_U32(r11.u32 + 824, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295EF8) {
	__imp__sub_83295EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295F28) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r11,-15072
	ctx.r9.s64 = r11.s64 + -15072;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,80
	ctx.r7.s64 = ctx.r9.s64 + 80;
	// li r6,39
	ctx.r6.s64 = 39;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r4,r10,-14736
	ctx.r4.s64 = ctx.r10.s64 + -14736;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-28520
	r11.s64 = r11.s64 + -28520;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29440
	ctx.r3.s64 = ctx.r10.s64 + -29440;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295F28) {
	__imp__sub_83295F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83295FA0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28192
	ctx.r5.s64 = ctx.r10.s64 + -28192;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-14264
	ctx.r4.s64 = ctx.r10.s64 + -14264;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-29392
	ctx.r3.s64 = ctx.r10.s64 + -29392;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83295FA0) {
	__imp__sub_83295FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296008) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-29248
	ctx.r5.s64 = ctx.r10.s64 + -29248;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-14220
	ctx.r8.s64 = r11.s64 + -14220;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-14108
	ctx.r4.s64 = ctx.r10.s64 + -14108;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29344
	ctx.r3.s64 = ctx.r10.s64 + -29344;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296008) {
	__imp__sub_83296008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296078) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-14060
	ctx.r8.s64 = r11.s64 + -14060;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-14000
	ctx.r4.s64 = ctx.r10.s64 + -14000;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29296
	ctx.r3.s64 = ctx.r10.s64 + -29296;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296078) {
	__imp__sub_83296078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832960E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-27352
	ctx.r10.s64 = ctx.r10.s64 + -27352;
	// lwz r11,-27384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-27384) );
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832960E8) {
	__imp__sub_832960E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296100) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-27352
	ctx.r8.s64 = r11.s64 + -27352;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-13568
	ctx.r9.s64 = ctx.r10.s64 + -13568;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,-13488
	ctx.r4.s64 = ctx.r10.s64 + -13488;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-29248
	ctx.r3.s64 = r11.s64 + -29248;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296100) {
	__imp__sub_83296100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296178) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-12816
	ctx.r7.s64 = r11.s64 + -12816;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-12120
	ctx.r4.s64 = ctx.r10.s64 + -12120;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-29200
	ctx.r3.s64 = ctx.r10.s64 + -29200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296178) {
	__imp__sub_83296178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832961E8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-12744
	ctx.r7.s64 = r11.s64 + -12744;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-12076
	ctx.r4.s64 = ctx.r10.s64 + -12076;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-29152
	ctx.r3.s64 = ctx.r10.s64 + -29152;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832961E8) {
	__imp__sub_832961E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296258) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-12648
	ctx.r7.s64 = r11.s64 + -12648;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-12044
	ctx.r4.s64 = ctx.r10.s64 + -12044;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-29104
	ctx.r3.s64 = ctx.r10.s64 + -29104;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296258) {
	__imp__sub_83296258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832962C8) {
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
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-12016
	ctx.r10.s64 = r11.s64 + -12016;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29056
	r11.s64 = r11.s64 + -29056;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-2864
	ctx.r10.s64 = ctx.r8.s64 + -2864;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-2888
	ctx.r10.s64 = ctx.r9.s64 + -2888;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832962C8) {
	__imp__sub_832962C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296328) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,-12840
	ctx.r9.s64 = r11.s64 + -12840;
	// addi r5,r10,-27792
	ctx.r5.s64 = ctx.r10.s64 + -27792;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,648
	ctx.r7.s64 = ctx.r9.s64 + 648;
	// li r6,17
	ctx.r6.s64 = 17;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r10,-12016
	ctx.r4.s64 = ctx.r10.s64 + -12016;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-12600
	r11.s64 = r11.s64 + -12600;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-29040
	ctx.r3.s64 = ctx.r10.s64 + -29040;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296328) {
	__imp__sub_83296328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832963A0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-27936
	ctx.r5.s64 = ctx.r10.s64 + -27936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-11976
	ctx.r4.s64 = ctx.r10.s64 + -11976;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28992
	ctx.r3.s64 = ctx.r10.s64 + -28992;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832963A0) {
	__imp__sub_832963A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296408) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11928
	ctx.r8.s64 = r11.s64 + -11928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-11904
	ctx.r4.s64 = ctx.r10.s64 + -11904;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28944
	ctx.r3.s64 = ctx.r10.s64 + -28944;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296408) {
	__imp__sub_83296408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296478) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28592
	ctx.r5.s64 = ctx.r10.s64 + -28592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-11872
	ctx.r4.s64 = ctx.r10.s64 + -11872;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28896
	ctx.r3.s64 = ctx.r10.s64 + -28896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296478) {
	__imp__sub_83296478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832964E0) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11840
	ctx.r8.s64 = r11.s64 + -11840;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-11744
	ctx.r4.s64 = ctx.r10.s64 + -11744;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28848
	ctx.r3.s64 = ctx.r10.s64 + -28848;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832964E0) {
	__imp__sub_832964E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d812f0
	sub_82D812F0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-11648
	ctx.r10.s64 = r11.s64 + -11648;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-28800
	r11.s64 = r11.s64 + -28800;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-1696
	ctx.r10.s64 = ctx.r8.s64 + -1696;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-1720
	ctx.r10.s64 = ctx.r9.s64 + -1720;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296550) {
	__imp__sub_83296550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832965B0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11696
	ctx.r8.s64 = r11.s64 + -11696;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-11648
	ctx.r4.s64 = ctx.r10.s64 + -11648;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28784
	ctx.r3.s64 = ctx.r10.s64 + -28784;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,88
	ctx.r6.s64 = 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832965B0) {
	__imp__sub_832965B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296620) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11620
	ctx.r8.s64 = r11.s64 + -11620;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-11596
	ctx.r4.s64 = ctx.r10.s64 + -11596;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28736
	ctx.r3.s64 = ctx.r10.s64 + -28736;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296620) {
	__imp__sub_83296620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296690) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11564
	ctx.r8.s64 = r11.s64 + -11564;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-11516
	ctx.r4.s64 = ctx.r10.s64 + -11516;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28688
	ctx.r3.s64 = ctx.r10.s64 + -28688;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296690) {
	__imp__sub_83296690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296700) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-11500
	ctx.r4.s64 = ctx.r10.s64 + -11500;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28640
	ctx.r3.s64 = ctx.r10.s64 + -28640;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296700) {
	__imp__sub_83296700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296768) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28192
	ctx.r5.s64 = ctx.r10.s64 + -28192;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-11476
	ctx.r4.s64 = ctx.r10.s64 + -11476;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28592
	ctx.r3.s64 = ctx.r10.s64 + -28592;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296768) {
	__imp__sub_83296768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832967D0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-28592
	ctx.r5.s64 = ctx.r10.s64 + -28592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-11452
	ctx.r4.s64 = ctx.r10.s64 + -11452;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28544
	ctx.r3.s64 = ctx.r10.s64 + -28544;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832967D0) {
	__imp__sub_832967D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296838) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r11,-10640
	ctx.r9.s64 = r11.s64 + -10640;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r10,-10596
	ctx.r4.s64 = ctx.r10.s64 + -10596;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r11,-28496
	ctx.r3.s64 = r11.s64 + -28496;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296838) {
	__imp__sub_83296838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832968A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-26940
	ctx.r10.s64 = ctx.r10.s64 + -26940;
	// lwz r11,-26944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-26944) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832968A8) {
	__imp__sub_832968A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832968C0) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26940
	ctx.r8.s64 = r11.s64 + -26940;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-10432
	ctx.r9.s64 = ctx.r10.s64 + -10432;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,-10412
	ctx.r4.s64 = ctx.r10.s64 + -10412;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-28448
	ctx.r3.s64 = r11.s64 + -28448;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832968C0) {
	__imp__sub_832968C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296938) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28096
	ctx.r5.s64 = ctx.r10.s64 + -28096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-10312
	ctx.r8.s64 = r11.s64 + -10312;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,-10140
	ctx.r4.s64 = ctx.r10.s64 + -10140;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28400
	ctx.r3.s64 = ctx.r10.s64 + -28400;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296938) {
	__imp__sub_83296938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832969A8) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10112
	ctx.r4.s64 = ctx.r10.s64 + -10112;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28352
	ctx.r3.s64 = ctx.r10.s64 + -28352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832969A8) {
	__imp__sub_832969A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296A10) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9e4f0
	sub_82D9E4F0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-10000
	ctx.r10.s64 = r11.s64 + -10000;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-28304
	r11.s64 = r11.s64 + -28304;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-1136
	ctx.r10.s64 = ctx.r8.s64 + -1136;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-1160
	ctx.r10.s64 = ctx.r9.s64 + -1160;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296A10) {
	__imp__sub_83296A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296A70) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-10072
	ctx.r8.s64 = r11.s64 + -10072;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-10000
	ctx.r4.s64 = ctx.r10.s64 + -10000;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28288
	ctx.r3.s64 = ctx.r10.s64 + -28288;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296A70) {
	__imp__sub_83296A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296AE0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28448
	ctx.r5.s64 = ctx.r10.s64 + -28448;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-9948
	ctx.r8.s64 = r11.s64 + -9948;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-9900
	ctx.r4.s64 = ctx.r10.s64 + -9900;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28240
	ctx.r3.s64 = ctx.r10.s64 + -28240;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296AE0) {
	__imp__sub_83296AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-26816
	ctx.r10.s64 = ctx.r10.s64 + -26816;
	// lwz r11,-26824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-26824) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296B50) {
	__imp__sub_83296B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296B68) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26816
	ctx.r8.s64 = r11.s64 + -26816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-9536
	ctx.r9.s64 = ctx.r10.s64 + -9536;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-28192
	ctx.r3.s64 = r11.s64 + -28192;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296B68) {
	__imp__sub_83296B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296BE0) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r10,-9296
	ctx.r8.s64 = ctx.r10.s64 + -9296;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9072
	ctx.r4.s64 = ctx.r10.s64 + -9072;
	// addi r11,r11,-9128
	r11.s64 = r11.s64 + -9128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28144
	ctx.r3.s64 = ctx.r10.s64 + -28144;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296BE0) {
	__imp__sub_83296BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296C58) {
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
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-9052
	ctx.r4.s64 = ctx.r10.s64 + -9052;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r10,-28096
	ctx.r3.s64 = ctx.r10.s64 + -28096;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296C58) {
	__imp__sub_83296C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-8736
	r11.s64 = r11.s64 + -8736;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82d9e708
	sub_82D9E708(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-8688
	ctx.r10.s64 = r11.s64 + -8688;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-28048
	r11.s64 = r11.s64 + -28048;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-864
	ctx.r10.s64 = ctx.r8.s64 + -864;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-888
	ctx.r10.s64 = ctx.r9.s64 + -888;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296CC0) {
	__imp__sub_83296CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// lwz r11,-26504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-26504) );
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296D30) {
	__imp__sub_83296D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296D48) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26496
	ctx.r8.s64 = r11.s64 + -26496;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8760
	ctx.r9.s64 = ctx.r10.s64 + -8760;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,-8688
	ctx.r4.s64 = ctx.r10.s64 + -8688;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-28032
	ctx.r3.s64 = r11.s64 + -28032;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296D48) {
	__imp__sub_83296D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296DC0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-27792
	ctx.r5.s64 = ctx.r10.s64 + -27792;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8620
	ctx.r8.s64 = r11.s64 + -8620;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-8572
	ctx.r4.s64 = ctx.r10.s64 + -8572;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27984
	ctx.r3.s64 = ctx.r10.s64 + -27984;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,152
	ctx.r6.s64 = 152;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296DC0) {
	__imp__sub_83296DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296E30) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8432
	ctx.r9.s64 = ctx.r10.s64 + -8432;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-28352
	ctx.r5.s64 = ctx.r10.s64 + -28352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r10,-8412
	ctx.r4.s64 = ctx.r10.s64 + -8412;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r10,-27936
	ctx.r3.s64 = ctx.r10.s64 + -27936;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296E30) {
	__imp__sub_83296E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296E98) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-27984
	ctx.r5.s64 = ctx.r10.s64 + -27984;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8388
	ctx.r8.s64 = r11.s64 + -8388;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-8364
	ctx.r4.s64 = ctx.r10.s64 + -8364;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27888
	ctx.r3.s64 = ctx.r10.s64 + -27888;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,336
	ctx.r6.s64 = 336;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296E98) {
	__imp__sub_83296E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296F08) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8348
	ctx.r8.s64 = r11.s64 + -8348;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27840
	ctx.r3.s64 = ctx.r10.s64 + -27840;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296F08) {
	__imp__sub_83296F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296F78) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8056
	ctx.r8.s64 = r11.s64 + -8056;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8076
	ctx.r9.s64 = ctx.r10.s64 + -8076;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r10,-7912
	ctx.r4.s64 = ctx.r10.s64 + -7912;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-27792
	ctx.r3.s64 = r11.s64 + -27792;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82d4f620
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296F78) {
	__imp__sub_83296F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83296FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-24548
	ctx.r10.s64 = ctx.r10.s64 + -24548;
	// lwz r11,-25024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-25024) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83296FF0) {
	__imp__sub_83296FF0(ctx, base);
}

