#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8328F1F4"))) PPC_WEAK_FUNC(sub_8328F1F4);
PPC_FUNC_IMPL(__imp__sub_8328F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F1F8"))) PPC_WEAK_FUNC(sub_8328F1F8);
PPC_FUNC_IMPL(__imp__sub_8328F1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// bl 0x82188cf0
	ctx.lr = 0x8328F210;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-6880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F228"))) PPC_WEAK_FUNC(sub_8328F228);
PPC_FUNC_IMPL(__imp__sub_8328F228) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-9556
	ctx.r3.s64 = ctx.r11.s64 + -9556;
	// bl 0x82188cf0
	ctx.lr = 0x8328F240;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-6876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F258"))) PPC_WEAK_FUNC(sub_8328F258);
PPC_FUNC_IMPL(__imp__sub_8328F258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-9548
	ctx.r3.s64 = ctx.r11.s64 + -9548;
	// bl 0x82188cf0
	ctx.lr = 0x8328F270;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-6872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6872, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F28C"))) PPC_WEAK_FUNC(sub_8328F28C);
PPC_FUNC_IMPL(__imp__sub_8328F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F290"))) PPC_WEAK_FUNC(sub_8328F290);
PPC_FUNC_IMPL(__imp__sub_8328F290) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-9540
	ctx.r3.s64 = ctx.r11.s64 + -9540;
	// bl 0x82188cf0
	ctx.lr = 0x8328F2A8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-6868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6868, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F2C4"))) PPC_WEAK_FUNC(sub_8328F2C4);
PPC_FUNC_IMPL(__imp__sub_8328F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F2C8"))) PPC_WEAK_FUNC(sub_8328F2C8);
PPC_FUNC_IMPL(__imp__sub_8328F2C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16052
	ctx.r3.s64 = ctx.r11.s64 + -16052;
	// bl 0x82188cf0
	ctx.lr = 0x8328F2E0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6864, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F2FC"))) PPC_WEAK_FUNC(sub_8328F2FC);
PPC_FUNC_IMPL(__imp__sub_8328F2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F300"))) PPC_WEAK_FUNC(sub_8328F300);
PPC_FUNC_IMPL(__imp__sub_8328F300) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// bl 0x82188cf0
	ctx.lr = 0x8328F318;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6860, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F334"))) PPC_WEAK_FUNC(sub_8328F334);
PPC_FUNC_IMPL(__imp__sub_8328F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F338"))) PPC_WEAK_FUNC(sub_8328F338);
PPC_FUNC_IMPL(__imp__sub_8328F338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16012
	ctx.r3.s64 = ctx.r11.s64 + -16012;
	// bl 0x82188cf0
	ctx.lr = 0x8328F350;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6856, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F36C"))) PPC_WEAK_FUNC(sub_8328F36C);
PPC_FUNC_IMPL(__imp__sub_8328F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F370"))) PPC_WEAK_FUNC(sub_8328F370);
PPC_FUNC_IMPL(__imp__sub_8328F370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x82188cf0
	ctx.lr = 0x8328F388;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6852, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F3A4"))) PPC_WEAK_FUNC(sub_8328F3A4);
PPC_FUNC_IMPL(__imp__sub_8328F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F3A8"))) PPC_WEAK_FUNC(sub_8328F3A8);
PPC_FUNC_IMPL(__imp__sub_8328F3A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// bl 0x82188cf0
	ctx.lr = 0x8328F3C0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6848, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F3DC"))) PPC_WEAK_FUNC(sub_8328F3DC);
PPC_FUNC_IMPL(__imp__sub_8328F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F3E0"))) PPC_WEAK_FUNC(sub_8328F3E0);
PPC_FUNC_IMPL(__imp__sub_8328F3E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// bl 0x82188cf0
	ctx.lr = 0x8328F3F8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6844, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F414"))) PPC_WEAK_FUNC(sub_8328F414);
PPC_FUNC_IMPL(__imp__sub_8328F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F418"))) PPC_WEAK_FUNC(sub_8328F418);
PPC_FUNC_IMPL(__imp__sub_8328F418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x82188cf0
	ctx.lr = 0x8328F430;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F44C"))) PPC_WEAK_FUNC(sub_8328F44C);
PPC_FUNC_IMPL(__imp__sub_8328F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F450"))) PPC_WEAK_FUNC(sub_8328F450);
PPC_FUNC_IMPL(__imp__sub_8328F450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15916
	ctx.r3.s64 = ctx.r11.s64 + -15916;
	// bl 0x82188cf0
	ctx.lr = 0x8328F468;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6836, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F484"))) PPC_WEAK_FUNC(sub_8328F484);
PPC_FUNC_IMPL(__imp__sub_8328F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F488"))) PPC_WEAK_FUNC(sub_8328F488);
PPC_FUNC_IMPL(__imp__sub_8328F488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// bl 0x82188cf0
	ctx.lr = 0x8328F4A0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F4BC"))) PPC_WEAK_FUNC(sub_8328F4BC);
PPC_FUNC_IMPL(__imp__sub_8328F4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F4C0"))) PPC_WEAK_FUNC(sub_8328F4C0);
PPC_FUNC_IMPL(__imp__sub_8328F4C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// bl 0x82188cf0
	ctx.lr = 0x8328F4D8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6828, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F4F4"))) PPC_WEAK_FUNC(sub_8328F4F4);
PPC_FUNC_IMPL(__imp__sub_8328F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F4F8"))) PPC_WEAK_FUNC(sub_8328F4F8);
PPC_FUNC_IMPL(__imp__sub_8328F4F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x82188cf0
	ctx.lr = 0x8328F510;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6824, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F52C"))) PPC_WEAK_FUNC(sub_8328F52C);
PPC_FUNC_IMPL(__imp__sub_8328F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F530"))) PPC_WEAK_FUNC(sub_8328F530);
PPC_FUNC_IMPL(__imp__sub_8328F530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// bl 0x82188cf0
	ctx.lr = 0x8328F548;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6820, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F564"))) PPC_WEAK_FUNC(sub_8328F564);
PPC_FUNC_IMPL(__imp__sub_8328F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F568"))) PPC_WEAK_FUNC(sub_8328F568);
PPC_FUNC_IMPL(__imp__sub_8328F568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// bl 0x82188cf0
	ctx.lr = 0x8328F580;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6816, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F59C"))) PPC_WEAK_FUNC(sub_8328F59C);
PPC_FUNC_IMPL(__imp__sub_8328F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F5A0"))) PPC_WEAK_FUNC(sub_8328F5A0);
PPC_FUNC_IMPL(__imp__sub_8328F5A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328F5B8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6812, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F5D4"))) PPC_WEAK_FUNC(sub_8328F5D4);
PPC_FUNC_IMPL(__imp__sub_8328F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F5D8"))) PPC_WEAK_FUNC(sub_8328F5D8);
PPC_FUNC_IMPL(__imp__sub_8328F5D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328F5F0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6808, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F60C"))) PPC_WEAK_FUNC(sub_8328F60C);
PPC_FUNC_IMPL(__imp__sub_8328F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F610"))) PPC_WEAK_FUNC(sub_8328F610);
PPC_FUNC_IMPL(__imp__sub_8328F610) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16052
	ctx.r3.s64 = ctx.r11.s64 + -16052;
	// bl 0x82188cf0
	ctx.lr = 0x8328F628;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6804, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F644"))) PPC_WEAK_FUNC(sub_8328F644);
PPC_FUNC_IMPL(__imp__sub_8328F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F648"))) PPC_WEAK_FUNC(sub_8328F648);
PPC_FUNC_IMPL(__imp__sub_8328F648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// bl 0x82188cf0
	ctx.lr = 0x8328F660;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6800, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F67C"))) PPC_WEAK_FUNC(sub_8328F67C);
PPC_FUNC_IMPL(__imp__sub_8328F67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F680"))) PPC_WEAK_FUNC(sub_8328F680);
PPC_FUNC_IMPL(__imp__sub_8328F680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16012
	ctx.r3.s64 = ctx.r11.s64 + -16012;
	// bl 0x82188cf0
	ctx.lr = 0x8328F698;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6796, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F6B4"))) PPC_WEAK_FUNC(sub_8328F6B4);
PPC_FUNC_IMPL(__imp__sub_8328F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F6B8"))) PPC_WEAK_FUNC(sub_8328F6B8);
PPC_FUNC_IMPL(__imp__sub_8328F6B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// bl 0x82188cf0
	ctx.lr = 0x8328F6D0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6792, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F6EC"))) PPC_WEAK_FUNC(sub_8328F6EC);
PPC_FUNC_IMPL(__imp__sub_8328F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F6F0"))) PPC_WEAK_FUNC(sub_8328F6F0);
PPC_FUNC_IMPL(__imp__sub_8328F6F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// bl 0x82188cf0
	ctx.lr = 0x8328F708;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6788, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F724"))) PPC_WEAK_FUNC(sub_8328F724);
PPC_FUNC_IMPL(__imp__sub_8328F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F728"))) PPC_WEAK_FUNC(sub_8328F728);
PPC_FUNC_IMPL(__imp__sub_8328F728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// bl 0x82188cf0
	ctx.lr = 0x8328F740;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6784, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F75C"))) PPC_WEAK_FUNC(sub_8328F75C);
PPC_FUNC_IMPL(__imp__sub_8328F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F760"))) PPC_WEAK_FUNC(sub_8328F760);
PPC_FUNC_IMPL(__imp__sub_8328F760) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x82188cf0
	ctx.lr = 0x8328F778;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6780, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F794"))) PPC_WEAK_FUNC(sub_8328F794);
PPC_FUNC_IMPL(__imp__sub_8328F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F798"))) PPC_WEAK_FUNC(sub_8328F798);
PPC_FUNC_IMPL(__imp__sub_8328F798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15916
	ctx.r3.s64 = ctx.r11.s64 + -15916;
	// bl 0x82188cf0
	ctx.lr = 0x8328F7B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6776, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F7CC"))) PPC_WEAK_FUNC(sub_8328F7CC);
PPC_FUNC_IMPL(__imp__sub_8328F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F7D0"))) PPC_WEAK_FUNC(sub_8328F7D0);
PPC_FUNC_IMPL(__imp__sub_8328F7D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// bl 0x82188cf0
	ctx.lr = 0x8328F7E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F804"))) PPC_WEAK_FUNC(sub_8328F804);
PPC_FUNC_IMPL(__imp__sub_8328F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F808"))) PPC_WEAK_FUNC(sub_8328F808);
PPC_FUNC_IMPL(__imp__sub_8328F808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// bl 0x82188cf0
	ctx.lr = 0x8328F820;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F83C"))) PPC_WEAK_FUNC(sub_8328F83C);
PPC_FUNC_IMPL(__imp__sub_8328F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F840"))) PPC_WEAK_FUNC(sub_8328F840);
PPC_FUNC_IMPL(__imp__sub_8328F840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x82188cf0
	ctx.lr = 0x8328F858;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F874"))) PPC_WEAK_FUNC(sub_8328F874);
PPC_FUNC_IMPL(__imp__sub_8328F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F878"))) PPC_WEAK_FUNC(sub_8328F878);
PPC_FUNC_IMPL(__imp__sub_8328F878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// bl 0x82188cf0
	ctx.lr = 0x8328F890;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F8AC"))) PPC_WEAK_FUNC(sub_8328F8AC);
PPC_FUNC_IMPL(__imp__sub_8328F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F8B0"))) PPC_WEAK_FUNC(sub_8328F8B0);
PPC_FUNC_IMPL(__imp__sub_8328F8B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15800
	ctx.r3.s64 = ctx.r11.s64 + -15800;
	// bl 0x82188cf0
	ctx.lr = 0x8328F8C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6756, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F8E4"))) PPC_WEAK_FUNC(sub_8328F8E4);
PPC_FUNC_IMPL(__imp__sub_8328F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F8E8"))) PPC_WEAK_FUNC(sub_8328F8E8);
PPC_FUNC_IMPL(__imp__sub_8328F8E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x82188cf0
	ctx.lr = 0x8328F900;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6752, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F91C"))) PPC_WEAK_FUNC(sub_8328F91C);
PPC_FUNC_IMPL(__imp__sub_8328F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F920"))) PPC_WEAK_FUNC(sub_8328F920);
PPC_FUNC_IMPL(__imp__sub_8328F920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// bl 0x82188cf0
	ctx.lr = 0x8328F938;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6748, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F954"))) PPC_WEAK_FUNC(sub_8328F954);
PPC_FUNC_IMPL(__imp__sub_8328F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F958"))) PPC_WEAK_FUNC(sub_8328F958);
PPC_FUNC_IMPL(__imp__sub_8328F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F964"))) PPC_WEAK_FUNC(sub_8328F964);
PPC_FUNC_IMPL(__imp__sub_8328F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F968"))) PPC_WEAK_FUNC(sub_8328F968);
PPC_FUNC_IMPL(__imp__sub_8328F968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1504
	ctx.r3.s64 = ctx.r11.s64 + -1504;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F974"))) PPC_WEAK_FUNC(sub_8328F974);
PPC_FUNC_IMPL(__imp__sub_8328F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F978"))) PPC_WEAK_FUNC(sub_8328F978);
PPC_FUNC_IMPL(__imp__sub_8328F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F984"))) PPC_WEAK_FUNC(sub_8328F984);
PPC_FUNC_IMPL(__imp__sub_8328F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F988"))) PPC_WEAK_FUNC(sub_8328F988);
PPC_FUNC_IMPL(__imp__sub_8328F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1472
	ctx.r3.s64 = ctx.r11.s64 + -1472;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F994"))) PPC_WEAK_FUNC(sub_8328F994);
PPC_FUNC_IMPL(__imp__sub_8328F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F998"))) PPC_WEAK_FUNC(sub_8328F998);
PPC_FUNC_IMPL(__imp__sub_8328F998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15748
	ctx.r3.s64 = ctx.r11.s64 + -15748;
	// bl 0x82188cf0
	ctx.lr = 0x8328F9B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6704, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F9CC"))) PPC_WEAK_FUNC(sub_8328F9CC);
PPC_FUNC_IMPL(__imp__sub_8328F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F9D0"))) PPC_WEAK_FUNC(sub_8328F9D0);
PPC_FUNC_IMPL(__imp__sub_8328F9D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15736
	ctx.r3.s64 = ctx.r11.s64 + -15736;
	// bl 0x82188cf0
	ctx.lr = 0x8328F9E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6700, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA04"))) PPC_WEAK_FUNC(sub_8328FA04);
PPC_FUNC_IMPL(__imp__sub_8328FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA08"))) PPC_WEAK_FUNC(sub_8328FA08);
PPC_FUNC_IMPL(__imp__sub_8328FA08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15724
	ctx.r3.s64 = ctx.r11.s64 + -15724;
	// bl 0x82188cf0
	ctx.lr = 0x8328FA20;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6696, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA3C"))) PPC_WEAK_FUNC(sub_8328FA3C);
PPC_FUNC_IMPL(__imp__sub_8328FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA40"))) PPC_WEAK_FUNC(sub_8328FA40);
PPC_FUNC_IMPL(__imp__sub_8328FA40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// bl 0x82188cf0
	ctx.lr = 0x8328FA58;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6692, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA74"))) PPC_WEAK_FUNC(sub_8328FA74);
PPC_FUNC_IMPL(__imp__sub_8328FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA78"))) PPC_WEAK_FUNC(sub_8328FA78);
PPC_FUNC_IMPL(__imp__sub_8328FA78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15684
	ctx.r3.s64 = ctx.r11.s64 + -15684;
	// bl 0x82188cf0
	ctx.lr = 0x8328FA90;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6688, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FAAC"))) PPC_WEAK_FUNC(sub_8328FAAC);
PPC_FUNC_IMPL(__imp__sub_8328FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FAB0"))) PPC_WEAK_FUNC(sub_8328FAB0);
PPC_FUNC_IMPL(__imp__sub_8328FAB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15672
	ctx.r3.s64 = ctx.r11.s64 + -15672;
	// bl 0x82188cf0
	ctx.lr = 0x8328FAC8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6684, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FAE4"))) PPC_WEAK_FUNC(sub_8328FAE4);
PPC_FUNC_IMPL(__imp__sub_8328FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FAE8"))) PPC_WEAK_FUNC(sub_8328FAE8);
PPC_FUNC_IMPL(__imp__sub_8328FAE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15660
	ctx.r3.s64 = ctx.r11.s64 + -15660;
	// bl 0x82188cf0
	ctx.lr = 0x8328FB00;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6680, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB1C"))) PPC_WEAK_FUNC(sub_8328FB1C);
PPC_FUNC_IMPL(__imp__sub_8328FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB20"))) PPC_WEAK_FUNC(sub_8328FB20);
PPC_FUNC_IMPL(__imp__sub_8328FB20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15644
	ctx.r3.s64 = ctx.r11.s64 + -15644;
	// bl 0x82188cf0
	ctx.lr = 0x8328FB38;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6676, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB54"))) PPC_WEAK_FUNC(sub_8328FB54);
PPC_FUNC_IMPL(__imp__sub_8328FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB58"))) PPC_WEAK_FUNC(sub_8328FB58);
PPC_FUNC_IMPL(__imp__sub_8328FB58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15628
	ctx.r3.s64 = ctx.r11.s64 + -15628;
	// bl 0x82188cf0
	ctx.lr = 0x8328FB70;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6672, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB8C"))) PPC_WEAK_FUNC(sub_8328FB8C);
PPC_FUNC_IMPL(__imp__sub_8328FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FB90"))) PPC_WEAK_FUNC(sub_8328FB90);
PPC_FUNC_IMPL(__imp__sub_8328FB90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15608
	ctx.r3.s64 = ctx.r11.s64 + -15608;
	// bl 0x82188cf0
	ctx.lr = 0x8328FBA8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6668, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FBC4"))) PPC_WEAK_FUNC(sub_8328FBC4);
PPC_FUNC_IMPL(__imp__sub_8328FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FBC8"))) PPC_WEAK_FUNC(sub_8328FBC8);
PPC_FUNC_IMPL(__imp__sub_8328FBC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15592
	ctx.r3.s64 = ctx.r11.s64 + -15592;
	// bl 0x82188cf0
	ctx.lr = 0x8328FBE0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FBFC"))) PPC_WEAK_FUNC(sub_8328FBFC);
PPC_FUNC_IMPL(__imp__sub_8328FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC00"))) PPC_WEAK_FUNC(sub_8328FC00);
PPC_FUNC_IMPL(__imp__sub_8328FC00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15572
	ctx.r3.s64 = ctx.r11.s64 + -15572;
	// bl 0x82188cf0
	ctx.lr = 0x8328FC18;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6660, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC34"))) PPC_WEAK_FUNC(sub_8328FC34);
PPC_FUNC_IMPL(__imp__sub_8328FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC38"))) PPC_WEAK_FUNC(sub_8328FC38);
PPC_FUNC_IMPL(__imp__sub_8328FC38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15548
	ctx.r3.s64 = ctx.r11.s64 + -15548;
	// bl 0x82188cf0
	ctx.lr = 0x8328FC50;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6656, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC6C"))) PPC_WEAK_FUNC(sub_8328FC6C);
PPC_FUNC_IMPL(__imp__sub_8328FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC70"))) PPC_WEAK_FUNC(sub_8328FC70);
PPC_FUNC_IMPL(__imp__sub_8328FC70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15528
	ctx.r3.s64 = ctx.r11.s64 + -15528;
	// bl 0x82188cf0
	ctx.lr = 0x8328FC88;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6652, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FCA4"))) PPC_WEAK_FUNC(sub_8328FCA4);
PPC_FUNC_IMPL(__imp__sub_8328FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FCA8"))) PPC_WEAK_FUNC(sub_8328FCA8);
PPC_FUNC_IMPL(__imp__sub_8328FCA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// bl 0x82188cf0
	ctx.lr = 0x8328FCC0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6648, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FCDC"))) PPC_WEAK_FUNC(sub_8328FCDC);
PPC_FUNC_IMPL(__imp__sub_8328FCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FCE0"))) PPC_WEAK_FUNC(sub_8328FCE0);
PPC_FUNC_IMPL(__imp__sub_8328FCE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15492
	ctx.r3.s64 = ctx.r11.s64 + -15492;
	// bl 0x82188cf0
	ctx.lr = 0x8328FCF8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6644, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD14"))) PPC_WEAK_FUNC(sub_8328FD14);
PPC_FUNC_IMPL(__imp__sub_8328FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD18"))) PPC_WEAK_FUNC(sub_8328FD18);
PPC_FUNC_IMPL(__imp__sub_8328FD18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15468
	ctx.r3.s64 = ctx.r11.s64 + -15468;
	// bl 0x82188cf0
	ctx.lr = 0x8328FD30;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6640, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD4C"))) PPC_WEAK_FUNC(sub_8328FD4C);
PPC_FUNC_IMPL(__imp__sub_8328FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD50"))) PPC_WEAK_FUNC(sub_8328FD50);
PPC_FUNC_IMPL(__imp__sub_8328FD50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15460
	ctx.r3.s64 = ctx.r11.s64 + -15460;
	// bl 0x82188cf0
	ctx.lr = 0x8328FD68;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6636, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD84"))) PPC_WEAK_FUNC(sub_8328FD84);
PPC_FUNC_IMPL(__imp__sub_8328FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FD88"))) PPC_WEAK_FUNC(sub_8328FD88);
PPC_FUNC_IMPL(__imp__sub_8328FD88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15448
	ctx.r3.s64 = ctx.r11.s64 + -15448;
	// bl 0x82188cf0
	ctx.lr = 0x8328FDA0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6632, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDBC"))) PPC_WEAK_FUNC(sub_8328FDBC);
PPC_FUNC_IMPL(__imp__sub_8328FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FDC0"))) PPC_WEAK_FUNC(sub_8328FDC0);
PPC_FUNC_IMPL(__imp__sub_8328FDC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15440
	ctx.r3.s64 = ctx.r11.s64 + -15440;
	// bl 0x82188cf0
	ctx.lr = 0x8328FDD8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6628, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDF4"))) PPC_WEAK_FUNC(sub_8328FDF4);
PPC_FUNC_IMPL(__imp__sub_8328FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FDF8"))) PPC_WEAK_FUNC(sub_8328FDF8);
PPC_FUNC_IMPL(__imp__sub_8328FDF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15432
	ctx.r3.s64 = ctx.r11.s64 + -15432;
	// bl 0x82188cf0
	ctx.lr = 0x8328FE10;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6624, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE2C"))) PPC_WEAK_FUNC(sub_8328FE2C);
PPC_FUNC_IMPL(__imp__sub_8328FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FE30"))) PPC_WEAK_FUNC(sub_8328FE30);
PPC_FUNC_IMPL(__imp__sub_8328FE30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15424
	ctx.r3.s64 = ctx.r11.s64 + -15424;
	// bl 0x82188cf0
	ctx.lr = 0x8328FE48;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6620, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE64"))) PPC_WEAK_FUNC(sub_8328FE64);
PPC_FUNC_IMPL(__imp__sub_8328FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FE68"))) PPC_WEAK_FUNC(sub_8328FE68);
PPC_FUNC_IMPL(__imp__sub_8328FE68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15416
	ctx.r3.s64 = ctx.r11.s64 + -15416;
	// bl 0x82188cf0
	ctx.lr = 0x8328FE80;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6616, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE9C"))) PPC_WEAK_FUNC(sub_8328FE9C);
PPC_FUNC_IMPL(__imp__sub_8328FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FEA0"))) PPC_WEAK_FUNC(sub_8328FEA0);
PPC_FUNC_IMPL(__imp__sub_8328FEA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// bl 0x82188cf0
	ctx.lr = 0x8328FEB8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6612, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FED4"))) PPC_WEAK_FUNC(sub_8328FED4);
PPC_FUNC_IMPL(__imp__sub_8328FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FED8"))) PPC_WEAK_FUNC(sub_8328FED8);
PPC_FUNC_IMPL(__imp__sub_8328FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEE4"))) PPC_WEAK_FUNC(sub_8328FEE4);
PPC_FUNC_IMPL(__imp__sub_8328FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FEE8"))) PPC_WEAK_FUNC(sub_8328FEE8);
PPC_FUNC_IMPL(__imp__sub_8328FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEF4"))) PPC_WEAK_FUNC(sub_8328FEF4);
PPC_FUNC_IMPL(__imp__sub_8328FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FEF8"))) PPC_WEAK_FUNC(sub_8328FEF8);
PPC_FUNC_IMPL(__imp__sub_8328FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF04"))) PPC_WEAK_FUNC(sub_8328FF04);
PPC_FUNC_IMPL(__imp__sub_8328FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF08"))) PPC_WEAK_FUNC(sub_8328FF08);
PPC_FUNC_IMPL(__imp__sub_8328FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF14"))) PPC_WEAK_FUNC(sub_8328FF14);
PPC_FUNC_IMPL(__imp__sub_8328FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF18"))) PPC_WEAK_FUNC(sub_8328FF18);
PPC_FUNC_IMPL(__imp__sub_8328FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF24"))) PPC_WEAK_FUNC(sub_8328FF24);
PPC_FUNC_IMPL(__imp__sub_8328FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF28"))) PPC_WEAK_FUNC(sub_8328FF28);
PPC_FUNC_IMPL(__imp__sub_8328FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1232
	ctx.r3.s64 = ctx.r11.s64 + -1232;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF34"))) PPC_WEAK_FUNC(sub_8328FF34);
PPC_FUNC_IMPL(__imp__sub_8328FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF38"))) PPC_WEAK_FUNC(sub_8328FF38);
PPC_FUNC_IMPL(__imp__sub_8328FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1216
	ctx.r3.s64 = ctx.r11.s64 + -1216;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF44"))) PPC_WEAK_FUNC(sub_8328FF44);
PPC_FUNC_IMPL(__imp__sub_8328FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF48"))) PPC_WEAK_FUNC(sub_8328FF48);
PPC_FUNC_IMPL(__imp__sub_8328FF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18900
	ctx.r3.s64 = ctx.r11.s64 + 18900;
	// bl 0x82bfbd78
	ctx.lr = 0x8328FF60;
	sub_82BFBD78(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1128
	ctx.r3.s64 = ctx.r10.s64 + -1128;
	// bl 0x82ca3700
	ctx.lr = 0x8328FF6C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FF7C"))) PPC_WEAK_FUNC(sub_8328FF7C);
PPC_FUNC_IMPL(__imp__sub_8328FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF80"))) PPC_WEAK_FUNC(sub_8328FF80);
PPC_FUNC_IMPL(__imp__sub_8328FF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-968
	ctx.r3.s64 = ctx.r11.s64 + -968;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF8C"))) PPC_WEAK_FUNC(sub_8328FF8C);
PPC_FUNC_IMPL(__imp__sub_8328FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FF90"))) PPC_WEAK_FUNC(sub_8328FF90);
PPC_FUNC_IMPL(__imp__sub_8328FF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18924
	ctx.r3.s64 = ctx.r11.s64 + 18924;
	// bl 0x821f7798
	ctx.lr = 0x8328FFA8;
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1016
	ctx.r3.s64 = ctx.r10.s64 + -1016;
	// bl 0x82ca3700
	ctx.lr = 0x8328FFB4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FFC4"))) PPC_WEAK_FUNC(sub_8328FFC4);
PPC_FUNC_IMPL(__imp__sub_8328FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FFC8"))) PPC_WEAK_FUNC(sub_8328FFC8);
PPC_FUNC_IMPL(__imp__sub_8328FFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x823445b0
	ctx.lr = 0x8328FFE0;
	sub_823445B0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-928
	ctx.r3.s64 = ctx.r10.s64 + -928;
	// bl 0x82ca3700
	ctx.lr = 0x8328FFEC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FFFC"))) PPC_WEAK_FUNC(sub_8328FFFC);
PPC_FUNC_IMPL(__imp__sub_8328FFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290000"))) PPC_WEAK_FUNC(sub_83290000);
PPC_FUNC_IMPL(__imp__sub_83290000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18940
	ctx.r3.s64 = ctx.r11.s64 + 18940;
	// bl 0x821f7798
	ctx.lr = 0x83290018;
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1000
	ctx.r3.s64 = ctx.r10.s64 + -1000;
	// bl 0x82ca3700
	ctx.lr = 0x83290024;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290034"))) PPC_WEAK_FUNC(sub_83290034);
PPC_FUNC_IMPL(__imp__sub_83290034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290038"))) PPC_WEAK_FUNC(sub_83290038);
PPC_FUNC_IMPL(__imp__sub_83290038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// bl 0x821f7798
	ctx.lr = 0x83290050;
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-984
	ctx.r3.s64 = ctx.r10.s64 + -984;
	// bl 0x82ca3700
	ctx.lr = 0x8329005C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329006C"))) PPC_WEAK_FUNC(sub_8329006C);
PPC_FUNC_IMPL(__imp__sub_8329006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290070"))) PPC_WEAK_FUNC(sub_83290070);
PPC_FUNC_IMPL(__imp__sub_83290070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// bl 0x82c03b90
	ctx.lr = 0x83290088;
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-816
	ctx.r3.s64 = ctx.r10.s64 + -816;
	// bl 0x82ca3700
	ctx.lr = 0x83290094;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832900A4"))) PPC_WEAK_FUNC(sub_832900A4);
PPC_FUNC_IMPL(__imp__sub_832900A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832900A8"))) PPC_WEAK_FUNC(sub_832900A8);
PPC_FUNC_IMPL(__imp__sub_832900A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,8995
	ctx.r11.s64 = 589496320;
	// addi r8,r10,19064
	ctx.r8.s64 = ctx.r10.s64 + 19064;
	// ori r11,r11,8995
	ctx.r11.u64 = ctx.r11.u64 | 8995;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r10,-22356
	ctx.r10.s64 = ctx.r10.s64 + -22356;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_832900DC:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x832900dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832900DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832900FC"))) PPC_WEAK_FUNC(sub_832900FC);
PPC_FUNC_IMPL(__imp__sub_832900FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290100"))) PPC_WEAK_FUNC(sub_83290100);
PPC_FUNC_IMPL(__imp__sub_83290100) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,8995
	ctx.r11.s64 = 589496320;
	// addi r31,r10,19080
	ctx.r31.s64 = ctx.r10.s64 + 19080;
	// ori r11,r11,8995
	ctx.r11.u64 = ctx.r11.u64 | 8995;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-22344
	ctx.r4.s64 = ctx.r8.s64 + -22344;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x83290144;
	sub_82CA2C60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83290160"))) PPC_WEAK_FUNC(sub_83290160);
PPC_FUNC_IMPL(__imp__sub_83290160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19104
	ctx.r3.s64 = ctx.r11.s64 + 19104;
	// bl 0x82c03b90
	ctx.lr = 0x83290178;
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-736
	ctx.r3.s64 = ctx.r10.s64 + -736;
	// bl 0x82ca3700
	ctx.lr = 0x83290184;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290194"))) PPC_WEAK_FUNC(sub_83290194);
PPC_FUNC_IMPL(__imp__sub_83290194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290198"))) PPC_WEAK_FUNC(sub_83290198);
PPC_FUNC_IMPL(__imp__sub_83290198) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,25268
	ctx.r4.s64 = ctx.r11.s64 + 25268;
	// addi r3,r10,19192
	ctx.r3.s64 = ctx.r10.s64 + 19192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832901BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-720
	ctx.r3.s64 = ctx.r9.s64 + -720;
	// bl 0x82ca3700
	ctx.lr = 0x832901C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832901D8"))) PPC_WEAK_FUNC(sub_832901D8);
PPC_FUNC_IMPL(__imp__sub_832901D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19196
	ctx.r3.s64 = ctx.r11.s64 + 19196;
	// bl 0x823445b0
	ctx.lr = 0x832901F0;
	sub_823445B0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-704
	ctx.r3.s64 = ctx.r10.s64 + -704;
	// bl 0x82ca3700
	ctx.lr = 0x832901FC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329020C"))) PPC_WEAK_FUNC(sub_8329020C);
PPC_FUNC_IMPL(__imp__sub_8329020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290210"))) PPC_WEAK_FUNC(sub_83290210);
PPC_FUNC_IMPL(__imp__sub_83290210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19208
	ctx.r3.s64 = ctx.r11.s64 + 19208;
	// bl 0x82a12828
	ctx.lr = 0x83290228;
	sub_82A12828(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-592
	ctx.r3.s64 = ctx.r10.s64 + -592;
	// bl 0x82ca3700
	ctx.lr = 0x83290234;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290244"))) PPC_WEAK_FUNC(sub_83290244);
PPC_FUNC_IMPL(__imp__sub_83290244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290248"))) PPC_WEAK_FUNC(sub_83290248);
PPC_FUNC_IMPL(__imp__sub_83290248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19220
	ctx.r3.s64 = ctx.r11.s64 + 19220;
	// bl 0x82c04dc8
	ctx.lr = 0x83290260;
	sub_82C04DC8(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-480
	ctx.r3.s64 = ctx.r10.s64 + -480;
	// bl 0x82ca3700
	ctx.lr = 0x8329026C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329027C"))) PPC_WEAK_FUNC(sub_8329027C);
PPC_FUNC_IMPL(__imp__sub_8329027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290280"))) PPC_WEAK_FUNC(sub_83290280);
PPC_FUNC_IMPL(__imp__sub_83290280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19232
	ctx.r3.s64 = ctx.r11.s64 + 19232;
	// bl 0x82c42f48
	ctx.lr = 0x83290298;
	sub_82C42F48(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-368
	ctx.r3.s64 = ctx.r10.s64 + -368;
	// bl 0x82ca3700
	ctx.lr = 0x832902A4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832902B4"))) PPC_WEAK_FUNC(sub_832902B4);
PPC_FUNC_IMPL(__imp__sub_832902B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832902B8"))) PPC_WEAK_FUNC(sub_832902B8);
PPC_FUNC_IMPL(__imp__sub_832902B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832902C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,19252
	ctx.r11.s64 = ctx.r11.s64 + 19252;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_832902D8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x832902E0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832902ec
	if (ctx.cr6.eq) goto loc_832902EC;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_832902EC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832902f8
	if (ctx.cr0.eq) goto loc_832902F8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_832902F8:
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bge 0x832902d8
	if (!ctx.cr0.lt) goto loc_832902D8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x82ca3700
	ctx.lr = 0x83290318;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290320"))) PPC_WEAK_FUNC(sub_83290320);
PPC_FUNC_IMPL(__imp__sub_83290320) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,19312
	ctx.r30.s64 = ctx.r11.s64 + 19312;
loc_83290340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b38560
	ctx.lr = 0x83290348;
	sub_82B38560(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bge 0x83290340
	if (!ctx.cr0.lt) goto loc_83290340;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// bl 0x82ca3700
	ctx.lr = 0x83290360;
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

__attribute__((alias("__imp__sub_83290378"))) PPC_WEAK_FUNC(sub_83290378);
PPC_FUNC_IMPL(__imp__sub_83290378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83290380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// li r27,5
	ctx.r27.s64 = 5;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-22236
	ctx.r28.s64 = ctx.r11.s64 + -22236;
loc_832903A4:
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x82b385e8
	ctx.lr = 0x832903B0;
	sub_82B385E8(ctx, base);
	// stw r28,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r28.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bge 0x832903a4
	if (!ctx.cr0.lt) goto loc_832903A4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-176
	ctx.r3.s64 = ctx.r11.s64 + -176;
	// bl 0x82ca3700
	ctx.lr = 0x832903DC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832903E4"))) PPC_WEAK_FUNC(sub_832903E4);
PPC_FUNC_IMPL(__imp__sub_832903E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832903E8"))) PPC_WEAK_FUNC(sub_832903E8);
PPC_FUNC_IMPL(__imp__sub_832903E8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,19636
	ctx.r31.s64 = ctx.r11.s64 + 19636;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823445b0
	ctx.lr = 0x83290408;
	sub_823445B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82b38560
	ctx.lr = 0x83290410;
	sub_82B38560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// bl 0x82ca3700
	ctx.lr = 0x83290424;
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

__attribute__((alias("__imp__sub_83290438"))) PPC_WEAK_FUNC(sub_83290438);
PPC_FUNC_IMPL(__imp__sub_83290438) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,19696
	ctx.r31.s64 = ctx.r11.s64 + 19696;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823445b0
	ctx.lr = 0x83290458;
	sub_823445B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82b38560
	ctx.lr = 0x83290460;
	sub_82B38560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x82ca3700
	ctx.lr = 0x83290474;
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

__attribute__((alias("__imp__sub_83290488"))) PPC_WEAK_FUNC(sub_83290488);
PPC_FUNC_IMPL(__imp__sub_83290488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19488
	ctx.r4.s64 = ctx.r11.s64 + -19488;
	// addi r3,r10,19768
	ctx.r3.s64 = ctx.r10.s64 + 19768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832904AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// bl 0x82ca3700
	ctx.lr = 0x832904B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832904C8"))) PPC_WEAK_FUNC(sub_832904C8);
PPC_FUNC_IMPL(__imp__sub_832904C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19472
	ctx.r4.s64 = ctx.r11.s64 + -19472;
	// addi r3,r10,19772
	ctx.r3.s64 = ctx.r10.s64 + 19772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832904EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,80
	ctx.r3.s64 = ctx.r9.s64 + 80;
	// bl 0x82ca3700
	ctx.lr = 0x832904F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290508"))) PPC_WEAK_FUNC(sub_83290508);
PPC_FUNC_IMPL(__imp__sub_83290508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19140
	ctx.r4.s64 = ctx.r11.s64 + -19140;
	// addi r3,r10,19776
	ctx.r3.s64 = ctx.r10.s64 + 19776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329052C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,96
	ctx.r3.s64 = ctx.r9.s64 + 96;
	// bl 0x82ca3700
	ctx.lr = 0x83290538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290548"))) PPC_WEAK_FUNC(sub_83290548);
PPC_FUNC_IMPL(__imp__sub_83290548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-19128
	ctx.r4.s64 = ctx.r11.s64 + -19128;
	// addi r3,r10,19780
	ctx.r3.s64 = ctx.r10.s64 + 19780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329056C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,112
	ctx.r3.s64 = ctx.r9.s64 + 112;
	// bl 0x82ca3700
	ctx.lr = 0x83290578;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290588"))) PPC_WEAK_FUNC(sub_83290588);
PPC_FUNC_IMPL(__imp__sub_83290588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// addi r3,r10,19784
	ctx.r3.s64 = ctx.r10.s64 + 19784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832905AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// bl 0x82ca3700
	ctx.lr = 0x832905B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832905C8"))) PPC_WEAK_FUNC(sub_832905C8);
PPC_FUNC_IMPL(__imp__sub_832905C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18544
	ctx.r4.s64 = ctx.r11.s64 + -18544;
	// addi r3,r10,19788
	ctx.r3.s64 = ctx.r10.s64 + 19788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832905EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,144
	ctx.r3.s64 = ctx.r9.s64 + 144;
	// bl 0x82ca3700
	ctx.lr = 0x832905F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290608"))) PPC_WEAK_FUNC(sub_83290608);
PPC_FUNC_IMPL(__imp__sub_83290608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18532
	ctx.r4.s64 = ctx.r11.s64 + -18532;
	// addi r3,r10,19792
	ctx.r3.s64 = ctx.r10.s64 + 19792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329062C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,160
	ctx.r3.s64 = ctx.r9.s64 + 160;
	// bl 0x82ca3700
	ctx.lr = 0x83290638;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290648"))) PPC_WEAK_FUNC(sub_83290648);
PPC_FUNC_IMPL(__imp__sub_83290648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18304
	ctx.r4.s64 = ctx.r11.s64 + -18304;
	// addi r3,r10,19796
	ctx.r3.s64 = ctx.r10.s64 + 19796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329066C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,176
	ctx.r3.s64 = ctx.r9.s64 + 176;
	// bl 0x82ca3700
	ctx.lr = 0x83290678;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290688"))) PPC_WEAK_FUNC(sub_83290688);
PPC_FUNC_IMPL(__imp__sub_83290688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// addi r3,r10,19800
	ctx.r3.s64 = ctx.r10.s64 + 19800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832906AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,192
	ctx.r3.s64 = ctx.r9.s64 + 192;
	// bl 0x82ca3700
	ctx.lr = 0x832906B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832906C8"))) PPC_WEAK_FUNC(sub_832906C8);
PPC_FUNC_IMPL(__imp__sub_832906C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-18264
	ctx.r4.s64 = ctx.r11.s64 + -18264;
	// addi r3,r10,19804
	ctx.r3.s64 = ctx.r10.s64 + 19804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832906EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,208
	ctx.r3.s64 = ctx.r9.s64 + 208;
	// bl 0x82ca3700
	ctx.lr = 0x832906F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290708"))) PPC_WEAK_FUNC(sub_83290708);
PPC_FUNC_IMPL(__imp__sub_83290708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17944
	ctx.r4.s64 = ctx.r11.s64 + -17944;
	// addi r3,r10,19808
	ctx.r3.s64 = ctx.r10.s64 + 19808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329072C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,224
	ctx.r3.s64 = ctx.r9.s64 + 224;
	// bl 0x82ca3700
	ctx.lr = 0x83290738;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290748"))) PPC_WEAK_FUNC(sub_83290748);
PPC_FUNC_IMPL(__imp__sub_83290748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17920
	ctx.r4.s64 = ctx.r11.s64 + -17920;
	// addi r3,r10,19812
	ctx.r3.s64 = ctx.r10.s64 + 19812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329076C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,240
	ctx.r3.s64 = ctx.r9.s64 + 240;
	// bl 0x82ca3700
	ctx.lr = 0x83290778;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290788"))) PPC_WEAK_FUNC(sub_83290788);
PPC_FUNC_IMPL(__imp__sub_83290788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17904
	ctx.r4.s64 = ctx.r11.s64 + -17904;
	// addi r3,r10,19816
	ctx.r3.s64 = ctx.r10.s64 + 19816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832907AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,256
	ctx.r3.s64 = ctx.r9.s64 + 256;
	// bl 0x82ca3700
	ctx.lr = 0x832907B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832907C8"))) PPC_WEAK_FUNC(sub_832907C8);
PPC_FUNC_IMPL(__imp__sub_832907C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17828
	ctx.r4.s64 = ctx.r11.s64 + -17828;
	// addi r3,r10,19820
	ctx.r3.s64 = ctx.r10.s64 + 19820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832907EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,272
	ctx.r3.s64 = ctx.r9.s64 + 272;
	// bl 0x82ca3700
	ctx.lr = 0x832907F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290808"))) PPC_WEAK_FUNC(sub_83290808);
PPC_FUNC_IMPL(__imp__sub_83290808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17804
	ctx.r4.s64 = ctx.r11.s64 + -17804;
	// addi r3,r10,19824
	ctx.r3.s64 = ctx.r10.s64 + 19824;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329082C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,288
	ctx.r3.s64 = ctx.r9.s64 + 288;
	// bl 0x82ca3700
	ctx.lr = 0x83290838;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290848"))) PPC_WEAK_FUNC(sub_83290848);
PPC_FUNC_IMPL(__imp__sub_83290848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17784
	ctx.r4.s64 = ctx.r11.s64 + -17784;
	// addi r3,r10,19828
	ctx.r3.s64 = ctx.r10.s64 + 19828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329086C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,304
	ctx.r3.s64 = ctx.r9.s64 + 304;
	// bl 0x82ca3700
	ctx.lr = 0x83290878;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290888"))) PPC_WEAK_FUNC(sub_83290888);
PPC_FUNC_IMPL(__imp__sub_83290888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17588
	ctx.r4.s64 = ctx.r11.s64 + -17588;
	// addi r3,r10,19832
	ctx.r3.s64 = ctx.r10.s64 + 19832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832908AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,320
	ctx.r3.s64 = ctx.r9.s64 + 320;
	// bl 0x82ca3700
	ctx.lr = 0x832908B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832908C8"))) PPC_WEAK_FUNC(sub_832908C8);
PPC_FUNC_IMPL(__imp__sub_832908C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17572
	ctx.r4.s64 = ctx.r11.s64 + -17572;
	// addi r3,r10,19836
	ctx.r3.s64 = ctx.r10.s64 + 19836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832908EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,336
	ctx.r3.s64 = ctx.r9.s64 + 336;
	// bl 0x82ca3700
	ctx.lr = 0x832908F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290908"))) PPC_WEAK_FUNC(sub_83290908);
PPC_FUNC_IMPL(__imp__sub_83290908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17560
	ctx.r4.s64 = ctx.r11.s64 + -17560;
	// addi r3,r10,19840
	ctx.r3.s64 = ctx.r10.s64 + 19840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329092C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,352
	ctx.r3.s64 = ctx.r9.s64 + 352;
	// bl 0x82ca3700
	ctx.lr = 0x83290938;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290948"))) PPC_WEAK_FUNC(sub_83290948);
PPC_FUNC_IMPL(__imp__sub_83290948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17380
	ctx.r4.s64 = ctx.r11.s64 + -17380;
	// addi r3,r10,19844
	ctx.r3.s64 = ctx.r10.s64 + 19844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329096C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,368
	ctx.r3.s64 = ctx.r9.s64 + 368;
	// bl 0x82ca3700
	ctx.lr = 0x83290978;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290988"))) PPC_WEAK_FUNC(sub_83290988);
PPC_FUNC_IMPL(__imp__sub_83290988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17360
	ctx.r4.s64 = ctx.r11.s64 + -17360;
	// addi r3,r10,19848
	ctx.r3.s64 = ctx.r10.s64 + 19848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832909AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,384
	ctx.r3.s64 = ctx.r9.s64 + 384;
	// bl 0x82ca3700
	ctx.lr = 0x832909B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832909C8"))) PPC_WEAK_FUNC(sub_832909C8);
PPC_FUNC_IMPL(__imp__sub_832909C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// addi r3,r10,19852
	ctx.r3.s64 = ctx.r10.s64 + 19852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832909EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,400
	ctx.r3.s64 = ctx.r9.s64 + 400;
	// bl 0x82ca3700
	ctx.lr = 0x832909F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290A08"))) PPC_WEAK_FUNC(sub_83290A08);
PPC_FUNC_IMPL(__imp__sub_83290A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17076
	ctx.r4.s64 = ctx.r11.s64 + -17076;
	// addi r3,r10,19856
	ctx.r3.s64 = ctx.r10.s64 + 19856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290A2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,416
	ctx.r3.s64 = ctx.r9.s64 + 416;
	// bl 0x82ca3700
	ctx.lr = 0x83290A38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290A48"))) PPC_WEAK_FUNC(sub_83290A48);
PPC_FUNC_IMPL(__imp__sub_83290A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17052
	ctx.r4.s64 = ctx.r11.s64 + -17052;
	// addi r3,r10,19860
	ctx.r3.s64 = ctx.r10.s64 + 19860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290A6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,432
	ctx.r3.s64 = ctx.r9.s64 + 432;
	// bl 0x82ca3700
	ctx.lr = 0x83290A78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290A88"))) PPC_WEAK_FUNC(sub_83290A88);
PPC_FUNC_IMPL(__imp__sub_83290A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-17052
	ctx.r4.s64 = ctx.r11.s64 + -17052;
	// addi r3,r10,19864
	ctx.r3.s64 = ctx.r10.s64 + 19864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290AAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,448
	ctx.r3.s64 = ctx.r9.s64 + 448;
	// bl 0x82ca3700
	ctx.lr = 0x83290AB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290AC8"))) PPC_WEAK_FUNC(sub_83290AC8);
PPC_FUNC_IMPL(__imp__sub_83290AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-16692
	ctx.r4.s64 = ctx.r11.s64 + -16692;
	// addi r3,r10,19868
	ctx.r3.s64 = ctx.r10.s64 + 19868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290AEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,464
	ctx.r3.s64 = ctx.r9.s64 + 464;
	// bl 0x82ca3700
	ctx.lr = 0x83290AF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290B08"))) PPC_WEAK_FUNC(sub_83290B08);
PPC_FUNC_IMPL(__imp__sub_83290B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-16676
	ctx.r4.s64 = ctx.r11.s64 + -16676;
	// addi r3,r10,19872
	ctx.r3.s64 = ctx.r10.s64 + 19872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290B2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,480
	ctx.r3.s64 = ctx.r9.s64 + 480;
	// bl 0x82ca3700
	ctx.lr = 0x83290B38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290B48"))) PPC_WEAK_FUNC(sub_83290B48);
PPC_FUNC_IMPL(__imp__sub_83290B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-16260
	ctx.r4.s64 = ctx.r11.s64 + -16260;
	// addi r3,r10,19876
	ctx.r3.s64 = ctx.r10.s64 + 19876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290B6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,496
	ctx.r3.s64 = ctx.r9.s64 + 496;
	// bl 0x82ca3700
	ctx.lr = 0x83290B78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290B88"))) PPC_WEAK_FUNC(sub_83290B88);
PPC_FUNC_IMPL(__imp__sub_83290B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-16236
	ctx.r4.s64 = ctx.r11.s64 + -16236;
	// addi r3,r10,19880
	ctx.r3.s64 = ctx.r10.s64 + 19880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290BAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,512
	ctx.r3.s64 = ctx.r9.s64 + 512;
	// bl 0x82ca3700
	ctx.lr = 0x83290BB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290BC8"))) PPC_WEAK_FUNC(sub_83290BC8);
PPC_FUNC_IMPL(__imp__sub_83290BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-16220
	ctx.r4.s64 = ctx.r11.s64 + -16220;
	// addi r3,r10,19884
	ctx.r3.s64 = ctx.r10.s64 + 19884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290BEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,528
	ctx.r3.s64 = ctx.r9.s64 + 528;
	// bl 0x82ca3700
	ctx.lr = 0x83290BF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290C08"))) PPC_WEAK_FUNC(sub_83290C08);
PPC_FUNC_IMPL(__imp__sub_83290C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15996
	ctx.r4.s64 = ctx.r11.s64 + -15996;
	// addi r3,r10,19888
	ctx.r3.s64 = ctx.r10.s64 + 19888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290C2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,544
	ctx.r3.s64 = ctx.r9.s64 + 544;
	// bl 0x82ca3700
	ctx.lr = 0x83290C38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290C48"))) PPC_WEAK_FUNC(sub_83290C48);
PPC_FUNC_IMPL(__imp__sub_83290C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15980
	ctx.r4.s64 = ctx.r11.s64 + -15980;
	// addi r3,r10,19892
	ctx.r3.s64 = ctx.r10.s64 + 19892;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290C6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,560
	ctx.r3.s64 = ctx.r9.s64 + 560;
	// bl 0x82ca3700
	ctx.lr = 0x83290C78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290C88"))) PPC_WEAK_FUNC(sub_83290C88);
PPC_FUNC_IMPL(__imp__sub_83290C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15960
	ctx.r4.s64 = ctx.r11.s64 + -15960;
	// addi r3,r10,19896
	ctx.r3.s64 = ctx.r10.s64 + 19896;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290CAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,576
	ctx.r3.s64 = ctx.r9.s64 + 576;
	// bl 0x82ca3700
	ctx.lr = 0x83290CB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290CC8"))) PPC_WEAK_FUNC(sub_83290CC8);
PPC_FUNC_IMPL(__imp__sub_83290CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15792
	ctx.r4.s64 = ctx.r11.s64 + -15792;
	// addi r3,r10,19900
	ctx.r3.s64 = ctx.r10.s64 + 19900;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290CEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,592
	ctx.r3.s64 = ctx.r9.s64 + 592;
	// bl 0x82ca3700
	ctx.lr = 0x83290CF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290D08"))) PPC_WEAK_FUNC(sub_83290D08);
PPC_FUNC_IMPL(__imp__sub_83290D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15780
	ctx.r4.s64 = ctx.r11.s64 + -15780;
	// addi r3,r10,19904
	ctx.r3.s64 = ctx.r10.s64 + 19904;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290D2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,608
	ctx.r3.s64 = ctx.r9.s64 + 608;
	// bl 0x82ca3700
	ctx.lr = 0x83290D38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290D48"))) PPC_WEAK_FUNC(sub_83290D48);
PPC_FUNC_IMPL(__imp__sub_83290D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15760
	ctx.r4.s64 = ctx.r11.s64 + -15760;
	// addi r3,r10,19908
	ctx.r3.s64 = ctx.r10.s64 + 19908;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290D6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,624
	ctx.r3.s64 = ctx.r9.s64 + 624;
	// bl 0x82ca3700
	ctx.lr = 0x83290D78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290D88"))) PPC_WEAK_FUNC(sub_83290D88);
PPC_FUNC_IMPL(__imp__sub_83290D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15584
	ctx.r4.s64 = ctx.r11.s64 + -15584;
	// addi r3,r10,19924
	ctx.r3.s64 = ctx.r10.s64 + 19924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290DAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,640
	ctx.r3.s64 = ctx.r9.s64 + 640;
	// bl 0x82ca3700
	ctx.lr = 0x83290DB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290DC8"))) PPC_WEAK_FUNC(sub_83290DC8);
PPC_FUNC_IMPL(__imp__sub_83290DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-8256
	ctx.r4.s64 = ctx.r11.s64 + -8256;
	// addi r3,r10,19928
	ctx.r3.s64 = ctx.r10.s64 + 19928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290DEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,656
	ctx.r3.s64 = ctx.r9.s64 + 656;
	// bl 0x82ca3700
	ctx.lr = 0x83290DF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290E08"))) PPC_WEAK_FUNC(sub_83290E08);
PPC_FUNC_IMPL(__imp__sub_83290E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15440
	ctx.r4.s64 = ctx.r11.s64 + -15440;
	// addi r3,r10,19932
	ctx.r3.s64 = ctx.r10.s64 + 19932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290E2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,672
	ctx.r3.s64 = ctx.r9.s64 + 672;
	// bl 0x82ca3700
	ctx.lr = 0x83290E38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290E48"))) PPC_WEAK_FUNC(sub_83290E48);
PPC_FUNC_IMPL(__imp__sub_83290E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15432
	ctx.r4.s64 = ctx.r11.s64 + -15432;
	// addi r3,r10,19936
	ctx.r3.s64 = ctx.r10.s64 + 19936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290E6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,688
	ctx.r3.s64 = ctx.r9.s64 + 688;
	// bl 0x82ca3700
	ctx.lr = 0x83290E78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290E88"))) PPC_WEAK_FUNC(sub_83290E88);
PPC_FUNC_IMPL(__imp__sub_83290E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15420
	ctx.r4.s64 = ctx.r11.s64 + -15420;
	// addi r3,r10,19940
	ctx.r3.s64 = ctx.r10.s64 + 19940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290EAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,704
	ctx.r3.s64 = ctx.r9.s64 + 704;
	// bl 0x82ca3700
	ctx.lr = 0x83290EB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290EC8"))) PPC_WEAK_FUNC(sub_83290EC8);
PPC_FUNC_IMPL(__imp__sub_83290EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15028
	ctx.r4.s64 = ctx.r11.s64 + -15028;
	// addi r3,r10,19944
	ctx.r3.s64 = ctx.r10.s64 + 19944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290EEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,720
	ctx.r3.s64 = ctx.r9.s64 + 720;
	// bl 0x82ca3700
	ctx.lr = 0x83290EF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290F08"))) PPC_WEAK_FUNC(sub_83290F08);
PPC_FUNC_IMPL(__imp__sub_83290F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-15004
	ctx.r4.s64 = ctx.r11.s64 + -15004;
	// addi r3,r10,19948
	ctx.r3.s64 = ctx.r10.s64 + 19948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290F2C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,736
	ctx.r3.s64 = ctx.r9.s64 + 736;
	// bl 0x82ca3700
	ctx.lr = 0x83290F38;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290F48"))) PPC_WEAK_FUNC(sub_83290F48);
PPC_FUNC_IMPL(__imp__sub_83290F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14752
	ctx.r4.s64 = ctx.r11.s64 + -14752;
	// addi r3,r10,19952
	ctx.r3.s64 = ctx.r10.s64 + 19952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290F6C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,752
	ctx.r3.s64 = ctx.r9.s64 + 752;
	// bl 0x82ca3700
	ctx.lr = 0x83290F78;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290F88"))) PPC_WEAK_FUNC(sub_83290F88);
PPC_FUNC_IMPL(__imp__sub_83290F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14736
	ctx.r4.s64 = ctx.r11.s64 + -14736;
	// addi r3,r10,19956
	ctx.r3.s64 = ctx.r10.s64 + 19956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290FAC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,768
	ctx.r3.s64 = ctx.r9.s64 + 768;
	// bl 0x82ca3700
	ctx.lr = 0x83290FB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290FC8"))) PPC_WEAK_FUNC(sub_83290FC8);
PPC_FUNC_IMPL(__imp__sub_83290FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14404
	ctx.r4.s64 = ctx.r11.s64 + -14404;
	// addi r3,r10,19960
	ctx.r3.s64 = ctx.r10.s64 + 19960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83290FEC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,784
	ctx.r3.s64 = ctx.r9.s64 + 784;
	// bl 0x82ca3700
	ctx.lr = 0x83290FF8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291008"))) PPC_WEAK_FUNC(sub_83291008);
PPC_FUNC_IMPL(__imp__sub_83291008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14384
	ctx.r4.s64 = ctx.r11.s64 + -14384;
	// addi r3,r10,19964
	ctx.r3.s64 = ctx.r10.s64 + 19964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329102C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,800
	ctx.r3.s64 = ctx.r9.s64 + 800;
	// bl 0x82ca3700
	ctx.lr = 0x83291038;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291048"))) PPC_WEAK_FUNC(sub_83291048);
PPC_FUNC_IMPL(__imp__sub_83291048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14148
	ctx.r4.s64 = ctx.r11.s64 + -14148;
	// addi r3,r10,19968
	ctx.r3.s64 = ctx.r10.s64 + 19968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329106C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,816
	ctx.r3.s64 = ctx.r9.s64 + 816;
	// bl 0x82ca3700
	ctx.lr = 0x83291078;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291088"))) PPC_WEAK_FUNC(sub_83291088);
PPC_FUNC_IMPL(__imp__sub_83291088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14132
	ctx.r4.s64 = ctx.r11.s64 + -14132;
	// addi r3,r10,19972
	ctx.r3.s64 = ctx.r10.s64 + 19972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832910AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,832
	ctx.r3.s64 = ctx.r9.s64 + 832;
	// bl 0x82ca3700
	ctx.lr = 0x832910B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832910C8"))) PPC_WEAK_FUNC(sub_832910C8);
PPC_FUNC_IMPL(__imp__sub_832910C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-14088
	ctx.r4.s64 = ctx.r11.s64 + -14088;
	// addi r3,r10,19976
	ctx.r3.s64 = ctx.r10.s64 + 19976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832910EC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,848
	ctx.r3.s64 = ctx.r9.s64 + 848;
	// bl 0x82ca3700
	ctx.lr = 0x832910F8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291108"))) PPC_WEAK_FUNC(sub_83291108);
PPC_FUNC_IMPL(__imp__sub_83291108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-13900
	ctx.r4.s64 = ctx.r11.s64 + -13900;
	// addi r3,r10,19992
	ctx.r3.s64 = ctx.r10.s64 + 19992;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329112C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,864
	ctx.r3.s64 = ctx.r9.s64 + 864;
	// bl 0x82ca3700
	ctx.lr = 0x83291138;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291148"))) PPC_WEAK_FUNC(sub_83291148);
PPC_FUNC_IMPL(__imp__sub_83291148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-22240
	ctx.r4.s64 = ctx.r11.s64 + -22240;
	// addi r3,r10,19996
	ctx.r3.s64 = ctx.r10.s64 + 19996;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8329116C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,880
	ctx.r3.s64 = ctx.r9.s64 + 880;
	// bl 0x82ca3700
	ctx.lr = 0x83291178;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291188"))) PPC_WEAK_FUNC(sub_83291188);
PPC_FUNC_IMPL(__imp__sub_83291188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83291190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82b4f448
	ctx.lr = 0x83291198;
	sub_82B4F448(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r10,20000
	ctx.r31.s64 = ctx.r10.s64 + 20000;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bl 0x82b4f378
	ctx.lr = 0x832911C0;
	sub_82B4F378(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x832911CC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832911e0
	if (ctx.cr6.eq) goto loc_832911E0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// b 0x832911e4
	goto loc_832911E4;
loc_832911E0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832911E4:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r10,896
	ctx.r3.s64 = ctx.r10.s64 + 896;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83291204;
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329120C"))) PPC_WEAK_FUNC(sub_8329120C);
PPC_FUNC_IMPL(__imp__sub_8329120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291210"))) PPC_WEAK_FUNC(sub_83291210);
PPC_FUNC_IMPL(__imp__sub_83291210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-13764
	ctx.r4.s64 = ctx.r11.s64 + -13764;
	// addi r3,r10,20040
	ctx.r3.s64 = ctx.r10.s64 + 20040;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83291234;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,912
	ctx.r3.s64 = ctx.r9.s64 + 912;
	// bl 0x82ca3700
	ctx.lr = 0x83291240;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291250"))) PPC_WEAK_FUNC(sub_83291250);
PPC_FUNC_IMPL(__imp__sub_83291250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,-13752
	ctx.r4.s64 = ctx.r11.s64 + -13752;
	// addi r3,r10,20044
	ctx.r3.s64 = ctx.r10.s64 + 20044;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83291274;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,928
	ctx.r3.s64 = ctx.r9.s64 + 928;
	// bl 0x82ca3700
	ctx.lr = 0x83291280;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291290"))) PPC_WEAK_FUNC(sub_83291290);
PPC_FUNC_IMPL(__imp__sub_83291290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20048
	ctx.r3.s64 = ctx.r11.s64 + 20048;
	// bl 0x82c49540
	ctx.lr = 0x832912A8;
	sub_82C49540(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,944
	ctx.r3.s64 = ctx.r10.s64 + 944;
	// bl 0x82ca3700
	ctx.lr = 0x832912B4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832912C4"))) PPC_WEAK_FUNC(sub_832912C4);
PPC_FUNC_IMPL(__imp__sub_832912C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832912C8"))) PPC_WEAK_FUNC(sub_832912C8);
PPC_FUNC_IMPL(__imp__sub_832912C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// bl 0x82c49540
	ctx.lr = 0x832912E0;
	sub_82C49540(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1032
	ctx.r3.s64 = ctx.r10.s64 + 1032;
	// bl 0x82ca3700
	ctx.lr = 0x832912EC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832912FC"))) PPC_WEAK_FUNC(sub_832912FC);
PPC_FUNC_IMPL(__imp__sub_832912FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291300"))) PPC_WEAK_FUNC(sub_83291300);
PPC_FUNC_IMPL(__imp__sub_83291300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// bl 0x82c03b90
	ctx.lr = 0x83291318;
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1120
	ctx.r3.s64 = ctx.r10.s64 + 1120;
	// bl 0x82ca3700
	ctx.lr = 0x83291324;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291334"))) PPC_WEAK_FUNC(sub_83291334);
PPC_FUNC_IMPL(__imp__sub_83291334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291338"))) PPC_WEAK_FUNC(sub_83291338);
PPC_FUNC_IMPL(__imp__sub_83291338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20380, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291348"))) PPC_WEAK_FUNC(sub_83291348);
PPC_FUNC_IMPL(__imp__sub_83291348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20384, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291358"))) PPC_WEAK_FUNC(sub_83291358);
PPC_FUNC_IMPL(__imp__sub_83291358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20420
	ctx.r3.s64 = ctx.r11.s64 + 20420;
	// bl 0x82c42f48
	ctx.lr = 0x83291370;
	sub_82C42F48(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,1136
	ctx.r3.s64 = ctx.r10.s64 + 1136;
	// bl 0x82ca3700
	ctx.lr = 0x8329137C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329138C"))) PPC_WEAK_FUNC(sub_8329138C);
PPC_FUNC_IMPL(__imp__sub_8329138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291390"))) PPC_WEAK_FUNC(sub_83291390);
PPC_FUNC_IMPL(__imp__sub_83291390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r5,69
	ctx.r5.s64 = 69;
	// addi r31,r11,24976
	ctx.r31.s64 = ctx.r11.s64 + 24976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,207
	ctx.r3.s64 = ctx.r31.s64 + 207;
	// bl 0x82ca3190
	ctx.lr = 0x832913C0;
	sub_82CA3190(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-10980
	ctx.r9.s64 = ctx.r11.s64 + -10980;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,-10980(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10980);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// lfs f31,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f31,280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stw r8,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r8.u32);
	// stw r7,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r7.u32);
	// stw r6,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r6.u32);
	// bl 0x82ca3190
	ctx.lr = 0x83291404;
	sub_82CA3190(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r31,380
	ctx.r10.s64 = ctx.r31.s64 + 380;
	// lfs f0,-11544(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11544);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-11008
	ctx.r11.s64 = ctx.r11.s64 + -11008;
	// lfs f13,-11552(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11552);
	ctx.f13.f64 = double(temp.f32);
	// li r9,13
	ctx.r9.s64 = 13;
	// lfs f12,-11548(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -11548);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8329143C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x8329143c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8329143C;
	// li r5,54
	ctx.r5.s64 = 54;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,406
	ctx.r3.s64 = ctx.r31.s64 + 406;
	// bl 0x82ca3190
	ctx.lr = 0x83291460;
	sub_82CA3190(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stfs f31,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r31,472
	ctx.r10.s64 = ctx.r31.s64 + 472;
	// addi r7,r8,-11032
	ctx.r7.s64 = ctx.r8.s64 + -11032;
	// lfs f30,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,27524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27524);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stfs f30,464(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83291494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291494;
	// li r5,59
	ctx.r5.s64 = 59;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,493
	ctx.r3.s64 = ctx.r31.s64 + 493;
	// bl 0x82ca3190
	ctx.lr = 0x832914B8;
	sub_82CA3190(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r31,564
	ctx.r7.s64 = ctx.r31.s64 + 564;
	// addi r6,r8,-11052
	ctx.r6.s64 = ctx.r8.s64 + -11052;
	// lfs f0,-11536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11536);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f12,-30920(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30920);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f13,556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f12,560(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_832914F8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x832914f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832914F8;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,582
	ctx.r3.s64 = ctx.r31.s64 + 582;
	// bl 0x82ca3190
	ctx.lr = 0x8329151C;
	sub_82CA3190(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// addi r8,r31,656
	ctx.r8.s64 = ctx.r31.s64 + 656;
	// addi r7,r9,-11068
	ctx.r7.s64 = ctx.r9.s64 + -11068;
	// stfs f30,648(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stfs f31,652(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,-11068(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11068);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r6.u32);
	// stw r5,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r5.u32);
	// stw r4,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r4.u32);
	// stw r3,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r3.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83291564:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83291564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83291564;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// bl 0x82ca3190
	ctx.lr = 0x83291580;
	sub_82CA3190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329159C"))) PPC_WEAK_FUNC(sub_8329159C);
PPC_FUNC_IMPL(__imp__sub_8329159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832915A0"))) PPC_WEAK_FUNC(sub_832915A0);
PPC_FUNC_IMPL(__imp__sub_832915A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
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
	ctx.r7.s64 = ctx.r11.s64 + -26808;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832915CC"))) PPC_WEAK_FUNC(sub_832915CC);
PPC_FUNC_IMPL(__imp__sub_832915CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832915D0"))) PPC_WEAK_FUNC(sub_832915D0);
PPC_FUNC_IMPL(__imp__sub_832915D0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
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
	ctx.r7.s64 = ctx.r11.s64 + -26744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832915FC"))) PPC_WEAK_FUNC(sub_832915FC);
PPC_FUNC_IMPL(__imp__sub_832915FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291600"))) PPC_WEAK_FUNC(sub_83291600);
PPC_FUNC_IMPL(__imp__sub_83291600) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,22168
	ctx.r3.s64 = ctx.r9.s64 + 22168;
	// addi r6,r11,-9608
	ctx.r6.s64 = ctx.r11.s64 + -9608;
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

__attribute__((alias("__imp__sub_8329162C"))) PPC_WEAK_FUNC(sub_8329162C);
PPC_FUNC_IMPL(__imp__sub_8329162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291630"))) PPC_WEAK_FUNC(sub_83291630);
PPC_FUNC_IMPL(__imp__sub_83291630) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r9,-9312
	ctx.r4.s64 = ctx.r9.s64 + -9312;
	// addi r3,r8,22084
	ctx.r3.s64 = ctx.r8.s64 + 22084;
	// addi r6,r10,-9608
	ctx.r6.s64 = ctx.r10.s64 + -9608;
	// addi r9,r11,-14744
	ctx.r9.s64 = ctx.r11.s64 + -14744;
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

__attribute__((alias("__imp__sub_83291660"))) PPC_WEAK_FUNC(sub_83291660);
PPC_FUNC_IMPL(__imp__sub_83291660) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-31949
	ctx.r4.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// lis r5,-32058
	ctx.r5.s64 = -2100953088;
	// addi r3,r4,21972
	ctx.r3.s64 = ctx.r4.s64 + 21972;
	// addi r9,r11,-15296
	ctx.r9.s64 = ctx.r11.s64 + -15296;
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

__attribute__((alias("__imp__sub_83291690"))) PPC_WEAK_FUNC(sub_83291690);
PPC_FUNC_IMPL(__imp__sub_83291690) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
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
	ctx.r7.s64 = ctx.r11.s64 + -15840;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832916C0"))) PPC_WEAK_FUNC(sub_832916C0);
PPC_FUNC_IMPL(__imp__sub_832916C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
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
	ctx.r8.s64 = ctx.r11.s64 + -17216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c5dad8
	sub_82C5DAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832916F0"))) PPC_WEAK_FUNC(sub_832916F0);
PPC_FUNC_IMPL(__imp__sub_832916F0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// addi r6,r9,-9592
	ctx.r6.s64 = ctx.r9.s64 + -9592;
	// addi r4,r8,12224
	ctx.r4.s64 = ctx.r8.s64 + 12224;
	// addi r3,r7,22224
	ctx.r3.s64 = ctx.r7.s64 + 22224;
	// addi r9,r11,-16968
	ctx.r9.s64 = ctx.r11.s64 + -16968;
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

__attribute__((alias("__imp__sub_83291724"))) PPC_WEAK_FUNC(sub_83291724);
PPC_FUNC_IMPL(__imp__sub_83291724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291728"))) PPC_WEAK_FUNC(sub_83291728);
PPC_FUNC_IMPL(__imp__sub_83291728) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r9,22364
	ctx.r3.s64 = ctx.r9.s64 + 22364;
	// addi r6,r11,-9592
	ctx.r6.s64 = ctx.r11.s64 + -9592;
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

__attribute__((alias("__imp__sub_83291754"))) PPC_WEAK_FUNC(sub_83291754);
PPC_FUNC_IMPL(__imp__sub_83291754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291758"))) PPC_WEAK_FUNC(sub_83291758);
PPC_FUNC_IMPL(__imp__sub_83291758) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,22028
	ctx.r3.s64 = ctx.r9.s64 + 22028;
	// addi r6,r11,-9608
	ctx.r6.s64 = ctx.r11.s64 + -9608;
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

__attribute__((alias("__imp__sub_83291784"))) PPC_WEAK_FUNC(sub_83291784);
PPC_FUNC_IMPL(__imp__sub_83291784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291788"))) PPC_WEAK_FUNC(sub_83291788);
PPC_FUNC_IMPL(__imp__sub_83291788) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r9,22196
	ctx.r3.s64 = ctx.r9.s64 + 22196;
	// addi r6,r11,-9320
	ctx.r6.s64 = ctx.r11.s64 + -9320;
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

