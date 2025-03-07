#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832431F0"))) PPC_WEAK_FUNC(sub_832431F0);
PPC_FUNC_IMPL(__imp__sub_832431F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30736
	ctx.r4.s64 = ctx.r11.s64 + 30736;
	// addi r3,r10,29964
	ctx.r3.s64 = ctx.r10.s64 + 29964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243214;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1808
	ctx.r3.s64 = ctx.r9.s64 + 1808;
	// bl 0x82ca3700
	ctx.lr = 0x83243220;
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

__attribute__((alias("__imp__sub_83243230"))) PPC_WEAK_FUNC(sub_83243230);
PPC_FUNC_IMPL(__imp__sub_83243230) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30752
	ctx.r4.s64 = ctx.r11.s64 + 30752;
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243254;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1824
	ctx.r3.s64 = ctx.r9.s64 + 1824;
	// bl 0x82ca3700
	ctx.lr = 0x83243260;
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

__attribute__((alias("__imp__sub_83243270"))) PPC_WEAK_FUNC(sub_83243270);
PPC_FUNC_IMPL(__imp__sub_83243270) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30772
	ctx.r4.s64 = ctx.r11.s64 + 30772;
	// addi r3,r10,29972
	ctx.r3.s64 = ctx.r10.s64 + 29972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243294;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1840
	ctx.r3.s64 = ctx.r9.s64 + 1840;
	// bl 0x82ca3700
	ctx.lr = 0x832432A0;
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

__attribute__((alias("__imp__sub_832432B0"))) PPC_WEAK_FUNC(sub_832432B0);
PPC_FUNC_IMPL(__imp__sub_832432B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30784
	ctx.r4.s64 = ctx.r11.s64 + 30784;
	// addi r3,r10,29976
	ctx.r3.s64 = ctx.r10.s64 + 29976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832432D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1856
	ctx.r3.s64 = ctx.r9.s64 + 1856;
	// bl 0x82ca3700
	ctx.lr = 0x832432E0;
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

__attribute__((alias("__imp__sub_832432F0"))) PPC_WEAK_FUNC(sub_832432F0);
PPC_FUNC_IMPL(__imp__sub_832432F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30808
	ctx.r4.s64 = ctx.r11.s64 + 30808;
	// addi r3,r10,29980
	ctx.r3.s64 = ctx.r10.s64 + 29980;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243314;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1872
	ctx.r3.s64 = ctx.r9.s64 + 1872;
	// bl 0x82ca3700
	ctx.lr = 0x83243320;
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

__attribute__((alias("__imp__sub_83243330"))) PPC_WEAK_FUNC(sub_83243330);
PPC_FUNC_IMPL(__imp__sub_83243330) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r31,r11,29984
	ctx.r31.s64 = ctx.r11.s64 + 29984;
	// addi r4,r10,29924
	ctx.r4.s64 = ctx.r10.s64 + 29924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x83243358;
	sub_821F0108(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,30840
	ctx.r4.s64 = ctx.r9.s64 + 30840;
	// bl 0x821da550
	ctx.lr = 0x83243368;
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,1888
	ctx.r3.s64 = ctx.r8.s64 + 1888;
	// bl 0x82ca3700
	ctx.lr = 0x83243374;
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

__attribute__((alias("__imp__sub_83243388"))) PPC_WEAK_FUNC(sub_83243388);
PPC_FUNC_IMPL(__imp__sub_83243388) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// addi r3,r10,29988
	ctx.r3.s64 = ctx.r10.s64 + 29988;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832433AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1904
	ctx.r3.s64 = ctx.r9.s64 + 1904;
	// bl 0x82ca3700
	ctx.lr = 0x832433B8;
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

__attribute__((alias("__imp__sub_832433C8"))) PPC_WEAK_FUNC(sub_832433C8);
PPC_FUNC_IMPL(__imp__sub_832433C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30880
	ctx.r4.s64 = ctx.r11.s64 + 30880;
	// addi r3,r10,29992
	ctx.r3.s64 = ctx.r10.s64 + 29992;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832433EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1920
	ctx.r3.s64 = ctx.r9.s64 + 1920;
	// bl 0x82ca3700
	ctx.lr = 0x832433F8;
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

__attribute__((alias("__imp__sub_83243408"))) PPC_WEAK_FUNC(sub_83243408);
PPC_FUNC_IMPL(__imp__sub_83243408) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30900
	ctx.r4.s64 = ctx.r11.s64 + 30900;
	// addi r3,r10,29996
	ctx.r3.s64 = ctx.r10.s64 + 29996;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324342C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1936
	ctx.r3.s64 = ctx.r9.s64 + 1936;
	// bl 0x82ca3700
	ctx.lr = 0x83243438;
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

__attribute__((alias("__imp__sub_83243448"))) PPC_WEAK_FUNC(sub_83243448);
PPC_FUNC_IMPL(__imp__sub_83243448) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30908
	ctx.r4.s64 = ctx.r11.s64 + 30908;
	// addi r3,r10,30000
	ctx.r3.s64 = ctx.r10.s64 + 30000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324346C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1952
	ctx.r3.s64 = ctx.r9.s64 + 1952;
	// bl 0x82ca3700
	ctx.lr = 0x83243478;
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

__attribute__((alias("__imp__sub_83243488"))) PPC_WEAK_FUNC(sub_83243488);
PPC_FUNC_IMPL(__imp__sub_83243488) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r31,r11,30004
	ctx.r31.s64 = ctx.r11.s64 + 30004;
	// addi r4,r10,30000
	ctx.r4.s64 = ctx.r10.s64 + 30000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x832434B0;
	sub_821F0108(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,30916
	ctx.r4.s64 = ctx.r9.s64 + 30916;
	// bl 0x821da550
	ctx.lr = 0x832434C0;
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,1968
	ctx.r3.s64 = ctx.r8.s64 + 1968;
	// bl 0x82ca3700
	ctx.lr = 0x832434CC;
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

__attribute__((alias("__imp__sub_832434E0"))) PPC_WEAK_FUNC(sub_832434E0);
PPC_FUNC_IMPL(__imp__sub_832434E0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// addi r3,r10,30008
	ctx.r3.s64 = ctx.r10.s64 + 30008;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243504;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,1984
	ctx.r3.s64 = ctx.r9.s64 + 1984;
	// bl 0x82ca3700
	ctx.lr = 0x83243510;
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

__attribute__((alias("__imp__sub_83243520"))) PPC_WEAK_FUNC(sub_83243520);
PPC_FUNC_IMPL(__imp__sub_83243520) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30924
	ctx.r4.s64 = ctx.r11.s64 + 30924;
	// addi r3,r10,30012
	ctx.r3.s64 = ctx.r10.s64 + 30012;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243544;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2000
	ctx.r3.s64 = ctx.r9.s64 + 2000;
	// bl 0x82ca3700
	ctx.lr = 0x83243550;
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

__attribute__((alias("__imp__sub_83243560"))) PPC_WEAK_FUNC(sub_83243560);
PPC_FUNC_IMPL(__imp__sub_83243560) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30940
	ctx.r4.s64 = ctx.r11.s64 + 30940;
	// addi r3,r10,30016
	ctx.r3.s64 = ctx.r10.s64 + 30016;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243584;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2016
	ctx.r3.s64 = ctx.r9.s64 + 2016;
	// bl 0x82ca3700
	ctx.lr = 0x83243590;
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

__attribute__((alias("__imp__sub_832435A0"))) PPC_WEAK_FUNC(sub_832435A0);
PPC_FUNC_IMPL(__imp__sub_832435A0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,30968
	ctx.r4.s64 = ctx.r11.s64 + 30968;
	// addi r3,r10,30020
	ctx.r3.s64 = ctx.r10.s64 + 30020;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832435C4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2032
	ctx.r3.s64 = ctx.r9.s64 + 2032;
	// bl 0x82ca3700
	ctx.lr = 0x832435D0;
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

__attribute__((alias("__imp__sub_832435E0"))) PPC_WEAK_FUNC(sub_832435E0);
PPC_FUNC_IMPL(__imp__sub_832435E0) {
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
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,29488
	ctx.r3.s64 = ctx.r11.s64 + 29488;
	// bl 0x832b258c
	ctx.lr = 0x832435F8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,2240
	ctx.r3.s64 = ctx.r10.s64 + 2240;
	// bl 0x82ca3700
	ctx.lr = 0x83243604;
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

__attribute__((alias("__imp__sub_83243614"))) PPC_WEAK_FUNC(sub_83243614);
PPC_FUNC_IMPL(__imp__sub_83243614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243618"))) PPC_WEAK_FUNC(sub_83243618);
PPC_FUNC_IMPL(__imp__sub_83243618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,2224
	ctx.r3.s64 = ctx.r11.s64 + 2224;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83243624"))) PPC_WEAK_FUNC(sub_83243624);
PPC_FUNC_IMPL(__imp__sub_83243624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83243628"))) PPC_WEAK_FUNC(sub_83243628);
PPC_FUNC_IMPL(__imp__sub_83243628) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,30024
	ctx.r31.s64 = ctx.r11.s64 + 30024;
	// addi r4,r10,31440
	ctx.r4.s64 = ctx.r10.s64 + 31440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243658;
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,31424
	ctx.r4.s64 = ctx.r9.s64 + 31424;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8222cf18
	ctx.lr = 0x8324366C;
	sub_8222CF18(ctx, base);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r8,28344
	ctx.r30.s64 = ctx.r8.s64 + 28344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_83243688:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243688
	if (!ctx.cr0.eq) goto loc_83243688;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,31416
	ctx.r4.s64 = ctx.r4.s64 + 31416;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8222cf18
	ctx.lr = 0x832436C0;
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,31400
	ctx.r4.s64 = ctx.r3.s64 + 31400;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8222cf18
	ctx.lr = 0x832436D4;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_832436E8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832436e8
	if (!ctx.cr0.eq) goto loc_832436E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,31392
	ctx.r4.s64 = ctx.r6.s64 + 31392;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8222cf18
	ctx.lr = 0x83243720;
	sub_8222CF18(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,31372
	ctx.r4.s64 = ctx.r4.s64 + 31372;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8222cf18
	ctx.lr = 0x83243734;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_83243748:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwcx. r3,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243748
	if (!ctx.cr0.eq) goto loc_83243748;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,31360
	ctx.r4.s64 = ctx.r7.s64 + 31360;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8222cf18
	ctx.lr = 0x83243780;
	sub_8222CF18(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,31340
	ctx.r4.s64 = ctx.r6.s64 + 31340;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8222cf18
	ctx.lr = 0x83243794;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_832437A4:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832437a4
	if (!ctx.cr0.eq) goto loc_832437A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,31332
	ctx.r4.s64 = ctx.r10.s64 + 31332;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x832437DC;
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,31312
	ctx.r4.s64 = ctx.r9.s64 + 31312;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x832437F0;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_83243804:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243804
	if (!ctx.cr0.eq) goto loc_83243804;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,31304
	ctx.r4.s64 = ctx.r4.s64 + 31304;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8222cf18
	ctx.lr = 0x8324383C;
	sub_8222CF18(ctx, base);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,31284
	ctx.r4.s64 = ctx.r3.s64 + 31284;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8222cf18
	ctx.lr = 0x83243850;
	sub_8222CF18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_83243860:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243860
	if (!ctx.cr0.eq) goto loc_83243860;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r3,r7,2248
	ctx.r3.s64 = ctx.r7.s64 + 2248;
	// bl 0x82ca3700
	ctx.lr = 0x83243890;
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

__attribute__((alias("__imp__sub_832438A8"))) PPC_WEAK_FUNC(sub_832438A8);
PPC_FUNC_IMPL(__imp__sub_832438A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2472
	ctx.r3.s64 = ctx.r9.s64 + 2472;
	// stw r11,-15636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15636, ctx.r11.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832438C0"))) PPC_WEAK_FUNC(sub_832438C0);
PPC_FUNC_IMPL(__imp__sub_832438C0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30144
	ctx.r3.s64 = ctx.r10.s64 + 30144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832438E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2680
	ctx.r3.s64 = ctx.r9.s64 + 2680;
	// bl 0x82ca3700
	ctx.lr = 0x832438F0;
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

__attribute__((alias("__imp__sub_83243900"))) PPC_WEAK_FUNC(sub_83243900);
PPC_FUNC_IMPL(__imp__sub_83243900) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30148
	ctx.r3.s64 = ctx.r10.s64 + 30148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243924;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2696
	ctx.r3.s64 = ctx.r9.s64 + 2696;
	// bl 0x82ca3700
	ctx.lr = 0x83243930;
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

__attribute__((alias("__imp__sub_83243940"))) PPC_WEAK_FUNC(sub_83243940);
PPC_FUNC_IMPL(__imp__sub_83243940) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30152
	ctx.r3.s64 = ctx.r10.s64 + 30152;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243964;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2712
	ctx.r3.s64 = ctx.r9.s64 + 2712;
	// bl 0x82ca3700
	ctx.lr = 0x83243970;
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

__attribute__((alias("__imp__sub_83243980"))) PPC_WEAK_FUNC(sub_83243980);
PPC_FUNC_IMPL(__imp__sub_83243980) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32344
	ctx.r4.s64 = ctx.r11.s64 + 32344;
	// addi r3,r10,30156
	ctx.r3.s64 = ctx.r10.s64 + 30156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832439A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2728
	ctx.r3.s64 = ctx.r9.s64 + 2728;
	// bl 0x82ca3700
	ctx.lr = 0x832439B0;
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

__attribute__((alias("__imp__sub_832439C0"))) PPC_WEAK_FUNC(sub_832439C0);
PPC_FUNC_IMPL(__imp__sub_832439C0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32372
	ctx.r4.s64 = ctx.r11.s64 + 32372;
	// addi r3,r10,30160
	ctx.r3.s64 = ctx.r10.s64 + 30160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832439E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2744
	ctx.r3.s64 = ctx.r9.s64 + 2744;
	// bl 0x82ca3700
	ctx.lr = 0x832439F0;
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

__attribute__((alias("__imp__sub_83243A00"))) PPC_WEAK_FUNC(sub_83243A00);
PPC_FUNC_IMPL(__imp__sub_83243A00) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32344
	ctx.r4.s64 = ctx.r11.s64 + 32344;
	// addi r3,r10,30164
	ctx.r3.s64 = ctx.r10.s64 + 30164;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243A24;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2760
	ctx.r3.s64 = ctx.r9.s64 + 2760;
	// bl 0x82ca3700
	ctx.lr = 0x83243A30;
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

__attribute__((alias("__imp__sub_83243A40"))) PPC_WEAK_FUNC(sub_83243A40);
PPC_FUNC_IMPL(__imp__sub_83243A40) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32396
	ctx.r4.s64 = ctx.r11.s64 + 32396;
	// addi r3,r10,30168
	ctx.r3.s64 = ctx.r10.s64 + 30168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243A64;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2776
	ctx.r3.s64 = ctx.r9.s64 + 2776;
	// bl 0x82ca3700
	ctx.lr = 0x83243A70;
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

__attribute__((alias("__imp__sub_83243A80"))) PPC_WEAK_FUNC(sub_83243A80);
PPC_FUNC_IMPL(__imp__sub_83243A80) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// addi r3,r10,30172
	ctx.r3.s64 = ctx.r10.s64 + 30172;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83243AA4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2792
	ctx.r3.s64 = ctx.r9.s64 + 2792;
	// bl 0x82ca3700
	ctx.lr = 0x83243AB0;
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

__attribute__((alias("__imp__sub_83243AC0"))) PPC_WEAK_FUNC(sub_83243AC0);
PPC_FUNC_IMPL(__imp__sub_83243AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83243AC8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,32748
	ctx.r4.s64 = ctx.r11.s64 + 32748;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243AE0;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x83243AEC;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83243AF4;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,30176
	ctx.r30.s64 = ctx.r10.s64 + 30176;
	// stw r11,30176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30176, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243B0C;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r29,r9,28344
	ctx.r29.s64 = ctx.r9.s64 + 28344;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_83243B18:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243b18
	if (!ctx.cr0.eq) goto loc_83243B18;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243B44;
	sub_821C67D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83243B48:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243b48
	if (!ctx.cr0.eq) goto loc_83243B48;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243B78;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821eea00
	ctx.lr = 0x83243B84;
	sub_821EEA00(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bfd780
	ctx.lr = 0x83243B8C;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243B9C;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_83243BA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243ba0
	if (!ctx.cr0.eq) goto loc_83243BA0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243BC8;
	sub_821C67D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_83243BCC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243bcc
	if (!ctx.cr0.eq) goto loc_83243BCC;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,32660
	ctx.r4.s64 = ctx.r4.s64 + 32660;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243BFC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821eea00
	ctx.lr = 0x83243C08;
	sub_821EEA00(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bfd780
	ctx.lr = 0x83243C10;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243C20;
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83243C24:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243c24
	if (!ctx.cr0.eq) goto loc_83243C24;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243C4C;
	sub_821C67D8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_83243C50:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243c50
	if (!ctx.cr0.eq) goto loc_83243C50;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,32616
	ctx.r4.s64 = ctx.r6.s64 + 32616;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243C80;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821eea00
	ctx.lr = 0x83243C8C;
	sub_821EEA00(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bfd780
	ctx.lr = 0x83243C94;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243CA4;
	sub_821C67D8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83243CA8:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243ca8
	if (!ctx.cr0.eq) goto loc_83243CA8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243CD0;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_83243CD4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243cd4
	if (!ctx.cr0.eq) goto loc_83243CD4;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,32568
	ctx.r4.s64 = ctx.r7.s64 + 32568;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243D04;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eea00
	ctx.lr = 0x83243D10;
	sub_821EEA00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfd780
	ctx.lr = 0x83243D18;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243D28;
	sub_821C67D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83243D2C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243d2c
	if (!ctx.cr0.eq) goto loc_83243D2C;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243D54;
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83243D58:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243d58
	if (!ctx.cr0.eq) goto loc_83243D58;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,32524
	ctx.r4.s64 = ctx.r9.s64 + 32524;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243D88;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821eea00
	ctx.lr = 0x83243D94;
	sub_821EEA00(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82bfd780
	ctx.lr = 0x83243D9C;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243DAC;
	sub_821C67D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_83243DB0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243db0
	if (!ctx.cr0.eq) goto loc_83243DB0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243DD8;
	sub_821C67D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83243DDC:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243ddc
	if (!ctx.cr0.eq) goto loc_83243DDC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,32480
	ctx.r4.s64 = ctx.r11.s64 + 32480;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243E0C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821eea00
	ctx.lr = 0x83243E18;
	sub_821EEA00(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82bfd780
	ctx.lr = 0x83243E20;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243E30;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_83243E34:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243e34
	if (!ctx.cr0.eq) goto loc_83243E34;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243E5C;
	sub_821C67D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_83243E60:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243e60
	if (!ctx.cr0.eq) goto loc_83243E60;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,32432
	ctx.r4.s64 = ctx.r4.s64 + 32432;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243E90;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x821eea00
	ctx.lr = 0x83243E9C;
	sub_821EEA00(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82bfd780
	ctx.lr = 0x83243EA4;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243EB4;
	sub_821C67D8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83243EB8:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243eb8
	if (!ctx.cr0.eq) goto loc_83243EB8;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243EE0;
	sub_821C67D8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_83243EE4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243ee4
	if (!ctx.cr0.eq) goto loc_83243EE4;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,29352
	ctx.r4.s64 = ctx.r6.s64 + 29352;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243F14;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eea00
	ctx.lr = 0x83243F20;
	sub_821EEA00(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bfd780
	ctx.lr = 0x83243F28;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243F38;
	sub_821C67D8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83243F3C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243f3c
	if (!ctx.cr0.eq) goto loc_83243F3C;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243F64;
	sub_821C67D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_83243F68:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243f68
	if (!ctx.cr0.eq) goto loc_83243F68;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,29532
	ctx.r4.s64 = ctx.r7.s64 + 29532;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8222cf18
	ctx.lr = 0x83243F98;
	sub_8222CF18(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821eea00
	ctx.lr = 0x83243FA4;
	sub_821EEA00(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82bfd780
	ctx.lr = 0x83243FAC;
	sub_82BFD780(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83243FBC;
	sub_821C67D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83243FC0:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243fc0
	if (!ctx.cr0.eq) goto loc_83243FC0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821c67d8
	ctx.lr = 0x83243FE8;
	sub_821C67D8(ctx, base);
loc_83243FE8:
	// mfmsr r11
	ctx.r11.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stwcx. r3,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r11,1
	ctx.msr = (ctx.r11.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83243fe8
	if (!ctx.cr0.eq) goto loc_83243FE8;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,2808
	ctx.r3.s64 = ctx.r10.s64 + 2808;
	// bl 0x82ca3700
	ctx.lr = 0x83244010;
	sub_82CA3700(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83244018"))) PPC_WEAK_FUNC(sub_83244018);
PPC_FUNC_IMPL(__imp__sub_83244018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-32748
	ctx.r4.s64 = ctx.r11.s64 + -32748;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8324403C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x83244048;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83244050;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30216, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83244064;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83244070:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83244070
	if (!ctx.cr0.eq) goto loc_83244070;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324409C;
	sub_821C67D8(ctx, base);
loc_8324409C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324409c
	if (!ctx.cr0.eq) goto loc_8324409C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// bl 0x82ca3700
	ctx.lr = 0x832440C4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832440D8"))) PPC_WEAK_FUNC(sub_832440D8);
PPC_FUNC_IMPL(__imp__sub_832440D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-32708
	ctx.r4.s64 = ctx.r11.s64 + -32708;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x832440FC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x83244108;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83244110;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30220, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83244124;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83244130:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83244130
	if (!ctx.cr0.eq) goto loc_83244130;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324415C;
	sub_821C67D8(ctx, base);
loc_8324415C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324415c
	if (!ctx.cr0.eq) goto loc_8324415C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// bl 0x82ca3700
	ctx.lr = 0x83244184;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83244198"))) PPC_WEAK_FUNC(sub_83244198);
PPC_FUNC_IMPL(__imp__sub_83244198) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30224
	ctx.r3.s64 = ctx.r10.s64 + 30224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832441BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2840
	ctx.r3.s64 = ctx.r9.s64 + 2840;
	// bl 0x82ca3700
	ctx.lr = 0x832441C8;
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

__attribute__((alias("__imp__sub_832441D8"))) PPC_WEAK_FUNC(sub_832441D8);
PPC_FUNC_IMPL(__imp__sub_832441D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30228
	ctx.r3.s64 = ctx.r10.s64 + 30228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832441FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2856
	ctx.r3.s64 = ctx.r9.s64 + 2856;
	// bl 0x82ca3700
	ctx.lr = 0x83244208;
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

__attribute__((alias("__imp__sub_83244218"))) PPC_WEAK_FUNC(sub_83244218);
PPC_FUNC_IMPL(__imp__sub_83244218) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30232
	ctx.r3.s64 = ctx.r10.s64 + 30232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324423C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2872
	ctx.r3.s64 = ctx.r9.s64 + 2872;
	// bl 0x82ca3700
	ctx.lr = 0x83244248;
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

__attribute__((alias("__imp__sub_83244258"))) PPC_WEAK_FUNC(sub_83244258);
PPC_FUNC_IMPL(__imp__sub_83244258) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30236
	ctx.r3.s64 = ctx.r10.s64 + 30236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324427C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2888
	ctx.r3.s64 = ctx.r9.s64 + 2888;
	// bl 0x82ca3700
	ctx.lr = 0x83244288;
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

__attribute__((alias("__imp__sub_83244298"))) PPC_WEAK_FUNC(sub_83244298);
PPC_FUNC_IMPL(__imp__sub_83244298) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30240
	ctx.r3.s64 = ctx.r10.s64 + 30240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832442BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2904
	ctx.r3.s64 = ctx.r9.s64 + 2904;
	// bl 0x82ca3700
	ctx.lr = 0x832442C8;
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

__attribute__((alias("__imp__sub_832442D8"))) PPC_WEAK_FUNC(sub_832442D8);
PPC_FUNC_IMPL(__imp__sub_832442D8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30244
	ctx.r3.s64 = ctx.r10.s64 + 30244;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832442FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2920
	ctx.r3.s64 = ctx.r9.s64 + 2920;
	// bl 0x82ca3700
	ctx.lr = 0x83244308;
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

__attribute__((alias("__imp__sub_83244318"))) PPC_WEAK_FUNC(sub_83244318);
PPC_FUNC_IMPL(__imp__sub_83244318) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-32060
	ctx.r3.s64 = ctx.r11.s64 + -32060;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83244338;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83244350"))) PPC_WEAK_FUNC(sub_83244350);
PPC_FUNC_IMPL(__imp__sub_83244350) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-32044
	ctx.r3.s64 = ctx.r11.s64 + -32044;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83244370;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30252, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83244388"))) PPC_WEAK_FUNC(sub_83244388);
PPC_FUNC_IMPL(__imp__sub_83244388) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	ctx.lr = 0x8324439C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832443ac
	if (ctx.cr6.eq) goto loc_832443AC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832443AC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832443b8
	if (ctx.cr0.eq) goto loc_832443B8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832443D8;
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

__attribute__((alias("__imp__sub_832443E8"))) PPC_WEAK_FUNC(sub_832443E8);
PPC_FUNC_IMPL(__imp__sub_832443E8) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	ctx.lr = 0x832443FC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8324440c
	if (ctx.cr6.eq) goto loc_8324440C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8324440C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83244418
	if (ctx.cr0.eq) goto loc_83244418;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83244438;
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

__attribute__((alias("__imp__sub_83244448"))) PPC_WEAK_FUNC(sub_83244448);
PPC_FUNC_IMPL(__imp__sub_83244448) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30280
	ctx.r3.s64 = ctx.r10.s64 + 30280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324446C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2968
	ctx.r3.s64 = ctx.r9.s64 + 2968;
	// bl 0x82ca3700
	ctx.lr = 0x83244478;
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

__attribute__((alias("__imp__sub_83244488"))) PPC_WEAK_FUNC(sub_83244488);
PPC_FUNC_IMPL(__imp__sub_83244488) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30284
	ctx.r3.s64 = ctx.r10.s64 + 30284;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832444AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,2984
	ctx.r3.s64 = ctx.r9.s64 + 2984;
	// bl 0x82ca3700
	ctx.lr = 0x832444B8;
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

__attribute__((alias("__imp__sub_832444C8"))) PPC_WEAK_FUNC(sub_832444C8);
PPC_FUNC_IMPL(__imp__sub_832444C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30288
	ctx.r3.s64 = ctx.r10.s64 + 30288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832444EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3000
	ctx.r3.s64 = ctx.r9.s64 + 3000;
	// bl 0x82ca3700
	ctx.lr = 0x832444F8;
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

__attribute__((alias("__imp__sub_83244508"))) PPC_WEAK_FUNC(sub_83244508);
PPC_FUNC_IMPL(__imp__sub_83244508) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30292
	ctx.r3.s64 = ctx.r10.s64 + 30292;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324452C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3016
	ctx.r3.s64 = ctx.r9.s64 + 3016;
	// bl 0x82ca3700
	ctx.lr = 0x83244538;
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

__attribute__((alias("__imp__sub_83244548"))) PPC_WEAK_FUNC(sub_83244548);
PPC_FUNC_IMPL(__imp__sub_83244548) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30296
	ctx.r3.s64 = ctx.r10.s64 + 30296;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324456C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3032
	ctx.r3.s64 = ctx.r9.s64 + 3032;
	// bl 0x82ca3700
	ctx.lr = 0x83244578;
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

__attribute__((alias("__imp__sub_83244588"))) PPC_WEAK_FUNC(sub_83244588);
PPC_FUNC_IMPL(__imp__sub_83244588) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30300
	ctx.r3.s64 = ctx.r10.s64 + 30300;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832445AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3048
	ctx.r3.s64 = ctx.r9.s64 + 3048;
	// bl 0x82ca3700
	ctx.lr = 0x832445B8;
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

__attribute__((alias("__imp__sub_832445C8"))) PPC_WEAK_FUNC(sub_832445C8);
PPC_FUNC_IMPL(__imp__sub_832445C8) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x832445DC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832445ec
	if (ctx.cr6.eq) goto loc_832445EC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832445EC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832445f8
	if (ctx.cr0.eq) goto loc_832445F8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83244618;
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

__attribute__((alias("__imp__sub_83244628"))) PPC_WEAK_FUNC(sub_83244628);
PPC_FUNC_IMPL(__imp__sub_83244628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3256
	ctx.r3.s64 = ctx.r11.s64 + 3256;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244634"))) PPC_WEAK_FUNC(sub_83244634);
PPC_FUNC_IMPL(__imp__sub_83244634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244638"))) PPC_WEAK_FUNC(sub_83244638);
PPC_FUNC_IMPL(__imp__sub_83244638) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,30336
	ctx.r3.s64 = ctx.r10.s64 + 30336;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324465C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3344
	ctx.r3.s64 = ctx.r9.s64 + 3344;
	// bl 0x82ca3700
	ctx.lr = 0x83244668;
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

__attribute__((alias("__imp__sub_83244678"))) PPC_WEAK_FUNC(sub_83244678);
PPC_FUNC_IMPL(__imp__sub_83244678) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,30340
	ctx.r3.s64 = ctx.r10.s64 + 30340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324469C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3360
	ctx.r3.s64 = ctx.r9.s64 + 3360;
	// bl 0x82ca3700
	ctx.lr = 0x832446A8;
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

__attribute__((alias("__imp__sub_832446B8"))) PPC_WEAK_FUNC(sub_832446B8);
PPC_FUNC_IMPL(__imp__sub_832446B8) {
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
	ctx.lr = 0x832446CC;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832446dc
	if (ctx.cr6.eq) goto loc_832446DC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832446DC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832446e8
	if (ctx.cr0.eq) goto loc_832446E8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832446E8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832446f4
	if (ctx.cr0.eq) goto loc_832446F4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832446F4:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stb r10,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,30344
	ctx.r8.s64 = ctx.r9.s64 + 30344;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r11.u8);
	// addi r3,r7,3376
	ctx.r3.s64 = ctx.r7.s64 + 3376;
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
	ctx.lr = 0x83244738;
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

__attribute__((alias("__imp__sub_83244748"))) PPC_WEAK_FUNC(sub_83244748);
PPC_FUNC_IMPL(__imp__sub_83244748) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-31528
	ctx.r4.s64 = ctx.r11.s64 + -31528;
	// addi r3,r10,30356
	ctx.r3.s64 = ctx.r10.s64 + 30356;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324476C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3392
	ctx.r3.s64 = ctx.r9.s64 + 3392;
	// bl 0x82ca3700
	ctx.lr = 0x83244778;
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

__attribute__((alias("__imp__sub_83244788"))) PPC_WEAK_FUNC(sub_83244788);
PPC_FUNC_IMPL(__imp__sub_83244788) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30360
	ctx.r3.s64 = ctx.r10.s64 + 30360;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832447AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3408
	ctx.r3.s64 = ctx.r9.s64 + 3408;
	// bl 0x82ca3700
	ctx.lr = 0x832447B8;
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

__attribute__((alias("__imp__sub_832447C8"))) PPC_WEAK_FUNC(sub_832447C8);
PPC_FUNC_IMPL(__imp__sub_832447C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30364
	ctx.r3.s64 = ctx.r10.s64 + 30364;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832447EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3424
	ctx.r3.s64 = ctx.r9.s64 + 3424;
	// bl 0x82ca3700
	ctx.lr = 0x832447F8;
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

__attribute__((alias("__imp__sub_83244808"))) PPC_WEAK_FUNC(sub_83244808);
PPC_FUNC_IMPL(__imp__sub_83244808) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30368
	ctx.r3.s64 = ctx.r10.s64 + 30368;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324482C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3440
	ctx.r3.s64 = ctx.r9.s64 + 3440;
	// bl 0x82ca3700
	ctx.lr = 0x83244838;
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

__attribute__((alias("__imp__sub_83244848"))) PPC_WEAK_FUNC(sub_83244848);
PPC_FUNC_IMPL(__imp__sub_83244848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27852
	ctx.r9.s64 = ctx.r11.s64 + -27852;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r5,30384
	ctx.r4.s64 = ctx.r5.s64 + 30384;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832448A8"))) PPC_WEAK_FUNC(sub_832448A8);
PPC_FUNC_IMPL(__imp__sub_832448A8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-30828
	ctx.r4.s64 = ctx.r11.s64 + -30828;
	// addi r3,r10,30372
	ctx.r3.s64 = ctx.r10.s64 + 30372;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832448CC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3456
	ctx.r3.s64 = ctx.r9.s64 + 3456;
	// bl 0x82ca3700
	ctx.lr = 0x832448D8;
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

__attribute__((alias("__imp__sub_832448E8"))) PPC_WEAK_FUNC(sub_832448E8);
PPC_FUNC_IMPL(__imp__sub_832448E8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-30804
	ctx.r4.s64 = ctx.r11.s64 + -30804;
	// addi r3,r10,30376
	ctx.r3.s64 = ctx.r10.s64 + 30376;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324490C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3472
	ctx.r3.s64 = ctx.r9.s64 + 3472;
	// bl 0x82ca3700
	ctx.lr = 0x83244918;
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

__attribute__((alias("__imp__sub_83244928"))) PPC_WEAK_FUNC(sub_83244928);
PPC_FUNC_IMPL(__imp__sub_83244928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244934"))) PPC_WEAK_FUNC(sub_83244934);
PPC_FUNC_IMPL(__imp__sub_83244934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244938"))) PPC_WEAK_FUNC(sub_83244938);
PPC_FUNC_IMPL(__imp__sub_83244938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3504
	ctx.r3.s64 = ctx.r11.s64 + 3504;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244944"))) PPC_WEAK_FUNC(sub_83244944);
PPC_FUNC_IMPL(__imp__sub_83244944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244948"))) PPC_WEAK_FUNC(sub_83244948);
PPC_FUNC_IMPL(__imp__sub_83244948) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30440
	ctx.r3.s64 = ctx.r10.s64 + 30440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324496C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3520
	ctx.r3.s64 = ctx.r9.s64 + 3520;
	// bl 0x82ca3700
	ctx.lr = 0x83244978;
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

__attribute__((alias("__imp__sub_83244988"))) PPC_WEAK_FUNC(sub_83244988);
PPC_FUNC_IMPL(__imp__sub_83244988) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30444
	ctx.r3.s64 = ctx.r10.s64 + 30444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832449AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3536
	ctx.r3.s64 = ctx.r9.s64 + 3536;
	// bl 0x82ca3700
	ctx.lr = 0x832449B8;
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

__attribute__((alias("__imp__sub_832449C8"))) PPC_WEAK_FUNC(sub_832449C8);
PPC_FUNC_IMPL(__imp__sub_832449C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30448
	ctx.r3.s64 = ctx.r10.s64 + 30448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832449EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3552
	ctx.r3.s64 = ctx.r9.s64 + 3552;
	// bl 0x82ca3700
	ctx.lr = 0x832449F8;
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

__attribute__((alias("__imp__sub_83244A08"))) PPC_WEAK_FUNC(sub_83244A08);
PPC_FUNC_IMPL(__imp__sub_83244A08) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-32044
	ctx.r3.s64 = ctx.r11.s64 + -32044;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83244A28;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83244A40"))) PPC_WEAK_FUNC(sub_83244A40);
PPC_FUNC_IMPL(__imp__sub_83244A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3568
	ctx.r3.s64 = ctx.r11.s64 + 3568;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83244A4C"))) PPC_WEAK_FUNC(sub_83244A4C);
PPC_FUNC_IMPL(__imp__sub_83244A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83244A50"))) PPC_WEAK_FUNC(sub_83244A50);
PPC_FUNC_IMPL(__imp__sub_83244A50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28788
	ctx.r4.s64 = ctx.r11.s64 + -28788;
	// addi r3,r10,30472
	ctx.r3.s64 = ctx.r10.s64 + 30472;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244A74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3584
	ctx.r3.s64 = ctx.r9.s64 + 3584;
	// bl 0x82ca3700
	ctx.lr = 0x83244A80;
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

__attribute__((alias("__imp__sub_83244A90"))) PPC_WEAK_FUNC(sub_83244A90);
PPC_FUNC_IMPL(__imp__sub_83244A90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28780
	ctx.r4.s64 = ctx.r11.s64 + -28780;
	// addi r3,r10,30476
	ctx.r3.s64 = ctx.r10.s64 + 30476;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244AB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3600
	ctx.r3.s64 = ctx.r9.s64 + 3600;
	// bl 0x82ca3700
	ctx.lr = 0x83244AC0;
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

__attribute__((alias("__imp__sub_83244AD0"))) PPC_WEAK_FUNC(sub_83244AD0);
PPC_FUNC_IMPL(__imp__sub_83244AD0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28772
	ctx.r4.s64 = ctx.r11.s64 + -28772;
	// addi r3,r10,30480
	ctx.r3.s64 = ctx.r10.s64 + 30480;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244AF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3616
	ctx.r3.s64 = ctx.r9.s64 + 3616;
	// bl 0x82ca3700
	ctx.lr = 0x83244B00;
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

__attribute__((alias("__imp__sub_83244B10"))) PPC_WEAK_FUNC(sub_83244B10);
PPC_FUNC_IMPL(__imp__sub_83244B10) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28760
	ctx.r4.s64 = ctx.r11.s64 + -28760;
	// addi r3,r10,30484
	ctx.r3.s64 = ctx.r10.s64 + 30484;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244B34;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3632
	ctx.r3.s64 = ctx.r9.s64 + 3632;
	// bl 0x82ca3700
	ctx.lr = 0x83244B40;
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

__attribute__((alias("__imp__sub_83244B50"))) PPC_WEAK_FUNC(sub_83244B50);
PPC_FUNC_IMPL(__imp__sub_83244B50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28752
	ctx.r4.s64 = ctx.r11.s64 + -28752;
	// addi r3,r10,30488
	ctx.r3.s64 = ctx.r10.s64 + 30488;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244B74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3648
	ctx.r3.s64 = ctx.r9.s64 + 3648;
	// bl 0x82ca3700
	ctx.lr = 0x83244B80;
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

__attribute__((alias("__imp__sub_83244B90"))) PPC_WEAK_FUNC(sub_83244B90);
PPC_FUNC_IMPL(__imp__sub_83244B90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28740
	ctx.r4.s64 = ctx.r11.s64 + -28740;
	// addi r3,r10,30492
	ctx.r3.s64 = ctx.r10.s64 + 30492;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244BB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3664
	ctx.r3.s64 = ctx.r9.s64 + 3664;
	// bl 0x82ca3700
	ctx.lr = 0x83244BC0;
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

__attribute__((alias("__imp__sub_83244BD0"))) PPC_WEAK_FUNC(sub_83244BD0);
PPC_FUNC_IMPL(__imp__sub_83244BD0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28724
	ctx.r4.s64 = ctx.r11.s64 + -28724;
	// addi r3,r10,30496
	ctx.r3.s64 = ctx.r10.s64 + 30496;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244BF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3680
	ctx.r3.s64 = ctx.r9.s64 + 3680;
	// bl 0x82ca3700
	ctx.lr = 0x83244C00;
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

__attribute__((alias("__imp__sub_83244C10"))) PPC_WEAK_FUNC(sub_83244C10);
PPC_FUNC_IMPL(__imp__sub_83244C10) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28716
	ctx.r4.s64 = ctx.r11.s64 + -28716;
	// addi r3,r10,30500
	ctx.r3.s64 = ctx.r10.s64 + 30500;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244C34;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3696
	ctx.r3.s64 = ctx.r9.s64 + 3696;
	// bl 0x82ca3700
	ctx.lr = 0x83244C40;
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

__attribute__((alias("__imp__sub_83244C50"))) PPC_WEAK_FUNC(sub_83244C50);
PPC_FUNC_IMPL(__imp__sub_83244C50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28700
	ctx.r4.s64 = ctx.r11.s64 + -28700;
	// addi r3,r10,30504
	ctx.r3.s64 = ctx.r10.s64 + 30504;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244C74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3712
	ctx.r3.s64 = ctx.r9.s64 + 3712;
	// bl 0x82ca3700
	ctx.lr = 0x83244C80;
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

__attribute__((alias("__imp__sub_83244C90"))) PPC_WEAK_FUNC(sub_83244C90);
PPC_FUNC_IMPL(__imp__sub_83244C90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// addi r3,r10,30508
	ctx.r3.s64 = ctx.r10.s64 + 30508;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244CB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3728
	ctx.r3.s64 = ctx.r9.s64 + 3728;
	// bl 0x82ca3700
	ctx.lr = 0x83244CC0;
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

__attribute__((alias("__imp__sub_83244CD0"))) PPC_WEAK_FUNC(sub_83244CD0);
PPC_FUNC_IMPL(__imp__sub_83244CD0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28684
	ctx.r4.s64 = ctx.r11.s64 + -28684;
	// addi r3,r10,30512
	ctx.r3.s64 = ctx.r10.s64 + 30512;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244CF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3744
	ctx.r3.s64 = ctx.r9.s64 + 3744;
	// bl 0x82ca3700
	ctx.lr = 0x83244D00;
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

__attribute__((alias("__imp__sub_83244D10"))) PPC_WEAK_FUNC(sub_83244D10);
PPC_FUNC_IMPL(__imp__sub_83244D10) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28672
	ctx.r4.s64 = ctx.r11.s64 + -28672;
	// addi r3,r10,30516
	ctx.r3.s64 = ctx.r10.s64 + 30516;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244D34;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3760
	ctx.r3.s64 = ctx.r9.s64 + 3760;
	// bl 0x82ca3700
	ctx.lr = 0x83244D40;
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

__attribute__((alias("__imp__sub_83244D50"))) PPC_WEAK_FUNC(sub_83244D50);
PPC_FUNC_IMPL(__imp__sub_83244D50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28664
	ctx.r4.s64 = ctx.r11.s64 + -28664;
	// addi r3,r10,30520
	ctx.r3.s64 = ctx.r10.s64 + 30520;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244D74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3776
	ctx.r3.s64 = ctx.r9.s64 + 3776;
	// bl 0x82ca3700
	ctx.lr = 0x83244D80;
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

__attribute__((alias("__imp__sub_83244D90"))) PPC_WEAK_FUNC(sub_83244D90);
PPC_FUNC_IMPL(__imp__sub_83244D90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28656
	ctx.r4.s64 = ctx.r11.s64 + -28656;
	// addi r3,r10,30524
	ctx.r3.s64 = ctx.r10.s64 + 30524;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244DB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3792
	ctx.r3.s64 = ctx.r9.s64 + 3792;
	// bl 0x82ca3700
	ctx.lr = 0x83244DC0;
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

__attribute__((alias("__imp__sub_83244DD0"))) PPC_WEAK_FUNC(sub_83244DD0);
PPC_FUNC_IMPL(__imp__sub_83244DD0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28648
	ctx.r4.s64 = ctx.r11.s64 + -28648;
	// addi r3,r10,30528
	ctx.r3.s64 = ctx.r10.s64 + 30528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244DF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3808
	ctx.r3.s64 = ctx.r9.s64 + 3808;
	// bl 0x82ca3700
	ctx.lr = 0x83244E00;
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

__attribute__((alias("__imp__sub_83244E10"))) PPC_WEAK_FUNC(sub_83244E10);
PPC_FUNC_IMPL(__imp__sub_83244E10) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28640
	ctx.r4.s64 = ctx.r11.s64 + -28640;
	// addi r3,r10,30532
	ctx.r3.s64 = ctx.r10.s64 + 30532;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244E34;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3824
	ctx.r3.s64 = ctx.r9.s64 + 3824;
	// bl 0x82ca3700
	ctx.lr = 0x83244E40;
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

__attribute__((alias("__imp__sub_83244E50"))) PPC_WEAK_FUNC(sub_83244E50);
PPC_FUNC_IMPL(__imp__sub_83244E50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28632
	ctx.r4.s64 = ctx.r11.s64 + -28632;
	// addi r3,r10,30536
	ctx.r3.s64 = ctx.r10.s64 + 30536;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244E74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3840
	ctx.r3.s64 = ctx.r9.s64 + 3840;
	// bl 0x82ca3700
	ctx.lr = 0x83244E80;
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

__attribute__((alias("__imp__sub_83244E90"))) PPC_WEAK_FUNC(sub_83244E90);
PPC_FUNC_IMPL(__imp__sub_83244E90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28624
	ctx.r4.s64 = ctx.r11.s64 + -28624;
	// addi r3,r10,30540
	ctx.r3.s64 = ctx.r10.s64 + 30540;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244EB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3856
	ctx.r3.s64 = ctx.r9.s64 + 3856;
	// bl 0x82ca3700
	ctx.lr = 0x83244EC0;
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

__attribute__((alias("__imp__sub_83244ED0"))) PPC_WEAK_FUNC(sub_83244ED0);
PPC_FUNC_IMPL(__imp__sub_83244ED0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28616
	ctx.r4.s64 = ctx.r11.s64 + -28616;
	// addi r3,r10,30544
	ctx.r3.s64 = ctx.r10.s64 + 30544;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244EF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3872
	ctx.r3.s64 = ctx.r9.s64 + 3872;
	// bl 0x82ca3700
	ctx.lr = 0x83244F00;
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

__attribute__((alias("__imp__sub_83244F10"))) PPC_WEAK_FUNC(sub_83244F10);
PPC_FUNC_IMPL(__imp__sub_83244F10) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28604
	ctx.r4.s64 = ctx.r11.s64 + -28604;
	// addi r3,r10,30548
	ctx.r3.s64 = ctx.r10.s64 + 30548;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244F34;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3888
	ctx.r3.s64 = ctx.r9.s64 + 3888;
	// bl 0x82ca3700
	ctx.lr = 0x83244F40;
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

__attribute__((alias("__imp__sub_83244F50"))) PPC_WEAK_FUNC(sub_83244F50);
PPC_FUNC_IMPL(__imp__sub_83244F50) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,22936
	ctx.r4.s64 = ctx.r11.s64 + 22936;
	// addi r3,r10,30552
	ctx.r3.s64 = ctx.r10.s64 + 30552;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244F74;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3904
	ctx.r3.s64 = ctx.r9.s64 + 3904;
	// bl 0x82ca3700
	ctx.lr = 0x83244F80;
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

__attribute__((alias("__imp__sub_83244F90"))) PPC_WEAK_FUNC(sub_83244F90);
PPC_FUNC_IMPL(__imp__sub_83244F90) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// addi r3,r10,30556
	ctx.r3.s64 = ctx.r10.s64 + 30556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83244FB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3920
	ctx.r3.s64 = ctx.r9.s64 + 3920;
	// bl 0x82ca3700
	ctx.lr = 0x83244FC0;
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

__attribute__((alias("__imp__sub_83244FD0"))) PPC_WEAK_FUNC(sub_83244FD0);
PPC_FUNC_IMPL(__imp__sub_83244FD0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-28556
	ctx.r3.s64 = ctx.r11.s64 + -28556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83244FF0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245008"))) PPC_WEAK_FUNC(sub_83245008);
PPC_FUNC_IMPL(__imp__sub_83245008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27648
	ctx.r4.s64 = ctx.r11.s64 + -27648;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8324502C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x83245038;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83245040;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30564, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83245054;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83245060:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83245060
	if (!ctx.cr0.eq) goto loc_83245060;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324508C;
	sub_821C67D8(ctx, base);
loc_8324508C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324508c
	if (!ctx.cr0.eq) goto loc_8324508C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3936
	ctx.r3.s64 = ctx.r11.s64 + 3936;
	// bl 0x82ca3700
	ctx.lr = 0x832450B4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832450C8"))) PPC_WEAK_FUNC(sub_832450C8);
PPC_FUNC_IMPL(__imp__sub_832450C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27648
	ctx.r4.s64 = ctx.r11.s64 + -27648;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x832450EC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x832450F8;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83245100;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30568, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83245114;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83245120:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83245120
	if (!ctx.cr0.eq) goto loc_83245120;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324514C;
	sub_821C67D8(ctx, base);
loc_8324514C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324514c
	if (!ctx.cr0.eq) goto loc_8324514C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3944
	ctx.r3.s64 = ctx.r11.s64 + 3944;
	// bl 0x82ca3700
	ctx.lr = 0x83245174;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245188"))) PPC_WEAK_FUNC(sub_83245188);
PPC_FUNC_IMPL(__imp__sub_83245188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27612
	ctx.r4.s64 = ctx.r11.s64 + -27612;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x832451AC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x832451B8;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x832451C0;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30572, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x832451D4;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_832451E0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832451e0
	if (!ctx.cr0.eq) goto loc_832451E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324520C;
	sub_821C67D8(ctx, base);
loc_8324520C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324520c
	if (!ctx.cr0.eq) goto loc_8324520C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3952
	ctx.r3.s64 = ctx.r11.s64 + 3952;
	// bl 0x82ca3700
	ctx.lr = 0x83245234;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245248"))) PPC_WEAK_FUNC(sub_83245248);
PPC_FUNC_IMPL(__imp__sub_83245248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27576
	ctx.r4.s64 = ctx.r11.s64 + -27576;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8324526C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x83245278;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83245280;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30576, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83245294;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_832452A0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832452a0
	if (!ctx.cr0.eq) goto loc_832452A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x832452CC;
	sub_821C67D8(ctx, base);
loc_832452CC:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832452cc
	if (!ctx.cr0.eq) goto loc_832452CC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// bl 0x82ca3700
	ctx.lr = 0x832452F4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245308"))) PPC_WEAK_FUNC(sub_83245308);
PPC_FUNC_IMPL(__imp__sub_83245308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27544
	ctx.r4.s64 = ctx.r11.s64 + -27544;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x8324532C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x83245338;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83245340;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30580, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83245354;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83245360:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83245360
	if (!ctx.cr0.eq) goto loc_83245360;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324538C;
	sub_821C67D8(ctx, base);
loc_8324538C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324538c
	if (!ctx.cr0.eq) goto loc_8324538C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// bl 0x82ca3700
	ctx.lr = 0x832453B4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832453C8"))) PPC_WEAK_FUNC(sub_832453C8);
PPC_FUNC_IMPL(__imp__sub_832453C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-27512
	ctx.r4.s64 = ctx.r11.s64 + -27512;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x832453EC;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x832453F8;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83245400;
	sub_82BFD780(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30584, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83245414;
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	ctx.r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_83245420:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83245420
	if (!ctx.cr0.eq) goto loc_83245420;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	ctx.lr = 0x8324544C;
	sub_821C67D8(ctx, base);
loc_8324544C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8324544c
	if (!ctx.cr0.eq) goto loc_8324544C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,3976
	ctx.r3.s64 = ctx.r11.s64 + 3976;
	// bl 0x82ca3700
	ctx.lr = 0x83245474;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245488"))) PPC_WEAK_FUNC(sub_83245488);
PPC_FUNC_IMPL(__imp__sub_83245488) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30588
	ctx.r3.s64 = ctx.r10.s64 + 30588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832454AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,3984
	ctx.r3.s64 = ctx.r9.s64 + 3984;
	// bl 0x82ca3700
	ctx.lr = 0x832454B8;
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

__attribute__((alias("__imp__sub_832454C8"))) PPC_WEAK_FUNC(sub_832454C8);
PPC_FUNC_IMPL(__imp__sub_832454C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30592
	ctx.r3.s64 = ctx.r10.s64 + 30592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832454EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4000
	ctx.r3.s64 = ctx.r9.s64 + 4000;
	// bl 0x82ca3700
	ctx.lr = 0x832454F8;
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

__attribute__((alias("__imp__sub_83245508"))) PPC_WEAK_FUNC(sub_83245508);
PPC_FUNC_IMPL(__imp__sub_83245508) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30596
	ctx.r3.s64 = ctx.r10.s64 + 30596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324552C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4016
	ctx.r3.s64 = ctx.r9.s64 + 4016;
	// bl 0x82ca3700
	ctx.lr = 0x83245538;
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

__attribute__((alias("__imp__sub_83245548"))) PPC_WEAK_FUNC(sub_83245548);
PPC_FUNC_IMPL(__imp__sub_83245548) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-27480
	ctx.r4.s64 = ctx.r11.s64 + -27480;
	// addi r3,r10,30600
	ctx.r3.s64 = ctx.r10.s64 + 30600;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324556C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4032
	ctx.r3.s64 = ctx.r9.s64 + 4032;
	// bl 0x82ca3700
	ctx.lr = 0x83245578;
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

__attribute__((alias("__imp__sub_83245588"))) PPC_WEAK_FUNC(sub_83245588);
PPC_FUNC_IMPL(__imp__sub_83245588) {
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
	ctx.lr = 0x8324559C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832455ac
	if (ctx.cr6.eq) goto loc_832455AC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832455AC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832455b8
	if (ctx.cr0.eq) goto loc_832455B8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832455D8;
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

__attribute__((alias("__imp__sub_832455E8"))) PPC_WEAK_FUNC(sub_832455E8);
PPC_FUNC_IMPL(__imp__sub_832455E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832455F4"))) PPC_WEAK_FUNC(sub_832455F4);
PPC_FUNC_IMPL(__imp__sub_832455F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832455F8"))) PPC_WEAK_FUNC(sub_832455F8);
PPC_FUNC_IMPL(__imp__sub_832455F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_83245600:
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
	// bne 0x83245600
	if (!ctx.cr0.eq) goto loc_83245600;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4208
	ctx.r3.s64 = ctx.r7.s64 + 4208;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245628"))) PPC_WEAK_FUNC(sub_83245628);
PPC_FUNC_IMPL(__imp__sub_83245628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_83245630:
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
	// bne 0x83245630
	if (!ctx.cr0.eq) goto loc_83245630;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4224
	ctx.r3.s64 = ctx.r7.s64 + 4224;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245658"))) PPC_WEAK_FUNC(sub_83245658);
PPC_FUNC_IMPL(__imp__sub_83245658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,4240
	ctx.r3.s64 = ctx.r11.s64 + 4240;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245664"))) PPC_WEAK_FUNC(sub_83245664);
PPC_FUNC_IMPL(__imp__sub_83245664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245668"))) PPC_WEAK_FUNC(sub_83245668);
PPC_FUNC_IMPL(__imp__sub_83245668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_83245670:
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
	// bne 0x83245670
	if (!ctx.cr0.eq) goto loc_83245670;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4256
	ctx.r3.s64 = ctx.r7.s64 + 4256;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83245698"))) PPC_WEAK_FUNC(sub_83245698);
PPC_FUNC_IMPL(__imp__sub_83245698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_832456A0:
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
	// bne 0x832456a0
	if (!ctx.cr0.eq) goto loc_832456A0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,4272
	ctx.r3.s64 = ctx.r7.s64 + 4272;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832456C8"))) PPC_WEAK_FUNC(sub_832456C8);
PPC_FUNC_IMPL(__imp__sub_832456C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,30688
	ctx.r3.s64 = ctx.r10.s64 + 30688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832456EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4288
	ctx.r3.s64 = ctx.r9.s64 + 4288;
	// bl 0x82ca3700
	ctx.lr = 0x832456F8;
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

__attribute__((alias("__imp__sub_83245708"))) PPC_WEAK_FUNC(sub_83245708);
PPC_FUNC_IMPL(__imp__sub_83245708) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,30696
	ctx.r3.s64 = ctx.r10.s64 + 30696;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324572C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4304
	ctx.r3.s64 = ctx.r9.s64 + 4304;
	// bl 0x82ca3700
	ctx.lr = 0x83245738;
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

__attribute__((alias("__imp__sub_83245748"))) PPC_WEAK_FUNC(sub_83245748);
PPC_FUNC_IMPL(__imp__sub_83245748) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30700
	ctx.r3.s64 = ctx.r10.s64 + 30700;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324576C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4320
	ctx.r3.s64 = ctx.r9.s64 + 4320;
	// bl 0x82ca3700
	ctx.lr = 0x83245778;
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

__attribute__((alias("__imp__sub_83245788"))) PPC_WEAK_FUNC(sub_83245788);
PPC_FUNC_IMPL(__imp__sub_83245788) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30704
	ctx.r3.s64 = ctx.r10.s64 + 30704;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832457AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4336
	ctx.r3.s64 = ctx.r9.s64 + 4336;
	// bl 0x82ca3700
	ctx.lr = 0x832457B8;
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

__attribute__((alias("__imp__sub_832457C8"))) PPC_WEAK_FUNC(sub_832457C8);
PPC_FUNC_IMPL(__imp__sub_832457C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30708
	ctx.r3.s64 = ctx.r10.s64 + 30708;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832457EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4352
	ctx.r3.s64 = ctx.r9.s64 + 4352;
	// bl 0x82ca3700
	ctx.lr = 0x832457F8;
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

__attribute__((alias("__imp__sub_83245808"))) PPC_WEAK_FUNC(sub_83245808);
PPC_FUNC_IMPL(__imp__sub_83245808) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,30712
	ctx.r3.s64 = ctx.r10.s64 + 30712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324582C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4368
	ctx.r3.s64 = ctx.r9.s64 + 4368;
	// bl 0x82ca3700
	ctx.lr = 0x83245838;
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

__attribute__((alias("__imp__sub_83245848"))) PPC_WEAK_FUNC(sub_83245848);
PPC_FUNC_IMPL(__imp__sub_83245848) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83245868;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245880"))) PPC_WEAK_FUNC(sub_83245880);
PPC_FUNC_IMPL(__imp__sub_83245880) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832458A0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832458B8"))) PPC_WEAK_FUNC(sub_832458B8);
PPC_FUNC_IMPL(__imp__sub_832458B8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832458D8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832458F0"))) PPC_WEAK_FUNC(sub_832458F0);
PPC_FUNC_IMPL(__imp__sub_832458F0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83245910;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245928"))) PPC_WEAK_FUNC(sub_83245928);
PPC_FUNC_IMPL(__imp__sub_83245928) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,30732
	ctx.r3.s64 = ctx.r10.s64 + 30732;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324594C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4416
	ctx.r3.s64 = ctx.r9.s64 + 4416;
	// bl 0x82ca3700
	ctx.lr = 0x83245958;
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

__attribute__((alias("__imp__sub_83245968"))) PPC_WEAK_FUNC(sub_83245968);
PPC_FUNC_IMPL(__imp__sub_83245968) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30736
	ctx.r3.s64 = ctx.r10.s64 + 30736;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324598C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4432
	ctx.r3.s64 = ctx.r9.s64 + 4432;
	// bl 0x82ca3700
	ctx.lr = 0x83245998;
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

__attribute__((alias("__imp__sub_832459A8"))) PPC_WEAK_FUNC(sub_832459A8);
PPC_FUNC_IMPL(__imp__sub_832459A8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30740
	ctx.r3.s64 = ctx.r10.s64 + 30740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832459CC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4448
	ctx.r3.s64 = ctx.r9.s64 + 4448;
	// bl 0x82ca3700
	ctx.lr = 0x832459D8;
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

__attribute__((alias("__imp__sub_832459E8"))) PPC_WEAK_FUNC(sub_832459E8);
PPC_FUNC_IMPL(__imp__sub_832459E8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30744
	ctx.r3.s64 = ctx.r10.s64 + 30744;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245A0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4464
	ctx.r3.s64 = ctx.r9.s64 + 4464;
	// bl 0x82ca3700
	ctx.lr = 0x83245A18;
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

__attribute__((alias("__imp__sub_83245A28"))) PPC_WEAK_FUNC(sub_83245A28);
PPC_FUNC_IMPL(__imp__sub_83245A28) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,22984
	ctx.r4.s64 = ctx.r11.s64 + 22984;
	// addi r3,r10,30748
	ctx.r3.s64 = ctx.r10.s64 + 30748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245A4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4480
	ctx.r3.s64 = ctx.r9.s64 + 4480;
	// bl 0x82ca3700
	ctx.lr = 0x83245A58;
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

__attribute__((alias("__imp__sub_83245A68"))) PPC_WEAK_FUNC(sub_83245A68);
PPC_FUNC_IMPL(__imp__sub_83245A68) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,23008
	ctx.r4.s64 = ctx.r11.s64 + 23008;
	// addi r3,r10,30752
	ctx.r3.s64 = ctx.r10.s64 + 30752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245A8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4496
	ctx.r3.s64 = ctx.r9.s64 + 4496;
	// bl 0x82ca3700
	ctx.lr = 0x83245A98;
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

__attribute__((alias("__imp__sub_83245AA8"))) PPC_WEAK_FUNC(sub_83245AA8);
PPC_FUNC_IMPL(__imp__sub_83245AA8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,30756
	ctx.r3.s64 = ctx.r10.s64 + 30756;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245ACC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4512
	ctx.r3.s64 = ctx.r9.s64 + 4512;
	// bl 0x82ca3700
	ctx.lr = 0x83245AD8;
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

__attribute__((alias("__imp__sub_83245AE8"))) PPC_WEAK_FUNC(sub_83245AE8);
PPC_FUNC_IMPL(__imp__sub_83245AE8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30760
	ctx.r3.s64 = ctx.r10.s64 + 30760;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245B0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4528
	ctx.r3.s64 = ctx.r9.s64 + 4528;
	// bl 0x82ca3700
	ctx.lr = 0x83245B18;
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

__attribute__((alias("__imp__sub_83245B28"))) PPC_WEAK_FUNC(sub_83245B28);
PPC_FUNC_IMPL(__imp__sub_83245B28) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30764
	ctx.r3.s64 = ctx.r10.s64 + 30764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245B4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4544
	ctx.r3.s64 = ctx.r9.s64 + 4544;
	// bl 0x82ca3700
	ctx.lr = 0x83245B58;
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

__attribute__((alias("__imp__sub_83245B68"))) PPC_WEAK_FUNC(sub_83245B68);
PPC_FUNC_IMPL(__imp__sub_83245B68) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30768
	ctx.r3.s64 = ctx.r10.s64 + 30768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245B8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4560
	ctx.r3.s64 = ctx.r9.s64 + 4560;
	// bl 0x82ca3700
	ctx.lr = 0x83245B98;
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

__attribute__((alias("__imp__sub_83245BA8"))) PPC_WEAK_FUNC(sub_83245BA8);
PPC_FUNC_IMPL(__imp__sub_83245BA8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-15688
	ctx.r4.s64 = ctx.r11.s64 + -15688;
	// addi r3,r10,30772
	ctx.r3.s64 = ctx.r10.s64 + 30772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245BCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4576
	ctx.r3.s64 = ctx.r9.s64 + 4576;
	// bl 0x82ca3700
	ctx.lr = 0x83245BD8;
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

__attribute__((alias("__imp__sub_83245BE8"))) PPC_WEAK_FUNC(sub_83245BE8);
PPC_FUNC_IMPL(__imp__sub_83245BE8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-15664
	ctx.r4.s64 = ctx.r11.s64 + -15664;
	// addi r3,r10,30776
	ctx.r3.s64 = ctx.r10.s64 + 30776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245C0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4592
	ctx.r3.s64 = ctx.r9.s64 + 4592;
	// bl 0x82ca3700
	ctx.lr = 0x83245C18;
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

__attribute__((alias("__imp__sub_83245C28"))) PPC_WEAK_FUNC(sub_83245C28);
PPC_FUNC_IMPL(__imp__sub_83245C28) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-15632
	ctx.r4.s64 = ctx.r11.s64 + -15632;
	// addi r3,r10,30780
	ctx.r3.s64 = ctx.r10.s64 + 30780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245C4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4608
	ctx.r3.s64 = ctx.r9.s64 + 4608;
	// bl 0x82ca3700
	ctx.lr = 0x83245C58;
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

__attribute__((alias("__imp__sub_83245C68"))) PPC_WEAK_FUNC(sub_83245C68);
PPC_FUNC_IMPL(__imp__sub_83245C68) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x8221f388
	ctx.lr = 0x83245C7C;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83245c8c
	if (ctx.cr6.eq) goto loc_83245C8C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83245C8C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83245c98
	if (ctx.cr0.eq) goto loc_83245C98;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83245C98:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83245ca4
	if (ctx.cr0.eq) goto loc_83245CA4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83245CA4:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stb r10,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,30784
	ctx.r8.s64 = ctx.r9.s64 + 30784;
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// addi r3,r7,4624
	ctx.r3.s64 = ctx.r7.s64 + 4624;
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
	ctx.lr = 0x83245CE8;
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

__attribute__((alias("__imp__sub_83245CF8"))) PPC_WEAK_FUNC(sub_83245CF8);
PPC_FUNC_IMPL(__imp__sub_83245CF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,30796
	ctx.r3.s64 = ctx.r10.s64 + 30796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245D1C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4640
	ctx.r3.s64 = ctx.r9.s64 + 4640;
	// bl 0x82ca3700
	ctx.lr = 0x83245D28;
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

__attribute__((alias("__imp__sub_83245D38"))) PPC_WEAK_FUNC(sub_83245D38);
PPC_FUNC_IMPL(__imp__sub_83245D38) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30800
	ctx.r3.s64 = ctx.r10.s64 + 30800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245D5C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4656
	ctx.r3.s64 = ctx.r9.s64 + 4656;
	// bl 0x82ca3700
	ctx.lr = 0x83245D68;
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

__attribute__((alias("__imp__sub_83245D78"))) PPC_WEAK_FUNC(sub_83245D78);
PPC_FUNC_IMPL(__imp__sub_83245D78) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30804
	ctx.r3.s64 = ctx.r10.s64 + 30804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245D9C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4672
	ctx.r3.s64 = ctx.r9.s64 + 4672;
	// bl 0x82ca3700
	ctx.lr = 0x83245DA8;
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

__attribute__((alias("__imp__sub_83245DB8"))) PPC_WEAK_FUNC(sub_83245DB8);
PPC_FUNC_IMPL(__imp__sub_83245DB8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30808
	ctx.r3.s64 = ctx.r10.s64 + 30808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245DDC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4688
	ctx.r3.s64 = ctx.r9.s64 + 4688;
	// bl 0x82ca3700
	ctx.lr = 0x83245DE8;
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

__attribute__((alias("__imp__sub_83245DF8"))) PPC_WEAK_FUNC(sub_83245DF8);
PPC_FUNC_IMPL(__imp__sub_83245DF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30812
	ctx.r3.s64 = ctx.r10.s64 + 30812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245E1C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4704
	ctx.r3.s64 = ctx.r9.s64 + 4704;
	// bl 0x82ca3700
	ctx.lr = 0x83245E28;
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

__attribute__((alias("__imp__sub_83245E38"))) PPC_WEAK_FUNC(sub_83245E38);
PPC_FUNC_IMPL(__imp__sub_83245E38) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30816
	ctx.r3.s64 = ctx.r10.s64 + 30816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245E5C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4720
	ctx.r3.s64 = ctx.r9.s64 + 4720;
	// bl 0x82ca3700
	ctx.lr = 0x83245E68;
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

__attribute__((alias("__imp__sub_83245E78"))) PPC_WEAK_FUNC(sub_83245E78);
PPC_FUNC_IMPL(__imp__sub_83245E78) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30820
	ctx.r3.s64 = ctx.r10.s64 + 30820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245E9C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4736
	ctx.r3.s64 = ctx.r9.s64 + 4736;
	// bl 0x82ca3700
	ctx.lr = 0x83245EA8;
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

__attribute__((alias("__imp__sub_83245EB8"))) PPC_WEAK_FUNC(sub_83245EB8);
PPC_FUNC_IMPL(__imp__sub_83245EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f1,3304(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3304);
	// bl 0x82239e88
	ctx.lr = 0x83245ED0;
	sub_82239E88(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,30824(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 30824, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83245EEC"))) PPC_WEAK_FUNC(sub_83245EEC);
PPC_FUNC_IMPL(__imp__sub_83245EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83245EF0"))) PPC_WEAK_FUNC(sub_83245EF0);
PPC_FUNC_IMPL(__imp__sub_83245EF0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-6984
	ctx.r4.s64 = ctx.r11.s64 + -6984;
	// addi r3,r10,30828
	ctx.r3.s64 = ctx.r10.s64 + 30828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245F14;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4752
	ctx.r3.s64 = ctx.r9.s64 + 4752;
	// bl 0x82ca3700
	ctx.lr = 0x83245F20;
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

__attribute__((alias("__imp__sub_83245F30"))) PPC_WEAK_FUNC(sub_83245F30);
PPC_FUNC_IMPL(__imp__sub_83245F30) {
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
	ctx.lr = 0x83245F44;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83245f54
	if (ctx.cr6.eq) goto loc_83245F54;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83245F54:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83245f60
	if (ctx.cr0.eq) goto loc_83245F60;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83245F60:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83245f6c
	if (ctx.cr0.eq) goto loc_83245F6C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83245F6C:
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,30832
	ctx.r8.s64 = ctx.r9.s64 + 30832;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r3,r7,4768
	ctx.r3.s64 = ctx.r7.s64 + 4768;
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
	ctx.lr = 0x83245FB0;
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

__attribute__((alias("__imp__sub_83245FC0"))) PPC_WEAK_FUNC(sub_83245FC0);
PPC_FUNC_IMPL(__imp__sub_83245FC0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,30844
	ctx.r3.s64 = ctx.r10.s64 + 30844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83245FE4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4784
	ctx.r3.s64 = ctx.r9.s64 + 4784;
	// bl 0x82ca3700
	ctx.lr = 0x83245FF0;
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

__attribute__((alias("__imp__sub_83246000"))) PPC_WEAK_FUNC(sub_83246000);
PPC_FUNC_IMPL(__imp__sub_83246000) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,30848
	ctx.r3.s64 = ctx.r10.s64 + 30848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246024;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4800
	ctx.r3.s64 = ctx.r9.s64 + 4800;
	// bl 0x82ca3700
	ctx.lr = 0x83246030;
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

__attribute__((alias("__imp__sub_83246040"))) PPC_WEAK_FUNC(sub_83246040);
PPC_FUNC_IMPL(__imp__sub_83246040) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,30852
	ctx.r3.s64 = ctx.r10.s64 + 30852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246064;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4816
	ctx.r3.s64 = ctx.r9.s64 + 4816;
	// bl 0x82ca3700
	ctx.lr = 0x83246070;
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

__attribute__((alias("__imp__sub_83246080"))) PPC_WEAK_FUNC(sub_83246080);
PPC_FUNC_IMPL(__imp__sub_83246080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lfd f0,-27376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -27376);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,30856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832460A0"))) PPC_WEAK_FUNC(sub_832460A0);
PPC_FUNC_IMPL(__imp__sub_832460A0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832460C0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,30860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832460D8"))) PPC_WEAK_FUNC(sub_832460D8);
PPC_FUNC_IMPL(__imp__sub_832460D8) {
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
	// addi r3,r11,-6204
	ctx.r3.s64 = ctx.r11.s64 + -6204;
	// bl 0x82188cf0
	ctx.lr = 0x832460F0;
	sub_82188CF0(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,30864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30864, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324610C"))) PPC_WEAK_FUNC(sub_8324610C);
PPC_FUNC_IMPL(__imp__sub_8324610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246110"))) PPC_WEAK_FUNC(sub_83246110);
PPC_FUNC_IMPL(__imp__sub_83246110) {
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
	// addi r3,r11,-6184
	ctx.r3.s64 = ctx.r11.s64 + -6184;
	// bl 0x82188cf0
	ctx.lr = 0x83246128;
	sub_82188CF0(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,30868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30868, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246144"))) PPC_WEAK_FUNC(sub_83246144);
PPC_FUNC_IMPL(__imp__sub_83246144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246148"))) PPC_WEAK_FUNC(sub_83246148);
PPC_FUNC_IMPL(__imp__sub_83246148) {
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
	// addi r3,r11,-6172
	ctx.r3.s64 = ctx.r11.s64 + -6172;
	// bl 0x82188cf0
	ctx.lr = 0x83246160;
	sub_82188CF0(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,30872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30872, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324617C"))) PPC_WEAK_FUNC(sub_8324617C);
PPC_FUNC_IMPL(__imp__sub_8324617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246180"))) PPC_WEAK_FUNC(sub_83246180);
PPC_FUNC_IMPL(__imp__sub_83246180) {
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
	// addi r3,r11,-6156
	ctx.r3.s64 = ctx.r11.s64 + -6156;
	// bl 0x82188cf0
	ctx.lr = 0x83246198;
	sub_82188CF0(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,30876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30876, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832461B4"))) PPC_WEAK_FUNC(sub_832461B4);
PPC_FUNC_IMPL(__imp__sub_832461B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832461B8"))) PPC_WEAK_FUNC(sub_832461B8);
PPC_FUNC_IMPL(__imp__sub_832461B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
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
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,30880
	ctx.r4.s64 = ctx.r5.s64 + 30880;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,3312(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3312);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246218"))) PPC_WEAK_FUNC(sub_83246218);
PPC_FUNC_IMPL(__imp__sub_83246218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,30896
	ctx.r4.s64 = ctx.r5.s64 + 30896;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246278"))) PPC_WEAK_FUNC(sub_83246278);
PPC_FUNC_IMPL(__imp__sub_83246278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r5,30912
	ctx.r4.s64 = ctx.r5.s64 + 30912;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832462D8"))) PPC_WEAK_FUNC(sub_832462D8);
PPC_FUNC_IMPL(__imp__sub_832462D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-8696
	ctx.r9.s64 = ctx.r11.s64 + -8696;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lfs f13,-8696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8696);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lfs f0,-18772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18772);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f12,3316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3316);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,30928
	ctx.r11.s64 = ctx.r3.s64 + 30928;
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,1336(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1336);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246348"))) PPC_WEAK_FUNC(sub_83246348);
PPC_FUNC_IMPL(__imp__sub_83246348) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5952
	ctx.r4.s64 = ctx.r11.s64 + -5952;
	// addi r3,r10,30944
	ctx.r3.s64 = ctx.r10.s64 + 30944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324636C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4832
	ctx.r3.s64 = ctx.r9.s64 + 4832;
	// bl 0x82ca3700
	ctx.lr = 0x83246378;
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

__attribute__((alias("__imp__sub_83246388"))) PPC_WEAK_FUNC(sub_83246388);
PPC_FUNC_IMPL(__imp__sub_83246388) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5936
	ctx.r4.s64 = ctx.r11.s64 + -5936;
	// addi r3,r10,30948
	ctx.r3.s64 = ctx.r10.s64 + 30948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832463AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4848
	ctx.r3.s64 = ctx.r9.s64 + 4848;
	// bl 0x82ca3700
	ctx.lr = 0x832463B8;
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

__attribute__((alias("__imp__sub_832463C8"))) PPC_WEAK_FUNC(sub_832463C8);
PPC_FUNC_IMPL(__imp__sub_832463C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5920
	ctx.r4.s64 = ctx.r11.s64 + -5920;
	// addi r3,r10,30952
	ctx.r3.s64 = ctx.r10.s64 + 30952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832463EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4864
	ctx.r3.s64 = ctx.r9.s64 + 4864;
	// bl 0x82ca3700
	ctx.lr = 0x832463F8;
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

__attribute__((alias("__imp__sub_83246408"))) PPC_WEAK_FUNC(sub_83246408);
PPC_FUNC_IMPL(__imp__sub_83246408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-17912
	ctx.r9.s64 = ctx.r11.s64 + -17912;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f0,-17912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17912);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-8
	ctx.r4.s64 = ctx.r1.s64 + -8;
	// lfs f0,-9556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9556);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r3,30960
	ctx.r11.s64 = ctx.r3.s64 + 30960;
	// lfs f0,3324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3320(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246478"))) PPC_WEAK_FUNC(sub_83246478);
PPC_FUNC_IMPL(__imp__sub_83246478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27852
	ctx.r9.s64 = ctx.r11.s64 + -27852;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lfs f13,384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,30976
	ctx.r4.s64 = ctx.r5.s64 + 30976;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,9924(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9924);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832464DC"))) PPC_WEAK_FUNC(sub_832464DC);
PPC_FUNC_IMPL(__imp__sub_832464DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832464E0"))) PPC_WEAK_FUNC(sub_832464E0);
PPC_FUNC_IMPL(__imp__sub_832464E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f13,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,27524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r5,30992
	ctx.r4.s64 = ctx.r5.s64 + 30992;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246540"))) PPC_WEAK_FUNC(sub_83246540);
PPC_FUNC_IMPL(__imp__sub_83246540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-12212
	ctx.r9.s64 = ctx.r11.s64 + -12212;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f0,-12212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12212);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfs f0,-15256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15256);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r4,31008
	ctx.r3.s64 = ctx.r4.s64 + 31008;
	// lfs f13,-7020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7020);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,3328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832465AC"))) PPC_WEAK_FUNC(sub_832465AC);
PPC_FUNC_IMPL(__imp__sub_832465AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832465B0"))) PPC_WEAK_FUNC(sub_832465B0);
PPC_FUNC_IMPL(__imp__sub_832465B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27852
	ctx.r9.s64 = ctx.r11.s64 + -27852;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// addi r6,r1,-12
	ctx.r6.s64 = ctx.r1.s64 + -12;
	// lfs f13,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfs f0,384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r4,31024
	ctx.r3.s64 = ctx.r4.s64 + 31024;
	// lfs f12,2764(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2764);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,19152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324661C"))) PPC_WEAK_FUNC(sub_8324661C);
PPC_FUNC_IMPL(__imp__sub_8324661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246620"))) PPC_WEAK_FUNC(sub_83246620);
PPC_FUNC_IMPL(__imp__sub_83246620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-6076
	ctx.r9.s64 = ctx.r11.s64 + -6076;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f0,-6076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6076);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r5,r1,-8
	ctx.r5.s64 = ctx.r1.s64 + -8;
	// lfs f0,-21380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21380);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r4,31040
	ctx.r3.s64 = ctx.r4.s64 + 31040;
	// lfs f13,1712(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1712);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,396(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324668C"))) PPC_WEAK_FUNC(sub_8324668C);
PPC_FUNC_IMPL(__imp__sub_8324668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246690"))) PPC_WEAK_FUNC(sub_83246690);
PPC_FUNC_IMPL(__imp__sub_83246690) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5908
	ctx.r4.s64 = ctx.r11.s64 + -5908;
	// addi r3,r10,30956
	ctx.r3.s64 = ctx.r10.s64 + 30956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832466B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4880
	ctx.r3.s64 = ctx.r9.s64 + 4880;
	// bl 0x82ca3700
	ctx.lr = 0x832466C0;
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

__attribute__((alias("__imp__sub_832466D0"))) PPC_WEAK_FUNC(sub_832466D0);
PPC_FUNC_IMPL(__imp__sub_832466D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f13,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,-18828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18828);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r5,31056
	ctx.r4.s64 = ctx.r5.s64 + 31056;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246730"))) PPC_WEAK_FUNC(sub_83246730);
PPC_FUNC_IMPL(__imp__sub_83246730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,31072
	ctx.r4.s64 = ctx.r5.s64 + 31072;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246790"))) PPC_WEAK_FUNC(sub_83246790);
PPC_FUNC_IMPL(__imp__sub_83246790) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// addi r3,r10,31088
	ctx.r3.s64 = ctx.r10.s64 + 31088;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832467B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4896
	ctx.r3.s64 = ctx.r9.s64 + 4896;
	// bl 0x82ca3700
	ctx.lr = 0x832467C0;
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

__attribute__((alias("__imp__sub_832467D0"))) PPC_WEAK_FUNC(sub_832467D0);
PPC_FUNC_IMPL(__imp__sub_832467D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,1080
	ctx.r4.s64 = ctx.r11.s64 + 1080;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8222cf18
	ctx.lr = 0x832467F8;
	sub_8222CF18(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-5592
	ctx.r4.s64 = ctx.r10.s64 + -5592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x83246810;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821e2cc8
	ctx.lr = 0x83246820;
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x8324682C;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x83246834;
	sub_82BFD780(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,31100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31100, ctx.r11.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83246848;
	sub_821C67D8(ctx, base);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r30,r8,28344
	ctx.r30.s64 = ctx.r8.s64 + 28344;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_83246854:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83246854
	if (!ctx.cr0.eq) goto loc_83246854;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x821c67d8
	ctx.lr = 0x83246880;
	sub_821C67D8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83246884:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83246884
	if (!ctx.cr0.eq) goto loc_83246884;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c67d8
	ctx.lr = 0x832468AC;
	sub_821C67D8(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_832468B0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832468b0
	if (!ctx.cr0.eq) goto loc_832468B0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821c67d8
	ctx.lr = 0x832468D8;
	sub_821C67D8(ctx, base);
loc_832468D8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832468d8
	if (!ctx.cr0.eq) goto loc_832468D8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// addi r3,r5,4912
	ctx.r3.s64 = ctx.r5.s64 + 4912;
	// bl 0x82ca3700
	ctx.lr = 0x83246904;
	sub_82CA3700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8324691C"))) PPC_WEAK_FUNC(sub_8324691C);
PPC_FUNC_IMPL(__imp__sub_8324691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83246920"))) PPC_WEAK_FUNC(sub_83246920);
PPC_FUNC_IMPL(__imp__sub_83246920) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,31104
	ctx.r3.s64 = ctx.r10.s64 + 31104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246944;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4920
	ctx.r3.s64 = ctx.r9.s64 + 4920;
	// bl 0x82ca3700
	ctx.lr = 0x83246950;
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

__attribute__((alias("__imp__sub_83246960"))) PPC_WEAK_FUNC(sub_83246960);
PPC_FUNC_IMPL(__imp__sub_83246960) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,31108
	ctx.r3.s64 = ctx.r10.s64 + 31108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246984;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4936
	ctx.r3.s64 = ctx.r9.s64 + 4936;
	// bl 0x82ca3700
	ctx.lr = 0x83246990;
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

__attribute__((alias("__imp__sub_832469A0"))) PPC_WEAK_FUNC(sub_832469A0);
PPC_FUNC_IMPL(__imp__sub_832469A0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,31112
	ctx.r3.s64 = ctx.r10.s64 + 31112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832469C4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4952
	ctx.r3.s64 = ctx.r9.s64 + 4952;
	// bl 0x82ca3700
	ctx.lr = 0x832469D0;
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

__attribute__((alias("__imp__sub_832469E0"))) PPC_WEAK_FUNC(sub_832469E0);
PPC_FUNC_IMPL(__imp__sub_832469E0) {
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
	ctx.lr = 0x83246A00;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246A18"))) PPC_WEAK_FUNC(sub_83246A18);
PPC_FUNC_IMPL(__imp__sub_83246A18) {
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
	ctx.lr = 0x83246A38;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246A50"))) PPC_WEAK_FUNC(sub_83246A50);
PPC_FUNC_IMPL(__imp__sub_83246A50) {
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
	ctx.lr = 0x83246A70;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31124, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246A88"))) PPC_WEAK_FUNC(sub_83246A88);
PPC_FUNC_IMPL(__imp__sub_83246A88) {
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
	ctx.lr = 0x83246AA8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246AC0"))) PPC_WEAK_FUNC(sub_83246AC0);
PPC_FUNC_IMPL(__imp__sub_83246AC0) {
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
	ctx.lr = 0x83246AE0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246AF8"))) PPC_WEAK_FUNC(sub_83246AF8);
PPC_FUNC_IMPL(__imp__sub_83246AF8) {
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
	ctx.lr = 0x83246B18;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246B30"))) PPC_WEAK_FUNC(sub_83246B30);
PPC_FUNC_IMPL(__imp__sub_83246B30) {
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
	ctx.lr = 0x83246B50;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246B68"))) PPC_WEAK_FUNC(sub_83246B68);
PPC_FUNC_IMPL(__imp__sub_83246B68) {
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
	ctx.lr = 0x83246B88;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246BA0"))) PPC_WEAK_FUNC(sub_83246BA0);
PPC_FUNC_IMPL(__imp__sub_83246BA0) {
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
	ctx.lr = 0x83246BC0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246BD8"))) PPC_WEAK_FUNC(sub_83246BD8);
PPC_FUNC_IMPL(__imp__sub_83246BD8) {
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
	ctx.lr = 0x83246BF8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246C10"))) PPC_WEAK_FUNC(sub_83246C10);
PPC_FUNC_IMPL(__imp__sub_83246C10) {
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
	ctx.lr = 0x83246C30;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246C48"))) PPC_WEAK_FUNC(sub_83246C48);
PPC_FUNC_IMPL(__imp__sub_83246C48) {
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
	ctx.lr = 0x83246C68;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246C80"))) PPC_WEAK_FUNC(sub_83246C80);
PPC_FUNC_IMPL(__imp__sub_83246C80) {
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
	ctx.lr = 0x83246CA0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31164, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246CB8"))) PPC_WEAK_FUNC(sub_83246CB8);
PPC_FUNC_IMPL(__imp__sub_83246CB8) {
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
	ctx.lr = 0x83246CD8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246CF0"))) PPC_WEAK_FUNC(sub_83246CF0);
PPC_FUNC_IMPL(__imp__sub_83246CF0) {
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
	ctx.lr = 0x83246D10;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246D28"))) PPC_WEAK_FUNC(sub_83246D28);
PPC_FUNC_IMPL(__imp__sub_83246D28) {
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
	ctx.lr = 0x83246D48;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31176, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246D60"))) PPC_WEAK_FUNC(sub_83246D60);
PPC_FUNC_IMPL(__imp__sub_83246D60) {
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
	ctx.lr = 0x83246D80;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246D98"))) PPC_WEAK_FUNC(sub_83246D98);
PPC_FUNC_IMPL(__imp__sub_83246D98) {
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
	ctx.lr = 0x83246DB8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246DD0"))) PPC_WEAK_FUNC(sub_83246DD0);
PPC_FUNC_IMPL(__imp__sub_83246DD0) {
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
	ctx.lr = 0x83246DF0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246E08"))) PPC_WEAK_FUNC(sub_83246E08);
PPC_FUNC_IMPL(__imp__sub_83246E08) {
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
	ctx.lr = 0x83246E28;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246E40"))) PPC_WEAK_FUNC(sub_83246E40);
PPC_FUNC_IMPL(__imp__sub_83246E40) {
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
	ctx.lr = 0x83246E60;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83246E78"))) PPC_WEAK_FUNC(sub_83246E78);
PPC_FUNC_IMPL(__imp__sub_83246E78) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,31200
	ctx.r3.s64 = ctx.r10.s64 + 31200;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246E9C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4968
	ctx.r3.s64 = ctx.r9.s64 + 4968;
	// bl 0x82ca3700
	ctx.lr = 0x83246EA8;
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

__attribute__((alias("__imp__sub_83246EB8"))) PPC_WEAK_FUNC(sub_83246EB8);
PPC_FUNC_IMPL(__imp__sub_83246EB8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,31204
	ctx.r3.s64 = ctx.r10.s64 + 31204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246EDC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,4984
	ctx.r3.s64 = ctx.r9.s64 + 4984;
	// bl 0x82ca3700
	ctx.lr = 0x83246EE8;
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

__attribute__((alias("__imp__sub_83246EF8"))) PPC_WEAK_FUNC(sub_83246EF8);
PPC_FUNC_IMPL(__imp__sub_83246EF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,31208
	ctx.r3.s64 = ctx.r10.s64 + 31208;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246F1C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5000
	ctx.r3.s64 = ctx.r9.s64 + 5000;
	// bl 0x82ca3700
	ctx.lr = 0x83246F28;
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

__attribute__((alias("__imp__sub_83246F38"))) PPC_WEAK_FUNC(sub_83246F38);
PPC_FUNC_IMPL(__imp__sub_83246F38) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5260
	ctx.r4.s64 = ctx.r11.s64 + -5260;
	// addi r3,r10,31212
	ctx.r3.s64 = ctx.r10.s64 + 31212;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246F5C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5016
	ctx.r3.s64 = ctx.r9.s64 + 5016;
	// bl 0x82ca3700
	ctx.lr = 0x83246F68;
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

__attribute__((alias("__imp__sub_83246F78"))) PPC_WEAK_FUNC(sub_83246F78);
PPC_FUNC_IMPL(__imp__sub_83246F78) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5228
	ctx.r4.s64 = ctx.r11.s64 + -5228;
	// addi r3,r10,31216
	ctx.r3.s64 = ctx.r10.s64 + 31216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246F9C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5032
	ctx.r3.s64 = ctx.r9.s64 + 5032;
	// bl 0x82ca3700
	ctx.lr = 0x83246FA8;
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

__attribute__((alias("__imp__sub_83246FB8"))) PPC_WEAK_FUNC(sub_83246FB8);
PPC_FUNC_IMPL(__imp__sub_83246FB8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5192
	ctx.r4.s64 = ctx.r11.s64 + -5192;
	// addi r3,r10,31220
	ctx.r3.s64 = ctx.r10.s64 + 31220;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83246FDC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5048
	ctx.r3.s64 = ctx.r9.s64 + 5048;
	// bl 0x82ca3700
	ctx.lr = 0x83246FE8;
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

__attribute__((alias("__imp__sub_83246FF8"))) PPC_WEAK_FUNC(sub_83246FF8);
PPC_FUNC_IMPL(__imp__sub_83246FF8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5176
	ctx.r4.s64 = ctx.r11.s64 + -5176;
	// addi r3,r10,31224
	ctx.r3.s64 = ctx.r10.s64 + 31224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324701C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5064
	ctx.r3.s64 = ctx.r9.s64 + 5064;
	// bl 0x82ca3700
	ctx.lr = 0x83247028;
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

__attribute__((alias("__imp__sub_83247038"))) PPC_WEAK_FUNC(sub_83247038);
PPC_FUNC_IMPL(__imp__sub_83247038) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5144
	ctx.r4.s64 = ctx.r11.s64 + -5144;
	// addi r3,r10,31228
	ctx.r3.s64 = ctx.r10.s64 + 31228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324705C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5080
	ctx.r3.s64 = ctx.r9.s64 + 5080;
	// bl 0x82ca3700
	ctx.lr = 0x83247068;
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

__attribute__((alias("__imp__sub_83247078"))) PPC_WEAK_FUNC(sub_83247078);
PPC_FUNC_IMPL(__imp__sub_83247078) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5124
	ctx.r4.s64 = ctx.r11.s64 + -5124;
	// addi r3,r10,31232
	ctx.r3.s64 = ctx.r10.s64 + 31232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324709C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5096
	ctx.r3.s64 = ctx.r9.s64 + 5096;
	// bl 0x82ca3700
	ctx.lr = 0x832470A8;
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

__attribute__((alias("__imp__sub_832470B8"))) PPC_WEAK_FUNC(sub_832470B8);
PPC_FUNC_IMPL(__imp__sub_832470B8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5104
	ctx.r4.s64 = ctx.r11.s64 + -5104;
	// addi r3,r10,31236
	ctx.r3.s64 = ctx.r10.s64 + 31236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832470DC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5112
	ctx.r3.s64 = ctx.r9.s64 + 5112;
	// bl 0x82ca3700
	ctx.lr = 0x832470E8;
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

__attribute__((alias("__imp__sub_832470F8"))) PPC_WEAK_FUNC(sub_832470F8);
PPC_FUNC_IMPL(__imp__sub_832470F8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5076
	ctx.r4.s64 = ctx.r11.s64 + -5076;
	// addi r3,r10,31240
	ctx.r3.s64 = ctx.r10.s64 + 31240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324711C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5128
	ctx.r3.s64 = ctx.r9.s64 + 5128;
	// bl 0x82ca3700
	ctx.lr = 0x83247128;
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

__attribute__((alias("__imp__sub_83247138"))) PPC_WEAK_FUNC(sub_83247138);
PPC_FUNC_IMPL(__imp__sub_83247138) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5056
	ctx.r4.s64 = ctx.r11.s64 + -5056;
	// addi r3,r10,31244
	ctx.r3.s64 = ctx.r10.s64 + 31244;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324715C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5144
	ctx.r3.s64 = ctx.r9.s64 + 5144;
	// bl 0x82ca3700
	ctx.lr = 0x83247168;
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

__attribute__((alias("__imp__sub_83247178"))) PPC_WEAK_FUNC(sub_83247178);
PPC_FUNC_IMPL(__imp__sub_83247178) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5036
	ctx.r4.s64 = ctx.r11.s64 + -5036;
	// addi r3,r10,31248
	ctx.r3.s64 = ctx.r10.s64 + 31248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324719C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5160
	ctx.r3.s64 = ctx.r9.s64 + 5160;
	// bl 0x82ca3700
	ctx.lr = 0x832471A8;
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

__attribute__((alias("__imp__sub_832471B8"))) PPC_WEAK_FUNC(sub_832471B8);
PPC_FUNC_IMPL(__imp__sub_832471B8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5020
	ctx.r4.s64 = ctx.r11.s64 + -5020;
	// addi r3,r10,31252
	ctx.r3.s64 = ctx.r10.s64 + 31252;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832471DC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5176
	ctx.r3.s64 = ctx.r9.s64 + 5176;
	// bl 0x82ca3700
	ctx.lr = 0x832471E8;
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

__attribute__((alias("__imp__sub_832471F8"))) PPC_WEAK_FUNC(sub_832471F8);
PPC_FUNC_IMPL(__imp__sub_832471F8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-5000
	ctx.r4.s64 = ctx.r11.s64 + -5000;
	// addi r3,r10,31256
	ctx.r3.s64 = ctx.r10.s64 + 31256;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324721C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5192
	ctx.r3.s64 = ctx.r9.s64 + 5192;
	// bl 0x82ca3700
	ctx.lr = 0x83247228;
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

__attribute__((alias("__imp__sub_83247238"))) PPC_WEAK_FUNC(sub_83247238);
PPC_FUNC_IMPL(__imp__sub_83247238) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4976
	ctx.r4.s64 = ctx.r11.s64 + -4976;
	// addi r3,r10,31260
	ctx.r3.s64 = ctx.r10.s64 + 31260;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324725C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5208
	ctx.r3.s64 = ctx.r9.s64 + 5208;
	// bl 0x82ca3700
	ctx.lr = 0x83247268;
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

__attribute__((alias("__imp__sub_83247278"))) PPC_WEAK_FUNC(sub_83247278);
PPC_FUNC_IMPL(__imp__sub_83247278) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4956
	ctx.r4.s64 = ctx.r11.s64 + -4956;
	// addi r3,r10,31264
	ctx.r3.s64 = ctx.r10.s64 + 31264;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324729C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5224
	ctx.r3.s64 = ctx.r9.s64 + 5224;
	// bl 0x82ca3700
	ctx.lr = 0x832472A8;
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

__attribute__((alias("__imp__sub_832472B8"))) PPC_WEAK_FUNC(sub_832472B8);
PPC_FUNC_IMPL(__imp__sub_832472B8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4936
	ctx.r4.s64 = ctx.r11.s64 + -4936;
	// addi r3,r10,31268
	ctx.r3.s64 = ctx.r10.s64 + 31268;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832472DC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5240
	ctx.r3.s64 = ctx.r9.s64 + 5240;
	// bl 0x82ca3700
	ctx.lr = 0x832472E8;
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

__attribute__((alias("__imp__sub_832472F8"))) PPC_WEAK_FUNC(sub_832472F8);
PPC_FUNC_IMPL(__imp__sub_832472F8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4912
	ctx.r4.s64 = ctx.r11.s64 + -4912;
	// addi r3,r10,31272
	ctx.r3.s64 = ctx.r10.s64 + 31272;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324731C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5256
	ctx.r3.s64 = ctx.r9.s64 + 5256;
	// bl 0x82ca3700
	ctx.lr = 0x83247328;
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

__attribute__((alias("__imp__sub_83247338"))) PPC_WEAK_FUNC(sub_83247338);
PPC_FUNC_IMPL(__imp__sub_83247338) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4892
	ctx.r4.s64 = ctx.r11.s64 + -4892;
	// addi r3,r10,31276
	ctx.r3.s64 = ctx.r10.s64 + 31276;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324735C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5272
	ctx.r3.s64 = ctx.r9.s64 + 5272;
	// bl 0x82ca3700
	ctx.lr = 0x83247368;
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

__attribute__((alias("__imp__sub_83247378"))) PPC_WEAK_FUNC(sub_83247378);
PPC_FUNC_IMPL(__imp__sub_83247378) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-30260
	ctx.r3.s64 = ctx.r11.s64 + -30260;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83247398;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31280, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832473B0"))) PPC_WEAK_FUNC(sub_832473B0);
PPC_FUNC_IMPL(__imp__sub_832473B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,31284
	ctx.r3.s64 = ctx.r10.s64 + 31284;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832473D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5288
	ctx.r3.s64 = ctx.r9.s64 + 5288;
	// bl 0x82ca3700
	ctx.lr = 0x832473E0;
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

__attribute__((alias("__imp__sub_832473F0"))) PPC_WEAK_FUNC(sub_832473F0);
PPC_FUNC_IMPL(__imp__sub_832473F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,31288
	ctx.r3.s64 = ctx.r10.s64 + 31288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247414;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5304
	ctx.r3.s64 = ctx.r9.s64 + 5304;
	// bl 0x82ca3700
	ctx.lr = 0x83247420;
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

__attribute__((alias("__imp__sub_83247430"))) PPC_WEAK_FUNC(sub_83247430);
PPC_FUNC_IMPL(__imp__sub_83247430) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,31292
	ctx.r3.s64 = ctx.r10.s64 + 31292;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247454;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5320
	ctx.r3.s64 = ctx.r9.s64 + 5320;
	// bl 0x82ca3700
	ctx.lr = 0x83247460;
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

__attribute__((alias("__imp__sub_83247470"))) PPC_WEAK_FUNC(sub_83247470);
PPC_FUNC_IMPL(__imp__sub_83247470) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83247490;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832474A8"))) PPC_WEAK_FUNC(sub_832474A8);
PPC_FUNC_IMPL(__imp__sub_832474A8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4416
	ctx.r3.s64 = ctx.r11.s64 + -4416;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832474C8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832474E0"))) PPC_WEAK_FUNC(sub_832474E0);
PPC_FUNC_IMPL(__imp__sub_832474E0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83247500;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247518"))) PPC_WEAK_FUNC(sub_83247518);
PPC_FUNC_IMPL(__imp__sub_83247518) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4376
	ctx.r3.s64 = ctx.r11.s64 + -4376;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83247538;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247550"))) PPC_WEAK_FUNC(sub_83247550);
PPC_FUNC_IMPL(__imp__sub_83247550) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4364
	ctx.r3.s64 = ctx.r11.s64 + -4364;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83247570;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247588"))) PPC_WEAK_FUNC(sub_83247588);
PPC_FUNC_IMPL(__imp__sub_83247588) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4348
	ctx.r3.s64 = ctx.r11.s64 + -4348;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832475A8;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475C0"))) PPC_WEAK_FUNC(sub_832475C0);
PPC_FUNC_IMPL(__imp__sub_832475C0) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x832475E0;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832475F8"))) PPC_WEAK_FUNC(sub_832475F8);
PPC_FUNC_IMPL(__imp__sub_832475F8) {
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
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-4308
	ctx.r3.s64 = ctx.r11.s64 + -4308;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	ctx.lr = 0x83247618;
	sub_821F3C28(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r3,31324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83247630"))) PPC_WEAK_FUNC(sub_83247630);
PPC_FUNC_IMPL(__imp__sub_83247630) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4284
	ctx.r4.s64 = ctx.r11.s64 + -4284;
	// addi r3,r10,31328
	ctx.r3.s64 = ctx.r10.s64 + 31328;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247654;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5336
	ctx.r3.s64 = ctx.r9.s64 + 5336;
	// bl 0x82ca3700
	ctx.lr = 0x83247660;
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

__attribute__((alias("__imp__sub_83247670"))) PPC_WEAK_FUNC(sub_83247670);
PPC_FUNC_IMPL(__imp__sub_83247670) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4264
	ctx.r4.s64 = ctx.r11.s64 + -4264;
	// addi r3,r10,31332
	ctx.r3.s64 = ctx.r10.s64 + 31332;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247694;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5352
	ctx.r3.s64 = ctx.r9.s64 + 5352;
	// bl 0x82ca3700
	ctx.lr = 0x832476A0;
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

__attribute__((alias("__imp__sub_832476B0"))) PPC_WEAK_FUNC(sub_832476B0);
PPC_FUNC_IMPL(__imp__sub_832476B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,19800
	ctx.r4.s64 = ctx.r11.s64 + 19800;
	// addi r3,r10,31336
	ctx.r3.s64 = ctx.r10.s64 + 31336;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832476D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5368
	ctx.r3.s64 = ctx.r9.s64 + 5368;
	// bl 0x82ca3700
	ctx.lr = 0x832476E0;
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

__attribute__((alias("__imp__sub_832476F0"))) PPC_WEAK_FUNC(sub_832476F0);
PPC_FUNC_IMPL(__imp__sub_832476F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4244
	ctx.r4.s64 = ctx.r11.s64 + -4244;
	// addi r3,r10,31340
	ctx.r3.s64 = ctx.r10.s64 + 31340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247714;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5384
	ctx.r3.s64 = ctx.r9.s64 + 5384;
	// bl 0x82ca3700
	ctx.lr = 0x83247720;
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

__attribute__((alias("__imp__sub_83247730"))) PPC_WEAK_FUNC(sub_83247730);
PPC_FUNC_IMPL(__imp__sub_83247730) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4220
	ctx.r4.s64 = ctx.r11.s64 + -4220;
	// addi r3,r10,31344
	ctx.r3.s64 = ctx.r10.s64 + 31344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247754;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5400
	ctx.r3.s64 = ctx.r9.s64 + 5400;
	// bl 0x82ca3700
	ctx.lr = 0x83247760;
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

__attribute__((alias("__imp__sub_83247770"))) PPC_WEAK_FUNC(sub_83247770);
PPC_FUNC_IMPL(__imp__sub_83247770) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4200
	ctx.r4.s64 = ctx.r11.s64 + -4200;
	// addi r3,r10,31348
	ctx.r3.s64 = ctx.r10.s64 + 31348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247794;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5416
	ctx.r3.s64 = ctx.r9.s64 + 5416;
	// bl 0x82ca3700
	ctx.lr = 0x832477A0;
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

__attribute__((alias("__imp__sub_832477B0"))) PPC_WEAK_FUNC(sub_832477B0);
PPC_FUNC_IMPL(__imp__sub_832477B0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4168
	ctx.r4.s64 = ctx.r11.s64 + -4168;
	// addi r3,r10,31352
	ctx.r3.s64 = ctx.r10.s64 + 31352;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832477D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5432
	ctx.r3.s64 = ctx.r9.s64 + 5432;
	// bl 0x82ca3700
	ctx.lr = 0x832477E0;
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

__attribute__((alias("__imp__sub_832477F0"))) PPC_WEAK_FUNC(sub_832477F0);
PPC_FUNC_IMPL(__imp__sub_832477F0) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-4136
	ctx.r4.s64 = ctx.r11.s64 + -4136;
	// addi r3,r10,31356
	ctx.r3.s64 = ctx.r10.s64 + 31356;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247814;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5448
	ctx.r3.s64 = ctx.r9.s64 + 5448;
	// bl 0x82ca3700
	ctx.lr = 0x83247820;
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

__attribute__((alias("__imp__sub_83247830"))) PPC_WEAK_FUNC(sub_83247830);
PPC_FUNC_IMPL(__imp__sub_83247830) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r31,r11,31360
	ctx.r31.s64 = ctx.r11.s64 + 31360;
	// addi r4,r10,-3984
	ctx.r4.s64 = ctx.r10.s64 + -3984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324785C;
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-3996
	ctx.r4.s64 = ctx.r9.s64 + -3996;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8222cf18
	ctx.lr = 0x83247870;
	sub_8222CF18(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-4020
	ctx.r4.s64 = ctx.r8.s64 + -4020;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8222cf18
	ctx.lr = 0x83247884;
	sub_8222CF18(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-4044
	ctx.r4.s64 = ctx.r7.s64 + -4044;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8222cf18
	ctx.lr = 0x83247898;
	sub_8222CF18(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-4056
	ctx.r4.s64 = ctx.r6.s64 + -4056;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8222cf18
	ctx.lr = 0x832478AC;
	sub_8222CF18(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-4068
	ctx.r4.s64 = ctx.r4.s64 + -4068;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8222cf18
	ctx.lr = 0x832478C0;
	sub_8222CF18(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-4084
	ctx.r4.s64 = ctx.r3.s64 + -4084;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8222cf18
	ctx.lr = 0x832478D4;
	sub_8222CF18(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-4104
	ctx.r4.s64 = ctx.r11.s64 + -4104;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8222cf18
	ctx.lr = 0x832478E8;
	sub_8222CF18(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,5464
	ctx.r3.s64 = ctx.r10.s64 + 5464;
	// bl 0x82ca3700
	ctx.lr = 0x832478F4;
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

__attribute__((alias("__imp__sub_83247908"))) PPC_WEAK_FUNC(sub_83247908);
PPC_FUNC_IMPL(__imp__sub_83247908) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6400
	ctx.r4.s64 = ctx.r11.s64 + 6400;
	// addi r3,r10,31392
	ctx.r3.s64 = ctx.r10.s64 + 31392;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324792C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5568
	ctx.r3.s64 = ctx.r9.s64 + 5568;
	// bl 0x82ca3700
	ctx.lr = 0x83247938;
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

__attribute__((alias("__imp__sub_83247948"))) PPC_WEAK_FUNC(sub_83247948);
PPC_FUNC_IMPL(__imp__sub_83247948) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// addi r3,r10,31396
	ctx.r3.s64 = ctx.r10.s64 + 31396;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8324796C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5584
	ctx.r3.s64 = ctx.r9.s64 + 5584;
	// bl 0x82ca3700
	ctx.lr = 0x83247978;
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

__attribute__((alias("__imp__sub_83247988"))) PPC_WEAK_FUNC(sub_83247988);
PPC_FUNC_IMPL(__imp__sub_83247988) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,6428
	ctx.r4.s64 = ctx.r11.s64 + 6428;
	// addi r3,r10,31400
	ctx.r3.s64 = ctx.r10.s64 + 31400;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832479AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5600
	ctx.r3.s64 = ctx.r9.s64 + 5600;
	// bl 0x82ca3700
	ctx.lr = 0x832479B8;
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

__attribute__((alias("__imp__sub_832479C8"))) PPC_WEAK_FUNC(sub_832479C8);
PPC_FUNC_IMPL(__imp__sub_832479C8) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-3940
	ctx.r4.s64 = ctx.r11.s64 + -3940;
	// addi r3,r10,31404
	ctx.r3.s64 = ctx.r10.s64 + 31404;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832479EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5616
	ctx.r3.s64 = ctx.r9.s64 + 5616;
	// bl 0x82ca3700
	ctx.lr = 0x832479F8;
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

__attribute__((alias("__imp__sub_83247A08"))) PPC_WEAK_FUNC(sub_83247A08);
PPC_FUNC_IMPL(__imp__sub_83247A08) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-3908
	ctx.r4.s64 = ctx.r11.s64 + -3908;
	// addi r3,r10,31408
	ctx.r3.s64 = ctx.r10.s64 + 31408;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247A2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5632
	ctx.r3.s64 = ctx.r9.s64 + 5632;
	// bl 0x82ca3700
	ctx.lr = 0x83247A38;
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

__attribute__((alias("__imp__sub_83247A48"))) PPC_WEAK_FUNC(sub_83247A48);
PPC_FUNC_IMPL(__imp__sub_83247A48) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-3872
	ctx.r4.s64 = ctx.r11.s64 + -3872;
	// addi r3,r10,31412
	ctx.r3.s64 = ctx.r10.s64 + 31412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247A6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5648
	ctx.r3.s64 = ctx.r9.s64 + 5648;
	// bl 0x82ca3700
	ctx.lr = 0x83247A78;
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

__attribute__((alias("__imp__sub_83247A88"))) PPC_WEAK_FUNC(sub_83247A88);
PPC_FUNC_IMPL(__imp__sub_83247A88) {
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
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r4,r11,-3836
	ctx.r4.s64 = ctx.r11.s64 + -3836;
	// addi r3,r10,31416
	ctx.r3.s64 = ctx.r10.s64 + 31416;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83247AAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,5664
	ctx.r3.s64 = ctx.r9.s64 + 5664;
	// bl 0x82ca3700
	ctx.lr = 0x83247AB8;
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

