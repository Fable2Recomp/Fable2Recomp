#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_83256180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832561A0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256180) {
	__imp__sub_83256180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832561B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832561D8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832561B8) {
	__imp__sub_832561B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832561F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256210;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832561F0) {
	__imp__sub_832561F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256248;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256228) {
	__imp__sub_83256228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256280;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256260) {
	__imp__sub_83256260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832562B8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256298) {
	__imp__sub_83256298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832562D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832562F0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832562D0) {
	__imp__sub_832562D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256328;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256308) {
	__imp__sub_83256308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-308
	ctx.r4.s64 = ctx.r11.s64 + -308;
	// addi r3,r10,-29452
	ctx.r3.s64 = ctx.r10.s64 + -29452;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256364;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16416
	ctx.r3.s64 = ctx.r9.s64 + 16416;
	// bl 0x82ca3700
	ctx.lr = 0x83256370;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256340) {
	__imp__sub_83256340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// addi r3,r10,-29448
	ctx.r3.s64 = ctx.r10.s64 + -29448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832563A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16432
	ctx.r3.s64 = ctx.r9.s64 + 16432;
	// bl 0x82ca3700
	ctx.lr = 0x832563B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256380) {
	__imp__sub_83256380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832563C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,4900
	ctx.r3.s64 = ctx.r11.s64 + 4900;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832563E0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832563C0) {
	__imp__sub_832563C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832563F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256418;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832563F8) {
	__imp__sub_832563F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256450;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256430) {
	__imp__sub_83256430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256488;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256468) {
	__imp__sub_83256468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832564A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832564C0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832564A0) {
	__imp__sub_832564A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832564D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = ctx.r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832564F8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832564D8) {
	__imp__sub_832564D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = ctx.r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256530;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256510) {
	__imp__sub_83256510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = ctx.r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256568;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256548) {
	__imp__sub_83256548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = ctx.r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832565A0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256580) {
	__imp__sub_83256580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832565B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = ctx.r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832565D8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832565B8) {
	__imp__sub_832565B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832565F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = ctx.r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256610;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832565F0) {
	__imp__sub_832565F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256648;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256628) {
	__imp__sub_83256628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256680;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29396, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256660) {
	__imp__sub_83256660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832566B8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256698) {
	__imp__sub_83256698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832566D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832566F0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29388, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832566D0) {
	__imp__sub_832566D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256728;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29384, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256708) {
	__imp__sub_83256708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256760;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256740) {
	__imp__sub_83256740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256798;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29376, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256778) {
	__imp__sub_83256778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832567B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832567D0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832567B0) {
	__imp__sub_832567B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832567E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256808;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832567E8) {
	__imp__sub_832567E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256840;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256820) {
	__imp__sub_83256820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256878;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256858) {
	__imp__sub_83256858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832568B0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256890) {
	__imp__sub_83256890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832568C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// addi r3,r10,-29352
	ctx.r3.s64 = ctx.r10.s64 + -29352;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832568EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16448
	ctx.r3.s64 = ctx.r9.s64 + 16448;
	// bl 0x82ca3700
	ctx.lr = 0x832568F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832568C8) {
	__imp__sub_832568C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3960
	ctx.r4.s64 = ctx.r11.s64 + 3960;
	// addi r3,r10,-29348
	ctx.r3.s64 = ctx.r10.s64 + -29348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325692C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16464
	ctx.r3.s64 = ctx.r9.s64 + 16464;
	// bl 0x82ca3700
	ctx.lr = 0x83256938;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256908) {
	__imp__sub_83256908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256968;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29344, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256948) {
	__imp__sub_83256948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832569A0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256980) {
	__imp__sub_83256980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832569B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832569D8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832569B8) {
	__imp__sub_832569B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832569F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = ctx.r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256A10;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29332, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832569F0) {
	__imp__sub_832569F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = ctx.r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256A48;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256A28) {
	__imp__sub_83256A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = ctx.r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256A80;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256A60) {
	__imp__sub_83256A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = ctx.r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256AB8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256A98) {
	__imp__sub_83256A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = ctx.r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256AF0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256AD0) {
	__imp__sub_83256AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = ctx.r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256B28;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256B08) {
	__imp__sub_83256B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256B60;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256B40) {
	__imp__sub_83256B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256B98;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256B78) {
	__imp__sub_83256B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256BD0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256BB0) {
	__imp__sub_83256BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256C08;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256BE8) {
	__imp__sub_83256BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256C40;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256C20) {
	__imp__sub_83256C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256C78;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256C58) {
	__imp__sub_83256C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256CB0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256C90) {
	__imp__sub_83256C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256CE8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256CC8) {
	__imp__sub_83256CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256D20;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256D00) {
	__imp__sub_83256D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256D58;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256D38) {
	__imp__sub_83256D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256D90;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256D70) {
	__imp__sub_83256D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83256DC8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256DA8) {
	__imp__sub_83256DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-29260
	ctx.r3.s64 = ctx.r10.s64 + -29260;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256E04;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16480
	ctx.r3.s64 = ctx.r9.s64 + 16480;
	// bl 0x82ca3700
	ctx.lr = 0x83256E10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256DE0) {
	__imp__sub_83256DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-29256
	ctx.r3.s64 = ctx.r10.s64 + -29256;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256E44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16496
	ctx.r3.s64 = ctx.r9.s64 + 16496;
	// bl 0x82ca3700
	ctx.lr = 0x83256E50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256E20) {
	__imp__sub_83256E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-29252
	ctx.r3.s64 = ctx.r10.s64 + -29252;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256E84;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16512
	ctx.r3.s64 = ctx.r9.s64 + 16512;
	// bl 0x82ca3700
	ctx.lr = 0x83256E90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256E60) {
	__imp__sub_83256E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6464
	ctx.r4.s64 = ctx.r11.s64 + 6464;
	// addi r3,r10,-29248
	ctx.r3.s64 = ctx.r10.s64 + -29248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256EC4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16528
	ctx.r3.s64 = ctx.r9.s64 + 16528;
	// bl 0x82ca3700
	ctx.lr = 0x83256ED0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256EA0) {
	__imp__sub_83256EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6476
	ctx.r4.s64 = ctx.r11.s64 + 6476;
	// addi r3,r10,-29244
	ctx.r3.s64 = ctx.r10.s64 + -29244;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256F04;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16544
	ctx.r3.s64 = ctx.r9.s64 + 16544;
	// bl 0x82ca3700
	ctx.lr = 0x83256F10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256EE0) {
	__imp__sub_83256EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6548
	ctx.r4.s64 = ctx.r11.s64 + 6548;
	// addi r3,r10,-29240
	ctx.r3.s64 = ctx.r10.s64 + -29240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256F44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16560
	ctx.r3.s64 = ctx.r9.s64 + 16560;
	// bl 0x82ca3700
	ctx.lr = 0x83256F50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256F20) {
	__imp__sub_83256F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6560
	ctx.r4.s64 = ctx.r11.s64 + 6560;
	// addi r3,r10,-29236
	ctx.r3.s64 = ctx.r10.s64 + -29236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256F84;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16576
	ctx.r3.s64 = ctx.r9.s64 + 16576;
	// bl 0x82ca3700
	ctx.lr = 0x83256F90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256F60) {
	__imp__sub_83256F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6576
	ctx.r4.s64 = ctx.r11.s64 + 6576;
	// addi r3,r10,-29232
	ctx.r3.s64 = ctx.r10.s64 + -29232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83256FC4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16592
	ctx.r3.s64 = ctx.r9.s64 + 16592;
	// bl 0x82ca3700
	ctx.lr = 0x83256FD0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256FA0) {
	__imp__sub_83256FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83256FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// addi r3,r10,-29228
	ctx.r3.s64 = ctx.r10.s64 + -29228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83257004;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16608
	ctx.r3.s64 = ctx.r9.s64 + 16608;
	// bl 0x82ca3700
	ctx.lr = 0x83257010;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83256FE0) {
	__imp__sub_83256FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17080
	ctx.r4.s64 = ctx.r11.s64 + -17080;
	// addi r3,r10,-29224
	ctx.r3.s64 = ctx.r10.s64 + -29224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83257044;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16624
	ctx.r3.s64 = ctx.r9.s64 + 16624;
	// bl 0x82ca3700
	ctx.lr = 0x83257050;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257020) {
	__imp__sub_83257020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v0,0,r9
	temp.u32 = ctx.r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v0.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// lfs f13,24712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24712);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,-29216
	ctx.r4.s64 = ctx.r5.s64 + -29216;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32(simd::load_f32(ctx.v13.f32), simd::permute_f32(simd::load_f32(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// lvlx v11,0,r6
	temp.u32 = ctx.r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32(simd::load_f32(ctx.v11.f32), simd::permute_f32(simd::load_f32(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32(simd::load_f32(ctx.v0.f32), simd::permute_f32(simd::load_f32(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v0,
		VectorMaskL);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257060) {
	__imp__sub_83257060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832570C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832570E0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832570C0) {
	__imp__sub_832570C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832570F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257118;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832570F8) {
	__imp__sub_832570F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257150;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257130) {
	__imp__sub_83257130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = ctx.r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257188;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257168) {
	__imp__sub_83257168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832571A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = ctx.r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832571C0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832571A0) {
	__imp__sub_832571A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832571D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = ctx.r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832571F8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832571D8) {
	__imp__sub_832571D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = ctx.r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257230;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257210) {
	__imp__sub_83257210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = ctx.r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257268;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257248) {
	__imp__sub_83257248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = ctx.r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832572A0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257280) {
	__imp__sub_83257280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832572B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832572D8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832572B8) {
	__imp__sub_832572B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832572F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257310;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832572F0) {
	__imp__sub_832572F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257348;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257328) {
	__imp__sub_83257328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257380;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257360) {
	__imp__sub_83257360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832573B8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257398) {
	__imp__sub_83257398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832573D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832573F0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832573D0) {
	__imp__sub_832573D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257428;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257408) {
	__imp__sub_83257408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257460;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257440) {
	__imp__sub_83257440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257498;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257478) {
	__imp__sub_83257478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832574B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832574D0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832574B0) {
	__imp__sub_832574B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832574E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257508;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832574E8) {
	__imp__sub_832574E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257540;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257520) {
	__imp__sub_83257520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6752
	ctx.r4.s64 = ctx.r11.s64 + 6752;
	// addi r3,r10,-29116
	ctx.r3.s64 = ctx.r10.s64 + -29116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325757C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16640
	ctx.r3.s64 = ctx.r9.s64 + 16640;
	// bl 0x82ca3700
	ctx.lr = 0x83257588;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257558) {
	__imp__sub_83257558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// addi r3,r10,-29112
	ctx.r3.s64 = ctx.r10.s64 + -29112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832575BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16656
	ctx.r3.s64 = ctx.r9.s64 + 16656;
	// bl 0x82ca3700
	ctx.lr = 0x832575C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257598) {
	__imp__sub_83257598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832575D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6780
	ctx.r4.s64 = ctx.r11.s64 + 6780;
	// addi r3,r10,-29108
	ctx.r3.s64 = ctx.r10.s64 + -29108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832575FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16672
	ctx.r3.s64 = ctx.r9.s64 + 16672;
	// bl 0x82ca3700
	ctx.lr = 0x83257608;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832575D8) {
	__imp__sub_832575D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6840
	ctx.r4.s64 = ctx.r11.s64 + 6840;
	// addi r3,r10,-29104
	ctx.r3.s64 = ctx.r10.s64 + -29104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325763C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16688
	ctx.r3.s64 = ctx.r9.s64 + 16688;
	// bl 0x82ca3700
	ctx.lr = 0x83257648;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257618) {
	__imp__sub_83257618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6876
	ctx.r4.s64 = ctx.r11.s64 + 6876;
	// addi r3,r10,-29100
	ctx.r3.s64 = ctx.r10.s64 + -29100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325767C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16704
	ctx.r3.s64 = ctx.r9.s64 + 16704;
	// bl 0x82ca3700
	ctx.lr = 0x83257688;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257658) {
	__imp__sub_83257658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6912
	ctx.r4.s64 = ctx.r11.s64 + 6912;
	// addi r3,r10,-29096
	ctx.r3.s64 = ctx.r10.s64 + -29096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832576BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16720
	ctx.r3.s64 = ctx.r9.s64 + 16720;
	// bl 0x82ca3700
	ctx.lr = 0x832576C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257698) {
	__imp__sub_83257698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832576D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6944
	ctx.r4.s64 = ctx.r11.s64 + 6944;
	// addi r3,r10,-29092
	ctx.r3.s64 = ctx.r10.s64 + -29092;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832576FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16736
	ctx.r3.s64 = ctx.r9.s64 + 16736;
	// bl 0x82ca3700
	ctx.lr = 0x83257708;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832576D8) {
	__imp__sub_832576D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6976
	ctx.r4.s64 = ctx.r11.s64 + 6976;
	// addi r3,r10,-29088
	ctx.r3.s64 = ctx.r10.s64 + -29088;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325773C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16752
	ctx.r3.s64 = ctx.r9.s64 + 16752;
	// bl 0x82ca3700
	ctx.lr = 0x83257748;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257718) {
	__imp__sub_83257718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7020
	ctx.r4.s64 = ctx.r11.s64 + 7020;
	// addi r3,r10,-29084
	ctx.r3.s64 = ctx.r10.s64 + -29084;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325777C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16768
	ctx.r3.s64 = ctx.r9.s64 + 16768;
	// bl 0x82ca3700
	ctx.lr = 0x83257788;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257758) {
	__imp__sub_83257758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7064
	ctx.r4.s64 = ctx.r11.s64 + 7064;
	// addi r3,r10,-29080
	ctx.r3.s64 = ctx.r10.s64 + -29080;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832577BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16784
	ctx.r3.s64 = ctx.r9.s64 + 16784;
	// bl 0x82ca3700
	ctx.lr = 0x832577C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257798) {
	__imp__sub_83257798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832577D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7108
	ctx.r4.s64 = ctx.r11.s64 + 7108;
	// addi r3,r10,-29076
	ctx.r3.s64 = ctx.r10.s64 + -29076;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832577FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16800
	ctx.r3.s64 = ctx.r9.s64 + 16800;
	// bl 0x82ca3700
	ctx.lr = 0x83257808;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832577D8) {
	__imp__sub_832577D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// addi r3,r10,-29072
	ctx.r3.s64 = ctx.r10.s64 + -29072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325783C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16816
	ctx.r3.s64 = ctx.r9.s64 + 16816;
	// bl 0x82ca3700
	ctx.lr = 0x83257848;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257818) {
	__imp__sub_83257818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7188
	ctx.r4.s64 = ctx.r11.s64 + 7188;
	// addi r3,r10,-29068
	ctx.r3.s64 = ctx.r10.s64 + -29068;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325787C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16832
	ctx.r3.s64 = ctx.r9.s64 + 16832;
	// bl 0x82ca3700
	ctx.lr = 0x83257888;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257858) {
	__imp__sub_83257858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7232
	ctx.r4.s64 = ctx.r11.s64 + 7232;
	// addi r3,r10,-29064
	ctx.r3.s64 = ctx.r10.s64 + -29064;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832578BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16848
	ctx.r3.s64 = ctx.r9.s64 + 16848;
	// bl 0x82ca3700
	ctx.lr = 0x832578C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257898) {
	__imp__sub_83257898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832578D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7276
	ctx.r4.s64 = ctx.r11.s64 + 7276;
	// addi r3,r10,-29060
	ctx.r3.s64 = ctx.r10.s64 + -29060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832578FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16864
	ctx.r3.s64 = ctx.r9.s64 + 16864;
	// bl 0x82ca3700
	ctx.lr = 0x83257908;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832578D8) {
	__imp__sub_832578D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,1264
	ctx.r4.s64 = ctx.r11.s64 + 1264;
	// addi r3,r10,-29056
	ctx.r3.s64 = ctx.r10.s64 + -29056;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325793C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16880
	ctx.r3.s64 = ctx.r9.s64 + 16880;
	// bl 0x82ca3700
	ctx.lr = 0x83257948;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257918) {
	__imp__sub_83257918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257978;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257958) {
	__imp__sub_83257958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832579B0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257990) {
	__imp__sub_83257990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832579C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832579E8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29044, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832579C8) {
	__imp__sub_832579C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = ctx.r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257A20;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257A00) {
	__imp__sub_83257A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = ctx.r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257A58;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257A38) {
	__imp__sub_83257A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = ctx.r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257A90;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257A70) {
	__imp__sub_83257A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = ctx.r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257AC8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257AA8) {
	__imp__sub_83257AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = ctx.r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257B00;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257AE0) {
	__imp__sub_83257AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = ctx.r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257B38;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257B18) {
	__imp__sub_83257B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257B70;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257B50) {
	__imp__sub_83257B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257BA8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257B88) {
	__imp__sub_83257B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257BE0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257BC0) {
	__imp__sub_83257BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257C18;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29004, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257BF8) {
	__imp__sub_83257BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257C50;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-29000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29000, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257C30) {
	__imp__sub_83257C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257C88;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28996, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257C68) {
	__imp__sub_83257C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257CC0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257CA0) {
	__imp__sub_83257CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257CF8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257CD8) {
	__imp__sub_83257CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257D30;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257D10) {
	__imp__sub_83257D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257D68;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257D48) {
	__imp__sub_83257D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257DA0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257D80) {
	__imp__sub_83257D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257DD8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257DB8) {
	__imp__sub_83257DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// addi r3,r10,-28968
	ctx.r3.s64 = ctx.r10.s64 + -28968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83257E14;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16896
	ctx.r3.s64 = ctx.r9.s64 + 16896;
	// bl 0x82ca3700
	ctx.lr = 0x83257E20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257DF0) {
	__imp__sub_83257DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = ctx.r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257E50;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257E30) {
	__imp__sub_83257E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257E88;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257E68) {
	__imp__sub_83257E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = ctx.r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257EC0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28956, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257EA0) {
	__imp__sub_83257EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = ctx.r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257EF8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257ED8) {
	__imp__sub_83257ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = ctx.r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257F30;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28948, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257F10) {
	__imp__sub_83257F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = ctx.r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257F68;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28944, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257F48) {
	__imp__sub_83257F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = ctx.r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257FA0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257F80) {
	__imp__sub_83257F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = ctx.r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83257FD8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257FB8) {
	__imp__sub_83257FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83257FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = ctx.r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258010;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83257FF0) {
	__imp__sub_83257FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258048;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258028) {
	__imp__sub_83258028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258080;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258060) {
	__imp__sub_83258060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = ctx.r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832580B8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28920, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258098) {
	__imp__sub_83258098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832580D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832580F0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28916, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832580D0) {
	__imp__sub_832580D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258128;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258108) {
	__imp__sub_83258108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = ctx.r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258160;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258140) {
	__imp__sub_83258140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = ctx.r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258198;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258178) {
	__imp__sub_83258178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832581B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = ctx.r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832581D0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832581B0) {
	__imp__sub_832581B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832581E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = ctx.r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258208;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832581E8) {
	__imp__sub_832581E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258240;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258220) {
	__imp__sub_83258220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = ctx.r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258278;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258258) {
	__imp__sub_83258258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = ctx.r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832582B0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258290) {
	__imp__sub_83258290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832582C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-308
	ctx.r4.s64 = ctx.r11.s64 + -308;
	// addi r3,r10,-28880
	ctx.r3.s64 = ctx.r10.s64 + -28880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832582EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16912
	ctx.r3.s64 = ctx.r9.s64 + 16912;
	// bl 0x82ca3700
	ctx.lr = 0x832582F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832582C8) {
	__imp__sub_832582C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// addi r3,r10,-28876
	ctx.r3.s64 = ctx.r10.s64 + -28876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325832C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16928
	ctx.r3.s64 = ctx.r9.s64 + 16928;
	// bl 0x82ca3700
	ctx.lr = 0x83258338;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258308) {
	__imp__sub_83258308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7716
	ctx.r4.s64 = ctx.r11.s64 + 7716;
	// addi r3,r10,-28872
	ctx.r3.s64 = ctx.r10.s64 + -28872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325836C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16944
	ctx.r3.s64 = ctx.r9.s64 + 16944;
	// bl 0x82ca3700
	ctx.lr = 0x83258378;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258348) {
	__imp__sub_83258348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7752
	ctx.r4.s64 = ctx.r11.s64 + 7752;
	// addi r3,r10,-28868
	ctx.r3.s64 = ctx.r10.s64 + -28868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832583AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16960
	ctx.r3.s64 = ctx.r9.s64 + 16960;
	// bl 0x82ca3700
	ctx.lr = 0x832583B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258388) {
	__imp__sub_83258388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832583C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7784
	ctx.r4.s64 = ctx.r11.s64 + 7784;
	// addi r3,r10,-28864
	ctx.r3.s64 = ctx.r10.s64 + -28864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832583EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16976
	ctx.r3.s64 = ctx.r9.s64 + 16976;
	// bl 0x82ca3700
	ctx.lr = 0x832583F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832583C8) {
	__imp__sub_832583C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7816
	ctx.r4.s64 = ctx.r11.s64 + 7816;
	// addi r3,r10,-28860
	ctx.r3.s64 = ctx.r10.s64 + -28860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325842C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,16992
	ctx.r3.s64 = ctx.r9.s64 + 16992;
	// bl 0x82ca3700
	ctx.lr = 0x83258438;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258408) {
	__imp__sub_83258408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,7852
	ctx.r4.s64 = ctx.r11.s64 + 7852;
	// addi r3,r10,-28856
	ctx.r3.s64 = ctx.r10.s64 + -28856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325846C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17008
	ctx.r3.s64 = ctx.r9.s64 + 17008;
	// bl 0x82ca3700
	ctx.lr = 0x83258478;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258448) {
	__imp__sub_83258448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,8932
	ctx.r4.s64 = ctx.r11.s64 + 8932;
	// addi r3,r10,-28852
	ctx.r3.s64 = ctx.r10.s64 + -28852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832584AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17120
	ctx.r3.s64 = ctx.r9.s64 + 17120;
	// bl 0x82ca3700
	ctx.lr = 0x832584B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258488) {
	__imp__sub_83258488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832584C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// addi r3,r10,-28848
	ctx.r3.s64 = ctx.r10.s64 + -28848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832584EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17136
	ctx.r3.s64 = ctx.r9.s64 + 17136;
	// bl 0x82ca3700
	ctx.lr = 0x832584F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832584C8) {
	__imp__sub_832584C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
	// addi r3,r10,-28844
	ctx.r3.s64 = ctx.r10.s64 + -28844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325852C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17152
	ctx.r3.s64 = ctx.r9.s64 + 17152;
	// bl 0x82ca3700
	ctx.lr = 0x83258538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258508) {
	__imp__sub_83258508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,12588
	ctx.r4.s64 = ctx.r11.s64 + 12588;
	// addi r3,r10,-28840
	ctx.r3.s64 = ctx.r10.s64 + -28840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325856C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17184
	ctx.r3.s64 = ctx.r9.s64 + 17184;
	// bl 0x82ca3700
	ctx.lr = 0x83258578;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258548) {
	__imp__sub_83258548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,13808
	ctx.r4.s64 = ctx.r11.s64 + 13808;
	// addi r3,r10,-28836
	ctx.r3.s64 = ctx.r10.s64 + -28836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832585AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17200
	ctx.r3.s64 = ctx.r9.s64 + 17200;
	// bl 0x82ca3700
	ctx.lr = 0x832585B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258588) {
	__imp__sub_83258588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832585C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,13816
	ctx.r4.s64 = ctx.r11.s64 + 13816;
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832585EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17216
	ctx.r3.s64 = ctx.r9.s64 + 17216;
	// bl 0x82ca3700
	ctx.lr = 0x832585F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832585C8) {
	__imp__sub_832585C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,13832
	ctx.r4.s64 = ctx.r11.s64 + 13832;
	// addi r3,r10,-28828
	ctx.r3.s64 = ctx.r10.s64 + -28828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325862C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17232
	ctx.r3.s64 = ctx.r9.s64 + 17232;
	// bl 0x82ca3700
	ctx.lr = 0x83258638;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258608) {
	__imp__sub_83258608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8325865C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8325866c
	if (ctx.cr6.eq) goto loc_8325866C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8325866C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258678
	if (ctx.cr0.eq) goto loc_83258678;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258678:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258684
	if (ctx.cr0.eq) goto loc_83258684;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258684:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-28824
	ctx.r8.s64 = ctx.r9.s64 + -28824;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,17248
	ctx.r3.s64 = ctx.r7.s64 + 17248;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832586C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258648) {
	__imp__sub_83258648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832586D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22340
	ctx.r4.s64 = ctx.r11.s64 + 22340;
	// addi r3,r10,-28812
	ctx.r3.s64 = ctx.r10.s64 + -28812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832586FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17264
	ctx.r3.s64 = ctx.r9.s64 + 17264;
	// bl 0x82ca3700
	ctx.lr = 0x83258708;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832586D8) {
	__imp__sub_832586D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22348
	ctx.r4.s64 = ctx.r11.s64 + 22348;
	// addi r3,r10,-28808
	ctx.r3.s64 = ctx.r10.s64 + -28808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325873C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17280
	ctx.r3.s64 = ctx.r9.s64 + 17280;
	// bl 0x82ca3700
	ctx.lr = 0x83258748;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258718) {
	__imp__sub_83258718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22356
	ctx.r4.s64 = ctx.r11.s64 + 22356;
	// addi r3,r10,-28804
	ctx.r3.s64 = ctx.r10.s64 + -28804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325877C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17296
	ctx.r3.s64 = ctx.r9.s64 + 17296;
	// bl 0x82ca3700
	ctx.lr = 0x83258788;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258758) {
	__imp__sub_83258758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22364
	ctx.r4.s64 = ctx.r11.s64 + 22364;
	// addi r3,r10,-28800
	ctx.r3.s64 = ctx.r10.s64 + -28800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832587BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17312
	ctx.r3.s64 = ctx.r9.s64 + 17312;
	// bl 0x82ca3700
	ctx.lr = 0x832587C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258798) {
	__imp__sub_83258798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832587D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22372
	ctx.r4.s64 = ctx.r11.s64 + 22372;
	// addi r3,r10,-28796
	ctx.r3.s64 = ctx.r10.s64 + -28796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832587FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17328
	ctx.r3.s64 = ctx.r9.s64 + 17328;
	// bl 0x82ca3700
	ctx.lr = 0x83258808;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832587D8) {
	__imp__sub_832587D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22380
	ctx.r4.s64 = ctx.r11.s64 + 22380;
	// addi r3,r10,-28792
	ctx.r3.s64 = ctx.r10.s64 + -28792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325883C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17344
	ctx.r3.s64 = ctx.r9.s64 + 17344;
	// bl 0x82ca3700
	ctx.lr = 0x83258848;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258818) {
	__imp__sub_83258818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22388
	ctx.r4.s64 = ctx.r11.s64 + 22388;
	// addi r3,r10,-28788
	ctx.r3.s64 = ctx.r10.s64 + -28788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325887C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17360
	ctx.r3.s64 = ctx.r9.s64 + 17360;
	// bl 0x82ca3700
	ctx.lr = 0x83258888;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258858) {
	__imp__sub_83258858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22396
	ctx.r4.s64 = ctx.r11.s64 + 22396;
	// addi r3,r10,-28784
	ctx.r3.s64 = ctx.r10.s64 + -28784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832588BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17376
	ctx.r3.s64 = ctx.r9.s64 + 17376;
	// bl 0x82ca3700
	ctx.lr = 0x832588C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258898) {
	__imp__sub_83258898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832588D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22412
	ctx.r4.s64 = ctx.r11.s64 + 22412;
	// addi r3,r10,-28780
	ctx.r3.s64 = ctx.r10.s64 + -28780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832588FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17392
	ctx.r3.s64 = ctx.r9.s64 + 17392;
	// bl 0x82ca3700
	ctx.lr = 0x83258908;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832588D8) {
	__imp__sub_832588D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22428
	ctx.r4.s64 = ctx.r11.s64 + 22428;
	// addi r3,r10,-28776
	ctx.r3.s64 = ctx.r10.s64 + -28776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325893C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17408
	ctx.r3.s64 = ctx.r9.s64 + 17408;
	// bl 0x82ca3700
	ctx.lr = 0x83258948;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258918) {
	__imp__sub_83258918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22436
	ctx.r4.s64 = ctx.r11.s64 + 22436;
	// addi r3,r10,-28772
	ctx.r3.s64 = ctx.r10.s64 + -28772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8325897C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17424
	ctx.r3.s64 = ctx.r9.s64 + 17424;
	// bl 0x82ca3700
	ctx.lr = 0x83258988;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258958) {
	__imp__sub_83258958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22444
	ctx.r4.s64 = ctx.r11.s64 + 22444;
	// addi r3,r10,-28768
	ctx.r3.s64 = ctx.r10.s64 + -28768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832589BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17440
	ctx.r3.s64 = ctx.r9.s64 + 17440;
	// bl 0x82ca3700
	ctx.lr = 0x832589C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258998) {
	__imp__sub_83258998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832589D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22456
	ctx.r4.s64 = ctx.r11.s64 + 22456;
	// addi r3,r10,-28764
	ctx.r3.s64 = ctx.r10.s64 + -28764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832589FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17456
	ctx.r3.s64 = ctx.r9.s64 + 17456;
	// bl 0x82ca3700
	ctx.lr = 0x83258A08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832589D8) {
	__imp__sub_832589D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,25268
	ctx.r4.s64 = ctx.r11.s64 + 25268;
	// addi r3,r10,-28760
	ctx.r3.s64 = ctx.r10.s64 + -28760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258A3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17472
	ctx.r3.s64 = ctx.r9.s64 + 17472;
	// bl 0x82ca3700
	ctx.lr = 0x83258A48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258A18) {
	__imp__sub_83258A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22464
	ctx.r4.s64 = ctx.r11.s64 + 22464;
	// addi r3,r10,-28756
	ctx.r3.s64 = ctx.r10.s64 + -28756;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258A7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17488
	ctx.r3.s64 = ctx.r9.s64 + 17488;
	// bl 0x82ca3700
	ctx.lr = 0x83258A88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258A58) {
	__imp__sub_83258A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-32620
	ctx.r4.s64 = ctx.r11.s64 + -32620;
	// addi r3,r10,-28752
	ctx.r3.s64 = ctx.r10.s64 + -28752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258ABC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17504
	ctx.r3.s64 = ctx.r9.s64 + 17504;
	// bl 0x82ca3700
	ctx.lr = 0x83258AC8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258A98) {
	__imp__sub_83258A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-28748
	ctx.r3.s64 = ctx.r10.s64 + -28748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258AFC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17624
	ctx.r3.s64 = ctx.r9.s64 + 17624;
	// bl 0x82ca3700
	ctx.lr = 0x83258B08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258AD8) {
	__imp__sub_83258AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-28744
	ctx.r3.s64 = ctx.r10.s64 + -28744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258B3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17640
	ctx.r3.s64 = ctx.r9.s64 + 17640;
	// bl 0x82ca3700
	ctx.lr = 0x83258B48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258B18) {
	__imp__sub_83258B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-28740
	ctx.r3.s64 = ctx.r10.s64 + -28740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258B7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17656
	ctx.r3.s64 = ctx.r9.s64 + 17656;
	// bl 0x82ca3700
	ctx.lr = 0x83258B88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258B58) {
	__imp__sub_83258B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,22688
	ctx.r3.s64 = ctx.r11.s64 + 22688;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258BB8;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258B98) {
	__imp__sub_83258B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83258BF0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-28732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258BD0) {
	__imp__sub_83258BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_83258C10:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83258c10
	if (!ctx.cr0.eq) goto loc_83258C10;
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-28728
	ctx.r6.s64 = ctx.r7.s64 + -28728;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// addi r3,r5,17672
	ctx.r3.s64 = ctx.r5.s64 + 17672;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stb r10,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r10.u8);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83258C08) {
	__imp__sub_83258C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,26184
	ctx.r4.s64 = ctx.r11.s64 + 26184;
	// addi r3,r10,-28708
	ctx.r3.s64 = ctx.r10.s64 + -28708;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258C74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17792
	ctx.r3.s64 = ctx.r9.s64 + 17792;
	// bl 0x82ca3700
	ctx.lr = 0x83258C80;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258C50) {
	__imp__sub_83258C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,26208
	ctx.r4.s64 = ctx.r11.s64 + 26208;
	// addi r3,r10,-28704
	ctx.r3.s64 = ctx.r10.s64 + -28704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258CB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17808
	ctx.r3.s64 = ctx.r9.s64 + 17808;
	// bl 0x82ca3700
	ctx.lr = 0x83258CC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258C90) {
	__imp__sub_83258C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,26228
	ctx.r4.s64 = ctx.r11.s64 + 26228;
	// addi r3,r10,-28700
	ctx.r3.s64 = ctx.r10.s64 + -28700;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258CF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17824
	ctx.r3.s64 = ctx.r9.s64 + 17824;
	// bl 0x82ca3700
	ctx.lr = 0x83258D00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258CD0) {
	__imp__sub_83258CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83258D10) {
	__imp__sub_83258D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-28688
	ctx.r3.s64 = ctx.r10.s64 + -28688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258D44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17856
	ctx.r3.s64 = ctx.r9.s64 + 17856;
	// bl 0x82ca3700
	ctx.lr = 0x83258D50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258D20) {
	__imp__sub_83258D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-28684
	ctx.r3.s64 = ctx.r10.s64 + -28684;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258D84;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17872
	ctx.r3.s64 = ctx.r9.s64 + 17872;
	// bl 0x82ca3700
	ctx.lr = 0x83258D90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258D60) {
	__imp__sub_83258D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-28680
	ctx.r3.s64 = ctx.r10.s64 + -28680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258DC4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17888
	ctx.r3.s64 = ctx.r9.s64 + 17888;
	// bl 0x82ca3700
	ctx.lr = 0x83258DD0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258DA0) {
	__imp__sub_83258DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,27512
	ctx.r4.s64 = ctx.r11.s64 + 27512;
	// addi r3,r10,-28676
	ctx.r3.s64 = ctx.r10.s64 + -28676;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258E04;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17904
	ctx.r3.s64 = ctx.r9.s64 + 17904;
	// bl 0x82ca3700
	ctx.lr = 0x83258E10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258DE0) {
	__imp__sub_83258DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,29108
	ctx.r4.s64 = ctx.r11.s64 + 29108;
	// addi r3,r10,-28672
	ctx.r3.s64 = ctx.r10.s64 + -28672;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83258E44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,17920
	ctx.r3.s64 = ctx.r9.s64 + 17920;
	// bl 0x82ca3700
	ctx.lr = 0x83258E50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258E20) {
	__imp__sub_83258E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,17936
	ctx.r3.s64 = ctx.r11.s64 + 17936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83258E60) {
	__imp__sub_83258E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30900
	ctx.r10.s64 = ctx.r10.s64 + 30900;
	// addi r31,r9,-24552
	ctx.r31.s64 = ctx.r9.s64 + -24552;
loc_83258E94:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x83258e94
	if (!ctx.cr6.eq) goto loc_83258E94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82625e00
	ctx.lr = 0x83258EB4;
	sub_82625E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83258ec8
	if (!ctx.cr6.eq) goto loc_83258EC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83258ed4
	goto loc_83258ED4;
loc_83258EC8:
	// bl 0x82625d68
	ctx.lr = 0x83258ECC;
	sub_82625D68(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83258ED4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,17736
	ctx.r11.s64 = ctx.r11.s64 + 17736;
	// addi r9,r10,-1124
	ctx.r9.s64 = ctx.r10.s64 + -1124;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r3,r10,18024
	ctx.r3.s64 = ctx.r10.s64 + 18024;
	// bl 0x82ca3700
	ctx.lr = 0x83258F0C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258E70) {
	__imp__sub_83258E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,-19236
	ctx.r6.s64 = ctx.r11.s64 + -19236;
	// addi r4,r9,31076
	ctx.r4.s64 = ctx.r9.s64 + 31076;
	// addi r3,r8,-28648
	ctx.r3.s64 = ctx.r8.s64 + -28648;
	// addi r5,r10,24456
	ctx.r5.s64 = ctx.r10.s64 + 24456;
	// bl 0x82e86010
	ctx.lr = 0x83258F50;
	sub_82E86010(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18072
	ctx.r3.s64 = ctx.r7.s64 + 18072;
	// bl 0x82ca3700
	ctx.lr = 0x83258F5C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258F20) {
	__imp__sub_83258F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83258F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	ctx.lr = 0x83258F84;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83258f94
	if (ctx.cr6.eq) goto loc_83258F94;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83258F94:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258fa0
	if (ctx.cr0.eq) goto loc_83258FA0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258FA0:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83258fac
	if (ctx.cr0.eq) goto loc_83258FAC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83258FAC:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-28372
	ctx.r8.s64 = ctx.r9.s64 + -28372;
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// addi r3,r7,18096
	ctx.r3.s64 = ctx.r7.s64 + 18096;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83258FF0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83258F70) {
	__imp__sub_83258F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r8,-28256
	ctx.r6.s64 = ctx.r8.s64 + -28256;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r5,r7,-28240
	ctx.r5.s64 = ctx.r7.s64 + -28240;
	// lvlx v13,0,r10
	temp.u32 = ctx.r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// vspltw v10,v13,0
	simd::store_i32(ctx.v10.u32, simd::permute_i32(simd::load_i32(ctx.v13.u32), 0xFF));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r4,-31950
	ctx.r4.s64 = -2093875200;
	// lvlx v12,0,r9
	temp.u32 = ctx.r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v12.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// vspltw v11,v12,0
	simd::store_i32(ctx.v11.u32, simd::permute_i32(simd::load_i32(ctx.v12.u32), 0xFF));
	// lvx128 v13,r0,r6
	ctx.v13 = simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL);
	// addi r11,r4,-24224
	ctx.r11.s64 = ctx.r4.s64 + -24224;
	// lvx128 v12,r0,r5
	ctx.v12 = simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL);
	// li r3,32
	ctx.r3.s64 = 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// vand v12,v11,v12
	simd::store_u8(ctx.v12.u8, simd::and_u8(simd::load_u8(ctx.v11.u8), simd::load_u8(ctx.v12.u8)));
	// vand v13,v10,v13
	simd::store_u8(ctx.v13.u8, simd::and_u8(simd::load_u8(ctx.v10.u8), simd::load_u8(ctx.v13.u8)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v0,
		VectorMaskL);
	// stvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v12,
		VectorMaskL);
	// stvx128 v13,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v13,
		VectorMaskL);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259000) {
	__imp__sub_83259000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-28360
	ctx.r3.s64 = ctx.r11.s64 + -28360;
	// bl 0x832b258c
	ctx.lr = 0x83259088;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18112
	ctx.r3.s64 = ctx.r10.s64 + 18112;
	// bl 0x82ca3700
	ctx.lr = 0x83259094;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259070) {
	__imp__sub_83259070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832590A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-28332
	ctx.r3.s64 = ctx.r11.s64 + -28332;
	// bl 0x832b258c
	ctx.lr = 0x832590C0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,18120
	ctx.r3.s64 = ctx.r10.s64 + 18120;
	// bl 0x82ca3700
	ctx.lr = 0x832590CC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832590A8) {
	__imp__sub_832590A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832590E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r8,-28304
	ctx.r3.s64 = ctx.r8.s64 + -28304;
	// addi r6,r11,-30068
	ctx.r6.s64 = ctx.r11.s64 + -30068;
	// addi r4,r9,31400
	ctx.r4.s64 = ctx.r9.s64 + 31400;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-10432
	ctx.r5.s64 = ctx.r10.s64 + -10432;
	// bl 0x82e7ef98
	ctx.lr = 0x83259118;
	sub_82E7EF98(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18128
	ctx.r3.s64 = ctx.r7.s64 + 18128;
	// bl 0x82ca3700
	ctx.lr = 0x83259124;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832590E0) {
	__imp__sub_832590E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31420
	ctx.r4.s64 = ctx.r10.s64 + 31420;
	// addi r3,r9,-28028
	ctx.r3.s64 = ctx.r9.s64 + -28028;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-9448
	ctx.r5.s64 = ctx.r11.s64 + -9448;
	// bl 0x82e7efd8
	ctx.lr = 0x8325916C;
	sub_82E7EFD8(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18152
	ctx.r3.s64 = ctx.r8.s64 + 18152;
	// bl 0x82ca3700
	ctx.lr = 0x83259178;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259138) {
	__imp__sub_83259138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31484
	ctx.r4.s64 = ctx.r10.s64 + 31484;
	// addi r3,r9,-27752
	ctx.r3.s64 = ctx.r9.s64 + -27752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8360
	ctx.r5.s64 = ctx.r11.s64 + -8360;
	// bl 0x82e78e70
	ctx.lr = 0x832591B4;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18176
	ctx.r3.s64 = ctx.r8.s64 + 18176;
	// bl 0x82ca3700
	ctx.lr = 0x832591C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259188) {
	__imp__sub_83259188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832591D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31500
	ctx.r4.s64 = ctx.r10.s64 + 31500;
	// addi r3,r9,-27476
	ctx.r3.s64 = ctx.r9.s64 + -27476;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8272
	ctx.r5.s64 = ctx.r11.s64 + -8272;
	// bl 0x82e78e70
	ctx.lr = 0x832591FC;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18200
	ctx.r3.s64 = ctx.r8.s64 + 18200;
	// bl 0x82ca3700
	ctx.lr = 0x83259208;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832591D0) {
	__imp__sub_832591D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31588
	ctx.r4.s64 = ctx.r10.s64 + 31588;
	// addi r3,r9,-27200
	ctx.r3.s64 = ctx.r9.s64 + -27200;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6816
	ctx.r5.s64 = ctx.r11.s64 + -6816;
	// bl 0x82e78e70
	ctx.lr = 0x83259244;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18224
	ctx.r3.s64 = ctx.r8.s64 + 18224;
	// bl 0x82ca3700
	ctx.lr = 0x83259250;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259218) {
	__imp__sub_83259218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,31608
	ctx.r4.s64 = ctx.r10.s64 + 31608;
	// addi r3,r9,-26924
	ctx.r3.s64 = ctx.r9.s64 + -26924;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-6472
	ctx.r5.s64 = ctx.r11.s64 + -6472;
	// bl 0x82e78e70
	ctx.lr = 0x8325928C;
	sub_82E78E70(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18248
	ctx.r3.s64 = ctx.r8.s64 + 18248;
	// bl 0x82ca3700
	ctx.lr = 0x83259298;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259260) {
	__imp__sub_83259260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832592A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x832592BC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832592cc
	if (ctx.cr6.eq) goto loc_832592CC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832592CC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832592d8
	if (ctx.cr0.eq) goto loc_832592D8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832592D8:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-26648
	ctx.r8.s64 = ctx.r9.s64 + -26648;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18272
	ctx.r3.s64 = ctx.r7.s64 + 18272;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832592F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832592A8) {
	__imp__sub_832592A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-32080
	ctx.r4.s64 = ctx.r10.s64 + -32080;
	// addi r3,r9,-26636
	ctx.r3.s64 = ctx.r9.s64 + -26636;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,10672
	ctx.r5.s64 = ctx.r11.s64 + 10672;
	// bl 0x82e775d0
	ctx.lr = 0x83259334;
	sub_82E775D0(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18344
	ctx.r3.s64 = ctx.r8.s64 + 18344;
	// bl 0x82ca3700
	ctx.lr = 0x83259340;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259308) {
	__imp__sub_83259308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-32068
	ctx.r4.s64 = ctx.r10.s64 + -32068;
	// addi r3,r9,-26360
	ctx.r3.s64 = ctx.r9.s64 + -26360;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11176
	ctx.r5.s64 = ctx.r11.s64 + 11176;
	// bl 0x82e78230
	ctx.lr = 0x83259384;
	sub_82E78230(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18368
	ctx.r3.s64 = ctx.r8.s64 + 18368;
	// bl 0x82ca3700
	ctx.lr = 0x83259390;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259350) {
	__imp__sub_83259350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832593A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-32004
	ctx.r4.s64 = ctx.r9.s64 + -32004;
	// addi r3,r8,-26084
	ctx.r3.s64 = ctx.r8.s64 + -26084;
	// addi r5,r10,12632
	ctx.r5.s64 = ctx.r10.s64 + 12632;
	// bl 0x82e78e70
	ctx.lr = 0x832593D0;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18392
	ctx.r3.s64 = ctx.r7.s64 + 18392;
	// bl 0x82ca3700
	ctx.lr = 0x832593DC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832593A0) {
	__imp__sub_832593A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832593F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31976
	ctx.r4.s64 = ctx.r9.s64 + -31976;
	// addi r3,r8,-25808
	ctx.r3.s64 = ctx.r8.s64 + -25808;
	// addi r5,r10,18288
	ctx.r5.s64 = ctx.r10.s64 + 18288;
	// bl 0x82e78e70
	ctx.lr = 0x83259420;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18416
	ctx.r3.s64 = ctx.r7.s64 + 18416;
	// bl 0x82ca3700
	ctx.lr = 0x8325942C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832593F0) {
	__imp__sub_832593F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31936
	ctx.r4.s64 = ctx.r9.s64 + -31936;
	// addi r3,r8,-25532
	ctx.r3.s64 = ctx.r8.s64 + -25532;
	// addi r5,r10,26712
	ctx.r5.s64 = ctx.r10.s64 + 26712;
	// bl 0x82e78e70
	ctx.lr = 0x83259470;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18440
	ctx.r3.s64 = ctx.r7.s64 + 18440;
	// bl 0x82ca3700
	ctx.lr = 0x8325947C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259440) {
	__imp__sub_83259440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-11708
	ctx.r3.s64 = ctx.r11.s64 + -11708;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832594B0;
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-25256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259490) {
	__imp__sub_83259490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832594C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31684
	ctx.r4.s64 = ctx.r9.s64 + -31684;
	// addi r3,r8,-25252
	ctx.r3.s64 = ctx.r8.s64 + -25252;
	// addi r5,r10,31784
	ctx.r5.s64 = ctx.r10.s64 + 31784;
	// bl 0x82e78e70
	ctx.lr = 0x832594F8;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18464
	ctx.r3.s64 = ctx.r7.s64 + 18464;
	// bl 0x82ca3700
	ctx.lr = 0x83259504;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832594C8) {
	__imp__sub_832594C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31556
	ctx.r4.s64 = ctx.r9.s64 + -31556;
	// addi r3,r8,-24976
	ctx.r3.s64 = ctx.r8.s64 + -24976;
	// addi r5,r10,-31192
	ctx.r5.s64 = ctx.r10.s64 + -31192;
	// bl 0x82e78e70
	ctx.lr = 0x83259548;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18488
	ctx.r3.s64 = ctx.r7.s64 + 18488;
	// bl 0x82ca3700
	ctx.lr = 0x83259554;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259518) {
	__imp__sub_83259518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,23188
	ctx.r6.s64 = ctx.r11.s64 + 23188;
	// addi r4,r9,-31436
	ctx.r4.s64 = ctx.r9.s64 + -31436;
	// addi r3,r8,-24700
	ctx.r3.s64 = ctx.r8.s64 + -24700;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// bl 0x82e78e70
	ctx.lr = 0x83259598;
	sub_82E78E70(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18512
	ctx.r3.s64 = ctx.r7.s64 + 18512;
	// bl 0x82ca3700
	ctx.lr = 0x832595A4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259568) {
	__imp__sub_83259568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832595B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lfs f0,-28968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28968);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,-24424(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24424, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832595B8) {
	__imp__sub_832595B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832595D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	ctx.lr = 0x832595E4;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832595f4
	if (ctx.cr6.eq) goto loc_832595F4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832595F4:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259600
	if (ctx.cr0.eq) goto loc_83259600;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259600:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8325960c
	if (ctx.cr0.eq) goto loc_8325960C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8325960C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-24420
	ctx.r8.s64 = ctx.r9.s64 + -24420;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// addi r3,r7,18536
	ctx.r3.s64 = ctx.r7.s64 + 18536;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259650;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832595D0) {
	__imp__sub_832595D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31280
	ctx.r4.s64 = ctx.r10.s64 + -31280;
	// addi r3,r9,-24408
	ctx.r3.s64 = ctx.r9.s64 + -24408;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-20312
	ctx.r5.s64 = ctx.r11.s64 + -20312;
	// bl 0x82e7fa98
	ctx.lr = 0x8325968C;
	sub_82E7FA98(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18568
	ctx.r3.s64 = ctx.r8.s64 + 18568;
	// bl 0x82ca3700
	ctx.lr = 0x83259698;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259660) {
	__imp__sub_83259660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832596A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31248
	ctx.r4.s64 = ctx.r10.s64 + -31248;
	// addi r3,r9,-24132
	ctx.r3.s64 = ctx.r9.s64 + -24132;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-19720
	ctx.r5.s64 = ctx.r11.s64 + -19720;
	// bl 0x82e7fa98
	ctx.lr = 0x832596D4;
	sub_82E7FA98(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18592
	ctx.r3.s64 = ctx.r8.s64 + 18592;
	// bl 0x82ca3700
	ctx.lr = 0x832596E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832596A8) {
	__imp__sub_832596A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832596F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x83259704;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259714
	if (ctx.cr6.eq) goto loc_83259714;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83259714:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259720
	if (ctx.cr0.eq) goto loc_83259720;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83259720:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-23856
	ctx.r8.s64 = ctx.r9.s64 + -23856;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18616
	ctx.r3.s64 = ctx.r7.s64 + 18616;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259740;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832596F0) {
	__imp__sub_832596F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31128
	ctx.r4.s64 = ctx.r10.s64 + -31128;
	// addi r3,r9,-23844
	ctx.r3.s64 = ctx.r9.s64 + -23844;
	// addi r5,r11,-18080
	ctx.r5.s64 = ctx.r11.s64 + -18080;
	// bl 0x82642760
	ctx.lr = 0x83259778;
	sub_82642760(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18688
	ctx.r3.s64 = ctx.r8.s64 + 18688;
	// bl 0x82ca3700
	ctx.lr = 0x83259784;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259750) {
	__imp__sub_83259750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31120
	ctx.r4.s64 = ctx.r10.s64 + -31120;
	// addi r3,r9,-23576
	ctx.r3.s64 = ctx.r9.s64 + -23576;
	// addi r5,r11,-17600
	ctx.r5.s64 = ctx.r11.s64 + -17600;
	// bl 0x82642980
	ctx.lr = 0x832597C0;
	sub_82642980(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18712
	ctx.r3.s64 = ctx.r8.s64 + 18712;
	// bl 0x82ca3700
	ctx.lr = 0x832597CC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259798) {
	__imp__sub_83259798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832597E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r6,r11,22084
	ctx.r6.s64 = ctx.r11.s64 + 22084;
	// addi r4,r9,-31104
	ctx.r4.s64 = ctx.r9.s64 + -31104;
	// addi r3,r8,-23308
	ctx.r3.s64 = ctx.r8.s64 + -23308;
	// addi r5,r10,-1784
	ctx.r5.s64 = ctx.r10.s64 + -1784;
	// bl 0x82e7f410
	ctx.lr = 0x83259810;
	sub_82E7F410(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18736
	ctx.r3.s64 = ctx.r7.s64 + 18736;
	// bl 0x82ca3700
	ctx.lr = 0x8325981C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832597E0) {
	__imp__sub_832597E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31072
	ctx.r4.s64 = ctx.r10.s64 + -31072;
	// addi r3,r9,-23032
	ctx.r3.s64 = ctx.r9.s64 + -23032;
	// addi r5,r11,-11976
	ctx.r5.s64 = ctx.r11.s64 + -11976;
	// bl 0x82642870
	ctx.lr = 0x83259858;
	sub_82642870(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18760
	ctx.r3.s64 = ctx.r8.s64 + 18760;
	// bl 0x82ca3700
	ctx.lr = 0x83259864;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259830) {
	__imp__sub_83259830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31044
	ctx.r4.s64 = ctx.r10.s64 + -31044;
	// addi r3,r9,-22764
	ctx.r3.s64 = ctx.r9.s64 + -22764;
	// addi r5,r11,-7560
	ctx.r5.s64 = ctx.r11.s64 + -7560;
	// bl 0x826428f8
	ctx.lr = 0x832598A0;
	sub_826428F8(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18784
	ctx.r3.s64 = ctx.r8.s64 + 18784;
	// bl 0x82ca3700
	ctx.lr = 0x832598AC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259878) {
	__imp__sub_83259878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832598C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r10,-31016
	ctx.r4.s64 = ctx.r10.s64 + -31016;
	// addi r3,r9,-22496
	ctx.r3.s64 = ctx.r9.s64 + -22496;
	// addi r5,r11,-4768
	ctx.r5.s64 = ctx.r11.s64 + -4768;
	// bl 0x826427e8
	ctx.lr = 0x832598E8;
	sub_826427E8(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,18808
	ctx.r3.s64 = ctx.r8.s64 + 18808;
	// bl 0x82ca3700
	ctx.lr = 0x832598F4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832598C0) {
	__imp__sub_832598C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r8,-22228
	ctx.r3.s64 = ctx.r8.s64 + -22228;
	// addi r6,r11,-30068
	ctx.r6.s64 = ctx.r11.s64 + -30068;
	// addi r4,r9,-30924
	ctx.r4.s64 = ctx.r9.s64 + -30924;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,15688
	ctx.r5.s64 = ctx.r10.s64 + 15688;
	// bl 0x82e7ef98
	ctx.lr = 0x83259940;
	sub_82E7EF98(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,18992
	ctx.r3.s64 = ctx.r7.s64 + 18992;
	// bl 0x82ca3700
	ctx.lr = 0x8325994C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259908) {
	__imp__sub_83259908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-21952
	ctx.r3.s64 = ctx.r10.s64 + -21952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259984;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19016
	ctx.r3.s64 = ctx.r9.s64 + 19016;
	// bl 0x82ca3700
	ctx.lr = 0x83259990;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259960) {
	__imp__sub_83259960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832599A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-21948
	ctx.r3.s64 = ctx.r10.s64 + -21948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832599C4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19032
	ctx.r3.s64 = ctx.r9.s64 + 19032;
	// bl 0x82ca3700
	ctx.lr = 0x832599D0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832599A0) {
	__imp__sub_832599A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832599E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-21944
	ctx.r3.s64 = ctx.r10.s64 + -21944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259A04;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19048
	ctx.r3.s64 = ctx.r9.s64 + 19048;
	// bl 0x82ca3700
	ctx.lr = 0x83259A10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832599E0) {
	__imp__sub_832599E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,-21940
	ctx.r3.s64 = ctx.r10.s64 + -21940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259A44;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19064
	ctx.r3.s64 = ctx.r9.s64 + 19064;
	// bl 0x82ca3700
	ctx.lr = 0x83259A50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259A20) {
	__imp__sub_83259A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,-21936
	ctx.r3.s64 = ctx.r10.s64 + -21936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259A84;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19080
	ctx.r3.s64 = ctx.r9.s64 + 19080;
	// bl 0x82ca3700
	ctx.lr = 0x83259A90;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259A60) {
	__imp__sub_83259A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,-21932
	ctx.r3.s64 = ctx.r10.s64 + -21932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259AC4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19096
	ctx.r3.s64 = ctx.r9.s64 + 19096;
	// bl 0x82ca3700
	ctx.lr = 0x83259AD0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259AA0) {
	__imp__sub_83259AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r11,-21928
	ctx.r30.s64 = ctx.r11.s64 + -21928;
loc_83259B00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266d970
	ctx.lr = 0x83259B08;
	sub_8266D970(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// bge 0x83259b00
	if (!ctx.cr0.lt) goto loc_83259B00;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19112
	ctx.r3.s64 = ctx.r11.s64 + 19112;
	// bl 0x82ca3700
	ctx.lr = 0x83259B20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259AE0) {
	__imp__sub_83259AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83259B38) {
	__imp__sub_83259B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// addi r10,r11,-21200
	ctx.r10.s64 = ctx.r11.s64 + -21200;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v0,
		VectorMaskL);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259B48) {
	__imp__sub_83259B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19208
	ctx.r3.s64 = ctx.r11.s64 + 19208;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83259B60) {
	__imp__sub_83259B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	ctx.lr = 0x83259B84;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83259b94
	if (ctx.cr6.eq) goto loc_83259B94;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83259B94:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83259ba0
	if (ctx.cr0.eq) goto loc_83259BA0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83259BA0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21168
	ctx.r8.s64 = ctx.r9.s64 + -21168;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19296
	ctx.r3.s64 = ctx.r7.s64 + 19296;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259BC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259B70) {
	__imp__sub_83259B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25864
	ctx.r4.s64 = ctx.r11.s64 + -25864;
	// addi r3,r10,-21204
	ctx.r3.s64 = ctx.r10.s64 + -21204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259BF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19368
	ctx.r3.s64 = ctx.r9.s64 + 19368;
	// bl 0x82ca3700
	ctx.lr = 0x83259C00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259BD0) {
	__imp__sub_83259BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v0,0,r9
	temp.u32 = ctx.r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v0.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// lfs f13,-12728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12728);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,-21152
	ctx.r4.s64 = ctx.r5.s64 + -21152;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v13.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32(simd::load_f32(ctx.v13.f32), simd::permute_f32(simd::load_f32(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v12.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// lvlx v11,0,r6
	temp.u32 = ctx.r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v11.u8, base + (temp.u32 & ~0xF), &VectorMaskL[(temp.u32 & 0xF) * 16]);
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32(simd::load_f32(ctx.v11.f32), simd::permute_f32(simd::load_f32(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32(simd::load_f32(ctx.v0.f32), simd::permute_f32(simd::load_f32(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v0,
		VectorMaskL);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259C10) {
	__imp__sub_83259C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// addi r10,r11,-21136
	ctx.r10.s64 = ctx.r11.s64 + -21136;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v0,
		VectorMaskL);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259C70) {
	__imp__sub_83259C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25032
	ctx.r4.s64 = ctx.r11.s64 + -25032;
	// addi r3,r10,-21156
	ctx.r3.s64 = ctx.r10.s64 + -21156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259CAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19400
	ctx.r3.s64 = ctx.r9.s64 + 19400;
	// bl 0x82ca3700
	ctx.lr = 0x83259CB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259C88) {
	__imp__sub_83259C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25020
	ctx.r4.s64 = ctx.r11.s64 + -25020;
	// addi r3,r10,-21120
	ctx.r3.s64 = ctx.r10.s64 + -21120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259CEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19416
	ctx.r3.s64 = ctx.r9.s64 + 19416;
	// bl 0x82ca3700
	ctx.lr = 0x83259CF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259CC8) {
	__imp__sub_83259CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25012
	ctx.r4.s64 = ctx.r11.s64 + -25012;
	// addi r3,r10,-21116
	ctx.r3.s64 = ctx.r10.s64 + -21116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259D2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19432
	ctx.r3.s64 = ctx.r9.s64 + 19432;
	// bl 0x82ca3700
	ctx.lr = 0x83259D38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259D08) {
	__imp__sub_83259D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25004
	ctx.r4.s64 = ctx.r11.s64 + -25004;
	// addi r3,r10,-21112
	ctx.r3.s64 = ctx.r10.s64 + -21112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259D6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19448
	ctx.r3.s64 = ctx.r9.s64 + 19448;
	// bl 0x82ca3700
	ctx.lr = 0x83259D78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259D48) {
	__imp__sub_83259D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24988
	ctx.r4.s64 = ctx.r11.s64 + -24988;
	// addi r3,r10,-21108
	ctx.r3.s64 = ctx.r10.s64 + -21108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259DAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19464
	ctx.r3.s64 = ctx.r9.s64 + 19464;
	// bl 0x82ca3700
	ctx.lr = 0x83259DB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259D88) {
	__imp__sub_83259D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24968
	ctx.r4.s64 = ctx.r11.s64 + -24968;
	// addi r3,r10,-21104
	ctx.r3.s64 = ctx.r10.s64 + -21104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259DEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19480
	ctx.r3.s64 = ctx.r9.s64 + 19480;
	// bl 0x82ca3700
	ctx.lr = 0x83259DF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259DC8) {
	__imp__sub_83259DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24948
	ctx.r4.s64 = ctx.r11.s64 + -24948;
	// addi r3,r10,-21100
	ctx.r3.s64 = ctx.r10.s64 + -21100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259E2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19496
	ctx.r3.s64 = ctx.r9.s64 + 19496;
	// bl 0x82ca3700
	ctx.lr = 0x83259E38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259E08) {
	__imp__sub_83259E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24928
	ctx.r4.s64 = ctx.r11.s64 + -24928;
	// addi r3,r10,-21096
	ctx.r3.s64 = ctx.r10.s64 + -21096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83259E6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19512
	ctx.r3.s64 = ctx.r9.s64 + 19512;
	// bl 0x82ca3700
	ctx.lr = 0x83259E78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259E48) {
	__imp__sub_83259E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x83259E9C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83259eac
	if (ctx.cr6.eq) goto loc_83259EAC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259EAC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259eb8
	if (ctx.cr0.eq) goto loc_83259EB8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259EB8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259ec4
	if (ctx.cr0.eq) goto loc_83259EC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259EC4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-21092
	ctx.r8.s64 = ctx.r9.s64 + -21092;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r3,r7,19528
	ctx.r3.s64 = ctx.r7.s64 + 19528;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259F08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259E88) {
	__imp__sub_83259E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	ctx.lr = 0x83259F2C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83259f3c
	if (ctx.cr6.eq) goto loc_83259F3C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259F3C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f48
	if (ctx.cr0.eq) goto loc_83259F48;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259F48:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259f54
	if (ctx.cr0.eq) goto loc_83259F54;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259F54:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-21080
	ctx.r8.s64 = ctx.r9.s64 + -21080;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// addi r3,r7,19544
	ctx.r3.s64 = ctx.r7.s64 + 19544;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83259F98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259F18) {
	__imp__sub_83259F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83259FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x83259FBC;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83259fcc
	if (ctx.cr6.eq) goto loc_83259FCC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259FCC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259fd8
	if (ctx.cr0.eq) goto loc_83259FD8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259FD8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83259fe4
	if (ctx.cr0.eq) goto loc_83259FE4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83259FE4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,-21068
	ctx.r8.s64 = ctx.r9.s64 + -21068;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r3,r7,19560
	ctx.r3.s64 = ctx.r7.s64 + 19560;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A028;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83259FA8) {
	__imp__sub_83259FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8325A038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	ctx.lr = 0x8325A04C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8325a05c
	if (ctx.cr6.eq) goto loc_8325A05C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8325A05C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8325a068
	if (ctx.cr0.eq) goto loc_8325A068;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8325A068:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21056
	ctx.r8.s64 = ctx.r9.s64 + -21056;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19576
	ctx.r3.s64 = ctx.r7.s64 + 19576;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8325A088;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8325A038) {
	__imp__sub_8325A038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8325A098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8325A098) {
	__imp__sub_8325A098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8325A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// addi r10,r11,-21024
	ctx.r10.s64 = ctx.r11.s64 + -21024;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled_i8(base + ea, ctx.v0,
		VectorMaskL);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8325A0A8) {
	__imp__sub_8325A0A8(ctx, base);
}

