#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8327E650) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20892
	ctx.r4.s64 = r11.s64 + -20892;
	// addi r3,r10,-7192
	ctx.r3.s64 = ctx.r10.s64 + -7192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22840
	ctx.r3.s64 = ctx.r9.s64 + -22840;
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

PPC_WEAK_FUNC(sub_8327E650) {
	__imp__sub_8327E650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E690) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20872
	ctx.r4.s64 = r11.s64 + -20872;
	// addi r3,r10,-7188
	ctx.r3.s64 = ctx.r10.s64 + -7188;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22824
	ctx.r3.s64 = ctx.r9.s64 + -22824;
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

PPC_WEAK_FUNC(sub_8327E690) {
	__imp__sub_8327E690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E6D0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20852
	ctx.r4.s64 = r11.s64 + -20852;
	// addi r3,r10,-7184
	ctx.r3.s64 = ctx.r10.s64 + -7184;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22808
	ctx.r3.s64 = ctx.r9.s64 + -22808;
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

PPC_WEAK_FUNC(sub_8327E6D0) {
	__imp__sub_8327E6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E710) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20972
	ctx.r4.s64 = r11.s64 + -20972;
	// addi r3,r10,-7180
	ctx.r3.s64 = ctx.r10.s64 + -7180;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22792
	ctx.r3.s64 = ctx.r9.s64 + -22792;
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

PPC_WEAK_FUNC(sub_8327E710) {
	__imp__sub_8327E710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E750) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20964
	ctx.r4.s64 = r11.s64 + -20964;
	// addi r3,r10,-7176
	ctx.r3.s64 = ctx.r10.s64 + -7176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22776
	ctx.r3.s64 = ctx.r9.s64 + -22776;
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

PPC_WEAK_FUNC(sub_8327E750) {
	__imp__sub_8327E750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E790) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20944
	ctx.r4.s64 = r11.s64 + -20944;
	// addi r3,r10,-7172
	ctx.r3.s64 = ctx.r10.s64 + -7172;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22760
	ctx.r3.s64 = ctx.r9.s64 + -22760;
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

PPC_WEAK_FUNC(sub_8327E790) {
	__imp__sub_8327E790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E7D0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-20924
	ctx.r4.s64 = r11.s64 + -20924;
	// addi r3,r10,-7168
	ctx.r3.s64 = ctx.r10.s64 + -7168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22744
	ctx.r3.s64 = ctx.r9.s64 + -22744;
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

PPC_WEAK_FUNC(sub_8327E7D0) {
	__imp__sub_8327E7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E810) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21056
	ctx.r4.s64 = r11.s64 + -21056;
	// addi r3,r10,-7164
	ctx.r3.s64 = ctx.r10.s64 + -7164;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22728
	ctx.r3.s64 = ctx.r9.s64 + -22728;
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

PPC_WEAK_FUNC(sub_8327E810) {
	__imp__sub_8327E810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E850) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21048
	ctx.r4.s64 = r11.s64 + -21048;
	// addi r3,r10,-7160
	ctx.r3.s64 = ctx.r10.s64 + -7160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22712
	ctx.r3.s64 = ctx.r9.s64 + -22712;
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

PPC_WEAK_FUNC(sub_8327E850) {
	__imp__sub_8327E850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E890) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21028
	ctx.r4.s64 = r11.s64 + -21028;
	// addi r3,r10,-7156
	ctx.r3.s64 = ctx.r10.s64 + -7156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22696
	ctx.r3.s64 = ctx.r9.s64 + -22696;
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

PPC_WEAK_FUNC(sub_8327E890) {
	__imp__sub_8327E890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E8D0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21008
	ctx.r4.s64 = r11.s64 + -21008;
	// addi r3,r10,-7152
	ctx.r3.s64 = ctx.r10.s64 + -7152;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22680
	ctx.r3.s64 = ctx.r9.s64 + -22680;
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

PPC_WEAK_FUNC(sub_8327E8D0) {
	__imp__sub_8327E8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E910) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21140
	ctx.r4.s64 = r11.s64 + -21140;
	// addi r3,r10,-7148
	ctx.r3.s64 = ctx.r10.s64 + -7148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22664
	ctx.r3.s64 = ctx.r9.s64 + -22664;
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

PPC_WEAK_FUNC(sub_8327E910) {
	__imp__sub_8327E910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E950) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21132
	ctx.r4.s64 = r11.s64 + -21132;
	// addi r3,r10,-7144
	ctx.r3.s64 = ctx.r10.s64 + -7144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22648
	ctx.r3.s64 = ctx.r9.s64 + -22648;
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

PPC_WEAK_FUNC(sub_8327E950) {
	__imp__sub_8327E950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E990) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21112
	ctx.r4.s64 = r11.s64 + -21112;
	// addi r3,r10,-7140
	ctx.r3.s64 = ctx.r10.s64 + -7140;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22632
	ctx.r3.s64 = ctx.r9.s64 + -22632;
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

PPC_WEAK_FUNC(sub_8327E990) {
	__imp__sub_8327E990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327E9D0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21092
	ctx.r4.s64 = r11.s64 + -21092;
	// addi r3,r10,-7136
	ctx.r3.s64 = ctx.r10.s64 + -7136;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22616
	ctx.r3.s64 = ctx.r9.s64 + -22616;
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

PPC_WEAK_FUNC(sub_8327E9D0) {
	__imp__sub_8327E9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EA10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21248
	ctx.r4.s64 = r11.s64 + -21248;
	// addi r3,r10,-7132
	ctx.r3.s64 = ctx.r10.s64 + -7132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22600
	ctx.r3.s64 = ctx.r9.s64 + -22600;
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

PPC_WEAK_FUNC(sub_8327EA10) {
	__imp__sub_8327EA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EA50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21224
	ctx.r4.s64 = r11.s64 + -21224;
	// addi r3,r10,-7128
	ctx.r3.s64 = ctx.r10.s64 + -7128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22584
	ctx.r3.s64 = ctx.r9.s64 + -22584;
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

PPC_WEAK_FUNC(sub_8327EA50) {
	__imp__sub_8327EA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EA90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21208
	ctx.r4.s64 = r11.s64 + -21208;
	// addi r3,r10,-7124
	ctx.r3.s64 = ctx.r10.s64 + -7124;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22568
	ctx.r3.s64 = ctx.r9.s64 + -22568;
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

PPC_WEAK_FUNC(sub_8327EA90) {
	__imp__sub_8327EA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EAD0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21204
	ctx.r4.s64 = r11.s64 + -21204;
	// addi r3,r10,-7120
	ctx.r3.s64 = ctx.r10.s64 + -7120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22552
	ctx.r3.s64 = ctx.r9.s64 + -22552;
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

PPC_WEAK_FUNC(sub_8327EAD0) {
	__imp__sub_8327EAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EB10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21184
	ctx.r4.s64 = r11.s64 + -21184;
	// addi r3,r10,-7116
	ctx.r3.s64 = ctx.r10.s64 + -7116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22536
	ctx.r3.s64 = ctx.r9.s64 + -22536;
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

PPC_WEAK_FUNC(sub_8327EB10) {
	__imp__sub_8327EB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EB50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21168
	ctx.r4.s64 = r11.s64 + -21168;
	// addi r3,r10,-7112
	ctx.r3.s64 = ctx.r10.s64 + -7112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22520
	ctx.r3.s64 = ctx.r9.s64 + -22520;
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

PPC_WEAK_FUNC(sub_8327EB50) {
	__imp__sub_8327EB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EB90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21748
	ctx.r4.s64 = r11.s64 + -21748;
	// addi r3,r10,-7108
	ctx.r3.s64 = ctx.r10.s64 + -7108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22504
	ctx.r3.s64 = ctx.r9.s64 + -22504;
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

PPC_WEAK_FUNC(sub_8327EB90) {
	__imp__sub_8327EB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EBD0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21740
	ctx.r4.s64 = r11.s64 + -21740;
	// addi r3,r10,-7104
	ctx.r3.s64 = ctx.r10.s64 + -7104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22488
	ctx.r3.s64 = ctx.r9.s64 + -22488;
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

PPC_WEAK_FUNC(sub_8327EBD0) {
	__imp__sub_8327EBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EC10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21720
	ctx.r4.s64 = r11.s64 + -21720;
	// addi r3,r10,-7100
	ctx.r3.s64 = ctx.r10.s64 + -7100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22472
	ctx.r3.s64 = ctx.r9.s64 + -22472;
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

PPC_WEAK_FUNC(sub_8327EC10) {
	__imp__sub_8327EC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EC50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21700
	ctx.r4.s64 = r11.s64 + -21700;
	// addi r3,r10,-7096
	ctx.r3.s64 = ctx.r10.s64 + -7096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22456
	ctx.r3.s64 = ctx.r9.s64 + -22456;
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

PPC_WEAK_FUNC(sub_8327EC50) {
	__imp__sub_8327EC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EC90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21664
	ctx.r4.s64 = r11.s64 + -21664;
	// addi r3,r10,-7092
	ctx.r3.s64 = ctx.r10.s64 + -7092;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22440
	ctx.r3.s64 = ctx.r9.s64 + -22440;
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

PPC_WEAK_FUNC(sub_8327EC90) {
	__imp__sub_8327EC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327ECD0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21656
	ctx.r4.s64 = r11.s64 + -21656;
	// addi r3,r10,-7088
	ctx.r3.s64 = ctx.r10.s64 + -7088;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22424
	ctx.r3.s64 = ctx.r9.s64 + -22424;
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

PPC_WEAK_FUNC(sub_8327ECD0) {
	__imp__sub_8327ECD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327ED10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21624
	ctx.r4.s64 = r11.s64 + -21624;
	// addi r3,r10,-7084
	ctx.r3.s64 = ctx.r10.s64 + -7084;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22408
	ctx.r3.s64 = ctx.r9.s64 + -22408;
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

PPC_WEAK_FUNC(sub_8327ED10) {
	__imp__sub_8327ED10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327ED50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21592
	ctx.r4.s64 = r11.s64 + -21592;
	// addi r3,r10,-7080
	ctx.r3.s64 = ctx.r10.s64 + -7080;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22392
	ctx.r3.s64 = ctx.r9.s64 + -22392;
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

PPC_WEAK_FUNC(sub_8327ED50) {
	__imp__sub_8327ED50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327ED90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21584
	ctx.r4.s64 = r11.s64 + -21584;
	// addi r3,r10,-7076
	ctx.r3.s64 = ctx.r10.s64 + -7076;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22376
	ctx.r3.s64 = ctx.r9.s64 + -22376;
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

PPC_WEAK_FUNC(sub_8327ED90) {
	__imp__sub_8327ED90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EDD0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21576
	ctx.r4.s64 = r11.s64 + -21576;
	// addi r3,r10,-7072
	ctx.r3.s64 = ctx.r10.s64 + -7072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22360
	ctx.r3.s64 = ctx.r9.s64 + -22360;
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

PPC_WEAK_FUNC(sub_8327EDD0) {
	__imp__sub_8327EDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EE10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21560
	ctx.r4.s64 = r11.s64 + -21560;
	// addi r3,r10,-7068
	ctx.r3.s64 = ctx.r10.s64 + -7068;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22344
	ctx.r3.s64 = ctx.r9.s64 + -22344;
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

PPC_WEAK_FUNC(sub_8327EE10) {
	__imp__sub_8327EE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EE50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21532
	ctx.r4.s64 = r11.s64 + -21532;
	// addi r3,r10,-7064
	ctx.r3.s64 = ctx.r10.s64 + -7064;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22328
	ctx.r3.s64 = ctx.r9.s64 + -22328;
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

PPC_WEAK_FUNC(sub_8327EE50) {
	__imp__sub_8327EE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EE90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21520
	ctx.r4.s64 = r11.s64 + -21520;
	// addi r3,r10,-7060
	ctx.r3.s64 = ctx.r10.s64 + -7060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22312
	ctx.r3.s64 = ctx.r9.s64 + -22312;
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

PPC_WEAK_FUNC(sub_8327EE90) {
	__imp__sub_8327EE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EED0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21508
	ctx.r4.s64 = r11.s64 + -21508;
	// addi r3,r10,-7056
	ctx.r3.s64 = ctx.r10.s64 + -7056;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22296
	ctx.r3.s64 = ctx.r9.s64 + -22296;
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

PPC_WEAK_FUNC(sub_8327EED0) {
	__imp__sub_8327EED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EF10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21500
	ctx.r4.s64 = r11.s64 + -21500;
	// addi r3,r10,-7052
	ctx.r3.s64 = ctx.r10.s64 + -7052;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22280
	ctx.r3.s64 = ctx.r9.s64 + -22280;
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

PPC_WEAK_FUNC(sub_8327EF10) {
	__imp__sub_8327EF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EF50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21488
	ctx.r4.s64 = r11.s64 + -21488;
	// addi r3,r10,-7048
	ctx.r3.s64 = ctx.r10.s64 + -7048;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22264
	ctx.r3.s64 = ctx.r9.s64 + -22264;
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

PPC_WEAK_FUNC(sub_8327EF50) {
	__imp__sub_8327EF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EF90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21472
	ctx.r4.s64 = r11.s64 + -21472;
	// addi r3,r10,-7044
	ctx.r3.s64 = ctx.r10.s64 + -7044;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-22248
	ctx.r3.s64 = ctx.r9.s64 + -22248;
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

PPC_WEAK_FUNC(sub_8327EF90) {
	__imp__sub_8327EF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327EFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r7,r1,-88
	ctx.r7.s64 = ctx.r1.s64 + -88;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r6,r1,-84
	ctx.r6.s64 = ctx.r1.s64 + -84;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// lfs f13,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r1,-64
	r30.s64 = ctx.r1.s64 + -64;
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// addi r29,r1,-60
	r29.s64 = ctx.r1.s64 + -60;
	// stfs f0,-88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stfs f0,-84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// addi r9,r1,-72
	ctx.r9.s64 = ctx.r1.s64 + -72;
	// lvlx v13,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r7,r1,-60
	ctx.r7.s64 = ctx.r1.s64 + -60;
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r31,r1,-68
	r31.s64 = ctx.r1.s64 + -68;
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r4,r1,-76
	ctx.r4.s64 = ctx.r1.s64 + -76;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r3,r1,-76
	ctx.r3.s64 = ctx.r1.s64 + -76;
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// lvlx v4,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v4,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvlx v3,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v3,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r28,32
	r28.s64 = 32;
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r27,48
	r27.s64 = 48;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vrlimi128 v12,v0,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v10,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v13,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v13.f32))));
	// lvlx v31,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v31,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v3,v4,4,3
	simd::store_f32(ctx.v3.f32, simd::blend_f32<4>(simd::load_f32(ctx.v3.f32), simd::permute_f32<57>(simd::load_f32(ctx.v4.f32))));
	// lvlx v30,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(v30,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// stfs f0,-72(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f13,-68(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// addi r5,r5,-7040
	ctx.r5.s64 = ctx.r5.s64 + -7040;
	// stfs f0,-96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// vrlimi128 v12,v3,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(ctx.v3.f32))));
	// stfs f0,-92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvlx v6,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v5,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v5,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v2,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v2,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v1,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v1,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-76(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v9,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f0,-76(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vrlimi128 v30,v31,4,3
	simd::store_f32(v30.f32, simd::blend_f32<4>(simd::load_f32(v30.f32), simd::permute_f32<57>(simd::load_f32(v31.f32))));
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// vrlimi128 v9,v10,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(ctx.v10.f32))));
	// lvlx v8,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v7,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v7,v8,4,3
	simd::store_f32(ctx.v7.f32, simd::blend_f32<4>(simd::load_f32(ctx.v7.f32), simd::permute_f32<57>(simd::load_f32(ctx.v8.f32))));
	// vor v13,v30,v30
	simd::store_i8(ctx.v13.u8, simd::load_i8(v30.u8));
	// stvx128 v12,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// vor v0,v9,v9
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v9.u8));
	// vrlimi128 v5,v6,4,3
	simd::store_f32(ctx.v5.f32, simd::blend_f32<4>(simd::load_f32(ctx.v5.f32), simd::permute_f32<57>(simd::load_f32(ctx.v6.f32))));
	// vrlimi128 v1,v2,4,3
	simd::store_f32(ctx.v1.f32, simd::blend_f32<4>(simd::load_f32(ctx.v1.f32), simd::permute_f32<57>(simd::load_f32(ctx.v2.f32))));
	// vrlimi128 v0,v7,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v7.f32))));
	// vrlimi128 v13,v5,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(ctx.v5.f32))));
	// vrlimi128 v11,v1,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v1.f32))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8327EFD0) {
	__imp__sub_8327EFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F108) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21852
	ctx.r4.s64 = r11.s64 + -21852;
	// addi r3,r10,-6976
	ctx.r3.s64 = ctx.r10.s64 + -6976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21968
	ctx.r3.s64 = ctx.r9.s64 + -21968;
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

PPC_WEAK_FUNC(sub_8327F108) {
	__imp__sub_8327F108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F148) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21844
	ctx.r4.s64 = r11.s64 + -21844;
	// addi r3,r10,-6972
	ctx.r3.s64 = ctx.r10.s64 + -6972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21952
	ctx.r3.s64 = ctx.r9.s64 + -21952;
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

PPC_WEAK_FUNC(sub_8327F148) {
	__imp__sub_8327F148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F188) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21824
	ctx.r4.s64 = r11.s64 + -21824;
	// addi r3,r10,-6968
	ctx.r3.s64 = ctx.r10.s64 + -6968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21936
	ctx.r3.s64 = ctx.r9.s64 + -21936;
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

PPC_WEAK_FUNC(sub_8327F188) {
	__imp__sub_8327F188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F1C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21804
	ctx.r4.s64 = r11.s64 + -21804;
	// addi r3,r10,-6964
	ctx.r3.s64 = ctx.r10.s64 + -6964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21920
	ctx.r3.s64 = ctx.r9.s64 + -21920;
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

PPC_WEAK_FUNC(sub_8327F1C8) {
	__imp__sub_8327F1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F208) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21784
	ctx.r4.s64 = r11.s64 + -21784;
	// addi r3,r10,-6960
	ctx.r3.s64 = ctx.r10.s64 + -6960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21904
	ctx.r3.s64 = ctx.r9.s64 + -21904;
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

PPC_WEAK_FUNC(sub_8327F208) {
	__imp__sub_8327F208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F248) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21768
	ctx.r4.s64 = r11.s64 + -21768;
	// addi r3,r10,-6956
	ctx.r3.s64 = ctx.r10.s64 + -6956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21888
	ctx.r3.s64 = ctx.r9.s64 + -21888;
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

PPC_WEAK_FUNC(sub_8327F248) {
	__imp__sub_8327F248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F288) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21952
	ctx.r4.s64 = r11.s64 + -21952;
	// addi r3,r10,-6952
	ctx.r3.s64 = ctx.r10.s64 + -6952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21872
	ctx.r3.s64 = ctx.r9.s64 + -21872;
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

PPC_WEAK_FUNC(sub_8327F288) {
	__imp__sub_8327F288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F2C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21944
	ctx.r4.s64 = r11.s64 + -21944;
	// addi r3,r10,-6948
	ctx.r3.s64 = ctx.r10.s64 + -6948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21856
	ctx.r3.s64 = ctx.r9.s64 + -21856;
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

PPC_WEAK_FUNC(sub_8327F2C8) {
	__imp__sub_8327F2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F308) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21924
	ctx.r4.s64 = r11.s64 + -21924;
	// addi r3,r10,-6944
	ctx.r3.s64 = ctx.r10.s64 + -6944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21840
	ctx.r3.s64 = ctx.r9.s64 + -21840;
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

PPC_WEAK_FUNC(sub_8327F308) {
	__imp__sub_8327F308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F348) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21904
	ctx.r4.s64 = r11.s64 + -21904;
	// addi r3,r10,-6940
	ctx.r3.s64 = ctx.r10.s64 + -6940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21824
	ctx.r3.s64 = ctx.r9.s64 + -21824;
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

PPC_WEAK_FUNC(sub_8327F348) {
	__imp__sub_8327F348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F388) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21884
	ctx.r4.s64 = r11.s64 + -21884;
	// addi r3,r10,-6936
	ctx.r3.s64 = ctx.r10.s64 + -6936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21808
	ctx.r3.s64 = ctx.r9.s64 + -21808;
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

PPC_WEAK_FUNC(sub_8327F388) {
	__imp__sub_8327F388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F3C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21872
	ctx.r4.s64 = r11.s64 + -21872;
	// addi r3,r10,-6932
	ctx.r3.s64 = ctx.r10.s64 + -6932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21792
	ctx.r3.s64 = ctx.r9.s64 + -21792;
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

PPC_WEAK_FUNC(sub_8327F3C8) {
	__imp__sub_8327F3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F408) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22068
	ctx.r4.s64 = r11.s64 + -22068;
	// addi r3,r10,-6928
	ctx.r3.s64 = ctx.r10.s64 + -6928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21776
	ctx.r3.s64 = ctx.r9.s64 + -21776;
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

PPC_WEAK_FUNC(sub_8327F408) {
	__imp__sub_8327F408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F448) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22060
	ctx.r4.s64 = r11.s64 + -22060;
	// addi r3,r10,-6924
	ctx.r3.s64 = ctx.r10.s64 + -6924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21760
	ctx.r3.s64 = ctx.r9.s64 + -21760;
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

PPC_WEAK_FUNC(sub_8327F448) {
	__imp__sub_8327F448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F488) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22040
	ctx.r4.s64 = r11.s64 + -22040;
	// addi r3,r10,-6920
	ctx.r3.s64 = ctx.r10.s64 + -6920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21744
	ctx.r3.s64 = ctx.r9.s64 + -21744;
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

PPC_WEAK_FUNC(sub_8327F488) {
	__imp__sub_8327F488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F4C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22020
	ctx.r4.s64 = r11.s64 + -22020;
	// addi r3,r10,-6916
	ctx.r3.s64 = ctx.r10.s64 + -6916;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21728
	ctx.r3.s64 = ctx.r9.s64 + -21728;
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

PPC_WEAK_FUNC(sub_8327F4C8) {
	__imp__sub_8327F4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F508) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22000
	ctx.r4.s64 = r11.s64 + -22000;
	// addi r3,r10,-6912
	ctx.r3.s64 = ctx.r10.s64 + -6912;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21712
	ctx.r3.s64 = ctx.r9.s64 + -21712;
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

PPC_WEAK_FUNC(sub_8327F508) {
	__imp__sub_8327F508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F548) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21988
	ctx.r4.s64 = r11.s64 + -21988;
	// addi r3,r10,-6908
	ctx.r3.s64 = ctx.r10.s64 + -6908;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21696
	ctx.r3.s64 = ctx.r9.s64 + -21696;
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

PPC_WEAK_FUNC(sub_8327F548) {
	__imp__sub_8327F548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F588) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21972
	ctx.r4.s64 = r11.s64 + -21972;
	// addi r3,r10,-6904
	ctx.r3.s64 = ctx.r10.s64 + -6904;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21680
	ctx.r3.s64 = ctx.r9.s64 + -21680;
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

PPC_WEAK_FUNC(sub_8327F588) {
	__imp__sub_8327F588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F5C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22140
	ctx.r4.s64 = r11.s64 + -22140;
	// addi r3,r10,-6900
	ctx.r3.s64 = ctx.r10.s64 + -6900;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21664
	ctx.r3.s64 = ctx.r9.s64 + -21664;
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

PPC_WEAK_FUNC(sub_8327F5C8) {
	__imp__sub_8327F5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F608) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22132
	ctx.r4.s64 = r11.s64 + -22132;
	// addi r3,r10,-6896
	ctx.r3.s64 = ctx.r10.s64 + -6896;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21648
	ctx.r3.s64 = ctx.r9.s64 + -21648;
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

PPC_WEAK_FUNC(sub_8327F608) {
	__imp__sub_8327F608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F648) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22112
	ctx.r4.s64 = r11.s64 + -22112;
	// addi r3,r10,-6892
	ctx.r3.s64 = ctx.r10.s64 + -6892;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21632
	ctx.r3.s64 = ctx.r9.s64 + -21632;
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

PPC_WEAK_FUNC(sub_8327F648) {
	__imp__sub_8327F648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F688) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22092
	ctx.r4.s64 = r11.s64 + -22092;
	// addi r3,r10,-6888
	ctx.r3.s64 = ctx.r10.s64 + -6888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21616
	ctx.r3.s64 = ctx.r9.s64 + -21616;
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

PPC_WEAK_FUNC(sub_8327F688) {
	__imp__sub_8327F688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F6C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22244
	ctx.r4.s64 = r11.s64 + -22244;
	// addi r3,r10,-6884
	ctx.r3.s64 = ctx.r10.s64 + -6884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21600
	ctx.r3.s64 = ctx.r9.s64 + -21600;
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

PPC_WEAK_FUNC(sub_8327F6C8) {
	__imp__sub_8327F6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F708) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22236
	ctx.r4.s64 = r11.s64 + -22236;
	// addi r3,r10,-6880
	ctx.r3.s64 = ctx.r10.s64 + -6880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21584
	ctx.r3.s64 = ctx.r9.s64 + -21584;
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

PPC_WEAK_FUNC(sub_8327F708) {
	__imp__sub_8327F708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F748) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22216
	ctx.r4.s64 = r11.s64 + -22216;
	// addi r3,r10,-6876
	ctx.r3.s64 = ctx.r10.s64 + -6876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21568
	ctx.r3.s64 = ctx.r9.s64 + -21568;
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

PPC_WEAK_FUNC(sub_8327F748) {
	__imp__sub_8327F748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F788) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22196
	ctx.r4.s64 = r11.s64 + -22196;
	// addi r3,r10,-6872
	ctx.r3.s64 = ctx.r10.s64 + -6872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21552
	ctx.r3.s64 = ctx.r9.s64 + -21552;
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

PPC_WEAK_FUNC(sub_8327F788) {
	__imp__sub_8327F788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F7C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22176
	ctx.r4.s64 = r11.s64 + -22176;
	// addi r3,r10,-6868
	ctx.r3.s64 = ctx.r10.s64 + -6868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21536
	ctx.r3.s64 = ctx.r9.s64 + -21536;
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

PPC_WEAK_FUNC(sub_8327F7C8) {
	__imp__sub_8327F7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F808) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22296
	ctx.r4.s64 = r11.s64 + -22296;
	// addi r3,r10,-6864
	ctx.r3.s64 = ctx.r10.s64 + -6864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21520
	ctx.r3.s64 = ctx.r9.s64 + -21520;
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

PPC_WEAK_FUNC(sub_8327F808) {
	__imp__sub_8327F808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F848) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22288
	ctx.r4.s64 = r11.s64 + -22288;
	// addi r3,r10,-6860
	ctx.r3.s64 = ctx.r10.s64 + -6860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21504
	ctx.r3.s64 = ctx.r9.s64 + -21504;
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

PPC_WEAK_FUNC(sub_8327F848) {
	__imp__sub_8327F848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F888) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22268
	ctx.r4.s64 = r11.s64 + -22268;
	// addi r3,r10,-6856
	ctx.r3.s64 = ctx.r10.s64 + -6856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21488
	ctx.r3.s64 = ctx.r9.s64 + -21488;
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

PPC_WEAK_FUNC(sub_8327F888) {
	__imp__sub_8327F888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F8C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22520
	ctx.r4.s64 = r11.s64 + -22520;
	// addi r3,r10,-6852
	ctx.r3.s64 = ctx.r10.s64 + -6852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21472
	ctx.r3.s64 = ctx.r9.s64 + -21472;
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

PPC_WEAK_FUNC(sub_8327F8C8) {
	__imp__sub_8327F8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F908) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22512
	ctx.r4.s64 = r11.s64 + -22512;
	// addi r3,r10,-6848
	ctx.r3.s64 = ctx.r10.s64 + -6848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21456
	ctx.r3.s64 = ctx.r9.s64 + -21456;
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

PPC_WEAK_FUNC(sub_8327F908) {
	__imp__sub_8327F908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F948) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22492
	ctx.r4.s64 = r11.s64 + -22492;
	// addi r3,r10,-6844
	ctx.r3.s64 = ctx.r10.s64 + -6844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21440
	ctx.r3.s64 = ctx.r9.s64 + -21440;
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

PPC_WEAK_FUNC(sub_8327F948) {
	__imp__sub_8327F948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327F988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r1,-92
	ctx.r8.s64 = ctx.r1.s64 + -92;
	// addi r9,r11,-8700
	ctx.r9.s64 = r11.s64 + -8700;
	// addi r7,r1,-88
	ctx.r7.s64 = ctx.r1.s64 + -88;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lfs f12,-8700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8700);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r1,-60
	r28.s64 = ctx.r1.s64 + -60;
	// stfs f12,-96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,-18768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18768);
	f0.f64 = double(temp.f32);
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stfs f0,-92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r6,r1,-84
	ctx.r6.s64 = ctx.r1.s64 + -84;
	// stfs f0,-88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// addi r31,r1,-72
	r31.s64 = ctx.r1.s64 + -72;
	// lvlx v13,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r8,r1,-60
	ctx.r8.s64 = ctx.r1.s64 + -60;
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r30,r1,-68
	r30.s64 = ctx.r1.s64 + -68;
	// stfs f0,-60(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r4,r1,-76
	ctx.r4.s64 = ctx.r1.s64 + -76;
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// lfs f13,-18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18756);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-84
	ctx.r9.s64 = ctx.r1.s64 + -84;
	// lvlx v3,0,r29
	temp.u32 = r0.u32 + r29.u32;
	simd::store_shuffled(ctx.v3,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r3,r1,-76
	ctx.r3.s64 = ctx.r1.s64 + -76;
	// lvlx v2,0,r28
	temp.u32 = r0.u32 + r28.u32;
	simd::store_shuffled(ctx.v2,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// li r27,48
	r27.s64 = 48;
	// stfs f0,-60(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vrlimi128 v12,v0,4,3
	simd::store_f32(ctx.v12.f32, simd::blend_f32<4>(simd::load_f32(ctx.v12.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v10,0,r5
	temp.u32 = r0.u32 + ctx.r5.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r5,16
	ctx.r5.s64 = 16;
	// lvlx v31,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(v31,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v30,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(v30,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f12,-84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvlx v11,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v13,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v13.f32))));
	// stfs f0,-84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// vrlimi128 v30,v31,4,3
	simd::store_f32(v30.f32, simd::blend_f32<4>(simd::load_f32(v30.f32), simd::permute_f32<57>(simd::load_f32(v31.f32))));
	// stfs f0,-72(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-68(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f0,-96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lvlx v6,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vor v13,v30,v30
	simd::store_i8(ctx.v13.u8, simd::load_i8(v30.u8));
	// lvlx v5,0,r31
	temp.u32 = r0.u32 + r31.u32;
	simd::store_shuffled(ctx.v5,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v4,0,r30
	temp.u32 = r0.u32 + r30.u32;
	simd::store_shuffled(ctx.v4,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v1,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v1,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stfs f0,-76(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v9,0,r4
	temp.u32 = r0.u32 + ctx.r4.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v9,v10,4,3
	simd::store_f32(ctx.v9.f32, simd::blend_f32<4>(simd::load_f32(ctx.v9.f32), simd::permute_f32<57>(simd::load_f32(ctx.v10.f32))));
	// stfs f0,-76(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vor v0,v9,v9
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v9.u8));
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// vrlimi128 v5,v6,4,3
	simd::store_f32(ctx.v5.f32, simd::blend_f32<4>(simd::load_f32(ctx.v5.f32), simd::permute_f32<57>(simd::load_f32(ctx.v6.f32))));
	// lvlx v8,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v8,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v3,v4,4,3
	simd::store_f32(ctx.v3.f32, simd::blend_f32<4>(simd::load_f32(ctx.v3.f32), simd::permute_f32<57>(simd::load_f32(ctx.v4.f32))));
	// lvlx v7,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v7,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v7,v8,4,3
	simd::store_f32(ctx.v7.f32, simd::blend_f32<4>(simd::load_f32(ctx.v7.f32), simd::permute_f32<57>(simd::load_f32(ctx.v8.f32))));
	// vrlimi128 v1,v2,4,3
	simd::store_f32(ctx.v1.f32, simd::blend_f32<4>(simd::load_f32(ctx.v1.f32), simd::permute_f32<57>(simd::load_f32(ctx.v2.f32))));
	// addi r4,r6,-6832
	ctx.r4.s64 = ctx.r6.s64 + -6832;
	// li r6,32
	ctx.r6.s64 = 32;
	// vrlimi128 v0,v7,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v7.f32))));
	// vrlimi128 v13,v5,3,2
	simd::store_f32(ctx.v13.f32, simd::blend_f32<3>(simd::load_f32(ctx.v13.f32), simd::permute_f32<78>(simd::load_f32(ctx.v5.f32))));
	// vrlimi128 v12,v3,3,2
	simd::store_f32(ctx.v12.f32, simd::blend_f32<3>(simd::load_f32(ctx.v12.f32), simd::permute_f32<78>(simd::load_f32(ctx.v3.f32))));
	// vrlimi128 v11,v1,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v1.f32))));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v13,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v12,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v11,r4,r27
	ea = (ctx.r4.u32 + r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_8327F988) {
	__imp__sub_8327F988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FAC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22472
	ctx.r4.s64 = r11.s64 + -22472;
	// addi r3,r10,-6840
	ctx.r3.s64 = ctx.r10.s64 + -6840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21424
	ctx.r3.s64 = ctx.r9.s64 + -21424;
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

PPC_WEAK_FUNC(sub_8327FAC8) {
	__imp__sub_8327FAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FB08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22440
	ctx.r4.s64 = r11.s64 + -22440;
	// addi r3,r10,-6836
	ctx.r3.s64 = ctx.r10.s64 + -6836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21408
	ctx.r3.s64 = ctx.r9.s64 + -21408;
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

PPC_WEAK_FUNC(sub_8327FB08) {
	__imp__sub_8327FB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FB48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22424
	ctx.r4.s64 = r11.s64 + -22424;
	// addi r3,r10,-6768
	ctx.r3.s64 = ctx.r10.s64 + -6768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21392
	ctx.r3.s64 = ctx.r9.s64 + -21392;
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

PPC_WEAK_FUNC(sub_8327FB48) {
	__imp__sub_8327FB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FB88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22392
	ctx.r4.s64 = r11.s64 + -22392;
	// addi r3,r10,-6764
	ctx.r3.s64 = ctx.r10.s64 + -6764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21376
	ctx.r3.s64 = ctx.r9.s64 + -21376;
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

PPC_WEAK_FUNC(sub_8327FB88) {
	__imp__sub_8327FB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FBC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22364
	ctx.r4.s64 = r11.s64 + -22364;
	// addi r3,r10,-6760
	ctx.r3.s64 = ctx.r10.s64 + -6760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21360
	ctx.r3.s64 = ctx.r9.s64 + -21360;
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

PPC_WEAK_FUNC(sub_8327FBC8) {
	__imp__sub_8327FBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FC08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22348
	ctx.r4.s64 = r11.s64 + -22348;
	// addi r3,r10,-6756
	ctx.r3.s64 = ctx.r10.s64 + -6756;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21344
	ctx.r3.s64 = ctx.r9.s64 + -21344;
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

PPC_WEAK_FUNC(sub_8327FC08) {
	__imp__sub_8327FC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FC48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22332
	ctx.r4.s64 = r11.s64 + -22332;
	// addi r3,r10,-6752
	ctx.r3.s64 = ctx.r10.s64 + -6752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21328
	ctx.r3.s64 = ctx.r9.s64 + -21328;
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

PPC_WEAK_FUNC(sub_8327FC48) {
	__imp__sub_8327FC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FC88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22748
	ctx.r4.s64 = r11.s64 + -22748;
	// addi r3,r10,-6748
	ctx.r3.s64 = ctx.r10.s64 + -6748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21312
	ctx.r3.s64 = ctx.r9.s64 + -21312;
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

PPC_WEAK_FUNC(sub_8327FC88) {
	__imp__sub_8327FC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FCC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22740
	ctx.r4.s64 = r11.s64 + -22740;
	// addi r3,r10,-6744
	ctx.r3.s64 = ctx.r10.s64 + -6744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21296
	ctx.r3.s64 = ctx.r9.s64 + -21296;
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

PPC_WEAK_FUNC(sub_8327FCC8) {
	__imp__sub_8327FCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FD08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22720
	ctx.r4.s64 = r11.s64 + -22720;
	// addi r3,r10,-6740
	ctx.r3.s64 = ctx.r10.s64 + -6740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21280
	ctx.r3.s64 = ctx.r9.s64 + -21280;
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

PPC_WEAK_FUNC(sub_8327FD08) {
	__imp__sub_8327FD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FD48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22700
	ctx.r4.s64 = r11.s64 + -22700;
	// addi r3,r10,-6736
	ctx.r3.s64 = ctx.r10.s64 + -6736;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21264
	ctx.r3.s64 = ctx.r9.s64 + -21264;
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

PPC_WEAK_FUNC(sub_8327FD48) {
	__imp__sub_8327FD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FD88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22672
	ctx.r4.s64 = r11.s64 + -22672;
	// addi r3,r10,-6732
	ctx.r3.s64 = ctx.r10.s64 + -6732;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21248
	ctx.r3.s64 = ctx.r9.s64 + -21248;
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

PPC_WEAK_FUNC(sub_8327FD88) {
	__imp__sub_8327FD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FDC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22656
	ctx.r4.s64 = r11.s64 + -22656;
	// addi r3,r10,-6728
	ctx.r3.s64 = ctx.r10.s64 + -6728;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21232
	ctx.r3.s64 = ctx.r9.s64 + -21232;
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

PPC_WEAK_FUNC(sub_8327FDC8) {
	__imp__sub_8327FDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FE08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22636
	ctx.r4.s64 = r11.s64 + -22636;
	// addi r3,r10,-6724
	ctx.r3.s64 = ctx.r10.s64 + -6724;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21216
	ctx.r3.s64 = ctx.r9.s64 + -21216;
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

PPC_WEAK_FUNC(sub_8327FE08) {
	__imp__sub_8327FE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FE48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22612
	ctx.r4.s64 = r11.s64 + -22612;
	// addi r3,r10,-6720
	ctx.r3.s64 = ctx.r10.s64 + -6720;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21200
	ctx.r3.s64 = ctx.r9.s64 + -21200;
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

PPC_WEAK_FUNC(sub_8327FE48) {
	__imp__sub_8327FE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FE88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22592
	ctx.r4.s64 = r11.s64 + -22592;
	// addi r3,r10,-6716
	ctx.r3.s64 = ctx.r10.s64 + -6716;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21184
	ctx.r3.s64 = ctx.r9.s64 + -21184;
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

PPC_WEAK_FUNC(sub_8327FE88) {
	__imp__sub_8327FE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FEC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22564
	ctx.r4.s64 = r11.s64 + -22564;
	// addi r3,r10,-6712
	ctx.r3.s64 = ctx.r10.s64 + -6712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21168
	ctx.r3.s64 = ctx.r9.s64 + -21168;
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

PPC_WEAK_FUNC(sub_8327FEC8) {
	__imp__sub_8327FEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FF08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22540
	ctx.r4.s64 = r11.s64 + -22540;
	// addi r3,r10,-6708
	ctx.r3.s64 = ctx.r10.s64 + -6708;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21152
	ctx.r3.s64 = ctx.r9.s64 + -21152;
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

PPC_WEAK_FUNC(sub_8327FF08) {
	__imp__sub_8327FF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FF48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23044
	ctx.r4.s64 = r11.s64 + -23044;
	// addi r3,r10,-6704
	ctx.r3.s64 = ctx.r10.s64 + -6704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21136
	ctx.r3.s64 = ctx.r9.s64 + -21136;
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

PPC_WEAK_FUNC(sub_8327FF48) {
	__imp__sub_8327FF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FF88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23036
	ctx.r4.s64 = r11.s64 + -23036;
	// addi r3,r10,-6700
	ctx.r3.s64 = ctx.r10.s64 + -6700;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21120
	ctx.r3.s64 = ctx.r9.s64 + -21120;
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

PPC_WEAK_FUNC(sub_8327FF88) {
	__imp__sub_8327FF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8327FFC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23016
	ctx.r4.s64 = r11.s64 + -23016;
	// addi r3,r10,-6696
	ctx.r3.s64 = ctx.r10.s64 + -6696;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21104
	ctx.r3.s64 = ctx.r9.s64 + -21104;
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

PPC_WEAK_FUNC(sub_8327FFC8) {
	__imp__sub_8327FFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280008) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22996
	ctx.r4.s64 = r11.s64 + -22996;
	// addi r3,r10,-6692
	ctx.r3.s64 = ctx.r10.s64 + -6692;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21088
	ctx.r3.s64 = ctx.r9.s64 + -21088;
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

PPC_WEAK_FUNC(sub_83280008) {
	__imp__sub_83280008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280048) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22944
	ctx.r4.s64 = r11.s64 + -22944;
	// addi r3,r10,-6688
	ctx.r3.s64 = ctx.r10.s64 + -6688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21072
	ctx.r3.s64 = ctx.r9.s64 + -21072;
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

PPC_WEAK_FUNC(sub_83280048) {
	__imp__sub_83280048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280088) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22892
	ctx.r4.s64 = r11.s64 + -22892;
	// addi r3,r10,-6684
	ctx.r3.s64 = ctx.r10.s64 + -6684;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21056
	ctx.r3.s64 = ctx.r9.s64 + -21056;
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

PPC_WEAK_FUNC(sub_83280088) {
	__imp__sub_83280088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832800C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22888
	ctx.r4.s64 = r11.s64 + -22888;
	// addi r3,r10,-6680
	ctx.r3.s64 = ctx.r10.s64 + -6680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21040
	ctx.r3.s64 = ctx.r9.s64 + -21040;
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

PPC_WEAK_FUNC(sub_832800C8) {
	__imp__sub_832800C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280108) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22840
	ctx.r4.s64 = r11.s64 + -22840;
	// addi r3,r10,-6676
	ctx.r3.s64 = ctx.r10.s64 + -6676;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21024
	ctx.r3.s64 = ctx.r9.s64 + -21024;
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

PPC_WEAK_FUNC(sub_83280108) {
	__imp__sub_83280108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280148) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22824
	ctx.r4.s64 = r11.s64 + -22824;
	// addi r3,r10,-6672
	ctx.r3.s64 = ctx.r10.s64 + -6672;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-21008
	ctx.r3.s64 = ctx.r9.s64 + -21008;
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

PPC_WEAK_FUNC(sub_83280148) {
	__imp__sub_83280148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280188) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22812
	ctx.r4.s64 = r11.s64 + -22812;
	// addi r3,r10,-6668
	ctx.r3.s64 = ctx.r10.s64 + -6668;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20992
	ctx.r3.s64 = ctx.r9.s64 + -20992;
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

PPC_WEAK_FUNC(sub_83280188) {
	__imp__sub_83280188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832801C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22792
	ctx.r4.s64 = r11.s64 + -22792;
	// addi r3,r10,-6664
	ctx.r3.s64 = ctx.r10.s64 + -6664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20976
	ctx.r3.s64 = ctx.r9.s64 + -20976;
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

PPC_WEAK_FUNC(sub_832801C8) {
	__imp__sub_832801C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280208) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22780
	ctx.r4.s64 = r11.s64 + -22780;
	// addi r3,r10,-6660
	ctx.r3.s64 = ctx.r10.s64 + -6660;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20960
	ctx.r3.s64 = ctx.r9.s64 + -20960;
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

PPC_WEAK_FUNC(sub_83280208) {
	__imp__sub_83280208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280248) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22764
	ctx.r4.s64 = r11.s64 + -22764;
	// addi r3,r10,-6656
	ctx.r3.s64 = ctx.r10.s64 + -6656;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20944
	ctx.r3.s64 = ctx.r9.s64 + -20944;
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

PPC_WEAK_FUNC(sub_83280248) {
	__imp__sub_83280248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280288) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23452
	ctx.r4.s64 = r11.s64 + -23452;
	// addi r3,r10,-6652
	ctx.r3.s64 = ctx.r10.s64 + -6652;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20928
	ctx.r3.s64 = ctx.r9.s64 + -20928;
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

PPC_WEAK_FUNC(sub_83280288) {
	__imp__sub_83280288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832802C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23444
	ctx.r4.s64 = r11.s64 + -23444;
	// addi r3,r10,-6648
	ctx.r3.s64 = ctx.r10.s64 + -6648;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20912
	ctx.r3.s64 = ctx.r9.s64 + -20912;
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

PPC_WEAK_FUNC(sub_832802C8) {
	__imp__sub_832802C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280308) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23424
	ctx.r4.s64 = r11.s64 + -23424;
	// addi r3,r10,-6644
	ctx.r3.s64 = ctx.r10.s64 + -6644;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20896
	ctx.r3.s64 = ctx.r9.s64 + -20896;
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

PPC_WEAK_FUNC(sub_83280308) {
	__imp__sub_83280308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280348) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23404
	ctx.r4.s64 = r11.s64 + -23404;
	// addi r3,r10,-6640
	ctx.r3.s64 = ctx.r10.s64 + -6640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20880
	ctx.r3.s64 = ctx.r9.s64 + -20880;
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

PPC_WEAK_FUNC(sub_83280348) {
	__imp__sub_83280348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280388) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23380
	ctx.r4.s64 = r11.s64 + -23380;
	// addi r3,r10,-6636
	ctx.r3.s64 = ctx.r10.s64 + -6636;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20864
	ctx.r3.s64 = ctx.r9.s64 + -20864;
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

PPC_WEAK_FUNC(sub_83280388) {
	__imp__sub_83280388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832803C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23364
	ctx.r4.s64 = r11.s64 + -23364;
	// addi r3,r10,-6632
	ctx.r3.s64 = ctx.r10.s64 + -6632;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20848
	ctx.r3.s64 = ctx.r9.s64 + -20848;
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

PPC_WEAK_FUNC(sub_832803C8) {
	__imp__sub_832803C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280408) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23340
	ctx.r4.s64 = r11.s64 + -23340;
	// addi r3,r10,-6628
	ctx.r3.s64 = ctx.r10.s64 + -6628;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20832
	ctx.r3.s64 = ctx.r9.s64 + -20832;
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

PPC_WEAK_FUNC(sub_83280408) {
	__imp__sub_83280408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280448) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23320
	ctx.r4.s64 = r11.s64 + -23320;
	// addi r3,r10,-6624
	ctx.r3.s64 = ctx.r10.s64 + -6624;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20816
	ctx.r3.s64 = ctx.r9.s64 + -20816;
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

PPC_WEAK_FUNC(sub_83280448) {
	__imp__sub_83280448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280488) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23300
	ctx.r4.s64 = r11.s64 + -23300;
	// addi r3,r10,-6620
	ctx.r3.s64 = ctx.r10.s64 + -6620;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20800
	ctx.r3.s64 = ctx.r9.s64 + -20800;
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

PPC_WEAK_FUNC(sub_83280488) {
	__imp__sub_83280488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832804C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23284
	ctx.r4.s64 = r11.s64 + -23284;
	// addi r3,r10,-6616
	ctx.r3.s64 = ctx.r10.s64 + -6616;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20784
	ctx.r3.s64 = ctx.r9.s64 + -20784;
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

PPC_WEAK_FUNC(sub_832804C8) {
	__imp__sub_832804C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280508) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23264
	ctx.r4.s64 = r11.s64 + -23264;
	// addi r3,r10,-6612
	ctx.r3.s64 = ctx.r10.s64 + -6612;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20768
	ctx.r3.s64 = ctx.r9.s64 + -20768;
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

PPC_WEAK_FUNC(sub_83280508) {
	__imp__sub_83280508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280548) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23244
	ctx.r4.s64 = r11.s64 + -23244;
	// addi r3,r10,-6608
	ctx.r3.s64 = ctx.r10.s64 + -6608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20752
	ctx.r3.s64 = ctx.r9.s64 + -20752;
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

PPC_WEAK_FUNC(sub_83280548) {
	__imp__sub_83280548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280588) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23220
	ctx.r4.s64 = r11.s64 + -23220;
	// addi r3,r10,-6604
	ctx.r3.s64 = ctx.r10.s64 + -6604;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20736
	ctx.r3.s64 = ctx.r9.s64 + -20736;
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

PPC_WEAK_FUNC(sub_83280588) {
	__imp__sub_83280588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832805C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23200
	ctx.r4.s64 = r11.s64 + -23200;
	// addi r3,r10,-6600
	ctx.r3.s64 = ctx.r10.s64 + -6600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20720
	ctx.r3.s64 = ctx.r9.s64 + -20720;
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

PPC_WEAK_FUNC(sub_832805C8) {
	__imp__sub_832805C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280608) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23184
	ctx.r4.s64 = r11.s64 + -23184;
	// addi r3,r10,-6596
	ctx.r3.s64 = ctx.r10.s64 + -6596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20704
	ctx.r3.s64 = ctx.r9.s64 + -20704;
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

PPC_WEAK_FUNC(sub_83280608) {
	__imp__sub_83280608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280648) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23528
	ctx.r4.s64 = r11.s64 + -23528;
	// addi r3,r10,-6592
	ctx.r3.s64 = ctx.r10.s64 + -6592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20688
	ctx.r3.s64 = ctx.r9.s64 + -20688;
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

PPC_WEAK_FUNC(sub_83280648) {
	__imp__sub_83280648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280688) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23512
	ctx.r4.s64 = r11.s64 + -23512;
	// addi r3,r10,-6588
	ctx.r3.s64 = ctx.r10.s64 + -6588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20672
	ctx.r3.s64 = ctx.r9.s64 + -20672;
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

PPC_WEAK_FUNC(sub_83280688) {
	__imp__sub_83280688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832806C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23496
	ctx.r4.s64 = r11.s64 + -23496;
	// addi r3,r10,-6584
	ctx.r3.s64 = ctx.r10.s64 + -6584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20656
	ctx.r3.s64 = ctx.r9.s64 + -20656;
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

PPC_WEAK_FUNC(sub_832806C8) {
	__imp__sub_832806C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280708) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23492
	ctx.r4.s64 = r11.s64 + -23492;
	// addi r3,r10,-6580
	ctx.r3.s64 = ctx.r10.s64 + -6580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20640
	ctx.r3.s64 = ctx.r9.s64 + -20640;
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

PPC_WEAK_FUNC(sub_83280708) {
	__imp__sub_83280708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280748) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23480
	ctx.r4.s64 = r11.s64 + -23480;
	// addi r3,r10,-6576
	ctx.r3.s64 = ctx.r10.s64 + -6576;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20624
	ctx.r3.s64 = ctx.r9.s64 + -20624;
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

PPC_WEAK_FUNC(sub_83280748) {
	__imp__sub_83280748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280788) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23468
	ctx.r4.s64 = r11.s64 + -23468;
	// addi r3,r10,-6572
	ctx.r3.s64 = ctx.r10.s64 + -6572;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20608
	ctx.r3.s64 = ctx.r9.s64 + -20608;
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

PPC_WEAK_FUNC(sub_83280788) {
	__imp__sub_83280788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832807C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23460
	ctx.r4.s64 = r11.s64 + -23460;
	// addi r3,r10,-6568
	ctx.r3.s64 = ctx.r10.s64 + -6568;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20592
	ctx.r3.s64 = ctx.r9.s64 + -20592;
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

PPC_WEAK_FUNC(sub_832807C8) {
	__imp__sub_832807C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280808) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23708
	ctx.r4.s64 = r11.s64 + -23708;
	// addi r3,r10,-6564
	ctx.r3.s64 = ctx.r10.s64 + -6564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20576
	ctx.r3.s64 = ctx.r9.s64 + -20576;
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

PPC_WEAK_FUNC(sub_83280808) {
	__imp__sub_83280808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280848) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23700
	ctx.r4.s64 = r11.s64 + -23700;
	// addi r3,r10,-6560
	ctx.r3.s64 = ctx.r10.s64 + -6560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20560
	ctx.r3.s64 = ctx.r9.s64 + -20560;
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

PPC_WEAK_FUNC(sub_83280848) {
	__imp__sub_83280848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280888) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23680
	ctx.r4.s64 = r11.s64 + -23680;
	// addi r3,r10,-6556
	ctx.r3.s64 = ctx.r10.s64 + -6556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20544
	ctx.r3.s64 = ctx.r9.s64 + -20544;
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

PPC_WEAK_FUNC(sub_83280888) {
	__imp__sub_83280888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832808C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23660
	ctx.r4.s64 = r11.s64 + -23660;
	// addi r3,r10,-6552
	ctx.r3.s64 = ctx.r10.s64 + -6552;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20528
	ctx.r3.s64 = ctx.r9.s64 + -20528;
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

PPC_WEAK_FUNC(sub_832808C8) {
	__imp__sub_832808C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280908) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23636
	ctx.r4.s64 = r11.s64 + -23636;
	// addi r3,r10,-6548
	ctx.r3.s64 = ctx.r10.s64 + -6548;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20512
	ctx.r3.s64 = ctx.r9.s64 + -20512;
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

PPC_WEAK_FUNC(sub_83280908) {
	__imp__sub_83280908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280948) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23612
	ctx.r4.s64 = r11.s64 + -23612;
	// addi r3,r10,-6544
	ctx.r3.s64 = ctx.r10.s64 + -6544;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20496
	ctx.r3.s64 = ctx.r9.s64 + -20496;
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

PPC_WEAK_FUNC(sub_83280948) {
	__imp__sub_83280948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280988) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23864
	ctx.r4.s64 = r11.s64 + -23864;
	// addi r3,r10,-6540
	ctx.r3.s64 = ctx.r10.s64 + -6540;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20480
	ctx.r3.s64 = ctx.r9.s64 + -20480;
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

PPC_WEAK_FUNC(sub_83280988) {
	__imp__sub_83280988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832809C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23856
	ctx.r4.s64 = r11.s64 + -23856;
	// addi r3,r10,-6536
	ctx.r3.s64 = ctx.r10.s64 + -6536;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20464
	ctx.r3.s64 = ctx.r9.s64 + -20464;
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

PPC_WEAK_FUNC(sub_832809C8) {
	__imp__sub_832809C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280A08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23836
	ctx.r4.s64 = r11.s64 + -23836;
	// addi r3,r10,-6532
	ctx.r3.s64 = ctx.r10.s64 + -6532;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20448
	ctx.r3.s64 = ctx.r9.s64 + -20448;
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

PPC_WEAK_FUNC(sub_83280A08) {
	__imp__sub_83280A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280A48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23816
	ctx.r4.s64 = r11.s64 + -23816;
	// addi r3,r10,-6528
	ctx.r3.s64 = ctx.r10.s64 + -6528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20432
	ctx.r3.s64 = ctx.r9.s64 + -20432;
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

PPC_WEAK_FUNC(sub_83280A48) {
	__imp__sub_83280A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280A88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23796
	ctx.r4.s64 = r11.s64 + -23796;
	// addi r3,r10,-6524
	ctx.r3.s64 = ctx.r10.s64 + -6524;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20416
	ctx.r3.s64 = ctx.r9.s64 + -20416;
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

PPC_WEAK_FUNC(sub_83280A88) {
	__imp__sub_83280A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280AC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23772
	ctx.r4.s64 = r11.s64 + -23772;
	// addi r3,r10,-6520
	ctx.r3.s64 = ctx.r10.s64 + -6520;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20400
	ctx.r3.s64 = ctx.r9.s64 + -20400;
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

PPC_WEAK_FUNC(sub_83280AC8) {
	__imp__sub_83280AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280B08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23756
	ctx.r4.s64 = r11.s64 + -23756;
	// addi r3,r10,-6516
	ctx.r3.s64 = ctx.r10.s64 + -6516;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20384
	ctx.r3.s64 = ctx.r9.s64 + -20384;
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

PPC_WEAK_FUNC(sub_83280B08) {
	__imp__sub_83280B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280B48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23988
	ctx.r4.s64 = r11.s64 + -23988;
	// addi r3,r10,-6512
	ctx.r3.s64 = ctx.r10.s64 + -6512;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20368
	ctx.r3.s64 = ctx.r9.s64 + -20368;
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

PPC_WEAK_FUNC(sub_83280B48) {
	__imp__sub_83280B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280B88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23980
	ctx.r4.s64 = r11.s64 + -23980;
	// addi r3,r10,-6508
	ctx.r3.s64 = ctx.r10.s64 + -6508;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20352
	ctx.r3.s64 = ctx.r9.s64 + -20352;
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

PPC_WEAK_FUNC(sub_83280B88) {
	__imp__sub_83280B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280BC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23960
	ctx.r4.s64 = r11.s64 + -23960;
	// addi r3,r10,-6504
	ctx.r3.s64 = ctx.r10.s64 + -6504;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20336
	ctx.r3.s64 = ctx.r9.s64 + -20336;
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

PPC_WEAK_FUNC(sub_83280BC8) {
	__imp__sub_83280BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280C08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23940
	ctx.r4.s64 = r11.s64 + -23940;
	// addi r3,r10,-6500
	ctx.r3.s64 = ctx.r10.s64 + -6500;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20320
	ctx.r3.s64 = ctx.r9.s64 + -20320;
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

PPC_WEAK_FUNC(sub_83280C08) {
	__imp__sub_83280C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280C48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23916
	ctx.r4.s64 = r11.s64 + -23916;
	// addi r3,r10,-6496
	ctx.r3.s64 = ctx.r10.s64 + -6496;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20304
	ctx.r3.s64 = ctx.r9.s64 + -20304;
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

PPC_WEAK_FUNC(sub_83280C48) {
	__imp__sub_83280C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280C88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-23892
	ctx.r4.s64 = r11.s64 + -23892;
	// addi r3,r10,-6492
	ctx.r3.s64 = ctx.r10.s64 + -6492;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20288
	ctx.r3.s64 = ctx.r9.s64 + -20288;
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

PPC_WEAK_FUNC(sub_83280C88) {
	__imp__sub_83280C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280CC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24160
	ctx.r4.s64 = r11.s64 + -24160;
	// addi r3,r10,-6488
	ctx.r3.s64 = ctx.r10.s64 + -6488;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20272
	ctx.r3.s64 = ctx.r9.s64 + -20272;
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

PPC_WEAK_FUNC(sub_83280CC8) {
	__imp__sub_83280CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280D08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24152
	ctx.r4.s64 = r11.s64 + -24152;
	// addi r3,r10,-6484
	ctx.r3.s64 = ctx.r10.s64 + -6484;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20256
	ctx.r3.s64 = ctx.r9.s64 + -20256;
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

PPC_WEAK_FUNC(sub_83280D08) {
	__imp__sub_83280D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280D48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24132
	ctx.r4.s64 = r11.s64 + -24132;
	// addi r3,r10,-6480
	ctx.r3.s64 = ctx.r10.s64 + -6480;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20240
	ctx.r3.s64 = ctx.r9.s64 + -20240;
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

PPC_WEAK_FUNC(sub_83280D48) {
	__imp__sub_83280D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280D88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24112
	ctx.r4.s64 = r11.s64 + -24112;
	// addi r3,r10,-6476
	ctx.r3.s64 = ctx.r10.s64 + -6476;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20224
	ctx.r3.s64 = ctx.r9.s64 + -20224;
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

PPC_WEAK_FUNC(sub_83280D88) {
	__imp__sub_83280D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280DC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24088
	ctx.r4.s64 = r11.s64 + -24088;
	// addi r3,r10,-6472
	ctx.r3.s64 = ctx.r10.s64 + -6472;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20208
	ctx.r3.s64 = ctx.r9.s64 + -20208;
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

PPC_WEAK_FUNC(sub_83280DC8) {
	__imp__sub_83280DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280E08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24064
	ctx.r4.s64 = r11.s64 + -24064;
	// addi r3,r10,-6468
	ctx.r3.s64 = ctx.r10.s64 + -6468;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20192
	ctx.r3.s64 = ctx.r9.s64 + -20192;
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

PPC_WEAK_FUNC(sub_83280E08) {
	__imp__sub_83280E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280E48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24040
	ctx.r4.s64 = r11.s64 + -24040;
	// addi r3,r10,-6464
	ctx.r3.s64 = ctx.r10.s64 + -6464;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20176
	ctx.r3.s64 = ctx.r9.s64 + -20176;
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

PPC_WEAK_FUNC(sub_83280E48) {
	__imp__sub_83280E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280E88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24024
	ctx.r4.s64 = r11.s64 + -24024;
	// addi r3,r10,-6460
	ctx.r3.s64 = ctx.r10.s64 + -6460;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20160
	ctx.r3.s64 = ctx.r9.s64 + -20160;
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

PPC_WEAK_FUNC(sub_83280E88) {
	__imp__sub_83280E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280EC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24292
	ctx.r4.s64 = r11.s64 + -24292;
	// addi r3,r10,-6456
	ctx.r3.s64 = ctx.r10.s64 + -6456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20080
	ctx.r3.s64 = ctx.r9.s64 + -20080;
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

PPC_WEAK_FUNC(sub_83280EC8) {
	__imp__sub_83280EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280F08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24276
	ctx.r4.s64 = r11.s64 + -24276;
	// addi r3,r10,-6452
	ctx.r3.s64 = ctx.r10.s64 + -6452;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20064
	ctx.r3.s64 = ctx.r9.s64 + -20064;
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

PPC_WEAK_FUNC(sub_83280F08) {
	__imp__sub_83280F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280F48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24260
	ctx.r4.s64 = r11.s64 + -24260;
	// addi r3,r10,-6448
	ctx.r3.s64 = ctx.r10.s64 + -6448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20048
	ctx.r3.s64 = ctx.r9.s64 + -20048;
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

PPC_WEAK_FUNC(sub_83280F48) {
	__imp__sub_83280F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280F88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24240
	ctx.r4.s64 = r11.s64 + -24240;
	// addi r3,r10,-6444
	ctx.r3.s64 = ctx.r10.s64 + -6444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20032
	ctx.r3.s64 = ctx.r9.s64 + -20032;
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

PPC_WEAK_FUNC(sub_83280F88) {
	__imp__sub_83280F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83280FC8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24372
	ctx.r4.s64 = r11.s64 + -24372;
	// addi r3,r10,-6440
	ctx.r3.s64 = ctx.r10.s64 + -6440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20016
	ctx.r3.s64 = ctx.r9.s64 + -20016;
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

PPC_WEAK_FUNC(sub_83280FC8) {
	__imp__sub_83280FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281008) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24364
	ctx.r4.s64 = r11.s64 + -24364;
	// addi r3,r10,-6436
	ctx.r3.s64 = ctx.r10.s64 + -6436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-20000
	ctx.r3.s64 = ctx.r9.s64 + -20000;
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

PPC_WEAK_FUNC(sub_83281008) {
	__imp__sub_83281008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281048) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24344
	ctx.r4.s64 = r11.s64 + -24344;
	// addi r3,r10,-6432
	ctx.r3.s64 = ctx.r10.s64 + -6432;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19984
	ctx.r3.s64 = ctx.r9.s64 + -19984;
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

PPC_WEAK_FUNC(sub_83281048) {
	__imp__sub_83281048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281088) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24324
	ctx.r4.s64 = r11.s64 + -24324;
	// addi r3,r10,-6428
	ctx.r3.s64 = ctx.r10.s64 + -6428;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19968
	ctx.r3.s64 = ctx.r9.s64 + -19968;
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

PPC_WEAK_FUNC(sub_83281088) {
	__imp__sub_83281088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832810C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24580
	ctx.r4.s64 = r11.s64 + -24580;
	// addi r3,r10,-6424
	ctx.r3.s64 = ctx.r10.s64 + -6424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19952
	ctx.r3.s64 = ctx.r9.s64 + -19952;
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

PPC_WEAK_FUNC(sub_832810C8) {
	__imp__sub_832810C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19936
	ctx.r3.s64 = r11.s64 + -19936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83281108) {
	__imp__sub_83281108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281118) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8328113c
	if (cr6.eq) goto loc_8328113C;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_8328113C:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83281148
	if (cr0.eq) goto loc_83281148;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_83281148:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-6412
	ctx.r8.s64 = ctx.r9.s64 + -6412;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-19920
	ctx.r3.s64 = ctx.r7.s64 + -19920;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83281118) {
	__imp__sub_83281118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19784
	ctx.r3.s64 = r11.s64 + -19784;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83281178) {
	__imp__sub_83281178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281188) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-6384
	ctx.r3.s64 = ctx.r10.s64 + -6384;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19696
	ctx.r3.s64 = ctx.r9.s64 + -19696;
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

PPC_WEAK_FUNC(sub_83281188) {
	__imp__sub_83281188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832811C8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-6380
	ctx.r3.s64 = ctx.r10.s64 + -6380;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19680
	ctx.r3.s64 = ctx.r9.s64 + -19680;
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

PPC_WEAK_FUNC(sub_832811C8) {
	__imp__sub_832811C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19664
	ctx.r3.s64 = r11.s64 + -19664;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83281208) {
	__imp__sub_83281208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281218) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6372
	ctx.r3.s64 = r11.s64 + -6372;
	// bl 0x823b0a18
	sub_823B0A18(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-19608
	ctx.r3.s64 = ctx.r10.s64 + -19608;
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

PPC_WEAK_FUNC(sub_83281218) {
	__imp__sub_83281218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281250) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6360
	ctx.r3.s64 = r11.s64 + -6360;
	// bl 0x823b0a18
	sub_823B0A18(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-19592
	ctx.r3.s64 = ctx.r10.s64 + -19592;
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

PPC_WEAK_FUNC(sub_83281250) {
	__imp__sub_83281250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281288) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-6348
	ctx.r3.s64 = ctx.r10.s64 + -6348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19576
	ctx.r3.s64 = ctx.r9.s64 + -19576;
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

PPC_WEAK_FUNC(sub_83281288) {
	__imp__sub_83281288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832812C8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-6344
	ctx.r3.s64 = ctx.r10.s64 + -6344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19560
	ctx.r3.s64 = ctx.r9.s64 + -19560;
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

PPC_WEAK_FUNC(sub_832812C8) {
	__imp__sub_832812C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281308) {
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
	// addi r9,r11,-27860
	ctx.r9.s64 = r11.s64 + -27860;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27860);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f13,404(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,-6336
	ctx.r4.s64 = ctx.r5.s64 + -6336;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
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
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83281308) {
	__imp__sub_83281308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83281368) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-6320
	ctx.r3.s64 = ctx.r10.s64 + -6320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19544
	ctx.r3.s64 = ctx.r9.s64 + -19544;
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

PPC_WEAK_FUNC(sub_83281368) {
	__imp__sub_83281368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832813A8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-6316
	ctx.r3.s64 = ctx.r10.s64 + -6316;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19528
	ctx.r3.s64 = ctx.r9.s64 + -19528;
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

PPC_WEAK_FUNC(sub_832813A8) {
	__imp__sub_832813A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832813E8) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-6312
	r31.s64 = r11.s64 + -6312;
	// addi r4,r10,15740
	ctx.r4.s64 = ctx.r10.s64 + 15740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,15716
	ctx.r4.s64 = ctx.r9.s64 + 15716;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,15700
	ctx.r4.s64 = ctx.r8.s64 + 15700;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,15688
	ctx.r4.s64 = ctx.r7.s64 + 15688;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r6,15684
	r30.s64 = ctx.r6.s64 + 15684;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,15664
	ctx.r4.s64 = ctx.r4.s64 + 15664;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,15648
	ctx.r4.s64 = ctx.r3.s64 + 15648;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r29,r10,15644
	r29.s64 = ctx.r10.s64 + 15644;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,15628
	ctx.r4.s64 = ctx.r9.s64 + 15628;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,15616
	ctx.r4.s64 = ctx.r8.s64 + 15616;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,15604
	ctx.r4.s64 = ctx.r7.s64 + 15604;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,15584
	ctx.r4.s64 = ctx.r6.s64 + 15584;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,15568
	ctx.r4.s64 = ctx.r4.s64 + 15568;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,15548
	ctx.r4.s64 = ctx.r3.s64 + 15548;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,15532
	ctx.r4.s64 = r11.s64 + 15532;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,15516
	ctx.r4.s64 = ctx.r10.s64 + 15516;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,15504
	ctx.r4.s64 = ctx.r9.s64 + 15504;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,15480
	ctx.r4.s64 = ctx.r8.s64 + 15480;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,15460
	ctx.r4.s64 = ctx.r7.s64 + 15460;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,15432
	ctx.r4.s64 = ctx.r6.s64 + 15432;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,15416
	ctx.r4.s64 = ctx.r4.s64 + 15416;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r3,15404
	r30.s64 = ctx.r3.s64 + 15404;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,15376
	ctx.r4.s64 = r11.s64 + 15376;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// addi r4,r10,15360
	ctx.r4.s64 = ctx.r10.s64 + 15360;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,15332
	ctx.r4.s64 = ctx.r9.s64 + 15332;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,15316
	ctx.r4.s64 = ctx.r8.s64 + 15316;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,15288
	ctx.r4.s64 = ctx.r7.s64 + 15288;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,15272
	ctx.r4.s64 = ctx.r6.s64 + 15272;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,15252
	ctx.r4.s64 = ctx.r4.s64 + 15252;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r3,15244
	r30.s64 = ctx.r3.s64 + 15244;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,15228
	ctx.r4.s64 = r11.s64 + 15228;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,15208
	ctx.r4.s64 = ctx.r10.s64 + 15208;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,15192
	ctx.r4.s64 = ctx.r9.s64 + 15192;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,15172
	ctx.r4.s64 = ctx.r8.s64 + 15172;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,15156
	ctx.r4.s64 = ctx.r7.s64 + 15156;
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// addi r3,r6,-19512
	ctx.r3.s64 = ctx.r6.s64 + -19512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_832813E8) {
	__imp__sub_832813E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832817F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-6072
	r31.s64 = r11.s64 + -6072;
	// addi r4,r10,23784
	ctx.r4.s64 = ctx.r10.s64 + 23784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r9,23772
	r30.s64 = ctx.r9.s64 + 23772;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,23756
	ctx.r4.s64 = ctx.r8.s64 + 23756;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,23736
	ctx.r4.s64 = ctx.r7.s64 + 23736;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,23716
	ctx.r4.s64 = ctx.r6.s64 + 23716;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,23700
	ctx.r4.s64 = ctx.r4.s64 + 23700;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,23684
	ctx.r4.s64 = ctx.r3.s64 + 23684;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23668
	ctx.r4.s64 = r11.s64 + 23668;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,23652
	ctx.r4.s64 = ctx.r10.s64 + 23652;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,23616
	ctx.r4.s64 = ctx.r9.s64 + 23616;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,23584
	ctx.r4.s64 = ctx.r8.s64 + 23584;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,23560
	ctx.r4.s64 = ctx.r7.s64 + 23560;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,23540
	ctx.r4.s64 = ctx.r6.s64 + 23540;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,23504
	ctx.r4.s64 = ctx.r4.s64 + 23504;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-8372
	ctx.r4.s64 = ctx.r3.s64 + -8372;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23488
	ctx.r4.s64 = r11.s64 + 23488;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r29,r10,15684
	r29.s64 = ctx.r10.s64 + 15684;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,23472
	ctx.r4.s64 = ctx.r9.s64 + 23472;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,23440
	ctx.r4.s64 = ctx.r8.s64 + 23440;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,23412
	ctx.r4.s64 = ctx.r7.s64 + 23412;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,23384
	ctx.r4.s64 = ctx.r6.s64 + 23384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,23360
	ctx.r4.s64 = ctx.r4.s64 + 23360;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,23348
	ctx.r4.s64 = ctx.r3.s64 + 23348;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23336
	ctx.r4.s64 = r11.s64 + 23336;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,23308
	ctx.r4.s64 = ctx.r10.s64 + 23308;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,23284
	ctx.r4.s64 = ctx.r9.s64 + 23284;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,23252
	ctx.r4.s64 = ctx.r8.s64 + 23252;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,23224
	ctx.r4.s64 = ctx.r7.s64 + 23224;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,23204
	ctx.r4.s64 = ctx.r6.s64 + 23204;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,23188
	ctx.r4.s64 = ctx.r4.s64 + 23188;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,23168
	ctx.r4.s64 = ctx.r3.s64 + 23168;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r10,23160
	r28.s64 = ctx.r10.s64 + 23160;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,23144
	ctx.r4.s64 = ctx.r9.s64 + 23144;
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,23116
	ctx.r4.s64 = ctx.r8.s64 + 23116;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,23100
	ctx.r4.s64 = ctx.r7.s64 + 23100;
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,23072
	ctx.r4.s64 = ctx.r6.s64 + 23072;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,23060
	ctx.r4.s64 = ctx.r4.s64 + 23060;
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,23032
	ctx.r4.s64 = ctx.r3.s64 + 23032;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23020
	ctx.r4.s64 = r11.s64 + 23020;
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,22996
	ctx.r4.s64 = ctx.r10.s64 + 22996;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22984
	ctx.r4.s64 = ctx.r9.s64 + 22984;
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22952
	ctx.r4.s64 = ctx.r8.s64 + 22952;
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22936
	ctx.r4.s64 = ctx.r7.s64 + 22936;
	// addi r3,r31,316
	ctx.r3.s64 = r31.s64 + 316;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22900
	ctx.r4.s64 = ctx.r6.s64 + 22900;
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,328
	ctx.r3.s64 = r31.s64 + 328;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22880
	ctx.r4.s64 = ctx.r4.s64 + 22880;
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22852
	ctx.r4.s64 = ctx.r3.s64 + 22852;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r10,15716
	r28.s64 = ctx.r10.s64 + 15716;
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22836
	ctx.r4.s64 = ctx.r9.s64 + 22836;
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22808
	ctx.r4.s64 = ctx.r8.s64 + 22808;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r27,r7,22796
	r27.s64 = ctx.r7.s64 + 22796;
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22784
	ctx.r4.s64 = ctx.r6.s64 + 22784;
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22760
	ctx.r4.s64 = ctx.r4.s64 + 22760;
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22748
	ctx.r4.s64 = ctx.r3.s64 + 22748;
	// addi r3,r31,380
	ctx.r3.s64 = r31.s64 + 380;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22708
	ctx.r4.s64 = r11.s64 + 22708;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r26,r10,22676
	r26.s64 = ctx.r10.s64 + 22676;
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22652
	ctx.r4.s64 = ctx.r9.s64 + 22652;
	// addi r3,r31,396
	ctx.r3.s64 = r31.s64 + 396;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22612
	ctx.r4.s64 = ctx.r8.s64 + 22612;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22588
	ctx.r4.s64 = ctx.r7.s64 + 22588;
	// addi r3,r31,412
	ctx.r3.s64 = r31.s64 + 412;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22548
	ctx.r4.s64 = ctx.r6.s64 + 22548;
	// addi r3,r31,416
	ctx.r3.s64 = r31.s64 + 416;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22524
	ctx.r4.s64 = ctx.r4.s64 + 22524;
	// addi r3,r31,428
	ctx.r3.s64 = r31.s64 + 428;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22488
	ctx.r4.s64 = ctx.r3.s64 + 22488;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,440
	ctx.r3.s64 = r31.s64 + 440;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22468
	ctx.r4.s64 = r11.s64 + 22468;
	// addi r3,r31,444
	ctx.r3.s64 = r31.s64 + 444;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,22424
	ctx.r4.s64 = ctx.r10.s64 + 22424;
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,456
	ctx.r3.s64 = r31.s64 + 456;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22396
	ctx.r4.s64 = ctx.r9.s64 + 22396;
	// addi r3,r31,460
	ctx.r3.s64 = r31.s64 + 460;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22360
	ctx.r4.s64 = ctx.r8.s64 + 22360;
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,468(r31)
	PPC_STORE_U32(r31.u32 + 468, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22328
	ctx.r4.s64 = ctx.r7.s64 + 22328;
	// addi r3,r31,476
	ctx.r3.s64 = r31.s64 + 476;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22296
	ctx.r4.s64 = ctx.r6.s64 + 22296;
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,484(r31)
	PPC_STORE_U32(r31.u32 + 484, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22276
	ctx.r4.s64 = ctx.r4.s64 + 22276;
	// addi r3,r31,492
	ctx.r3.s64 = r31.s64 + 492;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22236
	ctx.r4.s64 = ctx.r3.s64 + 22236;
	// addi r3,r31,496
	ctx.r3.s64 = r31.s64 + 496;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,500(r31)
	PPC_STORE_U32(r31.u32 + 500, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r26,r10,22196
	r26.s64 = ctx.r10.s64 + 22196;
	// addi r3,r31,504
	ctx.r3.s64 = r31.s64 + 504;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22172
	ctx.r4.s64 = ctx.r9.s64 + 22172;
	// addi r3,r31,508
	ctx.r3.s64 = r31.s64 + 508;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22132
	ctx.r4.s64 = ctx.r8.s64 + 22132;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,516(r31)
	PPC_STORE_U32(r31.u32 + 516, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,520
	ctx.r3.s64 = r31.s64 + 520;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22108
	ctx.r4.s64 = ctx.r7.s64 + 22108;
	// addi r3,r31,524
	ctx.r3.s64 = r31.s64 + 524;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22068
	ctx.r4.s64 = ctx.r6.s64 + 22068;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,536
	ctx.r3.s64 = r31.s64 + 536;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22044
	ctx.r4.s64 = ctx.r4.s64 + 22044;
	// addi r3,r31,540
	ctx.r3.s64 = r31.s64 + 540;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22004
	ctx.r4.s64 = ctx.r3.s64 + 22004;
	// addi r3,r31,544
	ctx.r3.s64 = r31.s64 + 544;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r11.u32);
	// addi r26,r10,21984
	r26.s64 = ctx.r10.s64 + 21984;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,552
	ctx.r3.s64 = r31.s64 + 552;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,21968
	ctx.r4.s64 = ctx.r9.s64 + 21968;
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,21940
	ctx.r4.s64 = ctx.r8.s64 + 21940;
	// addi r3,r31,560
	ctx.r3.s64 = r31.s64 + 560;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,564(r31)
	PPC_STORE_U32(r31.u32 + 564, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,568
	ctx.r3.s64 = r31.s64 + 568;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,21924
	ctx.r4.s64 = ctx.r7.s64 + 21924;
	// addi r3,r31,572
	ctx.r3.s64 = r31.s64 + 572;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,21892
	ctx.r4.s64 = ctx.r6.s64 + 21892;
	// addi r3,r31,576
	ctx.r3.s64 = r31.s64 + 576;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,580(r31)
	PPC_STORE_U32(r31.u32 + 580, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,584
	ctx.r3.s64 = r31.s64 + 584;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,21876
	ctx.r4.s64 = ctx.r4.s64 + 21876;
	// addi r3,r31,588
	ctx.r3.s64 = r31.s64 + 588;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,21836
	ctx.r4.s64 = ctx.r3.s64 + 21836;
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21812
	ctx.r4.s64 = r11.s64 + 21812;
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,21768
	ctx.r4.s64 = ctx.r10.s64 + 21768;
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,616
	ctx.r3.s64 = r31.s64 + 616;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,21740
	ctx.r4.s64 = ctx.r9.s64 + 21740;
	// addi r3,r31,620
	ctx.r3.s64 = r31.s64 + 620;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,21704
	ctx.r4.s64 = ctx.r8.s64 + 21704;
	// addi r3,r31,624
	ctx.r3.s64 = r31.s64 + 624;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,21680
	ctx.r4.s64 = ctx.r7.s64 + 21680;
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,21636
	ctx.r4.s64 = ctx.r6.s64 + 21636;
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,648
	ctx.r3.s64 = r31.s64 + 648;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,21608
	ctx.r4.s64 = ctx.r4.s64 + 21608;
	// addi r3,r31,652
	ctx.r3.s64 = r31.s64 + 652;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,21568
	ctx.r4.s64 = ctx.r3.s64 + 21568;
	// addi r3,r31,656
	ctx.r3.s64 = r31.s64 + 656;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,664
	ctx.r3.s64 = r31.s64 + 664;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21544
	ctx.r4.s64 = r11.s64 + 21544;
	// addi r3,r31,668
	ctx.r3.s64 = r31.s64 + 668;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,21504
	ctx.r4.s64 = ctx.r10.s64 + 21504;
	// addi r3,r31,672
	ctx.r3.s64 = r31.s64 + 672;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,680
	ctx.r3.s64 = r31.s64 + 680;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,21480
	ctx.r4.s64 = ctx.r9.s64 + 21480;
	// addi r3,r31,684
	ctx.r3.s64 = r31.s64 + 684;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,21440
	ctx.r4.s64 = ctx.r8.s64 + 21440;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,696
	ctx.r3.s64 = r31.s64 + 696;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,21424
	ctx.r4.s64 = ctx.r7.s64 + 21424;
	// addi r3,r31,700
	ctx.r3.s64 = r31.s64 + 700;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,21400
	ctx.r4.s64 = ctx.r6.s64 + 21400;
	// addi r3,r31,704
	ctx.r3.s64 = r31.s64 + 704;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,708(r31)
	PPC_STORE_U32(r31.u32 + 708, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,712
	ctx.r3.s64 = r31.s64 + 712;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,21388
	ctx.r4.s64 = ctx.r4.s64 + 21388;
	// addi r3,r31,716
	ctx.r3.s64 = r31.s64 + 716;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,21348
	ctx.r4.s64 = ctx.r3.s64 + 21348;
	// addi r3,r31,720
	ctx.r3.s64 = r31.s64 + 720;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(r31.u32 + 724, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,728
	ctx.r3.s64 = r31.s64 + 728;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21328
	ctx.r4.s64 = r11.s64 + 21328;
	// addi r3,r31,732
	ctx.r3.s64 = r31.s64 + 732;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,21304
	ctx.r4.s64 = ctx.r10.s64 + 21304;
	// addi r3,r31,736
	ctx.r3.s64 = r31.s64 + 736;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,740(r31)
	PPC_STORE_U32(r31.u32 + 740, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,744
	ctx.r3.s64 = r31.s64 + 744;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r9,-27420
	r28.s64 = ctx.r9.s64 + -27420;
	// addi r3,r31,748
	ctx.r3.s64 = r31.s64 + 748;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,21264
	ctx.r4.s64 = ctx.r8.s64 + 21264;
	// addi r3,r31,752
	ctx.r3.s64 = r31.s64 + 752;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,756(r31)
	PPC_STORE_U32(r31.u32 + 756, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,760
	ctx.r3.s64 = r31.s64 + 760;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,21244
	ctx.r4.s64 = ctx.r7.s64 + 21244;
	// addi r3,r31,764
	ctx.r3.s64 = r31.s64 + 764;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,21212
	ctx.r4.s64 = ctx.r6.s64 + 21212;
	// addi r3,r31,768
	ctx.r3.s64 = r31.s64 + 768;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r11,772(r31)
	PPC_STORE_U32(r31.u32 + 772, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r27,r4,21188
	r27.s64 = ctx.r4.s64 + 21188;
	// addi r3,r31,776
	ctx.r3.s64 = r31.s64 + 776;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,21168
	ctx.r4.s64 = ctx.r3.s64 + 21168;
	// addi r3,r31,780
	ctx.r3.s64 = r31.s64 + 780;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21124
	ctx.r4.s64 = r11.s64 + 21124;
	// addi r3,r31,784
	ctx.r3.s64 = r31.s64 + 784;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,788(r31)
	PPC_STORE_U32(r31.u32 + 788, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,792
	ctx.r3.s64 = r31.s64 + 792;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,21096
	ctx.r4.s64 = ctx.r10.s64 + 21096;
	// addi r3,r31,796
	ctx.r3.s64 = r31.s64 + 796;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,21048
	ctx.r4.s64 = ctx.r9.s64 + 21048;
	// addi r3,r31,800
	ctx.r3.s64 = r31.s64 + 800;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,804(r31)
	PPC_STORE_U32(r31.u32 + 804, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,808
	ctx.r3.s64 = r31.s64 + 808;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,21016
	ctx.r4.s64 = ctx.r8.s64 + 21016;
	// addi r3,r31,812
	ctx.r3.s64 = r31.s64 + 812;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20980
	ctx.r4.s64 = ctx.r7.s64 + 20980;
	// addi r3,r31,816
	ctx.r3.s64 = r31.s64 + 816;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,820(r31)
	PPC_STORE_U32(r31.u32 + 820, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,824
	ctx.r3.s64 = r31.s64 + 824;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20960
	ctx.r4.s64 = ctx.r6.s64 + 20960;
	// addi r3,r31,828
	ctx.r3.s64 = r31.s64 + 828;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20920
	ctx.r4.s64 = ctx.r4.s64 + 20920;
	// addi r3,r31,832
	ctx.r3.s64 = r31.s64 + 832;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,840
	ctx.r3.s64 = r31.s64 + 840;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,20896
	ctx.r4.s64 = ctx.r3.s64 + 20896;
	// addi r3,r31,844
	ctx.r3.s64 = r31.s64 + 844;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20872
	ctx.r4.s64 = r11.s64 + 20872;
	// addi r3,r31,848
	ctx.r3.s64 = r31.s64 + 848;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,856
	ctx.r3.s64 = r31.s64 + 856;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,20852
	ctx.r4.s64 = ctx.r10.s64 + 20852;
	// addi r3,r31,860
	ctx.r3.s64 = r31.s64 + 860;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,20828
	ctx.r4.s64 = ctx.r9.s64 + 20828;
	// addi r3,r31,864
	ctx.r3.s64 = r31.s64 + 864;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,868(r31)
	PPC_STORE_U32(r31.u32 + 868, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,872
	ctx.r3.s64 = r31.s64 + 872;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,20808
	ctx.r4.s64 = ctx.r8.s64 + 20808;
	// addi r3,r31,876
	ctx.r3.s64 = r31.s64 + 876;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20784
	ctx.r4.s64 = ctx.r7.s64 + 20784;
	// addi r3,r31,880
	ctx.r3.s64 = r31.s64 + 880;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,884(r31)
	PPC_STORE_U32(r31.u32 + 884, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,888
	ctx.r3.s64 = r31.s64 + 888;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20760
	ctx.r4.s64 = ctx.r6.s64 + 20760;
	// addi r3,r31,892
	ctx.r3.s64 = r31.s64 + 892;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20736
	ctx.r4.s64 = ctx.r4.s64 + 20736;
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,900(r31)
	PPC_STORE_U32(r31.u32 + 900, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,904
	ctx.r3.s64 = r31.s64 + 904;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,20712
	ctx.r4.s64 = ctx.r3.s64 + 20712;
	// addi r3,r31,908
	ctx.r3.s64 = r31.s64 + 908;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20688
	ctx.r4.s64 = r11.s64 + 20688;
	// addi r3,r31,912
	ctx.r3.s64 = r31.s64 + 912;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,916(r31)
	PPC_STORE_U32(r31.u32 + 916, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,920
	ctx.r3.s64 = r31.s64 + 920;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,20668
	ctx.r4.s64 = ctx.r10.s64 + 20668;
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,20644
	ctx.r4.s64 = ctx.r9.s64 + 20644;
	// addi r3,r31,928
	ctx.r3.s64 = r31.s64 + 928;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,932(r31)
	PPC_STORE_U32(r31.u32 + 932, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,936
	ctx.r3.s64 = r31.s64 + 936;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,25936
	ctx.r4.s64 = ctx.r8.s64 + 25936;
	// addi r3,r31,940
	ctx.r3.s64 = r31.s64 + 940;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20624
	ctx.r4.s64 = ctx.r7.s64 + 20624;
	// addi r3,r31,944
	ctx.r3.s64 = r31.s64 + 944;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,948(r31)
	PPC_STORE_U32(r31.u32 + 948, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,952
	ctx.r3.s64 = r31.s64 + 952;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20604
	ctx.r4.s64 = ctx.r6.s64 + 20604;
	// addi r3,r31,956
	ctx.r3.s64 = r31.s64 + 956;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20584
	ctx.r4.s64 = ctx.r4.s64 + 20584;
	// addi r3,r31,960
	ctx.r3.s64 = r31.s64 + 960;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,964(r31)
	PPC_STORE_U32(r31.u32 + 964, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,968
	ctx.r3.s64 = r31.s64 + 968;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,20568
	ctx.r4.s64 = ctx.r3.s64 + 20568;
	// addi r3,r31,972
	ctx.r3.s64 = r31.s64 + 972;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20544
	ctx.r4.s64 = r11.s64 + 20544;
	// addi r3,r31,976
	ctx.r3.s64 = r31.s64 + 976;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,984
	ctx.r3.s64 = r31.s64 + 984;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,20520
	ctx.r4.s64 = ctx.r10.s64 + 20520;
	// addi r3,r31,988
	ctx.r3.s64 = r31.s64 + 988;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,20500
	ctx.r4.s64 = ctx.r9.s64 + 20500;
	// addi r3,r31,992
	ctx.r3.s64 = r31.s64 + 992;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,996(r31)
	PPC_STORE_U32(r31.u32 + 996, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1000
	ctx.r3.s64 = r31.s64 + 1000;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,20480
	ctx.r4.s64 = ctx.r8.s64 + 20480;
	// addi r3,r31,1004
	ctx.r3.s64 = r31.s64 + 1004;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20460
	ctx.r4.s64 = ctx.r7.s64 + 20460;
	// addi r3,r31,1008
	ctx.r3.s64 = r31.s64 + 1008;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1012(r31)
	PPC_STORE_U32(r31.u32 + 1012, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1016
	ctx.r3.s64 = r31.s64 + 1016;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20444
	ctx.r4.s64 = ctx.r6.s64 + 20444;
	// addi r3,r31,1020
	ctx.r3.s64 = r31.s64 + 1020;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20420
	ctx.r4.s64 = ctx.r4.s64 + 20420;
	// addi r3,r31,1024
	ctx.r3.s64 = r31.s64 + 1024;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1028(r31)
	PPC_STORE_U32(r31.u32 + 1028, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1032
	ctx.r3.s64 = r31.s64 + 1032;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,20392
	ctx.r4.s64 = ctx.r3.s64 + 20392;
	// addi r3,r31,1036
	ctx.r3.s64 = r31.s64 + 1036;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20376
	ctx.r4.s64 = r11.s64 + 20376;
	// addi r3,r31,1040
	ctx.r3.s64 = r31.s64 + 1040;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1044(r31)
	PPC_STORE_U32(r31.u32 + 1044, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1048
	ctx.r3.s64 = r31.s64 + 1048;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,20360
	ctx.r4.s64 = ctx.r10.s64 + 20360;
	// addi r3,r31,1052
	ctx.r3.s64 = r31.s64 + 1052;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,20348
	ctx.r4.s64 = ctx.r9.s64 + 20348;
	// addi r3,r31,1056
	ctx.r3.s64 = r31.s64 + 1056;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1060(r31)
	PPC_STORE_U32(r31.u32 + 1060, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1064
	ctx.r3.s64 = r31.s64 + 1064;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,20336
	ctx.r4.s64 = ctx.r8.s64 + 20336;
	// addi r3,r31,1068
	ctx.r3.s64 = r31.s64 + 1068;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20312
	ctx.r4.s64 = ctx.r7.s64 + 20312;
	// addi r3,r31,1072
	ctx.r3.s64 = r31.s64 + 1072;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1076(r31)
	PPC_STORE_U32(r31.u32 + 1076, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1080
	ctx.r3.s64 = r31.s64 + 1080;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20292
	ctx.r4.s64 = ctx.r6.s64 + 20292;
	// addi r3,r31,1084
	ctx.r3.s64 = r31.s64 + 1084;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20276
	ctx.r4.s64 = ctx.r4.s64 + 20276;
	// addi r3,r31,1088
	ctx.r3.s64 = r31.s64 + 1088;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1092(r31)
	PPC_STORE_U32(r31.u32 + 1092, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1096
	ctx.r3.s64 = r31.s64 + 1096;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,20260
	ctx.r4.s64 = ctx.r3.s64 + 20260;
	// addi r3,r31,1100
	ctx.r3.s64 = r31.s64 + 1100;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20240
	ctx.r4.s64 = r11.s64 + 20240;
	// addi r3,r31,1104
	ctx.r3.s64 = r31.s64 + 1104;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1108(r31)
	PPC_STORE_U32(r31.u32 + 1108, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1112
	ctx.r3.s64 = r31.s64 + 1112;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,20220
	ctx.r4.s64 = ctx.r10.s64 + 20220;
	// addi r3,r31,1116
	ctx.r3.s64 = r31.s64 + 1116;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,20200
	ctx.r4.s64 = ctx.r9.s64 + 20200;
	// addi r3,r31,1120
	ctx.r3.s64 = r31.s64 + 1120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1128
	ctx.r3.s64 = r31.s64 + 1128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,20184
	ctx.r4.s64 = ctx.r8.s64 + 20184;
	// addi r3,r31,1132
	ctx.r3.s64 = r31.s64 + 1132;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20172
	ctx.r4.s64 = ctx.r7.s64 + 20172;
	// addi r3,r31,1136
	ctx.r3.s64 = r31.s64 + 1136;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1144
	ctx.r3.s64 = r31.s64 + 1144;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20160
	ctx.r4.s64 = ctx.r6.s64 + 20160;
	// addi r3,r31,1148
	ctx.r3.s64 = r31.s64 + 1148;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20144
	ctx.r4.s64 = ctx.r4.s64 + 20144;
	// addi r3,r31,1152
	ctx.r3.s64 = r31.s64 + 1152;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1156(r31)
	PPC_STORE_U32(r31.u32 + 1156, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1160
	ctx.r3.s64 = r31.s64 + 1160;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,20128
	ctx.r4.s64 = ctx.r3.s64 + 20128;
	// addi r3,r31,1164
	ctx.r3.s64 = r31.s64 + 1164;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20116
	ctx.r4.s64 = r11.s64 + 20116;
	// addi r3,r31,1168
	ctx.r3.s64 = r31.s64 + 1168;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1172(r31)
	PPC_STORE_U32(r31.u32 + 1172, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1176
	ctx.r3.s64 = r31.s64 + 1176;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,20104
	ctx.r4.s64 = ctx.r10.s64 + 20104;
	// addi r3,r31,1180
	ctx.r3.s64 = r31.s64 + 1180;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-10852
	ctx.r4.s64 = ctx.r9.s64 + -10852;
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1188(r31)
	PPC_STORE_U32(r31.u32 + 1188, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1192
	ctx.r3.s64 = r31.s64 + 1192;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,20092
	ctx.r4.s64 = ctx.r8.s64 + 20092;
	// addi r3,r31,1196
	ctx.r3.s64 = r31.s64 + 1196;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,20068
	ctx.r4.s64 = ctx.r7.s64 + 20068;
	// addi r3,r31,1200
	ctx.r3.s64 = r31.s64 + 1200;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,1204(r31)
	PPC_STORE_U32(r31.u32 + 1204, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1208
	ctx.r3.s64 = r31.s64 + 1208;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,20048
	ctx.r4.s64 = ctx.r6.s64 + 20048;
	// addi r3,r31,1212
	ctx.r3.s64 = r31.s64 + 1212;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,20028
	ctx.r4.s64 = ctx.r4.s64 + 20028;
	// addi r3,r31,1216
	ctx.r3.s64 = r31.s64 + 1216;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r11,1220(r31)
	PPC_STORE_U32(r31.u32 + 1220, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r3,20020
	r30.s64 = ctx.r3.s64 + 20020;
	// addi r3,r31,1224
	ctx.r3.s64 = r31.s64 + 1224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,20004
	ctx.r4.s64 = r11.s64 + 20004;
	// addi r3,r31,1228
	ctx.r3.s64 = r31.s64 + 1228;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19984
	ctx.r4.s64 = ctx.r10.s64 + 19984;
	// addi r3,r31,1232
	ctx.r3.s64 = r31.s64 + 1232;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1236(r31)
	PPC_STORE_U32(r31.u32 + 1236, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1240
	ctx.r3.s64 = r31.s64 + 1240;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19968
	ctx.r4.s64 = ctx.r9.s64 + 19968;
	// addi r3,r31,1244
	ctx.r3.s64 = r31.s64 + 1244;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19944
	ctx.r4.s64 = ctx.r8.s64 + 19944;
	// addi r3,r31,1248
	ctx.r3.s64 = r31.s64 + 1248;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1252(r31)
	PPC_STORE_U32(r31.u32 + 1252, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1256
	ctx.r3.s64 = r31.s64 + 1256;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,19920
	ctx.r4.s64 = ctx.r7.s64 + 19920;
	// addi r3,r31,1260
	ctx.r3.s64 = r31.s64 + 1260;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,19896
	ctx.r4.s64 = ctx.r6.s64 + 19896;
	// addi r3,r31,1264
	ctx.r3.s64 = r31.s64 + 1264;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1268(r31)
	PPC_STORE_U32(r31.u32 + 1268, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1272
	ctx.r3.s64 = r31.s64 + 1272;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,19876
	ctx.r4.s64 = ctx.r4.s64 + 19876;
	// addi r3,r31,1276
	ctx.r3.s64 = r31.s64 + 1276;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,19856
	ctx.r4.s64 = ctx.r3.s64 + 19856;
	// addi r3,r31,1280
	ctx.r3.s64 = r31.s64 + 1280;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1284(r31)
	PPC_STORE_U32(r31.u32 + 1284, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1288
	ctx.r3.s64 = r31.s64 + 1288;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19836
	ctx.r4.s64 = r11.s64 + 19836;
	// addi r3,r31,1292
	ctx.r3.s64 = r31.s64 + 1292;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19812
	ctx.r4.s64 = ctx.r10.s64 + 19812;
	// addi r3,r31,1296
	ctx.r3.s64 = r31.s64 + 1296;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1300(r31)
	PPC_STORE_U32(r31.u32 + 1300, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1304
	ctx.r3.s64 = r31.s64 + 1304;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19792
	ctx.r4.s64 = ctx.r9.s64 + 19792;
	// addi r3,r31,1308
	ctx.r3.s64 = r31.s64 + 1308;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19772
	ctx.r4.s64 = ctx.r8.s64 + 19772;
	// addi r3,r31,1312
	ctx.r3.s64 = r31.s64 + 1312;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1316(r31)
	PPC_STORE_U32(r31.u32 + 1316, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1320
	ctx.r3.s64 = r31.s64 + 1320;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,19752
	ctx.r4.s64 = ctx.r7.s64 + 19752;
	// addi r3,r31,1324
	ctx.r3.s64 = r31.s64 + 1324;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,19724
	ctx.r4.s64 = ctx.r6.s64 + 19724;
	// addi r3,r31,1328
	ctx.r3.s64 = r31.s64 + 1328;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1332(r31)
	PPC_STORE_U32(r31.u32 + 1332, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1336
	ctx.r3.s64 = r31.s64 + 1336;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,30728
	ctx.r4.s64 = ctx.r4.s64 + 30728;
	// addi r3,r31,1340
	ctx.r3.s64 = r31.s64 + 1340;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,19700
	ctx.r4.s64 = ctx.r3.s64 + 19700;
	// addi r3,r31,1344
	ctx.r3.s64 = r31.s64 + 1344;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1348(r31)
	PPC_STORE_U32(r31.u32 + 1348, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1352
	ctx.r3.s64 = r31.s64 + 1352;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19680
	ctx.r4.s64 = r11.s64 + 19680;
	// addi r3,r31,1356
	ctx.r3.s64 = r31.s64 + 1356;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19656
	ctx.r4.s64 = ctx.r10.s64 + 19656;
	// addi r3,r31,1360
	ctx.r3.s64 = r31.s64 + 1360;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1364(r31)
	PPC_STORE_U32(r31.u32 + 1364, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1368
	ctx.r3.s64 = r31.s64 + 1368;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19636
	ctx.r4.s64 = ctx.r9.s64 + 19636;
	// addi r3,r31,1372
	ctx.r3.s64 = r31.s64 + 1372;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19620
	ctx.r4.s64 = ctx.r8.s64 + 19620;
	// addi r3,r31,1376
	ctx.r3.s64 = r31.s64 + 1376;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,1380(r31)
	PPC_STORE_U32(r31.u32 + 1380, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r7,19604
	r30.s64 = ctx.r7.s64 + 19604;
	// addi r3,r31,1384
	ctx.r3.s64 = r31.s64 + 1384;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,19580
	ctx.r4.s64 = ctx.r6.s64 + 19580;
	// addi r3,r31,1388
	ctx.r3.s64 = r31.s64 + 1388;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,19556
	ctx.r4.s64 = ctx.r4.s64 + 19556;
	// addi r3,r31,1392
	ctx.r3.s64 = r31.s64 + 1392;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1400
	ctx.r3.s64 = r31.s64 + 1400;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,19528
	ctx.r4.s64 = ctx.r3.s64 + 19528;
	// addi r3,r31,1404
	ctx.r3.s64 = r31.s64 + 1404;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19508
	ctx.r4.s64 = r11.s64 + 19508;
	// addi r3,r31,1408
	ctx.r3.s64 = r31.s64 + 1408;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1412(r31)
	PPC_STORE_U32(r31.u32 + 1412, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1416
	ctx.r3.s64 = r31.s64 + 1416;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19480
	ctx.r4.s64 = ctx.r10.s64 + 19480;
	// addi r3,r31,1420
	ctx.r3.s64 = r31.s64 + 1420;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19464
	ctx.r4.s64 = ctx.r9.s64 + 19464;
	// addi r3,r31,1424
	ctx.r3.s64 = r31.s64 + 1424;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(r31.u32 + 1428, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1432
	ctx.r3.s64 = r31.s64 + 1432;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19440
	ctx.r4.s64 = ctx.r8.s64 + 19440;
	// addi r3,r31,1436
	ctx.r3.s64 = r31.s64 + 1436;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,19416
	ctx.r4.s64 = ctx.r7.s64 + 19416;
	// addi r3,r31,1440
	ctx.r3.s64 = r31.s64 + 1440;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1444(r31)
	PPC_STORE_U32(r31.u32 + 1444, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1448
	ctx.r3.s64 = r31.s64 + 1448;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,19388
	ctx.r4.s64 = ctx.r6.s64 + 19388;
	// addi r3,r31,1452
	ctx.r3.s64 = r31.s64 + 1452;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,19368
	ctx.r4.s64 = ctx.r4.s64 + 19368;
	// addi r3,r31,1456
	ctx.r3.s64 = r31.s64 + 1456;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1460(r31)
	PPC_STORE_U32(r31.u32 + 1460, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1464
	ctx.r3.s64 = r31.s64 + 1464;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,19340
	ctx.r4.s64 = ctx.r3.s64 + 19340;
	// addi r3,r31,1468
	ctx.r3.s64 = r31.s64 + 1468;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19324
	ctx.r4.s64 = r11.s64 + 19324;
	// addi r3,r31,1472
	ctx.r3.s64 = r31.s64 + 1472;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,1476(r31)
	PPC_STORE_U32(r31.u32 + 1476, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r10,15644
	r30.s64 = ctx.r10.s64 + 15644;
	// addi r3,r31,1480
	ctx.r3.s64 = r31.s64 + 1480;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19312
	ctx.r4.s64 = ctx.r9.s64 + 19312;
	// addi r3,r31,1484
	ctx.r3.s64 = r31.s64 + 1484;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19296
	ctx.r4.s64 = ctx.r8.s64 + 19296;
	// addi r3,r31,1488
	ctx.r3.s64 = r31.s64 + 1488;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1492(r31)
	PPC_STORE_U32(r31.u32 + 1492, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1496
	ctx.r3.s64 = r31.s64 + 1496;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,19284
	ctx.r4.s64 = ctx.r7.s64 + 19284;
	// addi r3,r31,1500
	ctx.r3.s64 = r31.s64 + 1500;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,19264
	ctx.r4.s64 = ctx.r6.s64 + 19264;
	// addi r3,r31,1504
	ctx.r3.s64 = r31.s64 + 1504;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1508(r31)
	PPC_STORE_U32(r31.u32 + 1508, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1512
	ctx.r3.s64 = r31.s64 + 1512;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,19248
	ctx.r4.s64 = ctx.r4.s64 + 19248;
	// addi r3,r31,1516
	ctx.r3.s64 = r31.s64 + 1516;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,19232
	ctx.r4.s64 = ctx.r3.s64 + 19232;
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1524(r31)
	PPC_STORE_U32(r31.u32 + 1524, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1528
	ctx.r3.s64 = r31.s64 + 1528;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19216
	ctx.r4.s64 = r11.s64 + 19216;
	// addi r3,r31,1532
	ctx.r3.s64 = r31.s64 + 1532;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19196
	ctx.r4.s64 = ctx.r10.s64 + 19196;
	// addi r3,r31,1536
	ctx.r3.s64 = r31.s64 + 1536;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1544
	ctx.r3.s64 = r31.s64 + 1544;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19180
	ctx.r4.s64 = ctx.r9.s64 + 19180;
	// addi r3,r31,1548
	ctx.r3.s64 = r31.s64 + 1548;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19160
	ctx.r4.s64 = ctx.r8.s64 + 19160;
	// addi r3,r31,1552
	ctx.r3.s64 = r31.s64 + 1552;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1556(r31)
	PPC_STORE_U32(r31.u32 + 1556, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1560
	ctx.r3.s64 = r31.s64 + 1560;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,19140
	ctx.r4.s64 = ctx.r7.s64 + 19140;
	// addi r3,r31,1564
	ctx.r3.s64 = r31.s64 + 1564;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,19116
	ctx.r4.s64 = ctx.r6.s64 + 19116;
	// addi r3,r31,1568
	ctx.r3.s64 = r31.s64 + 1568;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1572(r31)
	PPC_STORE_U32(r31.u32 + 1572, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1576
	ctx.r3.s64 = r31.s64 + 1576;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,19096
	ctx.r4.s64 = ctx.r4.s64 + 19096;
	// addi r3,r31,1580
	ctx.r3.s64 = r31.s64 + 1580;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,19076
	ctx.r4.s64 = ctx.r3.s64 + 19076;
	// addi r3,r31,1584
	ctx.r3.s64 = r31.s64 + 1584;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1588(r31)
	PPC_STORE_U32(r31.u32 + 1588, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1592
	ctx.r3.s64 = r31.s64 + 1592;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,19064
	ctx.r4.s64 = r11.s64 + 19064;
	// addi r3,r31,1596
	ctx.r3.s64 = r31.s64 + 1596;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,19044
	ctx.r4.s64 = ctx.r10.s64 + 19044;
	// addi r3,r31,1600
	ctx.r3.s64 = r31.s64 + 1600;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1604(r31)
	PPC_STORE_U32(r31.u32 + 1604, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1608
	ctx.r3.s64 = r31.s64 + 1608;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,19028
	ctx.r4.s64 = ctx.r9.s64 + 19028;
	// addi r3,r31,1612
	ctx.r3.s64 = r31.s64 + 1612;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,19012
	ctx.r4.s64 = ctx.r8.s64 + 19012;
	// addi r3,r31,1616
	ctx.r3.s64 = r31.s64 + 1616;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1620(r31)
	PPC_STORE_U32(r31.u32 + 1620, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1624
	ctx.r3.s64 = r31.s64 + 1624;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,19000
	ctx.r4.s64 = ctx.r7.s64 + 19000;
	// addi r3,r31,1628
	ctx.r3.s64 = r31.s64 + 1628;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18976
	ctx.r4.s64 = ctx.r6.s64 + 18976;
	// addi r3,r31,1632
	ctx.r3.s64 = r31.s64 + 1632;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r11,1636(r31)
	PPC_STORE_U32(r31.u32 + 1636, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r4,15244
	r30.s64 = ctx.r4.s64 + 15244;
	// addi r3,r31,1640
	ctx.r3.s64 = r31.s64 + 1640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18956
	ctx.r4.s64 = ctx.r3.s64 + 18956;
	// addi r3,r31,1644
	ctx.r3.s64 = r31.s64 + 1644;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18928
	ctx.r4.s64 = r11.s64 + 18928;
	// addi r3,r31,1648
	ctx.r3.s64 = r31.s64 + 1648;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1652(r31)
	PPC_STORE_U32(r31.u32 + 1652, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1656
	ctx.r3.s64 = r31.s64 + 1656;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,18908
	ctx.r4.s64 = ctx.r10.s64 + 18908;
	// addi r3,r31,1660
	ctx.r3.s64 = r31.s64 + 1660;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18880
	ctx.r4.s64 = ctx.r9.s64 + 18880;
	// addi r3,r31,1664
	ctx.r3.s64 = r31.s64 + 1664;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(r31.u32 + 1668, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1672
	ctx.r3.s64 = r31.s64 + 1672;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18860
	ctx.r4.s64 = ctx.r8.s64 + 18860;
	// addi r3,r31,1676
	ctx.r3.s64 = r31.s64 + 1676;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18832
	ctx.r4.s64 = ctx.r7.s64 + 18832;
	// addi r3,r31,1680
	ctx.r3.s64 = r31.s64 + 1680;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1684(r31)
	PPC_STORE_U32(r31.u32 + 1684, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1688
	ctx.r3.s64 = r31.s64 + 1688;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18812
	ctx.r4.s64 = ctx.r6.s64 + 18812;
	// addi r3,r31,1692
	ctx.r3.s64 = r31.s64 + 1692;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18784
	ctx.r4.s64 = ctx.r4.s64 + 18784;
	// addi r3,r31,1696
	ctx.r3.s64 = r31.s64 + 1696;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1700(r31)
	PPC_STORE_U32(r31.u32 + 1700, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1704
	ctx.r3.s64 = r31.s64 + 1704;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18764
	ctx.r4.s64 = ctx.r3.s64 + 18764;
	// addi r3,r31,1708
	ctx.r3.s64 = r31.s64 + 1708;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18740
	ctx.r4.s64 = r11.s64 + 18740;
	// addi r3,r31,1712
	ctx.r3.s64 = r31.s64 + 1712;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1716(r31)
	PPC_STORE_U32(r31.u32 + 1716, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1720
	ctx.r3.s64 = r31.s64 + 1720;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,18724
	ctx.r4.s64 = ctx.r10.s64 + 18724;
	// addi r3,r31,1724
	ctx.r3.s64 = r31.s64 + 1724;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18700
	ctx.r4.s64 = ctx.r9.s64 + 18700;
	// addi r3,r31,1728
	ctx.r3.s64 = r31.s64 + 1728;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1732(r31)
	PPC_STORE_U32(r31.u32 + 1732, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1736
	ctx.r3.s64 = r31.s64 + 1736;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18684
	ctx.r4.s64 = ctx.r8.s64 + 18684;
	// addi r3,r31,1740
	ctx.r3.s64 = r31.s64 + 1740;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18660
	ctx.r4.s64 = ctx.r7.s64 + 18660;
	// addi r3,r31,1744
	ctx.r3.s64 = r31.s64 + 1744;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1748(r31)
	PPC_STORE_U32(r31.u32 + 1748, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1752
	ctx.r3.s64 = r31.s64 + 1752;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18644
	ctx.r4.s64 = ctx.r6.s64 + 18644;
	// addi r3,r31,1756
	ctx.r3.s64 = r31.s64 + 1756;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18620
	ctx.r4.s64 = ctx.r4.s64 + 18620;
	// addi r3,r31,1760
	ctx.r3.s64 = r31.s64 + 1760;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1764(r31)
	PPC_STORE_U32(r31.u32 + 1764, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1768
	ctx.r3.s64 = r31.s64 + 1768;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18604
	ctx.r4.s64 = ctx.r3.s64 + 18604;
	// addi r3,r31,1772
	ctx.r3.s64 = r31.s64 + 1772;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18580
	ctx.r4.s64 = r11.s64 + 18580;
	// addi r3,r31,1776
	ctx.r3.s64 = r31.s64 + 1776;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1780(r31)
	PPC_STORE_U32(r31.u32 + 1780, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1784
	ctx.r3.s64 = r31.s64 + 1784;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,18564
	ctx.r4.s64 = ctx.r10.s64 + 18564;
	// addi r3,r31,1788
	ctx.r3.s64 = r31.s64 + 1788;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18540
	ctx.r4.s64 = ctx.r9.s64 + 18540;
	// addi r3,r31,1792
	ctx.r3.s64 = r31.s64 + 1792;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1796(r31)
	PPC_STORE_U32(r31.u32 + 1796, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1800
	ctx.r3.s64 = r31.s64 + 1800;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18524
	ctx.r4.s64 = ctx.r8.s64 + 18524;
	// addi r3,r31,1804
	ctx.r3.s64 = r31.s64 + 1804;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18500
	ctx.r4.s64 = ctx.r7.s64 + 18500;
	// addi r3,r31,1808
	ctx.r3.s64 = r31.s64 + 1808;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1812(r31)
	PPC_STORE_U32(r31.u32 + 1812, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1816
	ctx.r3.s64 = r31.s64 + 1816;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18484
	ctx.r4.s64 = ctx.r6.s64 + 18484;
	// addi r3,r31,1820
	ctx.r3.s64 = r31.s64 + 1820;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18460
	ctx.r4.s64 = ctx.r4.s64 + 18460;
	// addi r3,r31,1824
	ctx.r3.s64 = r31.s64 + 1824;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1828(r31)
	PPC_STORE_U32(r31.u32 + 1828, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1832
	ctx.r3.s64 = r31.s64 + 1832;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18444
	ctx.r4.s64 = ctx.r3.s64 + 18444;
	// addi r3,r31,1836
	ctx.r3.s64 = r31.s64 + 1836;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18420
	ctx.r4.s64 = r11.s64 + 18420;
	// addi r3,r31,1840
	ctx.r3.s64 = r31.s64 + 1840;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1844(r31)
	PPC_STORE_U32(r31.u32 + 1844, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1848
	ctx.r3.s64 = r31.s64 + 1848;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,18404
	ctx.r4.s64 = ctx.r10.s64 + 18404;
	// addi r3,r31,1852
	ctx.r3.s64 = r31.s64 + 1852;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18380
	ctx.r4.s64 = ctx.r9.s64 + 18380;
	// addi r3,r31,1856
	ctx.r3.s64 = r31.s64 + 1856;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1860(r31)
	PPC_STORE_U32(r31.u32 + 1860, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1864
	ctx.r3.s64 = r31.s64 + 1864;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18360
	ctx.r4.s64 = ctx.r8.s64 + 18360;
	// addi r3,r31,1868
	ctx.r3.s64 = r31.s64 + 1868;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18340
	ctx.r4.s64 = ctx.r7.s64 + 18340;
	// addi r3,r31,1872
	ctx.r3.s64 = r31.s64 + 1872;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1876(r31)
	PPC_STORE_U32(r31.u32 + 1876, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1880
	ctx.r3.s64 = r31.s64 + 1880;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18324
	ctx.r4.s64 = ctx.r6.s64 + 18324;
	// addi r3,r31,1884
	ctx.r3.s64 = r31.s64 + 1884;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18304
	ctx.r4.s64 = ctx.r4.s64 + 18304;
	// addi r3,r31,1888
	ctx.r3.s64 = r31.s64 + 1888;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1892(r31)
	PPC_STORE_U32(r31.u32 + 1892, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1896
	ctx.r3.s64 = r31.s64 + 1896;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18292
	ctx.r4.s64 = ctx.r3.s64 + 18292;
	// addi r3,r31,1900
	ctx.r3.s64 = r31.s64 + 1900;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18272
	ctx.r4.s64 = r11.s64 + 18272;
	// addi r3,r31,1904
	ctx.r3.s64 = r31.s64 + 1904;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1908(r31)
	PPC_STORE_U32(r31.u32 + 1908, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1912
	ctx.r3.s64 = r31.s64 + 1912;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,18260
	ctx.r4.s64 = ctx.r10.s64 + 18260;
	// addi r3,r31,1916
	ctx.r3.s64 = r31.s64 + 1916;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18236
	ctx.r4.s64 = ctx.r9.s64 + 18236;
	// addi r3,r31,1920
	ctx.r3.s64 = r31.s64 + 1920;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1924(r31)
	PPC_STORE_U32(r31.u32 + 1924, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1928
	ctx.r3.s64 = r31.s64 + 1928;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18220
	ctx.r4.s64 = ctx.r8.s64 + 18220;
	// addi r3,r31,1932
	ctx.r3.s64 = r31.s64 + 1932;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18196
	ctx.r4.s64 = ctx.r7.s64 + 18196;
	// addi r3,r31,1936
	ctx.r3.s64 = r31.s64 + 1936;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1940(r31)
	PPC_STORE_U32(r31.u32 + 1940, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1944
	ctx.r3.s64 = r31.s64 + 1944;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18180
	ctx.r4.s64 = ctx.r6.s64 + 18180;
	// addi r3,r31,1948
	ctx.r3.s64 = r31.s64 + 1948;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18156
	ctx.r4.s64 = ctx.r4.s64 + 18156;
	// addi r3,r31,1952
	ctx.r3.s64 = r31.s64 + 1952;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1956(r31)
	PPC_STORE_U32(r31.u32 + 1956, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1960
	ctx.r3.s64 = r31.s64 + 1960;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18140
	ctx.r4.s64 = ctx.r3.s64 + 18140;
	// addi r3,r31,1964
	ctx.r3.s64 = r31.s64 + 1964;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,18112
	ctx.r4.s64 = r11.s64 + 18112;
	// addi r3,r31,1968
	ctx.r3.s64 = r31.s64 + 1968;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1972(r31)
	PPC_STORE_U32(r31.u32 + 1972, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1976
	ctx.r3.s64 = r31.s64 + 1976;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,18092
	ctx.r4.s64 = ctx.r10.s64 + 18092;
	// addi r3,r31,1980
	ctx.r3.s64 = r31.s64 + 1980;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18056
	ctx.r4.s64 = ctx.r9.s64 + 18056;
	// addi r3,r31,1984
	ctx.r3.s64 = r31.s64 + 1984;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1988(r31)
	PPC_STORE_U32(r31.u32 + 1988, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,1992
	ctx.r3.s64 = r31.s64 + 1992;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18028
	ctx.r4.s64 = ctx.r8.s64 + 18028;
	// addi r3,r31,1996
	ctx.r3.s64 = r31.s64 + 1996;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18000
	ctx.r4.s64 = ctx.r7.s64 + 18000;
	// addi r3,r31,2000
	ctx.r3.s64 = r31.s64 + 2000;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2004(r31)
	PPC_STORE_U32(r31.u32 + 2004, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2008
	ctx.r3.s64 = r31.s64 + 2008;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,17980
	ctx.r4.s64 = ctx.r6.s64 + 17980;
	// addi r3,r31,2012
	ctx.r3.s64 = r31.s64 + 2012;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,17956
	ctx.r4.s64 = ctx.r4.s64 + 17956;
	// addi r3,r31,2016
	ctx.r3.s64 = r31.s64 + 2016;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2020(r31)
	PPC_STORE_U32(r31.u32 + 2020, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2024
	ctx.r3.s64 = r31.s64 + 2024;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,17940
	ctx.r4.s64 = ctx.r3.s64 + 17940;
	// addi r3,r31,2028
	ctx.r3.s64 = r31.s64 + 2028;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17916
	ctx.r4.s64 = r11.s64 + 17916;
	// addi r3,r31,2032
	ctx.r3.s64 = r31.s64 + 2032;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2036(r31)
	PPC_STORE_U32(r31.u32 + 2036, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2040
	ctx.r3.s64 = r31.s64 + 2040;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,17900
	ctx.r4.s64 = ctx.r10.s64 + 17900;
	// addi r3,r31,2044
	ctx.r3.s64 = r31.s64 + 2044;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,17868
	ctx.r4.s64 = ctx.r9.s64 + 17868;
	// addi r3,r31,2048
	ctx.r3.s64 = r31.s64 + 2048;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2052(r31)
	PPC_STORE_U32(r31.u32 + 2052, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2056
	ctx.r3.s64 = r31.s64 + 2056;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,17844
	ctx.r4.s64 = ctx.r8.s64 + 17844;
	// addi r3,r31,2060
	ctx.r3.s64 = r31.s64 + 2060;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,17820
	ctx.r4.s64 = ctx.r7.s64 + 17820;
	// addi r3,r31,2064
	ctx.r3.s64 = r31.s64 + 2064;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2068(r31)
	PPC_STORE_U32(r31.u32 + 2068, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2072
	ctx.r3.s64 = r31.s64 + 2072;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,17804
	ctx.r4.s64 = ctx.r6.s64 + 17804;
	// addi r3,r31,2076
	ctx.r3.s64 = r31.s64 + 2076;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,17780
	ctx.r4.s64 = ctx.r4.s64 + 17780;
	// addi r3,r31,2080
	ctx.r3.s64 = r31.s64 + 2080;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2088
	ctx.r3.s64 = r31.s64 + 2088;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,17764
	ctx.r4.s64 = ctx.r3.s64 + 17764;
	// addi r3,r31,2092
	ctx.r3.s64 = r31.s64 + 2092;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17740
	ctx.r4.s64 = r11.s64 + 17740;
	// addi r3,r31,2096
	ctx.r3.s64 = r31.s64 + 2096;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2100(r31)
	PPC_STORE_U32(r31.u32 + 2100, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2104
	ctx.r3.s64 = r31.s64 + 2104;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,17724
	ctx.r4.s64 = ctx.r10.s64 + 17724;
	// addi r3,r31,2108
	ctx.r3.s64 = r31.s64 + 2108;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,17692
	ctx.r4.s64 = ctx.r9.s64 + 17692;
	// addi r3,r31,2112
	ctx.r3.s64 = r31.s64 + 2112;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2116(r31)
	PPC_STORE_U32(r31.u32 + 2116, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2120
	ctx.r3.s64 = r31.s64 + 2120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,17668
	ctx.r4.s64 = ctx.r8.s64 + 17668;
	// addi r3,r31,2124
	ctx.r3.s64 = r31.s64 + 2124;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,17640
	ctx.r4.s64 = ctx.r7.s64 + 17640;
	// addi r3,r31,2128
	ctx.r3.s64 = r31.s64 + 2128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,2132(r31)
	PPC_STORE_U32(r31.u32 + 2132, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r6,15416
	r30.s64 = ctx.r6.s64 + 15416;
	// addi r3,r31,2136
	ctx.r3.s64 = r31.s64 + 2136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r29,r4,17624
	r29.s64 = ctx.r4.s64 + 17624;
	// addi r3,r31,2140
	ctx.r3.s64 = r31.s64 + 2140;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,17600
	ctx.r4.s64 = ctx.r3.s64 + 17600;
	// addi r3,r31,2144
	ctx.r3.s64 = r31.s64 + 2144;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2148(r31)
	PPC_STORE_U32(r31.u32 + 2148, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2152
	ctx.r3.s64 = r31.s64 + 2152;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r27,r11,31936
	r27.s64 = r11.s64 + 31936;
	// addi r3,r31,2156
	ctx.r3.s64 = r31.s64 + 2156;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,17568
	ctx.r4.s64 = ctx.r10.s64 + 17568;
	// addi r3,r31,2160
	ctx.r3.s64 = r31.s64 + 2160;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2164(r31)
	PPC_STORE_U32(r31.u32 + 2164, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2168
	ctx.r3.s64 = r31.s64 + 2168;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r26,r9,17552
	r26.s64 = ctx.r9.s64 + 17552;
	// addi r3,r31,2172
	ctx.r3.s64 = r31.s64 + 2172;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,17516
	ctx.r4.s64 = ctx.r8.s64 + 17516;
	// addi r3,r31,2176
	ctx.r3.s64 = r31.s64 + 2176;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2180(r31)
	PPC_STORE_U32(r31.u32 + 2180, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2184
	ctx.r3.s64 = r31.s64 + 2184;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r25,r7,17492
	r25.s64 = ctx.r7.s64 + 17492;
	// addi r3,r31,2188
	ctx.r3.s64 = r31.s64 + 2188;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r24,r6,17464
	r24.s64 = ctx.r6.s64 + 17464;
	// addi r3,r31,2192
	ctx.r3.s64 = r31.s64 + 2192;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2196(r31)
	PPC_STORE_U32(r31.u32 + 2196, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2200
	ctx.r3.s64 = r31.s64 + 2200;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r23,r4,17448
	r23.s64 = ctx.r4.s64 + 17448;
	// addi r3,r31,2204
	ctx.r3.s64 = r31.s64 + 2204;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r22,r3,17420
	r22.s64 = ctx.r3.s64 + 17420;
	// addi r3,r31,2208
	ctx.r3.s64 = r31.s64 + 2208;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2212(r31)
	PPC_STORE_U32(r31.u32 + 2212, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2216
	ctx.r3.s64 = r31.s64 + 2216;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2220
	ctx.r3.s64 = r31.s64 + 2220;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17396
	ctx.r4.s64 = r11.s64 + 17396;
	// addi r3,r31,2224
	ctx.r3.s64 = r31.s64 + 2224;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2228(r31)
	PPC_STORE_U32(r31.u32 + 2228, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2232
	ctx.r3.s64 = r31.s64 + 2232;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r21,r10,17384
	r21.s64 = ctx.r10.s64 + 17384;
	// addi r3,r31,2236
	ctx.r3.s64 = r31.s64 + 2236;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,17360
	ctx.r4.s64 = ctx.r9.s64 + 17360;
	// addi r3,r31,2240
	ctx.r3.s64 = r31.s64 + 2240;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2244(r31)
	PPC_STORE_U32(r31.u32 + 2244, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2248
	ctx.r3.s64 = r31.s64 + 2248;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r20,r8,17348
	r20.s64 = ctx.r8.s64 + 17348;
	// addi r3,r31,2252
	ctx.r3.s64 = r31.s64 + 2252;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,17328
	ctx.r4.s64 = ctx.r7.s64 + 17328;
	// addi r3,r31,2256
	ctx.r3.s64 = r31.s64 + 2256;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2260(r31)
	PPC_STORE_U32(r31.u32 + 2260, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2264
	ctx.r3.s64 = r31.s64 + 2264;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r19,r6,17320
	r19.s64 = ctx.r6.s64 + 17320;
	// addi r3,r31,2268
	ctx.r3.s64 = r31.s64 + 2268;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,17300
	ctx.r4.s64 = ctx.r4.s64 + 17300;
	// addi r3,r31,2272
	ctx.r3.s64 = r31.s64 + 2272;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2276(r31)
	PPC_STORE_U32(r31.u32 + 2276, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2280
	ctx.r3.s64 = r31.s64 + 2280;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r18,r3,17292
	r18.s64 = ctx.r3.s64 + 17292;
	// addi r3,r31,2284
	ctx.r3.s64 = r31.s64 + 2284;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17260
	ctx.r4.s64 = r11.s64 + 17260;
	// addi r3,r31,2288
	ctx.r3.s64 = r31.s64 + 2288;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2292(r31)
	PPC_STORE_U32(r31.u32 + 2292, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2296
	ctx.r3.s64 = r31.s64 + 2296;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r17,r10,17244
	r17.s64 = ctx.r10.s64 + 17244;
	// addi r3,r31,2300
	ctx.r3.s64 = r31.s64 + 2300;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,17212
	ctx.r4.s64 = ctx.r9.s64 + 17212;
	// addi r3,r31,2304
	ctx.r3.s64 = r31.s64 + 2304;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2308(r31)
	PPC_STORE_U32(r31.u32 + 2308, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2312
	ctx.r3.s64 = r31.s64 + 2312;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r16,r8,17196
	r16.s64 = ctx.r8.s64 + 17196;
	// addi r3,r31,2316
	ctx.r3.s64 = r31.s64 + 2316;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,17172
	ctx.r4.s64 = ctx.r7.s64 + 17172;
	// addi r3,r31,2320
	ctx.r3.s64 = r31.s64 + 2320;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2324(r31)
	PPC_STORE_U32(r31.u32 + 2324, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2328
	ctx.r3.s64 = r31.s64 + 2328;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r15,r6,17160
	r15.s64 = ctx.r6.s64 + 17160;
	// addi r3,r31,2332
	ctx.r3.s64 = r31.s64 + 2332;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,17136
	ctx.r4.s64 = ctx.r4.s64 + 17136;
	// addi r3,r31,2336
	ctx.r3.s64 = r31.s64 + 2336;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,2340(r31)
	PPC_STORE_U32(r31.u32 + 2340, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2344
	ctx.r3.s64 = r31.s64 + 2344;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r3,17124
	r30.s64 = ctx.r3.s64 + 17124;
	// addi r3,r31,2348
	ctx.r3.s64 = r31.s64 + 2348;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17096
	ctx.r4.s64 = r11.s64 + 17096;
	// addi r3,r31,2352
	ctx.r3.s64 = r31.s64 + 2352;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,2356(r31)
	PPC_STORE_U32(r31.u32 + 2356, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r14,r10,15360
	r14.s64 = ctx.r10.s64 + 15360;
	// addi r3,r31,2360
	ctx.r3.s64 = r31.s64 + 2360;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2364
	ctx.r3.s64 = r31.s64 + 2364;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,17072
	ctx.r4.s64 = ctx.r9.s64 + 17072;
	// addi r3,r31,2368
	ctx.r3.s64 = r31.s64 + 2368;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2372(r31)
	PPC_STORE_U32(r31.u32 + 2372, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2376
	ctx.r3.s64 = r31.s64 + 2376;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2380
	ctx.r3.s64 = r31.s64 + 2380;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,17040
	ctx.r4.s64 = ctx.r8.s64 + 17040;
	// addi r3,r31,2384
	ctx.r3.s64 = r31.s64 + 2384;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2388(r31)
	PPC_STORE_U32(r31.u32 + 2388, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2392
	ctx.r3.s64 = r31.s64 + 2392;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2396
	ctx.r3.s64 = r31.s64 + 2396;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,17004
	ctx.r4.s64 = ctx.r7.s64 + 17004;
	// addi r3,r31,2400
	ctx.r3.s64 = r31.s64 + 2400;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2404(r31)
	PPC_STORE_U32(r31.u32 + 2404, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2408
	ctx.r3.s64 = r31.s64 + 2408;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2412
	ctx.r3.s64 = r31.s64 + 2412;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2416
	ctx.r3.s64 = r31.s64 + 2416;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2420(r31)
	PPC_STORE_U32(r31.u32 + 2420, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2424
	ctx.r3.s64 = r31.s64 + 2424;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2428
	ctx.r3.s64 = r31.s64 + 2428;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2432
	ctx.r3.s64 = r31.s64 + 2432;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2436(r31)
	PPC_STORE_U32(r31.u32 + 2436, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2440
	ctx.r3.s64 = r31.s64 + 2440;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2444
	ctx.r3.s64 = r31.s64 + 2444;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16980
	ctx.r4.s64 = ctx.r6.s64 + 16980;
	// addi r3,r31,2448
	ctx.r3.s64 = r31.s64 + 2448;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2452(r31)
	PPC_STORE_U32(r31.u32 + 2452, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2456
	ctx.r3.s64 = r31.s64 + 2456;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2460
	ctx.r3.s64 = r31.s64 + 2460;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,16956
	ctx.r4.s64 = ctx.r4.s64 + 16956;
	// addi r3,r31,2464
	ctx.r3.s64 = r31.s64 + 2464;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2468(r31)
	PPC_STORE_U32(r31.u32 + 2468, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2472
	ctx.r3.s64 = r31.s64 + 2472;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2476
	ctx.r3.s64 = r31.s64 + 2476;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,16936
	ctx.r4.s64 = ctx.r3.s64 + 16936;
	// addi r3,r31,2480
	ctx.r3.s64 = r31.s64 + 2480;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2484(r31)
	PPC_STORE_U32(r31.u32 + 2484, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2488
	ctx.r3.s64 = r31.s64 + 2488;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2492
	ctx.r3.s64 = r31.s64 + 2492;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,16916
	ctx.r4.s64 = r11.s64 + 16916;
	// addi r3,r31,2496
	ctx.r3.s64 = r31.s64 + 2496;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2500(r31)
	PPC_STORE_U32(r31.u32 + 2500, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2504
	ctx.r3.s64 = r31.s64 + 2504;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2508
	ctx.r3.s64 = r31.s64 + 2508;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16884
	ctx.r4.s64 = ctx.r10.s64 + 16884;
	// addi r3,r31,2512
	ctx.r3.s64 = r31.s64 + 2512;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2516(r31)
	PPC_STORE_U32(r31.u32 + 2516, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2520
	ctx.r3.s64 = r31.s64 + 2520;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2524
	ctx.r3.s64 = r31.s64 + 2524;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,16852
	ctx.r4.s64 = ctx.r9.s64 + 16852;
	// addi r3,r31,2528
	ctx.r3.s64 = r31.s64 + 2528;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2532(r31)
	PPC_STORE_U32(r31.u32 + 2532, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2536
	ctx.r3.s64 = r31.s64 + 2536;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2540
	ctx.r3.s64 = r31.s64 + 2540;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,16828
	ctx.r4.s64 = ctx.r8.s64 + 16828;
	// addi r3,r31,2544
	ctx.r3.s64 = r31.s64 + 2544;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2548(r31)
	PPC_STORE_U32(r31.u32 + 2548, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2552
	ctx.r3.s64 = r31.s64 + 2552;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2556
	ctx.r3.s64 = r31.s64 + 2556;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,16804
	ctx.r4.s64 = ctx.r7.s64 + 16804;
	// addi r3,r31,2560
	ctx.r3.s64 = r31.s64 + 2560;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2564(r31)
	PPC_STORE_U32(r31.u32 + 2564, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2568
	ctx.r3.s64 = r31.s64 + 2568;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2572
	ctx.r3.s64 = r31.s64 + 2572;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16776
	ctx.r4.s64 = ctx.r6.s64 + 16776;
	// addi r3,r31,2576
	ctx.r3.s64 = r31.s64 + 2576;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r11,2580(r31)
	PPC_STORE_U32(r31.u32 + 2580, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r14,r4,15316
	r14.s64 = ctx.r4.s64 + 15316;
	// addi r3,r31,2584
	ctx.r3.s64 = r31.s64 + 2584;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2588
	ctx.r3.s64 = r31.s64 + 2588;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,16752
	ctx.r4.s64 = ctx.r3.s64 + 16752;
	// addi r3,r31,2592
	ctx.r3.s64 = r31.s64 + 2592;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2596(r31)
	PPC_STORE_U32(r31.u32 + 2596, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2600
	ctx.r3.s64 = r31.s64 + 2600;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2604
	ctx.r3.s64 = r31.s64 + 2604;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,16720
	ctx.r4.s64 = r11.s64 + 16720;
	// addi r3,r31,2608
	ctx.r3.s64 = r31.s64 + 2608;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2612(r31)
	PPC_STORE_U32(r31.u32 + 2612, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2616
	ctx.r3.s64 = r31.s64 + 2616;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2620
	ctx.r3.s64 = r31.s64 + 2620;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16684
	ctx.r4.s64 = ctx.r10.s64 + 16684;
	// addi r3,r31,2624
	ctx.r3.s64 = r31.s64 + 2624;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2628(r31)
	PPC_STORE_U32(r31.u32 + 2628, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2632
	ctx.r3.s64 = r31.s64 + 2632;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2636
	ctx.r3.s64 = r31.s64 + 2636;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2640
	ctx.r3.s64 = r31.s64 + 2640;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2644(r31)
	PPC_STORE_U32(r31.u32 + 2644, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2648
	ctx.r3.s64 = r31.s64 + 2648;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,2652
	ctx.r3.s64 = r31.s64 + 2652;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2656
	ctx.r3.s64 = r31.s64 + 2656;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2660(r31)
	PPC_STORE_U32(r31.u32 + 2660, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2664
	ctx.r3.s64 = r31.s64 + 2664;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2668
	ctx.r3.s64 = r31.s64 + 2668;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,16660
	ctx.r4.s64 = ctx.r9.s64 + 16660;
	// addi r3,r31,2672
	ctx.r3.s64 = r31.s64 + 2672;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2676(r31)
	PPC_STORE_U32(r31.u32 + 2676, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2680
	ctx.r3.s64 = r31.s64 + 2680;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2684
	ctx.r3.s64 = r31.s64 + 2684;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,16636
	ctx.r4.s64 = ctx.r8.s64 + 16636;
	// addi r3,r31,2688
	ctx.r3.s64 = r31.s64 + 2688;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2692(r31)
	PPC_STORE_U32(r31.u32 + 2692, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2696
	ctx.r3.s64 = r31.s64 + 2696;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2700
	ctx.r3.s64 = r31.s64 + 2700;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,16616
	ctx.r4.s64 = ctx.r7.s64 + 16616;
	// addi r3,r31,2704
	ctx.r3.s64 = r31.s64 + 2704;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2708(r31)
	PPC_STORE_U32(r31.u32 + 2708, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2712
	ctx.r3.s64 = r31.s64 + 2712;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2716
	ctx.r3.s64 = r31.s64 + 2716;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16596
	ctx.r4.s64 = ctx.r6.s64 + 16596;
	// addi r3,r31,2720
	ctx.r3.s64 = r31.s64 + 2720;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2724(r31)
	PPC_STORE_U32(r31.u32 + 2724, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2728
	ctx.r3.s64 = r31.s64 + 2728;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2732
	ctx.r3.s64 = r31.s64 + 2732;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,16564
	ctx.r4.s64 = ctx.r4.s64 + 16564;
	// addi r3,r31,2736
	ctx.r3.s64 = r31.s64 + 2736;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2740(r31)
	PPC_STORE_U32(r31.u32 + 2740, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2744
	ctx.r3.s64 = r31.s64 + 2744;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2748
	ctx.r3.s64 = r31.s64 + 2748;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,16532
	ctx.r4.s64 = ctx.r3.s64 + 16532;
	// addi r3,r31,2752
	ctx.r3.s64 = r31.s64 + 2752;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2756(r31)
	PPC_STORE_U32(r31.u32 + 2756, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2760
	ctx.r3.s64 = r31.s64 + 2760;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2764
	ctx.r3.s64 = r31.s64 + 2764;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,16508
	ctx.r4.s64 = r11.s64 + 16508;
	// addi r3,r31,2768
	ctx.r3.s64 = r31.s64 + 2768;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2772(r31)
	PPC_STORE_U32(r31.u32 + 2772, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2776
	ctx.r3.s64 = r31.s64 + 2776;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2780
	ctx.r3.s64 = r31.s64 + 2780;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16484
	ctx.r4.s64 = ctx.r10.s64 + 16484;
	// addi r3,r31,2784
	ctx.r3.s64 = r31.s64 + 2784;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,2788(r31)
	PPC_STORE_U32(r31.u32 + 2788, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2792
	ctx.r3.s64 = r31.s64 + 2792;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2796
	ctx.r3.s64 = r31.s64 + 2796;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,16456
	ctx.r4.s64 = ctx.r9.s64 + 16456;
	// addi r3,r31,2800
	ctx.r3.s64 = r31.s64 + 2800;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,2804(r31)
	PPC_STORE_U32(r31.u32 + 2804, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r24,r8,15272
	r24.s64 = ctx.r8.s64 + 15272;
	// addi r3,r31,2808
	ctx.r3.s64 = r31.s64 + 2808;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2812
	ctx.r3.s64 = r31.s64 + 2812;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,16432
	ctx.r4.s64 = ctx.r7.s64 + 16432;
	// addi r3,r31,2816
	ctx.r3.s64 = r31.s64 + 2816;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2820(r31)
	PPC_STORE_U32(r31.u32 + 2820, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2824
	ctx.r3.s64 = r31.s64 + 2824;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,2828
	ctx.r3.s64 = r31.s64 + 2828;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16400
	ctx.r4.s64 = ctx.r6.s64 + 16400;
	// addi r3,r31,2832
	ctx.r3.s64 = r31.s64 + 2832;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2836(r31)
	PPC_STORE_U32(r31.u32 + 2836, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2840
	ctx.r3.s64 = r31.s64 + 2840;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2844
	ctx.r3.s64 = r31.s64 + 2844;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,16364
	ctx.r4.s64 = ctx.r4.s64 + 16364;
	// addi r3,r31,2848
	ctx.r3.s64 = r31.s64 + 2848;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2852(r31)
	PPC_STORE_U32(r31.u32 + 2852, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2856
	ctx.r3.s64 = r31.s64 + 2856;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2860
	ctx.r3.s64 = r31.s64 + 2860;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,16336
	ctx.r4.s64 = ctx.r3.s64 + 16336;
	// addi r3,r31,2864
	ctx.r3.s64 = r31.s64 + 2864;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2868(r31)
	PPC_STORE_U32(r31.u32 + 2868, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2872
	ctx.r3.s64 = r31.s64 + 2872;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2876
	ctx.r3.s64 = r31.s64 + 2876;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,16308
	ctx.r4.s64 = r11.s64 + 16308;
	// addi r3,r31,2880
	ctx.r3.s64 = r31.s64 + 2880;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2884(r31)
	PPC_STORE_U32(r31.u32 + 2884, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2888
	ctx.r3.s64 = r31.s64 + 2888;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2892
	ctx.r3.s64 = r31.s64 + 2892;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16284
	ctx.r4.s64 = ctx.r10.s64 + 16284;
	// addi r3,r31,2896
	ctx.r3.s64 = r31.s64 + 2896;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2900(r31)
	PPC_STORE_U32(r31.u32 + 2900, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2904
	ctx.r3.s64 = r31.s64 + 2904;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2908
	ctx.r3.s64 = r31.s64 + 2908;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,16260
	ctx.r4.s64 = ctx.r9.s64 + 16260;
	// addi r3,r31,2912
	ctx.r3.s64 = r31.s64 + 2912;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2916(r31)
	PPC_STORE_U32(r31.u32 + 2916, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2920
	ctx.r3.s64 = r31.s64 + 2920;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2924
	ctx.r3.s64 = r31.s64 + 2924;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,16240
	ctx.r4.s64 = ctx.r8.s64 + 16240;
	// addi r3,r31,2928
	ctx.r3.s64 = r31.s64 + 2928;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2932(r31)
	PPC_STORE_U32(r31.u32 + 2932, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2936
	ctx.r3.s64 = r31.s64 + 2936;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2940
	ctx.r3.s64 = r31.s64 + 2940;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,16220
	ctx.r4.s64 = ctx.r7.s64 + 16220;
	// addi r3,r31,2944
	ctx.r3.s64 = r31.s64 + 2944;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2948(r31)
	PPC_STORE_U32(r31.u32 + 2948, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2952
	ctx.r3.s64 = r31.s64 + 2952;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2956
	ctx.r3.s64 = r31.s64 + 2956;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,16188
	ctx.r4.s64 = ctx.r6.s64 + 16188;
	// addi r3,r31,2960
	ctx.r3.s64 = r31.s64 + 2960;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2964(r31)
	PPC_STORE_U32(r31.u32 + 2964, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2968
	ctx.r3.s64 = r31.s64 + 2968;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2972
	ctx.r3.s64 = r31.s64 + 2972;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,16156
	ctx.r4.s64 = ctx.r4.s64 + 16156;
	// addi r3,r31,2976
	ctx.r3.s64 = r31.s64 + 2976;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2980(r31)
	PPC_STORE_U32(r31.u32 + 2980, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2984
	ctx.r3.s64 = r31.s64 + 2984;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,2988
	ctx.r3.s64 = r31.s64 + 2988;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,16132
	ctx.r4.s64 = ctx.r3.s64 + 16132;
	// addi r3,r31,2992
	ctx.r3.s64 = r31.s64 + 2992;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,2996(r31)
	PPC_STORE_U32(r31.u32 + 2996, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3000
	ctx.r3.s64 = r31.s64 + 3000;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3004
	ctx.r3.s64 = r31.s64 + 3004;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,16108
	ctx.r4.s64 = r11.s64 + 16108;
	// addi r3,r31,3008
	ctx.r3.s64 = r31.s64 + 3008;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,3012(r31)
	PPC_STORE_U32(r31.u32 + 3012, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3016
	ctx.r3.s64 = r31.s64 + 3016;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3020
	ctx.r3.s64 = r31.s64 + 3020;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,16084
	ctx.r4.s64 = ctx.r10.s64 + 16084;
	// addi r3,r31,3024
	ctx.r3.s64 = r31.s64 + 3024;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,3028(r31)
	PPC_STORE_U32(r31.u32 + 3028, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,16072
	ctx.r4.s64 = ctx.r9.s64 + 16072;
	// addi r3,r31,3032
	ctx.r3.s64 = r31.s64 + 3032;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,27384
	ctx.r4.s64 = ctx.r8.s64 + 27384;
	// addi r3,r31,3036
	ctx.r3.s64 = r31.s64 + 3036;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,16036
	ctx.r4.s64 = ctx.r7.s64 + 16036;
	// addi r3,r31,3040
	ctx.r3.s64 = r31.s64 + 3040;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,3044(r31)
	PPC_STORE_U32(r31.u32 + 3044, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r6,16012
	r30.s64 = ctx.r6.s64 + 16012;
	// addi r3,r31,3048
	ctx.r3.s64 = r31.s64 + 3048;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,15996
	ctx.r4.s64 = ctx.r4.s64 + 15996;
	// addi r3,r31,3052
	ctx.r3.s64 = r31.s64 + 3052;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,15956
	ctx.r4.s64 = ctx.r3.s64 + 15956;
	// addi r3,r31,3056
	ctx.r3.s64 = r31.s64 + 3056;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,3060(r31)
	PPC_STORE_U32(r31.u32 + 3060, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3064
	ctx.r3.s64 = r31.s64 + 3064;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,15940
	ctx.r4.s64 = r11.s64 + 15940;
	// addi r3,r31,3068
	ctx.r3.s64 = r31.s64 + 3068;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,15880
	ctx.r4.s64 = ctx.r10.s64 + 15880;
	// addi r3,r31,3072
	ctx.r3.s64 = r31.s64 + 3072;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,3076(r31)
	PPC_STORE_U32(r31.u32 + 3076, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3080
	ctx.r3.s64 = r31.s64 + 3080;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,15856
	ctx.r4.s64 = ctx.r9.s64 + 15856;
	// addi r3,r31,3084
	ctx.r3.s64 = r31.s64 + 3084;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,15792
	ctx.r4.s64 = ctx.r8.s64 + 15792;
	// addi r3,r31,3088
	ctx.r3.s64 = r31.s64 + 3088;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,3092(r31)
	PPC_STORE_U32(r31.u32 + 3092, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,3096
	ctx.r3.s64 = r31.s64 + 3096;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,15764
	ctx.r4.s64 = ctx.r7.s64 + 15764;
	// addi r3,r31,3100
	ctx.r3.s64 = r31.s64 + 3100;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// addi r3,r6,-19320
	ctx.r3.s64 = ctx.r6.s64 + -19320;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_832817F8) {
	__imp__sub_832817F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832848B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-2968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2968, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83284910:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x83284910
	if (!cr0.eq) goto loc_83284910;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8328493C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8328493c
	if (!cr0.eq) goto loc_8328493C;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19128
	ctx.r3.s64 = r11.s64 + -19128;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
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

PPC_WEAK_FUNC(sub_832848B8) {
	__imp__sub_832848B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23900
	ctx.r4.s64 = r11.s64 + 23900;
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-2964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2964, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_832849D0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x832849d0
	if (!cr0.eq) goto loc_832849D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_832849FC:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x832849fc
	if (!cr0.eq) goto loc_832849FC;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19120
	ctx.r3.s64 = r11.s64 + -19120;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
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

PPC_WEAK_FUNC(sub_83284978) {
	__imp__sub_83284978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23940
	ctx.r4.s64 = r11.s64 + 23940;
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-2960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2960, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83284A90:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x83284a90
	if (!cr0.eq) goto loc_83284A90;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_83284ABC:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x83284abc
	if (!cr0.eq) goto loc_83284ABC;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19112
	ctx.r3.s64 = r11.s64 + -19112;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
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

PPC_WEAK_FUNC(sub_83284A38) {
	__imp__sub_83284A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23984
	ctx.r4.s64 = r11.s64 + 23984;
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
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-2956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2956, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83284B50:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x83284b50
	if (!cr0.eq) goto loc_83284B50;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_83284B7C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x83284b7c
	if (!cr0.eq) goto loc_83284B7C;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-19104
	ctx.r3.s64 = r11.s64 + -19104;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
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

PPC_WEAK_FUNC(sub_83284AF8) {
	__imp__sub_83284AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284BB8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2952
	ctx.r3.s64 = ctx.r10.s64 + -2952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19096
	ctx.r3.s64 = ctx.r9.s64 + -19096;
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

PPC_WEAK_FUNC(sub_83284BB8) {
	__imp__sub_83284BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284BF8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2948
	ctx.r3.s64 = ctx.r10.s64 + -2948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19080
	ctx.r3.s64 = ctx.r9.s64 + -19080;
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

PPC_WEAK_FUNC(sub_83284BF8) {
	__imp__sub_83284BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284C38) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2944
	ctx.r3.s64 = ctx.r10.s64 + -2944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19064
	ctx.r3.s64 = ctx.r9.s64 + -19064;
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

PPC_WEAK_FUNC(sub_83284C38) {
	__imp__sub_83284C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284C78) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2940
	ctx.r3.s64 = ctx.r10.s64 + -2940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19048
	ctx.r3.s64 = ctx.r9.s64 + -19048;
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

PPC_WEAK_FUNC(sub_83284C78) {
	__imp__sub_83284C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284CB8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2936
	ctx.r3.s64 = ctx.r10.s64 + -2936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19032
	ctx.r3.s64 = ctx.r9.s64 + -19032;
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

PPC_WEAK_FUNC(sub_83284CB8) {
	__imp__sub_83284CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284CF8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2932
	ctx.r3.s64 = ctx.r10.s64 + -2932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19016
	ctx.r3.s64 = ctx.r9.s64 + -19016;
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

PPC_WEAK_FUNC(sub_83284CF8) {
	__imp__sub_83284CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284D38) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2928
	ctx.r3.s64 = ctx.r10.s64 + -2928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-19000
	ctx.r3.s64 = ctx.r9.s64 + -19000;
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

PPC_WEAK_FUNC(sub_83284D38) {
	__imp__sub_83284D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284D78) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2924
	ctx.r3.s64 = ctx.r10.s64 + -2924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-18984
	ctx.r3.s64 = ctx.r9.s64 + -18984;
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

PPC_WEAK_FUNC(sub_83284D78) {
	__imp__sub_83284D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18968
	ctx.r3.s64 = r11.s64 + -18968;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284DB8) {
	__imp__sub_83284DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18952
	ctx.r3.s64 = r11.s64 + -18952;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284DC8) {
	__imp__sub_83284DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18864
	ctx.r3.s64 = r11.s64 + -18864;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284DD8) {
	__imp__sub_83284DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_83284DF4:
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
	// bne 0x83284df4
	if (!cr0.eq) goto loc_83284DF4;
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r5,-2872
	ctx.r3.s64 = ctx.r5.s64 + -2872;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_83284E24:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r6,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwcx. r6,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83284e24
	if (!cr0.eq) goto loc_83284E24;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_83284E4C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x83284e4c
	if (!cr0.eq) goto loc_83284E4C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_83284E70:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83284e70
	if (!cr0.eq) goto loc_83284E70;
	// lis r3,-31957
	ctx.r3.s64 = -2094333952;
	// addi r3,r3,-18848
	ctx.r3.s64 = ctx.r3.s64 + -18848;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284DE8) {
	__imp__sub_83284DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18768
	ctx.r3.s64 = r11.s64 + -18768;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284E98) {
	__imp__sub_83284E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18728
	ctx.r3.s64 = r11.s64 + -18728;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284EA8) {
	__imp__sub_83284EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18640
	ctx.r3.s64 = r11.s64 + -18640;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284EB8) {
	__imp__sub_83284EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18552
	ctx.r3.s64 = r11.s64 + -18552;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284EC8) {
	__imp__sub_83284EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18464
	ctx.r3.s64 = r11.s64 + -18464;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284ED8) {
	__imp__sub_83284ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18376
	ctx.r3.s64 = r11.s64 + -18376;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284EE8) {
	__imp__sub_83284EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18288
	ctx.r3.s64 = r11.s64 + -18288;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284EF8) {
	__imp__sub_83284EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18200
	ctx.r3.s64 = r11.s64 + -18200;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284F08) {
	__imp__sub_83284F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-18112
	ctx.r3.s64 = r11.s64 + -18112;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284F18) {
	__imp__sub_83284F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F28) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2820
	ctx.r3.s64 = r11.s64 + -2820;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-17992
	ctx.r3.s64 = ctx.r10.s64 + -17992;
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

PPC_WEAK_FUNC(sub_83284F28) {
	__imp__sub_83284F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17984
	ctx.r3.s64 = r11.s64 + -17984;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284F60) {
	__imp__sub_83284F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17968
	ctx.r3.s64 = r11.s64 + -17968;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284F70) {
	__imp__sub_83284F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17952
	ctx.r3.s64 = r11.s64 + -17952;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284F80) {
	__imp__sub_83284F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17936
	ctx.r3.s64 = r11.s64 + -17936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284F90) {
	__imp__sub_83284F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17920
	ctx.r3.s64 = r11.s64 + -17920;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284FA0) {
	__imp__sub_83284FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17904
	ctx.r3.s64 = r11.s64 + -17904;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284FB0) {
	__imp__sub_83284FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17888
	ctx.r3.s64 = r11.s64 + -17888;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284FC0) {
	__imp__sub_83284FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17800
	ctx.r3.s64 = r11.s64 + -17800;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284FD0) {
	__imp__sub_83284FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17704
	ctx.r3.s64 = r11.s64 + -17704;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284FE0) {
	__imp__sub_83284FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83284FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17608
	ctx.r3.s64 = r11.s64 + -17608;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83284FF0) {
	__imp__sub_83284FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17512
	ctx.r3.s64 = r11.s64 + -17512;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285000) {
	__imp__sub_83285000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17424
	ctx.r3.s64 = r11.s64 + -17424;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285010) {
	__imp__sub_83285010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17336
	ctx.r3.s64 = r11.s64 + -17336;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285020) {
	__imp__sub_83285020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17320
	ctx.r3.s64 = r11.s64 + -17320;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285030) {
	__imp__sub_83285030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17304
	ctx.r3.s64 = r11.s64 + -17304;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285040) {
	__imp__sub_83285040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17288
	ctx.r3.s64 = r11.s64 + -17288;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285050) {
	__imp__sub_83285050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17272
	ctx.r3.s64 = r11.s64 + -17272;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285060) {
	__imp__sub_83285060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17256
	ctx.r3.s64 = r11.s64 + -17256;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285070) {
	__imp__sub_83285070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285080) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2736
	ctx.r3.s64 = r11.s64 + -2736;
	// bl 0x82a832a0
	sub_82A832A0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-17240
	ctx.r3.s64 = ctx.r10.s64 + -17240;
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

PPC_WEAK_FUNC(sub_83285080) {
	__imp__sub_83285080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832850B8) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2592
	ctx.r3.s64 = r11.s64 + -2592;
	// bl 0x82a832a0
	sub_82A832A0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-17224
	ctx.r3.s64 = ctx.r10.s64 + -17224;
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

PPC_WEAK_FUNC(sub_832850B8) {
	__imp__sub_832850B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832850F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-2448
	ctx.r5.s64 = ctx.r10.s64 + -2448;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lis r4,-31957
	ctx.r4.s64 = -2094333952;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// addi r3,r4,-17208
	ctx.r3.s64 = ctx.r4.s64 + -17208;
	// stw r7,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r7.u32);
	// stw r6,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, r11.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r9,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r9.u32);
	// stw r8,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r8.u32);
	// stw r7,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r7.u32);
	// stw r6,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r6.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832850F0) {
	__imp__sub_832850F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-17128
	ctx.r3.s64 = r11.s64 + -17128;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285150) {
	__imp__sub_83285150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r7,-2384
	ctx.r6.s64 = ctx.r7.s64 + -2384;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,-2384(r7)
	PPC_STORE_U32(ctx.r7.u32 + -2384, r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-17048
	ctx.r3.s64 = ctx.r5.s64 + -17048;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285160) {
	__imp__sub_83285160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16960
	ctx.r3.s64 = r11.s64 + -16960;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285198) {
	__imp__sub_83285198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832851A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16832
	ctx.r3.s64 = r11.s64 + -16832;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832851A8) {
	__imp__sub_832851A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832851B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16696
	ctx.r3.s64 = r11.s64 + -16696;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832851B8) {
	__imp__sub_832851B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832851C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// addi r6,r11,-20472
	ctx.r6.s64 = r11.s64 + -20472;
	// addi r5,r7,-2356
	ctx.r5.s64 = ctx.r7.s64 + -2356;
	// lbz r9,-20472(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + -20472);
	// lbz r11,2(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r8,3(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// stb r9,-2356(r7)
	PPC_STORE_U8(ctx.r7.u32 + -2356, ctx.r9.u8);
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, r11.u8);
	// stb r10,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// stb r8,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832851C8) {
	__imp__sub_832851C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285200) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2352
	ctx.r3.s64 = ctx.r10.s64 + -2352;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-16568
	ctx.r3.s64 = ctx.r9.s64 + -16568;
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

PPC_WEAK_FUNC(sub_83285200) {
	__imp__sub_83285200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285240) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2348
	ctx.r3.s64 = ctx.r10.s64 + -2348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-16552
	ctx.r3.s64 = ctx.r9.s64 + -16552;
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

PPC_WEAK_FUNC(sub_83285240) {
	__imp__sub_83285240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r9,r11,-27232
	ctx.r9.s64 = r11.s64 + -27232;
	// addi r8,r10,-2336
	ctx.r8.s64 = ctx.r10.s64 + -2336;
	// lvlx v0,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83285280) {
	__imp__sub_83285280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832852A0) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,24264
	ctx.r4.s64 = r11.s64 + 24264;
	// addi r3,r10,-2344
	ctx.r3.s64 = ctx.r10.s64 + -2344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-16536
	ctx.r3.s64 = ctx.r9.s64 + -16536;
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

PPC_WEAK_FUNC(sub_832852A0) {
	__imp__sub_832852A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832852E0) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,24280
	ctx.r4.s64 = r11.s64 + 24280;
	// addi r3,r10,-2340
	ctx.r3.s64 = ctx.r10.s64 + -2340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-16520
	ctx.r3.s64 = ctx.r9.s64 + -16520;
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

PPC_WEAK_FUNC(sub_832852E0) {
	__imp__sub_832852E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285320) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,24300
	ctx.r4.s64 = r11.s64 + 24300;
	// addi r3,r10,-2320
	ctx.r3.s64 = ctx.r10.s64 + -2320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-16504
	ctx.r3.s64 = ctx.r9.s64 + -16504;
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

PPC_WEAK_FUNC(sub_83285320) {
	__imp__sub_83285320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285360) {
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
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,24312
	ctx.r4.s64 = r11.s64 + 24312;
	// addi r3,r10,-2316
	ctx.r3.s64 = ctx.r10.s64 + -2316;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-16488
	ctx.r3.s64 = ctx.r9.s64 + -16488;
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

PPC_WEAK_FUNC(sub_83285360) {
	__imp__sub_83285360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832853A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
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
	// addi r5,r6,-2288
	ctx.r5.s64 = ctx.r6.s64 + -2288;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
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
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832853A0) {
	__imp__sub_832853A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832853F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
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
	// addi r5,r6,-2272
	ctx.r5.s64 = ctx.r6.s64 + -2272;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
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
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832853F8) {
	__imp__sub_832853F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
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
	// addi r5,r6,-2256
	ctx.r5.s64 = ctx.r6.s64 + -2256;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
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
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83285450) {
	__imp__sub_83285450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832854A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16472
	ctx.r3.s64 = r11.s64 + -16472;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832854A8) {
	__imp__sub_832854A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832854B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -16384;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832854B8) {
	__imp__sub_832854B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832854C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16296
	ctx.r3.s64 = r11.s64 + -16296;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832854C8) {
	__imp__sub_832854C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832854D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16208
	ctx.r3.s64 = r11.s64 + -16208;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832854D8) {
	__imp__sub_832854D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832854E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16120
	ctx.r3.s64 = r11.s64 + -16120;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832854E8) {
	__imp__sub_832854E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832854F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832854F8) {
	__imp__sub_832854F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-15944
	ctx.r3.s64 = r11.s64 + -15944;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285508) {
	__imp__sub_83285508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_83285520:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83285520
	if (!cr0.eq) goto loc_83285520;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-15856
	ctx.r3.s64 = ctx.r7.s64 + -15856;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83285518) {
	__imp__sub_83285518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22208
	r11.s64 = r11.s64 + -22208;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8328555C:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8328555c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328555C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83285548) {
	__imp__sub_83285548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285570) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2144
	ctx.r3.s64 = ctx.r10.s64 + -2144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-15840
	ctx.r3.s64 = ctx.r9.s64 + -15840;
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

PPC_WEAK_FUNC(sub_83285570) {
	__imp__sub_83285570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832855B0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2140
	ctx.r3.s64 = ctx.r10.s64 + -2140;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-15824
	ctx.r3.s64 = ctx.r9.s64 + -15824;
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

PPC_WEAK_FUNC(sub_832855B0) {
	__imp__sub_832855B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832855F0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2136
	ctx.r3.s64 = ctx.r10.s64 + -2136;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-15808
	ctx.r3.s64 = ctx.r9.s64 + -15808;
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

PPC_WEAK_FUNC(sub_832855F0) {
	__imp__sub_832855F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285630) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,-2132
	ctx.r3.s64 = ctx.r10.s64 + -2132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-15792
	ctx.r3.s64 = ctx.r9.s64 + -15792;
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

PPC_WEAK_FUNC(sub_83285630) {
	__imp__sub_83285630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83285670) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83285694
	if (cr6.eq) goto loc_83285694;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_83285694:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832856a0
	if (cr0.eq) goto loc_832856A0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_832856A0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-2128
	ctx.r8.s64 = ctx.r9.s64 + -2128;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-15776
	ctx.r3.s64 = ctx.r7.s64 + -15776;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83285670) {
	__imp__sub_83285670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832856D0) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832856f4
	if (cr6.eq) goto loc_832856F4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832856F4:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83285700
	if (cr0.eq) goto loc_83285700;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83285700:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8328570c
	if (cr0.eq) goto loc_8328570C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8328570C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,-2116
	ctx.r8.s64 = ctx.r9.s64 + -2116;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,-15640
	ctx.r3.s64 = ctx.r7.s64 + -15640;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832856D0) {
	__imp__sub_832856D0(ctx, base);
}

