#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_83240FB0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,29196
	ctx.r3.s64 = ctx.r10.s64 + 29196;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,96
	ctx.r3.s64 = ctx.r9.s64 + 96;
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

PPC_WEAK_FUNC(sub_83240FB0) {
	__imp__sub_83240FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83240FF0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,29200
	ctx.r3.s64 = ctx.r10.s64 + 29200;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,112
	ctx.r3.s64 = ctx.r9.s64 + 112;
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

PPC_WEAK_FUNC(sub_83240FF0) {
	__imp__sub_83240FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241030) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,29204
	ctx.r3.s64 = ctx.r10.s64 + 29204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
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

PPC_WEAK_FUNC(sub_83241030) {
	__imp__sub_83241030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241070) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19564
	ctx.r3.s64 = r11.s64 + 19564;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241070) {
	__imp__sub_83241070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832410A8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19572
	ctx.r3.s64 = r11.s64 + 19572;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832410A8) {
	__imp__sub_832410A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832410E0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19584
	ctx.r3.s64 = r11.s64 + 19584;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29216, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832410E0) {
	__imp__sub_832410E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241118) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19608
	ctx.r3.s64 = r11.s64 + 19608;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29220, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241118) {
	__imp__sub_83241118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241150) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19628
	ctx.r3.s64 = r11.s64 + 19628;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241150) {
	__imp__sub_83241150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241188) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19656
	ctx.r3.s64 = r11.s64 + 19656;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29228, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241188) {
	__imp__sub_83241188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832411C0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19672
	ctx.r3.s64 = r11.s64 + 19672;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832411C0) {
	__imp__sub_832411C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832411F8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19656
	ctx.r3.s64 = r11.s64 + 19656;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832411F8) {
	__imp__sub_832411F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241230) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19692
	ctx.r3.s64 = r11.s64 + 19692;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241230) {
	__imp__sub_83241230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241268) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19716
	ctx.r3.s64 = r11.s64 + 19716;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241268) {
	__imp__sub_83241268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832412A0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19744
	ctx.r3.s64 = r11.s64 + 19744;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832412A0) {
	__imp__sub_832412A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832412D8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19760
	ctx.r3.s64 = r11.s64 + 19760;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832412D8) {
	__imp__sub_832412D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241310) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19744
	ctx.r3.s64 = r11.s64 + 19744;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241310) {
	__imp__sub_83241310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241348) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19780
	ctx.r3.s64 = r11.s64 + 19780;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29260, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241348) {
	__imp__sub_83241348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241380) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,19788
	ctx.r3.s64 = r11.s64 + 19788;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241380) {
	__imp__sub_83241380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832413B8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,19800
	ctx.r4.s64 = r11.s64 + 19800;
	// addi r3,r10,29268
	ctx.r3.s64 = ctx.r10.s64 + 29268;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,144
	ctx.r3.s64 = ctx.r9.s64 + 144;
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

PPC_WEAK_FUNC(sub_832413B8) {
	__imp__sub_832413B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832413F8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,19812
	ctx.r4.s64 = r11.s64 + 19812;
	// addi r3,r10,29272
	ctx.r3.s64 = ctx.r10.s64 + 29272;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,160
	ctx.r3.s64 = ctx.r9.s64 + 160;
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

PPC_WEAK_FUNC(sub_832413F8) {
	__imp__sub_832413F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241438) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,19836
	ctx.r4.s64 = r11.s64 + 19836;
	// addi r3,r10,29276
	ctx.r3.s64 = ctx.r10.s64 + 29276;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,176
	ctx.r3.s64 = ctx.r9.s64 + 176;
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

PPC_WEAK_FUNC(sub_83241438) {
	__imp__sub_83241438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241478) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,29280
	ctx.r3.s64 = ctx.r10.s64 + 29280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,192
	ctx.r3.s64 = ctx.r9.s64 + 192;
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

PPC_WEAK_FUNC(sub_83241478) {
	__imp__sub_83241478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832414B8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,29288
	r31.s64 = r11.s64 + 29288;
	// addi r4,r10,22296
	ctx.r4.s64 = ctx.r10.s64 + 22296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22264
	ctx.r4.s64 = ctx.r9.s64 + 22264;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22232
	ctx.r4.s64 = ctx.r8.s64 + 22232;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22200
	ctx.r4.s64 = ctx.r7.s64 + 22200;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22168
	ctx.r4.s64 = ctx.r6.s64 + 22168;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22136
	ctx.r4.s64 = ctx.r4.s64 + 22136;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22104
	ctx.r4.s64 = ctx.r3.s64 + 22104;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22072
	ctx.r4.s64 = r11.s64 + 22072;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,22040
	ctx.r4.s64 = ctx.r10.s64 + 22040;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22008
	ctx.r4.s64 = ctx.r9.s64 + 22008;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,21980
	ctx.r4.s64 = ctx.r8.s64 + 21980;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,21944
	ctx.r4.s64 = ctx.r7.s64 + 21944;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,21908
	ctx.r4.s64 = ctx.r6.s64 + 21908;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,21876
	ctx.r4.s64 = ctx.r4.s64 + 21876;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,21844
	ctx.r4.s64 = ctx.r3.s64 + 21844;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21808
	ctx.r4.s64 = r11.s64 + 21808;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,208
	ctx.r3.s64 = ctx.r10.s64 + 208;
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

PPC_WEAK_FUNC(sub_832414B8) {
	__imp__sub_832414B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241630) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,29352
	r31.s64 = r11.s64 + 29352;
	// addi r4,r10,22816
	ctx.r4.s64 = ctx.r10.s64 + 22816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22784
	ctx.r4.s64 = ctx.r9.s64 + 22784;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22752
	ctx.r4.s64 = ctx.r8.s64 + 22752;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22720
	ctx.r4.s64 = ctx.r7.s64 + 22720;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22688
	ctx.r4.s64 = ctx.r6.s64 + 22688;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22656
	ctx.r4.s64 = ctx.r4.s64 + 22656;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22624
	ctx.r4.s64 = ctx.r3.s64 + 22624;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22592
	ctx.r4.s64 = r11.s64 + 22592;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,22560
	ctx.r4.s64 = ctx.r10.s64 + 22560;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,22528
	ctx.r4.s64 = ctx.r9.s64 + 22528;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,22500
	ctx.r4.s64 = ctx.r8.s64 + 22500;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,22464
	ctx.r4.s64 = ctx.r7.s64 + 22464;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,22428
	ctx.r4.s64 = ctx.r6.s64 + 22428;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,22396
	ctx.r4.s64 = ctx.r4.s64 + 22396;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,22364
	ctx.r4.s64 = ctx.r3.s64 + 22364;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22328
	ctx.r4.s64 = r11.s64 + 22328;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,312
	ctx.r3.s64 = ctx.r10.s64 + 312;
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

PPC_WEAK_FUNC(sub_83241630) {
	__imp__sub_83241630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832417A8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832417A8) {
	__imp__sub_832417A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832417E0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832417E0) {
	__imp__sub_832417E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241818) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241818) {
	__imp__sub_83241818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241850) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241850) {
	__imp__sub_83241850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241888) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241888) {
	__imp__sub_83241888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832418C0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832418C0) {
	__imp__sub_832418C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832418F8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832418F8) {
	__imp__sub_832418F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241930) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241930) {
	__imp__sub_83241930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241968) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241968) {
	__imp__sub_83241968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832419A0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832419A0) {
	__imp__sub_832419A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832419D8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832419D8) {
	__imp__sub_832419D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241A10) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241A10) {
	__imp__sub_83241A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241A48) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241A48) {
	__imp__sub_83241A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241A80) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241A80) {
	__imp__sub_83241A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241AB8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241AB8) {
	__imp__sub_83241AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241AF0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241AF0) {
	__imp__sub_83241AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241B28) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241B28) {
	__imp__sub_83241B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241B60) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241B60) {
	__imp__sub_83241B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241B98) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241B98) {
	__imp__sub_83241B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241BD0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241BD0) {
	__imp__sub_83241BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241C08) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,29492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83241C08) {
	__imp__sub_83241C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241C40) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,29496
	ctx.r3.s64 = ctx.r10.s64 + 29496;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,416
	ctx.r3.s64 = ctx.r9.s64 + 416;
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

PPC_WEAK_FUNC(sub_83241C40) {
	__imp__sub_83241C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241C80) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,29500
	ctx.r3.s64 = ctx.r10.s64 + 29500;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,432
	ctx.r3.s64 = ctx.r9.s64 + 432;
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

PPC_WEAK_FUNC(sub_83241C80) {
	__imp__sub_83241C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241CC0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,29504
	ctx.r3.s64 = ctx.r10.s64 + 29504;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,448
	ctx.r3.s64 = ctx.r9.s64 + 448;
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

PPC_WEAK_FUNC(sub_83241CC0) {
	__imp__sub_83241CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241D00) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,22848
	ctx.r4.s64 = r11.s64 + 22848;
	// addi r3,r10,29508
	ctx.r3.s64 = ctx.r10.s64 + 29508;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,464
	ctx.r3.s64 = ctx.r9.s64 + 464;
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

PPC_WEAK_FUNC(sub_83241D00) {
	__imp__sub_83241D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241D40) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,22864
	ctx.r4.s64 = r11.s64 + 22864;
	// addi r3,r10,29512
	ctx.r3.s64 = ctx.r10.s64 + 29512;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,480
	ctx.r3.s64 = ctx.r9.s64 + 480;
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

PPC_WEAK_FUNC(sub_83241D40) {
	__imp__sub_83241D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241D80) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,29516
	ctx.r3.s64 = ctx.r10.s64 + 29516;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,504
	ctx.r3.s64 = ctx.r9.s64 + 504;
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

PPC_WEAK_FUNC(sub_83241D80) {
	__imp__sub_83241D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241DC0) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,29520
	ctx.r3.s64 = r11.s64 + 29520;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,520
	ctx.r3.s64 = ctx.r10.s64 + 520;
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

PPC_WEAK_FUNC(sub_83241DC0) {
	__imp__sub_83241DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241DF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,24852
	ctx.r4.s64 = r11.s64 + 24852;
	// addi r3,r10,29548
	ctx.r3.s64 = ctx.r10.s64 + 29548;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,528
	ctx.r3.s64 = ctx.r9.s64 + 528;
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

PPC_WEAK_FUNC(sub_83241DF8) {
	__imp__sub_83241DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241E38) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,25144
	ctx.r4.s64 = r11.s64 + 25144;
	// addi r3,r10,29552
	ctx.r3.s64 = ctx.r10.s64 + 29552;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,544
	ctx.r3.s64 = ctx.r9.s64 + 544;
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

PPC_WEAK_FUNC(sub_83241E38) {
	__imp__sub_83241E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241E78) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,25172
	ctx.r4.s64 = r11.s64 + 25172;
	// addi r3,r10,29556
	ctx.r3.s64 = ctx.r10.s64 + 29556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,560
	ctx.r3.s64 = ctx.r9.s64 + 560;
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

PPC_WEAK_FUNC(sub_83241E78) {
	__imp__sub_83241E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241EB8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,25192
	ctx.r4.s64 = r11.s64 + 25192;
	// addi r3,r10,29560
	ctx.r3.s64 = ctx.r10.s64 + 29560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,576
	ctx.r3.s64 = ctx.r9.s64 + 576;
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

PPC_WEAK_FUNC(sub_83241EB8) {
	__imp__sub_83241EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241EF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,29564
	ctx.r3.s64 = ctx.r10.s64 + 29564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,592
	ctx.r3.s64 = ctx.r9.s64 + 592;
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

PPC_WEAK_FUNC(sub_83241EF8) {
	__imp__sub_83241EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241F38) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,608
	ctx.r3.s64 = ctx.r9.s64 + 608;
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

PPC_WEAK_FUNC(sub_83241F38) {
	__imp__sub_83241F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241F78) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,29572
	ctx.r3.s64 = ctx.r10.s64 + 29572;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,624
	ctx.r3.s64 = ctx.r9.s64 + 624;
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

PPC_WEAK_FUNC(sub_83241F78) {
	__imp__sub_83241F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241FB8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,29576
	ctx.r3.s64 = ctx.r10.s64 + 29576;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,656
	ctx.r3.s64 = ctx.r9.s64 + 656;
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

PPC_WEAK_FUNC(sub_83241FB8) {
	__imp__sub_83241FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83241FF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,29580
	ctx.r3.s64 = ctx.r10.s64 + 29580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,672
	ctx.r3.s64 = ctx.r9.s64 + 672;
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

PPC_WEAK_FUNC(sub_83241FF8) {
	__imp__sub_83241FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242038) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,29584
	ctx.r3.s64 = ctx.r10.s64 + 29584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,688
	ctx.r3.s64 = ctx.r9.s64 + 688;
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

PPC_WEAK_FUNC(sub_83242038) {
	__imp__sub_83242038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242078) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,26984
	ctx.r4.s64 = r11.s64 + 26984;
	// addi r3,r10,29588
	ctx.r3.s64 = ctx.r10.s64 + 29588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,704
	ctx.r3.s64 = ctx.r9.s64 + 704;
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

PPC_WEAK_FUNC(sub_83242078) {
	__imp__sub_83242078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832420B8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27272
	ctx.r4.s64 = r11.s64 + 27272;
	// addi r3,r10,29592
	ctx.r3.s64 = ctx.r10.s64 + 29592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,720
	ctx.r3.s64 = ctx.r9.s64 + 720;
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

PPC_WEAK_FUNC(sub_832420B8) {
	__imp__sub_832420B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832420F8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27280
	ctx.r4.s64 = r11.s64 + 27280;
	// addi r3,r10,29596
	ctx.r3.s64 = ctx.r10.s64 + 29596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,736
	ctx.r3.s64 = ctx.r9.s64 + 736;
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

PPC_WEAK_FUNC(sub_832420F8) {
	__imp__sub_832420F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242138) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27300
	ctx.r4.s64 = r11.s64 + 27300;
	// addi r3,r10,29600
	ctx.r3.s64 = ctx.r10.s64 + 29600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,752
	ctx.r3.s64 = ctx.r9.s64 + 752;
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

PPC_WEAK_FUNC(sub_83242138) {
	__imp__sub_83242138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242178) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27324
	ctx.r4.s64 = r11.s64 + 27324;
	// addi r3,r10,29604
	ctx.r3.s64 = ctx.r10.s64 + 29604;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,768
	ctx.r3.s64 = ctx.r9.s64 + 768;
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

PPC_WEAK_FUNC(sub_83242178) {
	__imp__sub_83242178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832421B8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27348
	ctx.r4.s64 = r11.s64 + 27348;
	// addi r3,r10,29608
	ctx.r3.s64 = ctx.r10.s64 + 29608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,784
	ctx.r3.s64 = ctx.r9.s64 + 784;
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

PPC_WEAK_FUNC(sub_832421B8) {
	__imp__sub_832421B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832421F8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27372
	ctx.r4.s64 = r11.s64 + 27372;
	// addi r3,r10,29612
	ctx.r3.s64 = ctx.r10.s64 + 29612;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,800
	ctx.r3.s64 = ctx.r9.s64 + 800;
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

PPC_WEAK_FUNC(sub_832421F8) {
	__imp__sub_832421F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242238) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27384
	ctx.r4.s64 = r11.s64 + 27384;
	// addi r3,r10,29616
	ctx.r3.s64 = ctx.r10.s64 + 29616;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,816
	ctx.r3.s64 = ctx.r9.s64 + 816;
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

PPC_WEAK_FUNC(sub_83242238) {
	__imp__sub_83242238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_83242280:
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
	// bne 0x83242280
	if (!cr0.eq) goto loc_83242280;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,832
	ctx.r3.s64 = ctx.r7.s64 + 832;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83242278) {
	__imp__sub_83242278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832422A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_832422B0:
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
	// bne 0x832422b0
	if (!cr0.eq) goto loc_832422B0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,848
	ctx.r3.s64 = ctx.r7.s64 + 848;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832422A8) {
	__imp__sub_832422A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832422D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_832422E0:
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
	// bne 0x832422e0
	if (!cr0.eq) goto loc_832422E0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,864
	ctx.r3.s64 = ctx.r7.s64 + 864;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832422D8) {
	__imp__sub_832422D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242308) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,25192
	ctx.r4.s64 = r11.s64 + 25192;
	// addi r3,r10,29632
	ctx.r3.s64 = ctx.r10.s64 + 29632;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
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

PPC_WEAK_FUNC(sub_83242308) {
	__imp__sub_83242308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242348) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27396
	ctx.r4.s64 = r11.s64 + 27396;
	// addi r3,r10,29636
	ctx.r3.s64 = ctx.r10.s64 + 29636;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,896
	ctx.r3.s64 = ctx.r9.s64 + 896;
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

PPC_WEAK_FUNC(sub_83242348) {
	__imp__sub_83242348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242388) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27408
	ctx.r4.s64 = r11.s64 + 27408;
	// addi r3,r10,29640
	ctx.r3.s64 = ctx.r10.s64 + 29640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
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

PPC_WEAK_FUNC(sub_83242388) {
	__imp__sub_83242388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832423C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27436
	ctx.r4.s64 = r11.s64 + 27436;
	// addi r3,r10,29644
	ctx.r3.s64 = ctx.r10.s64 + 29644;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
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

PPC_WEAK_FUNC(sub_832423C8) {
	__imp__sub_832423C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242408) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27452
	ctx.r4.s64 = r11.s64 + 27452;
	// addi r3,r10,29648
	ctx.r3.s64 = ctx.r10.s64 + 29648;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,944
	ctx.r3.s64 = ctx.r9.s64 + 944;
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

PPC_WEAK_FUNC(sub_83242408) {
	__imp__sub_83242408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242448) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27472
	ctx.r4.s64 = r11.s64 + 27472;
	// addi r3,r10,29652
	ctx.r3.s64 = ctx.r10.s64 + 29652;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,960
	ctx.r3.s64 = ctx.r9.s64 + 960;
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

PPC_WEAK_FUNC(sub_83242448) {
	__imp__sub_83242448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242488) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27508
	ctx.r4.s64 = r11.s64 + 27508;
	// addi r3,r10,29656
	ctx.r3.s64 = ctx.r10.s64 + 29656;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,976
	ctx.r3.s64 = ctx.r9.s64 + 976;
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

PPC_WEAK_FUNC(sub_83242488) {
	__imp__sub_83242488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832424C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27472
	ctx.r4.s64 = r11.s64 + 27472;
	// addi r3,r10,29660
	ctx.r3.s64 = ctx.r10.s64 + 29660;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,992
	ctx.r3.s64 = ctx.r9.s64 + 992;
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

PPC_WEAK_FUNC(sub_832424C8) {
	__imp__sub_832424C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242508) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27508
	ctx.r4.s64 = r11.s64 + 27508;
	// addi r3,r10,29664
	ctx.r3.s64 = ctx.r10.s64 + 29664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1008
	ctx.r3.s64 = ctx.r9.s64 + 1008;
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

PPC_WEAK_FUNC(sub_83242508) {
	__imp__sub_83242508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_83242550:
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
	// bne 0x83242550
	if (!cr0.eq) goto loc_83242550;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,1024
	ctx.r3.s64 = ctx.r7.s64 + 1024;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83242548) {
	__imp__sub_83242548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242578) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27540
	ctx.r4.s64 = r11.s64 + 27540;
	// addi r3,r10,29672
	ctx.r3.s64 = ctx.r10.s64 + 29672;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1040
	ctx.r3.s64 = ctx.r9.s64 + 1040;
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

PPC_WEAK_FUNC(sub_83242578) {
	__imp__sub_83242578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832425B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_832425C0:
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
	// bne 0x832425c0
	if (!cr0.eq) goto loc_832425C0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,1056
	ctx.r3.s64 = ctx.r7.s64 + 1056;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832425B8) {
	__imp__sub_832425B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832425E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,1072
	ctx.r3.s64 = r11.s64 + 1072;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832425E8) {
	__imp__sub_832425E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832425F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,1088
	ctx.r3.s64 = r11.s64 + 1088;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832425F8) {
	__imp__sub_832425F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242608) {
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
	// beq cr6,0x8324262c
	if (cr6.eq) goto loc_8324262C;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_8324262C:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83242638
	if (cr0.eq) goto loc_83242638;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_83242638:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,29712
	ctx.r8.s64 = ctx.r9.s64 + 29712;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,1104
	ctx.r3.s64 = ctx.r7.s64 + 1104;
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

PPC_WEAK_FUNC(sub_83242608) {
	__imp__sub_83242608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lfd f0,-27368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -27368);
	// stfd f0,29728(r10)
	PPC_STORE_U64(ctx.r10.u32 + 29728, f0.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83242668) {
	__imp__sub_83242668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242680) {
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
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
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
	// addi r4,r5,29744
	ctx.r4.s64 = ctx.r5.s64 + 29744;
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

PPC_WEAK_FUNC(sub_83242680) {
	__imp__sub_83242680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832426E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27456
	ctx.r9.s64 = r11.s64 + -27456;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,29760
	ctx.r4.s64 = ctx.r5.s64 + 29760;
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

PPC_WEAK_FUNC(sub_832426E0) {
	__imp__sub_832426E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242740) {
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
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
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
	// addi r5,r6,29776
	ctx.r5.s64 = ctx.r6.s64 + 29776;
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

PPC_WEAK_FUNC(sub_83242740) {
	__imp__sub_83242740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242798) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,28812
	ctx.r4.s64 = r11.s64 + 28812;
	// addi r3,r10,29724
	ctx.r3.s64 = ctx.r10.s64 + 29724;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1176
	ctx.r3.s64 = ctx.r9.s64 + 1176;
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

PPC_WEAK_FUNC(sub_83242798) {
	__imp__sub_83242798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832427D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,27396
	ctx.r4.s64 = r11.s64 + 27396;
	// addi r3,r10,29736
	ctx.r3.s64 = ctx.r10.s64 + 29736;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1192
	ctx.r3.s64 = ctx.r9.s64 + 1192;
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

PPC_WEAK_FUNC(sub_832427D8) {
	__imp__sub_832427D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242818) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,28836
	ctx.r4.s64 = r11.s64 + 28836;
	// addi r3,r10,29740
	ctx.r3.s64 = ctx.r10.s64 + 29740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1208
	ctx.r3.s64 = ctx.r9.s64 + 1208;
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

PPC_WEAK_FUNC(sub_83242818) {
	__imp__sub_83242818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242858) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1080
	ctx.r4.s64 = r11.s64 + 1080;
	// addi r3,r10,29792
	ctx.r3.s64 = ctx.r10.s64 + 29792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1224
	ctx.r3.s64 = ctx.r9.s64 + 1224;
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

PPC_WEAK_FUNC(sub_83242858) {
	__imp__sub_83242858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242898) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,28868
	ctx.r4.s64 = r11.s64 + 28868;
	// addi r3,r10,29796
	ctx.r3.s64 = ctx.r10.s64 + 29796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1240
	ctx.r3.s64 = ctx.r9.s64 + 1240;
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

PPC_WEAK_FUNC(sub_83242898) {
	__imp__sub_83242898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832428D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,28912
	ctx.r4.s64 = r11.s64 + 28912;
	// addi r3,r10,29800
	ctx.r3.s64 = ctx.r10.s64 + 29800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1256
	ctx.r3.s64 = ctx.r9.s64 + 1256;
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

PPC_WEAK_FUNC(sub_832428D8) {
	__imp__sub_832428D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242918) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,28952
	ctx.r4.s64 = r11.s64 + 28952;
	// addi r3,r10,29804
	ctx.r3.s64 = ctx.r10.s64 + 29804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1272
	ctx.r3.s64 = ctx.r9.s64 + 1272;
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

PPC_WEAK_FUNC(sub_83242918) {
	__imp__sub_83242918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242958) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,28992
	ctx.r4.s64 = r11.s64 + 28992;
	// addi r3,r10,29808
	ctx.r3.s64 = ctx.r10.s64 + 29808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1288
	ctx.r3.s64 = ctx.r9.s64 + 1288;
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

PPC_WEAK_FUNC(sub_83242958) {
	__imp__sub_83242958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242998) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29040
	ctx.r4.s64 = r11.s64 + 29040;
	// addi r3,r10,29812
	ctx.r3.s64 = ctx.r10.s64 + 29812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1304
	ctx.r3.s64 = ctx.r9.s64 + 1304;
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

PPC_WEAK_FUNC(sub_83242998) {
	__imp__sub_83242998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832429D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29084
	ctx.r4.s64 = r11.s64 + 29084;
	// addi r3,r10,29816
	ctx.r3.s64 = ctx.r10.s64 + 29816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1320
	ctx.r3.s64 = ctx.r9.s64 + 1320;
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

PPC_WEAK_FUNC(sub_832429D8) {
	__imp__sub_832429D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242A18) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29128
	ctx.r4.s64 = r11.s64 + 29128;
	// addi r3,r10,29820
	ctx.r3.s64 = ctx.r10.s64 + 29820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1336
	ctx.r3.s64 = ctx.r9.s64 + 1336;
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

PPC_WEAK_FUNC(sub_83242A18) {
	__imp__sub_83242A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242A58) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29172
	ctx.r4.s64 = r11.s64 + 29172;
	// addi r3,r10,29824
	ctx.r3.s64 = ctx.r10.s64 + 29824;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1352
	ctx.r3.s64 = ctx.r9.s64 + 1352;
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

PPC_WEAK_FUNC(sub_83242A58) {
	__imp__sub_83242A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242A98) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29216
	ctx.r4.s64 = r11.s64 + 29216;
	// addi r3,r10,29828
	ctx.r3.s64 = ctx.r10.s64 + 29828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1368
	ctx.r3.s64 = ctx.r9.s64 + 1368;
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

PPC_WEAK_FUNC(sub_83242A98) {
	__imp__sub_83242A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242AD8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29260
	ctx.r4.s64 = r11.s64 + 29260;
	// addi r3,r10,29832
	ctx.r3.s64 = ctx.r10.s64 + 29832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1384
	ctx.r3.s64 = ctx.r9.s64 + 1384;
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

PPC_WEAK_FUNC(sub_83242AD8) {
	__imp__sub_83242AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242B18) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29304
	ctx.r4.s64 = r11.s64 + 29304;
	// addi r3,r10,29836
	ctx.r3.s64 = ctx.r10.s64 + 29836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1400
	ctx.r3.s64 = ctx.r9.s64 + 1400;
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

PPC_WEAK_FUNC(sub_83242B18) {
	__imp__sub_83242B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242B58) {
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
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f0.f64 = double(temp.f32);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
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
	// addi r5,r6,29840
	ctx.r5.s64 = ctx.r6.s64 + 29840;
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

PPC_WEAK_FUNC(sub_83242B58) {
	__imp__sub_83242B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242BB0) {
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
	// addi r9,r11,-27468
	ctx.r9.s64 = r11.s64 + -27468;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,29856
	ctx.r4.s64 = ctx.r5.s64 + 29856;
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

PPC_WEAK_FUNC(sub_83242BB0) {
	__imp__sub_83242BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242C10) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29352
	ctx.r4.s64 = r11.s64 + 29352;
	// addi r3,r10,29872
	ctx.r3.s64 = ctx.r10.s64 + 29872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1416
	ctx.r3.s64 = ctx.r9.s64 + 1416;
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

PPC_WEAK_FUNC(sub_83242C10) {
	__imp__sub_83242C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242C50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29400
	ctx.r4.s64 = r11.s64 + 29400;
	// addi r3,r10,29876
	ctx.r3.s64 = ctx.r10.s64 + 29876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1432
	ctx.r3.s64 = ctx.r9.s64 + 1432;
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

PPC_WEAK_FUNC(sub_83242C50) {
	__imp__sub_83242C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242C90) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29440
	ctx.r4.s64 = r11.s64 + 29440;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,29880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29880, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83242CE8:
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
	// bne 0x83242ce8
	if (!cr0.eq) goto loc_83242CE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_83242D14:
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
	// bne 0x83242d14
	if (!cr0.eq) goto loc_83242D14;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,1448
	ctx.r3.s64 = r11.s64 + 1448;
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

PPC_WEAK_FUNC(sub_83242C90) {
	__imp__sub_83242C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242D50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,26984
	ctx.r4.s64 = r11.s64 + 26984;
	// addi r3,r10,29884
	ctx.r3.s64 = ctx.r10.s64 + 29884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1456
	ctx.r3.s64 = ctx.r9.s64 + 1456;
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

PPC_WEAK_FUNC(sub_83242D50) {
	__imp__sub_83242D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242D90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,29532
	ctx.r4.s64 = r11.s64 + 29532;
	// addi r3,r10,29888
	ctx.r3.s64 = ctx.r10.s64 + 29888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1472
	ctx.r3.s64 = ctx.r9.s64 + 1472;
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

PPC_WEAK_FUNC(sub_83242D90) {
	__imp__sub_83242D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29580
	ctx.r4.s64 = r11.s64 + 29580;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,29892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29892, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r30,r9,28344
	r30.s64 = ctx.r9.s64 + 28344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_83242E2C:
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
	// bne 0x83242e2c
	if (!cr0.eq) goto loc_83242E2C;
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_83242E58:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83242e58
	if (!cr0.eq) goto loc_83242E58;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r3,-31958
	ctx.r3.s64 = -2094399488;
	// addi r3,r3,1488
	ctx.r3.s64 = ctx.r3.s64 + 1488;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
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

PPC_WEAK_FUNC(sub_83242DD0) {
	__imp__sub_83242DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242EA0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,29896
	ctx.r3.s64 = ctx.r10.s64 + 29896;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1496
	ctx.r3.s64 = ctx.r9.s64 + 1496;
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

PPC_WEAK_FUNC(sub_83242EA0) {
	__imp__sub_83242EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242EE0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,29900
	ctx.r3.s64 = ctx.r10.s64 + 29900;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1512
	ctx.r3.s64 = ctx.r9.s64 + 1512;
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

PPC_WEAK_FUNC(sub_83242EE0) {
	__imp__sub_83242EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242F20) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,29904
	ctx.r3.s64 = ctx.r10.s64 + 29904;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1528
	ctx.r3.s64 = ctx.r9.s64 + 1528;
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

PPC_WEAK_FUNC(sub_83242F20) {
	__imp__sub_83242F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,1544
	ctx.r3.s64 = r11.s64 + 1544;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83242F60) {
	__imp__sub_83242F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242F70) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30572
	ctx.r4.s64 = r11.s64 + 30572;
	// addi r3,r10,29924
	ctx.r3.s64 = ctx.r10.s64 + 29924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1648
	ctx.r3.s64 = ctx.r9.s64 + 1648;
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

PPC_WEAK_FUNC(sub_83242F70) {
	__imp__sub_83242F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242FB0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30580
	ctx.r4.s64 = r11.s64 + 30580;
	// addi r3,r10,29928
	ctx.r3.s64 = ctx.r10.s64 + 29928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1664
	ctx.r3.s64 = ctx.r9.s64 + 1664;
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

PPC_WEAK_FUNC(sub_83242FB0) {
	__imp__sub_83242FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83242FF0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30600
	ctx.r4.s64 = r11.s64 + 30600;
	// addi r3,r10,29932
	ctx.r3.s64 = ctx.r10.s64 + 29932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1680
	ctx.r3.s64 = ctx.r9.s64 + 1680;
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

PPC_WEAK_FUNC(sub_83242FF0) {
	__imp__sub_83242FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243030) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30612
	ctx.r4.s64 = r11.s64 + 30612;
	// addi r3,r10,29936
	ctx.r3.s64 = ctx.r10.s64 + 29936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1696
	ctx.r3.s64 = ctx.r9.s64 + 1696;
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

PPC_WEAK_FUNC(sub_83243030) {
	__imp__sub_83243030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243070) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30628
	ctx.r4.s64 = r11.s64 + 30628;
	// addi r3,r10,29940
	ctx.r3.s64 = ctx.r10.s64 + 29940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1712
	ctx.r3.s64 = ctx.r9.s64 + 1712;
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

PPC_WEAK_FUNC(sub_83243070) {
	__imp__sub_83243070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832430B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30644
	ctx.r4.s64 = r11.s64 + 30644;
	// addi r3,r10,29944
	ctx.r3.s64 = ctx.r10.s64 + 29944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1728
	ctx.r3.s64 = ctx.r9.s64 + 1728;
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

PPC_WEAK_FUNC(sub_832430B0) {
	__imp__sub_832430B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832430F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30656
	ctx.r4.s64 = r11.s64 + 30656;
	// addi r3,r10,29948
	ctx.r3.s64 = ctx.r10.s64 + 29948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1744
	ctx.r3.s64 = ctx.r9.s64 + 1744;
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

PPC_WEAK_FUNC(sub_832430F0) {
	__imp__sub_832430F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243130) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30672
	ctx.r4.s64 = r11.s64 + 30672;
	// addi r3,r10,29952
	ctx.r3.s64 = ctx.r10.s64 + 29952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1760
	ctx.r3.s64 = ctx.r9.s64 + 1760;
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

PPC_WEAK_FUNC(sub_83243130) {
	__imp__sub_83243130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243170) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30688
	ctx.r4.s64 = r11.s64 + 30688;
	// addi r3,r10,29956
	ctx.r3.s64 = ctx.r10.s64 + 29956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1776
	ctx.r3.s64 = ctx.r9.s64 + 1776;
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

PPC_WEAK_FUNC(sub_83243170) {
	__imp__sub_83243170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832431B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30712
	ctx.r4.s64 = r11.s64 + 30712;
	// addi r3,r10,29960
	ctx.r3.s64 = ctx.r10.s64 + 29960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1792
	ctx.r3.s64 = ctx.r9.s64 + 1792;
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

PPC_WEAK_FUNC(sub_832431B0) {
	__imp__sub_832431B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832431F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30736
	ctx.r4.s64 = r11.s64 + 30736;
	// addi r3,r10,29964
	ctx.r3.s64 = ctx.r10.s64 + 29964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1808
	ctx.r3.s64 = ctx.r9.s64 + 1808;
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

PPC_WEAK_FUNC(sub_832431F0) {
	__imp__sub_832431F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243230) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30752
	ctx.r4.s64 = r11.s64 + 30752;
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1824
	ctx.r3.s64 = ctx.r9.s64 + 1824;
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

PPC_WEAK_FUNC(sub_83243230) {
	__imp__sub_83243230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243270) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30772
	ctx.r4.s64 = r11.s64 + 30772;
	// addi r3,r10,29972
	ctx.r3.s64 = ctx.r10.s64 + 29972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1840
	ctx.r3.s64 = ctx.r9.s64 + 1840;
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

PPC_WEAK_FUNC(sub_83243270) {
	__imp__sub_83243270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832432B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30784
	ctx.r4.s64 = r11.s64 + 30784;
	// addi r3,r10,29976
	ctx.r3.s64 = ctx.r10.s64 + 29976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1856
	ctx.r3.s64 = ctx.r9.s64 + 1856;
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

PPC_WEAK_FUNC(sub_832432B0) {
	__imp__sub_832432B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832432F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30808
	ctx.r4.s64 = r11.s64 + 30808;
	// addi r3,r10,29980
	ctx.r3.s64 = ctx.r10.s64 + 29980;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1872
	ctx.r3.s64 = ctx.r9.s64 + 1872;
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

PPC_WEAK_FUNC(sub_832432F0) {
	__imp__sub_832432F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243330) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r31,r11,29984
	r31.s64 = r11.s64 + 29984;
	// addi r4,r10,29924
	ctx.r4.s64 = ctx.r10.s64 + 29924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,30840
	ctx.r4.s64 = ctx.r9.s64 + 30840;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,1888
	ctx.r3.s64 = ctx.r8.s64 + 1888;
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

PPC_WEAK_FUNC(sub_83243330) {
	__imp__sub_83243330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243388) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30856
	ctx.r4.s64 = r11.s64 + 30856;
	// addi r3,r10,29988
	ctx.r3.s64 = ctx.r10.s64 + 29988;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1904
	ctx.r3.s64 = ctx.r9.s64 + 1904;
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

PPC_WEAK_FUNC(sub_83243388) {
	__imp__sub_83243388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832433C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30880
	ctx.r4.s64 = r11.s64 + 30880;
	// addi r3,r10,29992
	ctx.r3.s64 = ctx.r10.s64 + 29992;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1920
	ctx.r3.s64 = ctx.r9.s64 + 1920;
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

PPC_WEAK_FUNC(sub_832433C8) {
	__imp__sub_832433C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243408) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30900
	ctx.r4.s64 = r11.s64 + 30900;
	// addi r3,r10,29996
	ctx.r3.s64 = ctx.r10.s64 + 29996;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1936
	ctx.r3.s64 = ctx.r9.s64 + 1936;
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

PPC_WEAK_FUNC(sub_83243408) {
	__imp__sub_83243408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243448) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30908
	ctx.r4.s64 = r11.s64 + 30908;
	// addi r3,r10,30000
	ctx.r3.s64 = ctx.r10.s64 + 30000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1952
	ctx.r3.s64 = ctx.r9.s64 + 1952;
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

PPC_WEAK_FUNC(sub_83243448) {
	__imp__sub_83243448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243488) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r31,r11,30004
	r31.s64 = r11.s64 + 30004;
	// addi r4,r10,30000
	ctx.r4.s64 = ctx.r10.s64 + 30000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,30916
	ctx.r4.s64 = ctx.r9.s64 + 30916;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,1968
	ctx.r3.s64 = ctx.r8.s64 + 1968;
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

PPC_WEAK_FUNC(sub_83243488) {
	__imp__sub_83243488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832434E0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30920
	ctx.r4.s64 = r11.s64 + 30920;
	// addi r3,r10,30008
	ctx.r3.s64 = ctx.r10.s64 + 30008;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1984
	ctx.r3.s64 = ctx.r9.s64 + 1984;
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

PPC_WEAK_FUNC(sub_832434E0) {
	__imp__sub_832434E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243520) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30924
	ctx.r4.s64 = r11.s64 + 30924;
	// addi r3,r10,30012
	ctx.r3.s64 = ctx.r10.s64 + 30012;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2000
	ctx.r3.s64 = ctx.r9.s64 + 2000;
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

PPC_WEAK_FUNC(sub_83243520) {
	__imp__sub_83243520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243560) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30940
	ctx.r4.s64 = r11.s64 + 30940;
	// addi r3,r10,30016
	ctx.r3.s64 = ctx.r10.s64 + 30016;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2016
	ctx.r3.s64 = ctx.r9.s64 + 2016;
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

PPC_WEAK_FUNC(sub_83243560) {
	__imp__sub_83243560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832435A0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30968
	ctx.r4.s64 = r11.s64 + 30968;
	// addi r3,r10,30020
	ctx.r3.s64 = ctx.r10.s64 + 30020;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2032
	ctx.r3.s64 = ctx.r9.s64 + 2032;
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

PPC_WEAK_FUNC(sub_832435A0) {
	__imp__sub_832435A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832435E0) {
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
	// lis r11,-31921
	r11.s64 = -2091974656;
	// addi r3,r11,29488
	ctx.r3.s64 = r11.s64 + 29488;
	// bl 0x832b258c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,2240
	ctx.r3.s64 = ctx.r10.s64 + 2240;
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

PPC_WEAK_FUNC(sub_832435E0) {
	__imp__sub_832435E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,2224
	ctx.r3.s64 = r11.s64 + 2224;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83243618) {
	__imp__sub_83243618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,30024
	r31.s64 = r11.s64 + 30024;
	// addi r4,r10,31440
	ctx.r4.s64 = ctx.r10.s64 + 31440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,31424
	ctx.r4.s64 = ctx.r9.s64 + 31424;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r30,r8,28344
	r30.s64 = ctx.r8.s64 + 28344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_83243688:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x83243688
	if (!cr0.eq) goto loc_83243688;
	// li r11,0
	r11.s64 = 0;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,31416
	ctx.r4.s64 = ctx.r4.s64 + 31416;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,31400
	ctx.r4.s64 = ctx.r3.s64 + 31400;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_832436E8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x832436e8
	if (!cr0.eq) goto loc_832436E8;
	// li r11,0
	r11.s64 = 0;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,31392
	ctx.r4.s64 = ctx.r6.s64 + 31392;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,31372
	ctx.r4.s64 = ctx.r4.s64 + 31372;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
loc_83243748:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r3,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwcx. r3,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83243748
	if (!cr0.eq) goto loc_83243748;
	// li r11,0
	r11.s64 = 0;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,31360
	ctx.r4.s64 = ctx.r7.s64 + 31360;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,31340
	ctx.r4.s64 = ctx.r6.s64 + 31340;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_832437A4:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x832437a4
	if (!cr0.eq) goto loc_832437A4;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,31332
	ctx.r4.s64 = ctx.r10.s64 + 31332;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,31312
	ctx.r4.s64 = ctx.r9.s64 + 31312;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_83243804:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x83243804
	if (!cr0.eq) goto loc_83243804;
	// li r11,0
	r11.s64 = 0;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,31304
	ctx.r4.s64 = ctx.r4.s64 + 31304;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,31284
	ctx.r4.s64 = ctx.r3.s64 + 31284;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
loc_83243860:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x83243860
	if (!cr0.eq) goto loc_83243860;
	// li r11,0
	r11.s64 = 0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r3,r7,2248
	ctx.r3.s64 = ctx.r7.s64 + 2248;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
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

PPC_WEAK_FUNC(sub_83243628) {
	__imp__sub_83243628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832438A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2472
	ctx.r3.s64 = ctx.r9.s64 + 2472;
	// stw r11,-15636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15636, r11.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832438A8) {
	__imp__sub_832438A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832438C0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30144
	ctx.r3.s64 = ctx.r10.s64 + 30144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2680
	ctx.r3.s64 = ctx.r9.s64 + 2680;
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

PPC_WEAK_FUNC(sub_832438C0) {
	__imp__sub_832438C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243900) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30148
	ctx.r3.s64 = ctx.r10.s64 + 30148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2696
	ctx.r3.s64 = ctx.r9.s64 + 2696;
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

PPC_WEAK_FUNC(sub_83243900) {
	__imp__sub_83243900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243940) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30152
	ctx.r3.s64 = ctx.r10.s64 + 30152;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2712
	ctx.r3.s64 = ctx.r9.s64 + 2712;
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

PPC_WEAK_FUNC(sub_83243940) {
	__imp__sub_83243940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243980) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32344
	ctx.r4.s64 = r11.s64 + 32344;
	// addi r3,r10,30156
	ctx.r3.s64 = ctx.r10.s64 + 30156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2728
	ctx.r3.s64 = ctx.r9.s64 + 2728;
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

PPC_WEAK_FUNC(sub_83243980) {
	__imp__sub_83243980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832439C0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32372
	ctx.r4.s64 = r11.s64 + 32372;
	// addi r3,r10,30160
	ctx.r3.s64 = ctx.r10.s64 + 30160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2744
	ctx.r3.s64 = ctx.r9.s64 + 2744;
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

PPC_WEAK_FUNC(sub_832439C0) {
	__imp__sub_832439C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243A00) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32344
	ctx.r4.s64 = r11.s64 + 32344;
	// addi r3,r10,30164
	ctx.r3.s64 = ctx.r10.s64 + 30164;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2760
	ctx.r3.s64 = ctx.r9.s64 + 2760;
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

PPC_WEAK_FUNC(sub_83243A00) {
	__imp__sub_83243A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243A40) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32396
	ctx.r4.s64 = r11.s64 + 32396;
	// addi r3,r10,30168
	ctx.r3.s64 = ctx.r10.s64 + 30168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2776
	ctx.r3.s64 = ctx.r9.s64 + 2776;
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

PPC_WEAK_FUNC(sub_83243A40) {
	__imp__sub_83243A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243A80) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32420
	ctx.r4.s64 = r11.s64 + 32420;
	// addi r3,r10,30172
	ctx.r3.s64 = ctx.r10.s64 + 30172;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2792
	ctx.r3.s64 = ctx.r9.s64 + 2792;
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

PPC_WEAK_FUNC(sub_83243A80) {
	__imp__sub_83243A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83243AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,32748
	ctx.r4.s64 = r11.s64 + 32748;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,30176
	r30.s64 = ctx.r10.s64 + 30176;
	// stw r11,30176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30176, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r29,r9,28344
	r29.s64 = ctx.r9.s64 + 28344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_83243B18:
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
	// bne 0x83243b18
	if (!cr0.eq) goto loc_83243B18;
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83243B48:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83243b48
	if (!cr0.eq) goto loc_83243B48;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,32704
	ctx.r4.s64 = r11.s64 + 32704;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_83243BA0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83243ba0
	if (!cr0.eq) goto loc_83243BA0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_83243BCC:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x83243bcc
	if (!cr0.eq) goto loc_83243BCC;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,32660
	ctx.r4.s64 = ctx.r4.s64 + 32660;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_83243C24:
	// mfmsr r11
	// mtmsrd r13,1
	// lwarx r3,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r11,1
	// bne 0x83243c24
	if (!cr0.eq) goto loc_83243C24;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_83243C50:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x83243c50
	if (!cr0.eq) goto loc_83243C50;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,32616
	ctx.r4.s64 = ctx.r6.s64 + 32616;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83243CA8:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83243ca8
	if (!cr0.eq) goto loc_83243CA8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_83243CD4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83243cd4
	if (!cr0.eq) goto loc_83243CD4;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,32568
	ctx.r4.s64 = ctx.r7.s64 + 32568;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83243D2C:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r6,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x83243d2c
	if (!cr0.eq) goto loc_83243D2C;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_83243D58:
	// mfmsr r11
	// mtmsrd r13,1
	// lwarx r3,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r11,1
	// bne 0x83243d58
	if (!cr0.eq) goto loc_83243D58;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,32524
	ctx.r4.s64 = ctx.r9.s64 + 32524;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_83243DB0:
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
	// bne 0x83243db0
	if (!cr0.eq) goto loc_83243DB0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83243DDC:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83243ddc
	if (!cr0.eq) goto loc_83243DDC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,32480
	ctx.r4.s64 = r11.s64 + 32480;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_83243E34:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83243e34
	if (!cr0.eq) goto loc_83243E34;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_83243E60:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x83243e60
	if (!cr0.eq) goto loc_83243E60;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,32432
	ctx.r4.s64 = ctx.r4.s64 + 32432;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_83243EB8:
	// mfmsr r11
	// mtmsrd r13,1
	// lwarx r3,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r11,1
	// bne 0x83243eb8
	if (!cr0.eq) goto loc_83243EB8;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_83243EE4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x83243ee4
	if (!cr0.eq) goto loc_83243EE4;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,29352
	ctx.r4.s64 = ctx.r6.s64 + 29352;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83243F3C:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x83243f3c
	if (!cr0.eq) goto loc_83243F3C;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_83243F68:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83243f68
	if (!cr0.eq) goto loc_83243F68;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,29532
	ctx.r4.s64 = ctx.r7.s64 + 29532;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83243FC0:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r6,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x83243fc0
	if (!cr0.eq) goto loc_83243FC0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_83243FE8:
	// mfmsr r11
	// mtmsrd r13,1
	// lwarx r3,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r11,1
	// bne 0x83243fe8
	if (!cr0.eq) goto loc_83243FE8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,2808
	ctx.r3.s64 = ctx.r10.s64 + 2808;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_83243AC0) {
	__imp__sub_83243AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244018) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-32748
	ctx.r4.s64 = r11.s64 + -32748;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30216, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83244070:
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
	// bne 0x83244070
	if (!cr0.eq) goto loc_83244070;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324409C:
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
	// bne 0x8324409c
	if (!cr0.eq) goto loc_8324409C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,2816
	ctx.r3.s64 = r11.s64 + 2816;
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

PPC_WEAK_FUNC(sub_83244018) {
	__imp__sub_83244018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832440D8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-32708
	ctx.r4.s64 = r11.s64 + -32708;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30220, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83244130:
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
	// bne 0x83244130
	if (!cr0.eq) goto loc_83244130;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324415C:
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
	// bne 0x8324415c
	if (!cr0.eq) goto loc_8324415C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,2824
	ctx.r3.s64 = r11.s64 + 2824;
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

PPC_WEAK_FUNC(sub_832440D8) {
	__imp__sub_832440D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244198) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30224
	ctx.r3.s64 = ctx.r10.s64 + 30224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2840
	ctx.r3.s64 = ctx.r9.s64 + 2840;
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

PPC_WEAK_FUNC(sub_83244198) {
	__imp__sub_83244198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832441D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30228
	ctx.r3.s64 = ctx.r10.s64 + 30228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2856
	ctx.r3.s64 = ctx.r9.s64 + 2856;
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

PPC_WEAK_FUNC(sub_832441D8) {
	__imp__sub_832441D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244218) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30232
	ctx.r3.s64 = ctx.r10.s64 + 30232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2872
	ctx.r3.s64 = ctx.r9.s64 + 2872;
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

PPC_WEAK_FUNC(sub_83244218) {
	__imp__sub_83244218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244258) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30236
	ctx.r3.s64 = ctx.r10.s64 + 30236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2888
	ctx.r3.s64 = ctx.r9.s64 + 2888;
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

PPC_WEAK_FUNC(sub_83244258) {
	__imp__sub_83244258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244298) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30240
	ctx.r3.s64 = ctx.r10.s64 + 30240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2904
	ctx.r3.s64 = ctx.r9.s64 + 2904;
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

PPC_WEAK_FUNC(sub_83244298) {
	__imp__sub_83244298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832442D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30244
	ctx.r3.s64 = ctx.r10.s64 + 30244;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2920
	ctx.r3.s64 = ctx.r9.s64 + 2920;
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

PPC_WEAK_FUNC(sub_832442D8) {
	__imp__sub_832442D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244318) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-32060
	ctx.r3.s64 = r11.s64 + -32060;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83244318) {
	__imp__sub_83244318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244350) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-32044
	ctx.r3.s64 = r11.s64 + -32044;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83244350) {
	__imp__sub_83244350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244388) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x832443ac
	if (cr6.eq) goto loc_832443AC;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_832443AC:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832443b8
	if (cr0.eq) goto loc_832443B8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_832443B8:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,30256
	ctx.r8.s64 = ctx.r9.s64 + 30256;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,2936
	ctx.r3.s64 = ctx.r7.s64 + 2936;
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

PPC_WEAK_FUNC(sub_83244388) {
	__imp__sub_83244388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832443E8) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8324440c
	if (cr6.eq) goto loc_8324440C;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_8324440C:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83244418
	if (cr0.eq) goto loc_83244418;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_83244418:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,30268
	ctx.r8.s64 = ctx.r9.s64 + 30268;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,2952
	ctx.r3.s64 = ctx.r7.s64 + 2952;
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

PPC_WEAK_FUNC(sub_832443E8) {
	__imp__sub_832443E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244448) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30280
	ctx.r3.s64 = ctx.r10.s64 + 30280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2968
	ctx.r3.s64 = ctx.r9.s64 + 2968;
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

PPC_WEAK_FUNC(sub_83244448) {
	__imp__sub_83244448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244488) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30284
	ctx.r3.s64 = ctx.r10.s64 + 30284;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2984
	ctx.r3.s64 = ctx.r9.s64 + 2984;
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

PPC_WEAK_FUNC(sub_83244488) {
	__imp__sub_83244488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832444C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30288
	ctx.r3.s64 = ctx.r10.s64 + 30288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3000
	ctx.r3.s64 = ctx.r9.s64 + 3000;
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

PPC_WEAK_FUNC(sub_832444C8) {
	__imp__sub_832444C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244508) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30292
	ctx.r3.s64 = ctx.r10.s64 + 30292;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3016
	ctx.r3.s64 = ctx.r9.s64 + 3016;
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

PPC_WEAK_FUNC(sub_83244508) {
	__imp__sub_83244508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244548) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30296
	ctx.r3.s64 = ctx.r10.s64 + 30296;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3032
	ctx.r3.s64 = ctx.r9.s64 + 3032;
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

PPC_WEAK_FUNC(sub_83244548) {
	__imp__sub_83244548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244588) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30300
	ctx.r3.s64 = ctx.r10.s64 + 30300;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3048
	ctx.r3.s64 = ctx.r9.s64 + 3048;
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

PPC_WEAK_FUNC(sub_83244588) {
	__imp__sub_83244588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832445C8) {
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
	// beq cr6,0x832445ec
	if (cr6.eq) goto loc_832445EC;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_832445EC:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832445f8
	if (cr0.eq) goto loc_832445F8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_832445F8:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,30304
	ctx.r8.s64 = ctx.r9.s64 + 30304;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,3064
	ctx.r3.s64 = ctx.r7.s64 + 3064;
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

PPC_WEAK_FUNC(sub_832445C8) {
	__imp__sub_832445C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3256
	ctx.r3.s64 = r11.s64 + 3256;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83244628) {
	__imp__sub_83244628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244638) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,30336
	ctx.r3.s64 = ctx.r10.s64 + 30336;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3344
	ctx.r3.s64 = ctx.r9.s64 + 3344;
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

PPC_WEAK_FUNC(sub_83244638) {
	__imp__sub_83244638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244678) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// addi r3,r10,30340
	ctx.r3.s64 = ctx.r10.s64 + 30340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3360
	ctx.r3.s64 = ctx.r9.s64 + 3360;
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

PPC_WEAK_FUNC(sub_83244678) {
	__imp__sub_83244678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832446B8) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832446dc
	if (cr6.eq) goto loc_832446DC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832446DC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832446e8
	if (cr0.eq) goto loc_832446E8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_832446E8:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832446f4
	if (cr0.eq) goto loc_832446F4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_832446F4:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stb r10,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,30344
	ctx.r8.s64 = ctx.r9.s64 + 30344;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, r11.u8);
	// addi r3,r7,3376
	ctx.r3.s64 = ctx.r7.s64 + 3376;
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

PPC_WEAK_FUNC(sub_832446B8) {
	__imp__sub_832446B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244748) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-31528
	ctx.r4.s64 = r11.s64 + -31528;
	// addi r3,r10,30356
	ctx.r3.s64 = ctx.r10.s64 + 30356;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3392
	ctx.r3.s64 = ctx.r9.s64 + 3392;
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

PPC_WEAK_FUNC(sub_83244748) {
	__imp__sub_83244748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244788) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30360
	ctx.r3.s64 = ctx.r10.s64 + 30360;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3408
	ctx.r3.s64 = ctx.r9.s64 + 3408;
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

PPC_WEAK_FUNC(sub_83244788) {
	__imp__sub_83244788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832447C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30364
	ctx.r3.s64 = ctx.r10.s64 + 30364;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3424
	ctx.r3.s64 = ctx.r9.s64 + 3424;
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

PPC_WEAK_FUNC(sub_832447C8) {
	__imp__sub_832447C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244808) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30368
	ctx.r3.s64 = ctx.r10.s64 + 30368;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3440
	ctx.r3.s64 = ctx.r9.s64 + 3440;
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

PPC_WEAK_FUNC(sub_83244808) {
	__imp__sub_83244808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244848) {
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
	// addi r9,r11,-27852
	ctx.r9.s64 = r11.s64 + -27852;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27852);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v13,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f0,384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	f0.f64 = double(temp.f32);
	// addi r4,r5,30384
	ctx.r4.s64 = ctx.r5.s64 + 30384;
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

PPC_WEAK_FUNC(sub_83244848) {
	__imp__sub_83244848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832448A8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-30828
	ctx.r4.s64 = r11.s64 + -30828;
	// addi r3,r10,30372
	ctx.r3.s64 = ctx.r10.s64 + 30372;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3456
	ctx.r3.s64 = ctx.r9.s64 + 3456;
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

PPC_WEAK_FUNC(sub_832448A8) {
	__imp__sub_832448A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832448E8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-30804
	ctx.r4.s64 = r11.s64 + -30804;
	// addi r3,r10,30376
	ctx.r3.s64 = ctx.r10.s64 + 30376;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3472
	ctx.r3.s64 = ctx.r9.s64 + 3472;
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

PPC_WEAK_FUNC(sub_832448E8) {
	__imp__sub_832448E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3488
	ctx.r3.s64 = r11.s64 + 3488;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83244928) {
	__imp__sub_83244928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3504
	ctx.r3.s64 = r11.s64 + 3504;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83244938) {
	__imp__sub_83244938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244948) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30440
	ctx.r3.s64 = ctx.r10.s64 + 30440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3520
	ctx.r3.s64 = ctx.r9.s64 + 3520;
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

PPC_WEAK_FUNC(sub_83244948) {
	__imp__sub_83244948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244988) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30444
	ctx.r3.s64 = ctx.r10.s64 + 30444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3536
	ctx.r3.s64 = ctx.r9.s64 + 3536;
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

PPC_WEAK_FUNC(sub_83244988) {
	__imp__sub_83244988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832449C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30448
	ctx.r3.s64 = ctx.r10.s64 + 30448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3552
	ctx.r3.s64 = ctx.r9.s64 + 3552;
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

PPC_WEAK_FUNC(sub_832449C8) {
	__imp__sub_832449C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244A08) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-32044
	ctx.r3.s64 = r11.s64 + -32044;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83244A08) {
	__imp__sub_83244A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3568
	ctx.r3.s64 = r11.s64 + 3568;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83244A40) {
	__imp__sub_83244A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244A50) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28788
	ctx.r4.s64 = r11.s64 + -28788;
	// addi r3,r10,30472
	ctx.r3.s64 = ctx.r10.s64 + 30472;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3584
	ctx.r3.s64 = ctx.r9.s64 + 3584;
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

PPC_WEAK_FUNC(sub_83244A50) {
	__imp__sub_83244A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244A90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28780
	ctx.r4.s64 = r11.s64 + -28780;
	// addi r3,r10,30476
	ctx.r3.s64 = ctx.r10.s64 + 30476;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3600
	ctx.r3.s64 = ctx.r9.s64 + 3600;
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

PPC_WEAK_FUNC(sub_83244A90) {
	__imp__sub_83244A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244AD0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28772
	ctx.r4.s64 = r11.s64 + -28772;
	// addi r3,r10,30480
	ctx.r3.s64 = ctx.r10.s64 + 30480;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3616
	ctx.r3.s64 = ctx.r9.s64 + 3616;
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

PPC_WEAK_FUNC(sub_83244AD0) {
	__imp__sub_83244AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244B10) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28760
	ctx.r4.s64 = r11.s64 + -28760;
	// addi r3,r10,30484
	ctx.r3.s64 = ctx.r10.s64 + 30484;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3632
	ctx.r3.s64 = ctx.r9.s64 + 3632;
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

PPC_WEAK_FUNC(sub_83244B10) {
	__imp__sub_83244B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244B50) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28752
	ctx.r4.s64 = r11.s64 + -28752;
	// addi r3,r10,30488
	ctx.r3.s64 = ctx.r10.s64 + 30488;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3648
	ctx.r3.s64 = ctx.r9.s64 + 3648;
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

PPC_WEAK_FUNC(sub_83244B50) {
	__imp__sub_83244B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244B90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28740
	ctx.r4.s64 = r11.s64 + -28740;
	// addi r3,r10,30492
	ctx.r3.s64 = ctx.r10.s64 + 30492;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3664
	ctx.r3.s64 = ctx.r9.s64 + 3664;
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

PPC_WEAK_FUNC(sub_83244B90) {
	__imp__sub_83244B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244BD0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28724
	ctx.r4.s64 = r11.s64 + -28724;
	// addi r3,r10,30496
	ctx.r3.s64 = ctx.r10.s64 + 30496;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3680
	ctx.r3.s64 = ctx.r9.s64 + 3680;
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

PPC_WEAK_FUNC(sub_83244BD0) {
	__imp__sub_83244BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244C10) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28716
	ctx.r4.s64 = r11.s64 + -28716;
	// addi r3,r10,30500
	ctx.r3.s64 = ctx.r10.s64 + 30500;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3696
	ctx.r3.s64 = ctx.r9.s64 + 3696;
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

PPC_WEAK_FUNC(sub_83244C10) {
	__imp__sub_83244C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244C50) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28700
	ctx.r4.s64 = r11.s64 + -28700;
	// addi r3,r10,30504
	ctx.r3.s64 = ctx.r10.s64 + 30504;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3712
	ctx.r3.s64 = ctx.r9.s64 + 3712;
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

PPC_WEAK_FUNC(sub_83244C50) {
	__imp__sub_83244C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244C90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28692
	ctx.r4.s64 = r11.s64 + -28692;
	// addi r3,r10,30508
	ctx.r3.s64 = ctx.r10.s64 + 30508;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3728
	ctx.r3.s64 = ctx.r9.s64 + 3728;
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

PPC_WEAK_FUNC(sub_83244C90) {
	__imp__sub_83244C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244CD0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28684
	ctx.r4.s64 = r11.s64 + -28684;
	// addi r3,r10,30512
	ctx.r3.s64 = ctx.r10.s64 + 30512;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3744
	ctx.r3.s64 = ctx.r9.s64 + 3744;
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

PPC_WEAK_FUNC(sub_83244CD0) {
	__imp__sub_83244CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244D10) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28672
	ctx.r4.s64 = r11.s64 + -28672;
	// addi r3,r10,30516
	ctx.r3.s64 = ctx.r10.s64 + 30516;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3760
	ctx.r3.s64 = ctx.r9.s64 + 3760;
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

PPC_WEAK_FUNC(sub_83244D10) {
	__imp__sub_83244D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244D50) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28664
	ctx.r4.s64 = r11.s64 + -28664;
	// addi r3,r10,30520
	ctx.r3.s64 = ctx.r10.s64 + 30520;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3776
	ctx.r3.s64 = ctx.r9.s64 + 3776;
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

PPC_WEAK_FUNC(sub_83244D50) {
	__imp__sub_83244D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244D90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28656
	ctx.r4.s64 = r11.s64 + -28656;
	// addi r3,r10,30524
	ctx.r3.s64 = ctx.r10.s64 + 30524;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3792
	ctx.r3.s64 = ctx.r9.s64 + 3792;
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

PPC_WEAK_FUNC(sub_83244D90) {
	__imp__sub_83244D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244DD0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28648
	ctx.r4.s64 = r11.s64 + -28648;
	// addi r3,r10,30528
	ctx.r3.s64 = ctx.r10.s64 + 30528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3808
	ctx.r3.s64 = ctx.r9.s64 + 3808;
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

PPC_WEAK_FUNC(sub_83244DD0) {
	__imp__sub_83244DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244E10) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28640
	ctx.r4.s64 = r11.s64 + -28640;
	// addi r3,r10,30532
	ctx.r3.s64 = ctx.r10.s64 + 30532;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3824
	ctx.r3.s64 = ctx.r9.s64 + 3824;
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

PPC_WEAK_FUNC(sub_83244E10) {
	__imp__sub_83244E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244E50) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28632
	ctx.r4.s64 = r11.s64 + -28632;
	// addi r3,r10,30536
	ctx.r3.s64 = ctx.r10.s64 + 30536;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3840
	ctx.r3.s64 = ctx.r9.s64 + 3840;
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

PPC_WEAK_FUNC(sub_83244E50) {
	__imp__sub_83244E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244E90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28624
	ctx.r4.s64 = r11.s64 + -28624;
	// addi r3,r10,30540
	ctx.r3.s64 = ctx.r10.s64 + 30540;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3856
	ctx.r3.s64 = ctx.r9.s64 + 3856;
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

PPC_WEAK_FUNC(sub_83244E90) {
	__imp__sub_83244E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244ED0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28616
	ctx.r4.s64 = r11.s64 + -28616;
	// addi r3,r10,30544
	ctx.r3.s64 = ctx.r10.s64 + 30544;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3872
	ctx.r3.s64 = ctx.r9.s64 + 3872;
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

PPC_WEAK_FUNC(sub_83244ED0) {
	__imp__sub_83244ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244F10) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28604
	ctx.r4.s64 = r11.s64 + -28604;
	// addi r3,r10,30548
	ctx.r3.s64 = ctx.r10.s64 + 30548;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3888
	ctx.r3.s64 = ctx.r9.s64 + 3888;
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

PPC_WEAK_FUNC(sub_83244F10) {
	__imp__sub_83244F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244F50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,22936
	ctx.r4.s64 = r11.s64 + 22936;
	// addi r3,r10,30552
	ctx.r3.s64 = ctx.r10.s64 + 30552;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3904
	ctx.r3.s64 = ctx.r9.s64 + 3904;
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

PPC_WEAK_FUNC(sub_83244F50) {
	__imp__sub_83244F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244F90) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28596
	ctx.r4.s64 = r11.s64 + -28596;
	// addi r3,r10,30556
	ctx.r3.s64 = ctx.r10.s64 + 30556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3920
	ctx.r3.s64 = ctx.r9.s64 + 3920;
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

PPC_WEAK_FUNC(sub_83244F90) {
	__imp__sub_83244F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83244FD0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-28556
	ctx.r3.s64 = r11.s64 + -28556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83244FD0) {
	__imp__sub_83244FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245008) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27648
	ctx.r4.s64 = r11.s64 + -27648;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30564, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83245060:
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
	// bne 0x83245060
	if (!cr0.eq) goto loc_83245060;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324508C:
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
	// bne 0x8324508c
	if (!cr0.eq) goto loc_8324508C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3936
	ctx.r3.s64 = r11.s64 + 3936;
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

PPC_WEAK_FUNC(sub_83245008) {
	__imp__sub_83245008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832450C8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27648
	ctx.r4.s64 = r11.s64 + -27648;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30568, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83245120:
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
	// bne 0x83245120
	if (!cr0.eq) goto loc_83245120;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324514C:
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
	// bne 0x8324514c
	if (!cr0.eq) goto loc_8324514C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3944
	ctx.r3.s64 = r11.s64 + 3944;
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

PPC_WEAK_FUNC(sub_832450C8) {
	__imp__sub_832450C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245188) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27612
	ctx.r4.s64 = r11.s64 + -27612;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30572, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_832451E0:
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
	// bne 0x832451e0
	if (!cr0.eq) goto loc_832451E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324520C:
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
	// bne 0x8324520c
	if (!cr0.eq) goto loc_8324520C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3952
	ctx.r3.s64 = r11.s64 + 3952;
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

PPC_WEAK_FUNC(sub_83245188) {
	__imp__sub_83245188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245248) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27576
	ctx.r4.s64 = r11.s64 + -27576;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30576, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_832452A0:
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
	// bne 0x832452a0
	if (!cr0.eq) goto loc_832452A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_832452CC:
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
	// bne 0x832452cc
	if (!cr0.eq) goto loc_832452CC;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3960
	ctx.r3.s64 = r11.s64 + 3960;
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

PPC_WEAK_FUNC(sub_83245248) {
	__imp__sub_83245248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245308) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27544
	ctx.r4.s64 = r11.s64 + -27544;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30580, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83245360:
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
	// bne 0x83245360
	if (!cr0.eq) goto loc_83245360;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324538C:
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
	// bne 0x8324538c
	if (!cr0.eq) goto loc_8324538C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3968
	ctx.r3.s64 = r11.s64 + 3968;
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

PPC_WEAK_FUNC(sub_83245308) {
	__imp__sub_83245308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832453C8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27512
	ctx.r4.s64 = r11.s64 + -27512;
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30584, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_83245420:
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
	// bne 0x83245420
	if (!cr0.eq) goto loc_83245420;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8324544C:
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
	// bne 0x8324544c
	if (!cr0.eq) goto loc_8324544C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,3976
	ctx.r3.s64 = r11.s64 + 3976;
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

PPC_WEAK_FUNC(sub_832453C8) {
	__imp__sub_832453C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245488) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30588
	ctx.r3.s64 = ctx.r10.s64 + 30588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3984
	ctx.r3.s64 = ctx.r9.s64 + 3984;
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

PPC_WEAK_FUNC(sub_83245488) {
	__imp__sub_83245488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832454C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30592
	ctx.r3.s64 = ctx.r10.s64 + 30592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4000
	ctx.r3.s64 = ctx.r9.s64 + 4000;
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

PPC_WEAK_FUNC(sub_832454C8) {
	__imp__sub_832454C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245508) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30596
	ctx.r3.s64 = ctx.r10.s64 + 30596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4016
	ctx.r3.s64 = ctx.r9.s64 + 4016;
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

PPC_WEAK_FUNC(sub_83245508) {
	__imp__sub_83245508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245548) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-27480
	ctx.r4.s64 = r11.s64 + -27480;
	// addi r3,r10,30600
	ctx.r3.s64 = ctx.r10.s64 + 30600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4032
	ctx.r3.s64 = ctx.r9.s64 + 4032;
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

PPC_WEAK_FUNC(sub_83245548) {
	__imp__sub_83245548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245588) {
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
	// beq cr6,0x832455ac
	if (cr6.eq) goto loc_832455AC;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_832455AC:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x832455b8
	if (cr0.eq) goto loc_832455B8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_832455B8:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4048
	ctx.r3.s64 = ctx.r7.s64 + 4048;
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

PPC_WEAK_FUNC(sub_83245588) {
	__imp__sub_83245588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832455E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,4120
	ctx.r3.s64 = r11.s64 + 4120;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832455E8) {
	__imp__sub_832455E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832455F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_83245600:
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
	// bne 0x83245600
	if (!cr0.eq) goto loc_83245600;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4208
	ctx.r3.s64 = ctx.r7.s64 + 4208;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832455F8) {
	__imp__sub_832455F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_83245630:
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
	// bne 0x83245630
	if (!cr0.eq) goto loc_83245630;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4224
	ctx.r3.s64 = ctx.r7.s64 + 4224;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83245628) {
	__imp__sub_83245628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,4240
	ctx.r3.s64 = r11.s64 + 4240;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83245658) {
	__imp__sub_83245658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_83245670:
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
	// bne 0x83245670
	if (!cr0.eq) goto loc_83245670;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4256
	ctx.r3.s64 = ctx.r7.s64 + 4256;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83245668) {
	__imp__sub_83245668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = r11.s64 + 28344;
loc_832456A0:
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
	// bne 0x832456a0
	if (!cr0.eq) goto loc_832456A0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4272
	ctx.r3.s64 = ctx.r7.s64 + 4272;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83245698) {
	__imp__sub_83245698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832456C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,30688
	ctx.r3.s64 = ctx.r10.s64 + 30688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4288
	ctx.r3.s64 = ctx.r9.s64 + 4288;
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

PPC_WEAK_FUNC(sub_832456C8) {
	__imp__sub_832456C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245708) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,30696
	ctx.r3.s64 = ctx.r10.s64 + 30696;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4304
	ctx.r3.s64 = ctx.r9.s64 + 4304;
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

PPC_WEAK_FUNC(sub_83245708) {
	__imp__sub_83245708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245748) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30700
	ctx.r3.s64 = ctx.r10.s64 + 30700;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4320
	ctx.r3.s64 = ctx.r9.s64 + 4320;
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

PPC_WEAK_FUNC(sub_83245748) {
	__imp__sub_83245748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245788) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30704
	ctx.r3.s64 = ctx.r10.s64 + 30704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4336
	ctx.r3.s64 = ctx.r9.s64 + 4336;
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

PPC_WEAK_FUNC(sub_83245788) {
	__imp__sub_83245788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832457C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30708
	ctx.r3.s64 = ctx.r10.s64 + 30708;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4352
	ctx.r3.s64 = ctx.r9.s64 + 4352;
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

PPC_WEAK_FUNC(sub_832457C8) {
	__imp__sub_832457C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245808) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,30712
	ctx.r3.s64 = ctx.r10.s64 + 30712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4368
	ctx.r3.s64 = ctx.r9.s64 + 4368;
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

PPC_WEAK_FUNC(sub_83245808) {
	__imp__sub_83245808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245848) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16864
	ctx.r3.s64 = r11.s64 + -16864;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83245848) {
	__imp__sub_83245848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245880) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16848
	ctx.r3.s64 = r11.s64 + -16848;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83245880) {
	__imp__sub_83245880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832458B8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16828
	ctx.r3.s64 = r11.s64 + -16828;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832458B8) {
	__imp__sub_832458B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832458F0) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16808
	ctx.r3.s64 = r11.s64 + -16808;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832458F0) {
	__imp__sub_832458F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245928) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,30732
	ctx.r3.s64 = ctx.r10.s64 + 30732;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4416
	ctx.r3.s64 = ctx.r9.s64 + 4416;
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

PPC_WEAK_FUNC(sub_83245928) {
	__imp__sub_83245928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245968) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30736
	ctx.r3.s64 = ctx.r10.s64 + 30736;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4432
	ctx.r3.s64 = ctx.r9.s64 + 4432;
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

PPC_WEAK_FUNC(sub_83245968) {
	__imp__sub_83245968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832459A8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30740
	ctx.r3.s64 = ctx.r10.s64 + 30740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4448
	ctx.r3.s64 = ctx.r9.s64 + 4448;
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

PPC_WEAK_FUNC(sub_832459A8) {
	__imp__sub_832459A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832459E8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30744
	ctx.r3.s64 = ctx.r10.s64 + 30744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4464
	ctx.r3.s64 = ctx.r9.s64 + 4464;
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

PPC_WEAK_FUNC(sub_832459E8) {
	__imp__sub_832459E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245A28) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,22984
	ctx.r4.s64 = r11.s64 + 22984;
	// addi r3,r10,30748
	ctx.r3.s64 = ctx.r10.s64 + 30748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4480
	ctx.r3.s64 = ctx.r9.s64 + 4480;
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

PPC_WEAK_FUNC(sub_83245A28) {
	__imp__sub_83245A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245A68) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,23008
	ctx.r4.s64 = r11.s64 + 23008;
	// addi r3,r10,30752
	ctx.r3.s64 = ctx.r10.s64 + 30752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4496
	ctx.r3.s64 = ctx.r9.s64 + 4496;
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

PPC_WEAK_FUNC(sub_83245A68) {
	__imp__sub_83245A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245AA8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,30756
	ctx.r3.s64 = ctx.r10.s64 + 30756;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4512
	ctx.r3.s64 = ctx.r9.s64 + 4512;
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

PPC_WEAK_FUNC(sub_83245AA8) {
	__imp__sub_83245AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245AE8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,30760
	ctx.r3.s64 = ctx.r10.s64 + 30760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4528
	ctx.r3.s64 = ctx.r9.s64 + 4528;
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

PPC_WEAK_FUNC(sub_83245AE8) {
	__imp__sub_83245AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245B28) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,30764
	ctx.r3.s64 = ctx.r10.s64 + 30764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4544
	ctx.r3.s64 = ctx.r9.s64 + 4544;
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

PPC_WEAK_FUNC(sub_83245B28) {
	__imp__sub_83245B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245B68) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,30768
	ctx.r3.s64 = ctx.r10.s64 + 30768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4560
	ctx.r3.s64 = ctx.r9.s64 + 4560;
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

PPC_WEAK_FUNC(sub_83245B68) {
	__imp__sub_83245B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245BA8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-15688
	ctx.r4.s64 = r11.s64 + -15688;
	// addi r3,r10,30772
	ctx.r3.s64 = ctx.r10.s64 + 30772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4576
	ctx.r3.s64 = ctx.r9.s64 + 4576;
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

PPC_WEAK_FUNC(sub_83245BA8) {
	__imp__sub_83245BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83245BE8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-15664
	ctx.r4.s64 = r11.s64 + -15664;
	// addi r3,r10,30776
	ctx.r3.s64 = ctx.r10.s64 + 30776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4592
	ctx.r3.s64 = ctx.r9.s64 + 4592;
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

PPC_WEAK_FUNC(sub_83245BE8) {
	__imp__sub_83245BE8(ctx, base);
}

