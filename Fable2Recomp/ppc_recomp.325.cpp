#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8328CEF4"))) PPC_WEAK_FUNC(sub_8328CEF4);
PPC_FUNC_IMPL(__imp__sub_8328CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CEF8"))) PPC_WEAK_FUNC(sub_8328CEF8);
PPC_FUNC_IMPL(__imp__sub_8328CEF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16948
	ctx.r3.s64 = ctx.r11.s64 + -16948;
	// bl 0x82188cf0
	ctx.lr = 0x8328CF10;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7644, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CF2C"))) PPC_WEAK_FUNC(sub_8328CF2C);
PPC_FUNC_IMPL(__imp__sub_8328CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CF30"))) PPC_WEAK_FUNC(sub_8328CF30);
PPC_FUNC_IMPL(__imp__sub_8328CF30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16940
	ctx.r3.s64 = ctx.r11.s64 + -16940;
	// bl 0x82188cf0
	ctx.lr = 0x8328CF48;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7640, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CF64"))) PPC_WEAK_FUNC(sub_8328CF64);
PPC_FUNC_IMPL(__imp__sub_8328CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CF68"))) PPC_WEAK_FUNC(sub_8328CF68);
PPC_FUNC_IMPL(__imp__sub_8328CF68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16932
	ctx.r3.s64 = ctx.r11.s64 + -16932;
	// bl 0x82188cf0
	ctx.lr = 0x8328CF80;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7636, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CF9C"))) PPC_WEAK_FUNC(sub_8328CF9C);
PPC_FUNC_IMPL(__imp__sub_8328CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CFA0"))) PPC_WEAK_FUNC(sub_8328CFA0);
PPC_FUNC_IMPL(__imp__sub_8328CFA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16924
	ctx.r3.s64 = ctx.r11.s64 + -16924;
	// bl 0x82188cf0
	ctx.lr = 0x8328CFB8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7632, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CFD4"))) PPC_WEAK_FUNC(sub_8328CFD4);
PPC_FUNC_IMPL(__imp__sub_8328CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328CFD8"))) PPC_WEAK_FUNC(sub_8328CFD8);
PPC_FUNC_IMPL(__imp__sub_8328CFD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16916
	ctx.r3.s64 = ctx.r11.s64 + -16916;
	// bl 0x82188cf0
	ctx.lr = 0x8328CFF0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7628, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D00C"))) PPC_WEAK_FUNC(sub_8328D00C);
PPC_FUNC_IMPL(__imp__sub_8328D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D010"))) PPC_WEAK_FUNC(sub_8328D010);
PPC_FUNC_IMPL(__imp__sub_8328D010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16900
	ctx.r3.s64 = ctx.r11.s64 + -16900;
	// bl 0x82188cf0
	ctx.lr = 0x8328D028;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7624, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D044"))) PPC_WEAK_FUNC(sub_8328D044);
PPC_FUNC_IMPL(__imp__sub_8328D044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D048"))) PPC_WEAK_FUNC(sub_8328D048);
PPC_FUNC_IMPL(__imp__sub_8328D048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// bl 0x82188cf0
	ctx.lr = 0x8328D060;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7620, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D07C"))) PPC_WEAK_FUNC(sub_8328D07C);
PPC_FUNC_IMPL(__imp__sub_8328D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D080"))) PPC_WEAK_FUNC(sub_8328D080);
PPC_FUNC_IMPL(__imp__sub_8328D080) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16876
	ctx.r3.s64 = ctx.r11.s64 + -16876;
	// bl 0x82188cf0
	ctx.lr = 0x8328D098;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7616, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D0B4"))) PPC_WEAK_FUNC(sub_8328D0B4);
PPC_FUNC_IMPL(__imp__sub_8328D0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D0B8"))) PPC_WEAK_FUNC(sub_8328D0B8);
PPC_FUNC_IMPL(__imp__sub_8328D0B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16868
	ctx.r3.s64 = ctx.r11.s64 + -16868;
	// bl 0x82188cf0
	ctx.lr = 0x8328D0D0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7612, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D0EC"))) PPC_WEAK_FUNC(sub_8328D0EC);
PPC_FUNC_IMPL(__imp__sub_8328D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D0F0"))) PPC_WEAK_FUNC(sub_8328D0F0);
PPC_FUNC_IMPL(__imp__sub_8328D0F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// bl 0x82188cf0
	ctx.lr = 0x8328D108;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7608, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D124"))) PPC_WEAK_FUNC(sub_8328D124);
PPC_FUNC_IMPL(__imp__sub_8328D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D128"))) PPC_WEAK_FUNC(sub_8328D128);
PPC_FUNC_IMPL(__imp__sub_8328D128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// bl 0x82188cf0
	ctx.lr = 0x8328D140;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7604, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D15C"))) PPC_WEAK_FUNC(sub_8328D15C);
PPC_FUNC_IMPL(__imp__sub_8328D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D160"))) PPC_WEAK_FUNC(sub_8328D160);
PPC_FUNC_IMPL(__imp__sub_8328D160) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// bl 0x82188cf0
	ctx.lr = 0x8328D178;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7600, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D194"))) PPC_WEAK_FUNC(sub_8328D194);
PPC_FUNC_IMPL(__imp__sub_8328D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D198"))) PPC_WEAK_FUNC(sub_8328D198);
PPC_FUNC_IMPL(__imp__sub_8328D198) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16836
	ctx.r3.s64 = ctx.r11.s64 + -16836;
	// bl 0x82188cf0
	ctx.lr = 0x8328D1B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7596, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D1CC"))) PPC_WEAK_FUNC(sub_8328D1CC);
PPC_FUNC_IMPL(__imp__sub_8328D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D1D0"))) PPC_WEAK_FUNC(sub_8328D1D0);
PPC_FUNC_IMPL(__imp__sub_8328D1D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16824
	ctx.r3.s64 = ctx.r11.s64 + -16824;
	// bl 0x82188cf0
	ctx.lr = 0x8328D1E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7592, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D204"))) PPC_WEAK_FUNC(sub_8328D204);
PPC_FUNC_IMPL(__imp__sub_8328D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D208"))) PPC_WEAK_FUNC(sub_8328D208);
PPC_FUNC_IMPL(__imp__sub_8328D208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16812
	ctx.r3.s64 = ctx.r11.s64 + -16812;
	// bl 0x82188cf0
	ctx.lr = 0x8328D220;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7588, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D23C"))) PPC_WEAK_FUNC(sub_8328D23C);
PPC_FUNC_IMPL(__imp__sub_8328D23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D240"))) PPC_WEAK_FUNC(sub_8328D240);
PPC_FUNC_IMPL(__imp__sub_8328D240) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16800
	ctx.r3.s64 = ctx.r11.s64 + -16800;
	// bl 0x82188cf0
	ctx.lr = 0x8328D258;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7584, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D274"))) PPC_WEAK_FUNC(sub_8328D274);
PPC_FUNC_IMPL(__imp__sub_8328D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D278"))) PPC_WEAK_FUNC(sub_8328D278);
PPC_FUNC_IMPL(__imp__sub_8328D278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11180
	ctx.r3.s64 = ctx.r11.s64 + 11180;
	// bl 0x82188cf0
	ctx.lr = 0x8328D290;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7580, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D2AC"))) PPC_WEAK_FUNC(sub_8328D2AC);
PPC_FUNC_IMPL(__imp__sub_8328D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D2B0"))) PPC_WEAK_FUNC(sub_8328D2B0);
PPC_FUNC_IMPL(__imp__sub_8328D2B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// bl 0x82188cf0
	ctx.lr = 0x8328D2C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7576, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D2E4"))) PPC_WEAK_FUNC(sub_8328D2E4);
PPC_FUNC_IMPL(__imp__sub_8328D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D2E8"))) PPC_WEAK_FUNC(sub_8328D2E8);
PPC_FUNC_IMPL(__imp__sub_8328D2E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16768
	ctx.r3.s64 = ctx.r11.s64 + -16768;
	// bl 0x82188cf0
	ctx.lr = 0x8328D300;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7572, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D31C"))) PPC_WEAK_FUNC(sub_8328D31C);
PPC_FUNC_IMPL(__imp__sub_8328D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D320"))) PPC_WEAK_FUNC(sub_8328D320);
PPC_FUNC_IMPL(__imp__sub_8328D320) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16756
	ctx.r3.s64 = ctx.r11.s64 + -16756;
	// bl 0x82188cf0
	ctx.lr = 0x8328D338;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7568, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D354"))) PPC_WEAK_FUNC(sub_8328D354);
PPC_FUNC_IMPL(__imp__sub_8328D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D358"))) PPC_WEAK_FUNC(sub_8328D358);
PPC_FUNC_IMPL(__imp__sub_8328D358) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x82188cf0
	ctx.lr = 0x8328D370;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7564, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D38C"))) PPC_WEAK_FUNC(sub_8328D38C);
PPC_FUNC_IMPL(__imp__sub_8328D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D390"))) PPC_WEAK_FUNC(sub_8328D390);
PPC_FUNC_IMPL(__imp__sub_8328D390) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// bl 0x82188cf0
	ctx.lr = 0x8328D3A8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7560, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D3C4"))) PPC_WEAK_FUNC(sub_8328D3C4);
PPC_FUNC_IMPL(__imp__sub_8328D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D3C8"))) PPC_WEAK_FUNC(sub_8328D3C8);
PPC_FUNC_IMPL(__imp__sub_8328D3C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16720
	ctx.r3.s64 = ctx.r11.s64 + -16720;
	// bl 0x82188cf0
	ctx.lr = 0x8328D3E0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7556, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D3FC"))) PPC_WEAK_FUNC(sub_8328D3FC);
PPC_FUNC_IMPL(__imp__sub_8328D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D400"))) PPC_WEAK_FUNC(sub_8328D400);
PPC_FUNC_IMPL(__imp__sub_8328D400) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16704
	ctx.r3.s64 = ctx.r11.s64 + -16704;
	// bl 0x82188cf0
	ctx.lr = 0x8328D418;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7552, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D434"))) PPC_WEAK_FUNC(sub_8328D434);
PPC_FUNC_IMPL(__imp__sub_8328D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D438"))) PPC_WEAK_FUNC(sub_8328D438);
PPC_FUNC_IMPL(__imp__sub_8328D438) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// bl 0x82188cf0
	ctx.lr = 0x8328D450;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7548, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D46C"))) PPC_WEAK_FUNC(sub_8328D46C);
PPC_FUNC_IMPL(__imp__sub_8328D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D470"))) PPC_WEAK_FUNC(sub_8328D470);
PPC_FUNC_IMPL(__imp__sub_8328D470) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16672
	ctx.r3.s64 = ctx.r11.s64 + -16672;
	// bl 0x82188cf0
	ctx.lr = 0x8328D488;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7544, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D4A4"))) PPC_WEAK_FUNC(sub_8328D4A4);
PPC_FUNC_IMPL(__imp__sub_8328D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D4A8"))) PPC_WEAK_FUNC(sub_8328D4A8);
PPC_FUNC_IMPL(__imp__sub_8328D4A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16656
	ctx.r3.s64 = ctx.r11.s64 + -16656;
	// bl 0x82188cf0
	ctx.lr = 0x8328D4C0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7540, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D4DC"))) PPC_WEAK_FUNC(sub_8328D4DC);
PPC_FUNC_IMPL(__imp__sub_8328D4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D4E0"))) PPC_WEAK_FUNC(sub_8328D4E0);
PPC_FUNC_IMPL(__imp__sub_8328D4E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16640
	ctx.r3.s64 = ctx.r11.s64 + -16640;
	// bl 0x82188cf0
	ctx.lr = 0x8328D4F8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7536, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D514"))) PPC_WEAK_FUNC(sub_8328D514);
PPC_FUNC_IMPL(__imp__sub_8328D514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D518"))) PPC_WEAK_FUNC(sub_8328D518);
PPC_FUNC_IMPL(__imp__sub_8328D518) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16624
	ctx.r3.s64 = ctx.r11.s64 + -16624;
	// bl 0x82188cf0
	ctx.lr = 0x8328D530;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7532, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D54C"))) PPC_WEAK_FUNC(sub_8328D54C);
PPC_FUNC_IMPL(__imp__sub_8328D54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D550"))) PPC_WEAK_FUNC(sub_8328D550);
PPC_FUNC_IMPL(__imp__sub_8328D550) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16608
	ctx.r3.s64 = ctx.r11.s64 + -16608;
	// bl 0x82188cf0
	ctx.lr = 0x8328D568;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7528, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D584"))) PPC_WEAK_FUNC(sub_8328D584);
PPC_FUNC_IMPL(__imp__sub_8328D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D588"))) PPC_WEAK_FUNC(sub_8328D588);
PPC_FUNC_IMPL(__imp__sub_8328D588) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16592
	ctx.r3.s64 = ctx.r11.s64 + -16592;
	// bl 0x82188cf0
	ctx.lr = 0x8328D5A0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7524, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D5BC"))) PPC_WEAK_FUNC(sub_8328D5BC);
PPC_FUNC_IMPL(__imp__sub_8328D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D5C0"))) PPC_WEAK_FUNC(sub_8328D5C0);
PPC_FUNC_IMPL(__imp__sub_8328D5C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16576
	ctx.r3.s64 = ctx.r11.s64 + -16576;
	// bl 0x82188cf0
	ctx.lr = 0x8328D5D8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7520, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D5F4"))) PPC_WEAK_FUNC(sub_8328D5F4);
PPC_FUNC_IMPL(__imp__sub_8328D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D5F8"))) PPC_WEAK_FUNC(sub_8328D5F8);
PPC_FUNC_IMPL(__imp__sub_8328D5F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16560
	ctx.r3.s64 = ctx.r11.s64 + -16560;
	// bl 0x82188cf0
	ctx.lr = 0x8328D610;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D62C"))) PPC_WEAK_FUNC(sub_8328D62C);
PPC_FUNC_IMPL(__imp__sub_8328D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D630"))) PPC_WEAK_FUNC(sub_8328D630);
PPC_FUNC_IMPL(__imp__sub_8328D630) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16548
	ctx.r3.s64 = ctx.r11.s64 + -16548;
	// bl 0x82188cf0
	ctx.lr = 0x8328D648;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7512, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D664"))) PPC_WEAK_FUNC(sub_8328D664);
PPC_FUNC_IMPL(__imp__sub_8328D664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D668"))) PPC_WEAK_FUNC(sub_8328D668);
PPC_FUNC_IMPL(__imp__sub_8328D668) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16536
	ctx.r3.s64 = ctx.r11.s64 + -16536;
	// bl 0x82188cf0
	ctx.lr = 0x8328D680;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7508, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D69C"))) PPC_WEAK_FUNC(sub_8328D69C);
PPC_FUNC_IMPL(__imp__sub_8328D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D6A0"))) PPC_WEAK_FUNC(sub_8328D6A0);
PPC_FUNC_IMPL(__imp__sub_8328D6A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16524
	ctx.r3.s64 = ctx.r11.s64 + -16524;
	// bl 0x82188cf0
	ctx.lr = 0x8328D6B8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7504, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D6D4"))) PPC_WEAK_FUNC(sub_8328D6D4);
PPC_FUNC_IMPL(__imp__sub_8328D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D6D8"))) PPC_WEAK_FUNC(sub_8328D6D8);
PPC_FUNC_IMPL(__imp__sub_8328D6D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x82188cf0
	ctx.lr = 0x8328D6F0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7500, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D70C"))) PPC_WEAK_FUNC(sub_8328D70C);
PPC_FUNC_IMPL(__imp__sub_8328D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D710"))) PPC_WEAK_FUNC(sub_8328D710);
PPC_FUNC_IMPL(__imp__sub_8328D710) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16500
	ctx.r3.s64 = ctx.r11.s64 + -16500;
	// bl 0x82188cf0
	ctx.lr = 0x8328D728;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7496, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D744"))) PPC_WEAK_FUNC(sub_8328D744);
PPC_FUNC_IMPL(__imp__sub_8328D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D748"))) PPC_WEAK_FUNC(sub_8328D748);
PPC_FUNC_IMPL(__imp__sub_8328D748) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16488
	ctx.r3.s64 = ctx.r11.s64 + -16488;
	// bl 0x82188cf0
	ctx.lr = 0x8328D760;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7492, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D77C"))) PPC_WEAK_FUNC(sub_8328D77C);
PPC_FUNC_IMPL(__imp__sub_8328D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D780"))) PPC_WEAK_FUNC(sub_8328D780);
PPC_FUNC_IMPL(__imp__sub_8328D780) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16476
	ctx.r3.s64 = ctx.r11.s64 + -16476;
	// bl 0x82188cf0
	ctx.lr = 0x8328D798;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7488, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D7B4"))) PPC_WEAK_FUNC(sub_8328D7B4);
PPC_FUNC_IMPL(__imp__sub_8328D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D7B8"))) PPC_WEAK_FUNC(sub_8328D7B8);
PPC_FUNC_IMPL(__imp__sub_8328D7B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16464
	ctx.r3.s64 = ctx.r11.s64 + -16464;
	// bl 0x82188cf0
	ctx.lr = 0x8328D7D0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7484, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D7EC"))) PPC_WEAK_FUNC(sub_8328D7EC);
PPC_FUNC_IMPL(__imp__sub_8328D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D7F0"))) PPC_WEAK_FUNC(sub_8328D7F0);
PPC_FUNC_IMPL(__imp__sub_8328D7F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16452
	ctx.r3.s64 = ctx.r11.s64 + -16452;
	// bl 0x82188cf0
	ctx.lr = 0x8328D808;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7480, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D824"))) PPC_WEAK_FUNC(sub_8328D824);
PPC_FUNC_IMPL(__imp__sub_8328D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D828"))) PPC_WEAK_FUNC(sub_8328D828);
PPC_FUNC_IMPL(__imp__sub_8328D828) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16436
	ctx.r3.s64 = ctx.r11.s64 + -16436;
	// bl 0x82188cf0
	ctx.lr = 0x8328D840;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7476, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D85C"))) PPC_WEAK_FUNC(sub_8328D85C);
PPC_FUNC_IMPL(__imp__sub_8328D85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D860"))) PPC_WEAK_FUNC(sub_8328D860);
PPC_FUNC_IMPL(__imp__sub_8328D860) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// bl 0x82188cf0
	ctx.lr = 0x8328D878;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7472, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D894"))) PPC_WEAK_FUNC(sub_8328D894);
PPC_FUNC_IMPL(__imp__sub_8328D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D898"))) PPC_WEAK_FUNC(sub_8328D898);
PPC_FUNC_IMPL(__imp__sub_8328D898) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16412
	ctx.r3.s64 = ctx.r11.s64 + -16412;
	// bl 0x82188cf0
	ctx.lr = 0x8328D8B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D8CC"))) PPC_WEAK_FUNC(sub_8328D8CC);
PPC_FUNC_IMPL(__imp__sub_8328D8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D8D0"))) PPC_WEAK_FUNC(sub_8328D8D0);
PPC_FUNC_IMPL(__imp__sub_8328D8D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// bl 0x82188cf0
	ctx.lr = 0x8328D8E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D904"))) PPC_WEAK_FUNC(sub_8328D904);
PPC_FUNC_IMPL(__imp__sub_8328D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D908"))) PPC_WEAK_FUNC(sub_8328D908);
PPC_FUNC_IMPL(__imp__sub_8328D908) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16392
	ctx.r3.s64 = ctx.r11.s64 + -16392;
	// bl 0x82188cf0
	ctx.lr = 0x8328D920;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D93C"))) PPC_WEAK_FUNC(sub_8328D93C);
PPC_FUNC_IMPL(__imp__sub_8328D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D940"))) PPC_WEAK_FUNC(sub_8328D940);
PPC_FUNC_IMPL(__imp__sub_8328D940) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -16384;
	// bl 0x82188cf0
	ctx.lr = 0x8328D958;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7456, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D974"))) PPC_WEAK_FUNC(sub_8328D974);
PPC_FUNC_IMPL(__imp__sub_8328D974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D978"))) PPC_WEAK_FUNC(sub_8328D978);
PPC_FUNC_IMPL(__imp__sub_8328D978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// bl 0x82188cf0
	ctx.lr = 0x8328D990;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7452, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D9AC"))) PPC_WEAK_FUNC(sub_8328D9AC);
PPC_FUNC_IMPL(__imp__sub_8328D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D9B0"))) PPC_WEAK_FUNC(sub_8328D9B0);
PPC_FUNC_IMPL(__imp__sub_8328D9B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16368
	ctx.r3.s64 = ctx.r11.s64 + -16368;
	// bl 0x82188cf0
	ctx.lr = 0x8328D9C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7448, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D9E4"))) PPC_WEAK_FUNC(sub_8328D9E4);
PPC_FUNC_IMPL(__imp__sub_8328D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328D9E8"))) PPC_WEAK_FUNC(sub_8328D9E8);
PPC_FUNC_IMPL(__imp__sub_8328D9E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16352
	ctx.r3.s64 = ctx.r11.s64 + -16352;
	// bl 0x82188cf0
	ctx.lr = 0x8328DA00;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DA1C"))) PPC_WEAK_FUNC(sub_8328DA1C);
PPC_FUNC_IMPL(__imp__sub_8328DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DA20"))) PPC_WEAK_FUNC(sub_8328DA20);
PPC_FUNC_IMPL(__imp__sub_8328DA20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16336
	ctx.r3.s64 = ctx.r11.s64 + -16336;
	// bl 0x82188cf0
	ctx.lr = 0x8328DA38;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7440, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DA54"))) PPC_WEAK_FUNC(sub_8328DA54);
PPC_FUNC_IMPL(__imp__sub_8328DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DA58"))) PPC_WEAK_FUNC(sub_8328DA58);
PPC_FUNC_IMPL(__imp__sub_8328DA58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// bl 0x82188cf0
	ctx.lr = 0x8328DA70;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7436, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DA8C"))) PPC_WEAK_FUNC(sub_8328DA8C);
PPC_FUNC_IMPL(__imp__sub_8328DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DA90"))) PPC_WEAK_FUNC(sub_8328DA90);
PPC_FUNC_IMPL(__imp__sub_8328DA90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16308
	ctx.r3.s64 = ctx.r11.s64 + -16308;
	// bl 0x82188cf0
	ctx.lr = 0x8328DAA8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7432, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DAC4"))) PPC_WEAK_FUNC(sub_8328DAC4);
PPC_FUNC_IMPL(__imp__sub_8328DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DAC8"))) PPC_WEAK_FUNC(sub_8328DAC8);
PPC_FUNC_IMPL(__imp__sub_8328DAC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// bl 0x82188cf0
	ctx.lr = 0x8328DAE0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7428, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DAFC"))) PPC_WEAK_FUNC(sub_8328DAFC);
PPC_FUNC_IMPL(__imp__sub_8328DAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DB00"))) PPC_WEAK_FUNC(sub_8328DB00);
PPC_FUNC_IMPL(__imp__sub_8328DB00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16284
	ctx.r3.s64 = ctx.r11.s64 + -16284;
	// bl 0x82188cf0
	ctx.lr = 0x8328DB18;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7424, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DB34"))) PPC_WEAK_FUNC(sub_8328DB34);
PPC_FUNC_IMPL(__imp__sub_8328DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DB38"))) PPC_WEAK_FUNC(sub_8328DB38);
PPC_FUNC_IMPL(__imp__sub_8328DB38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16268
	ctx.r3.s64 = ctx.r11.s64 + -16268;
	// bl 0x82188cf0
	ctx.lr = 0x8328DB50;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7420, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DB6C"))) PPC_WEAK_FUNC(sub_8328DB6C);
PPC_FUNC_IMPL(__imp__sub_8328DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DB70"))) PPC_WEAK_FUNC(sub_8328DB70);
PPC_FUNC_IMPL(__imp__sub_8328DB70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16252
	ctx.r3.s64 = ctx.r11.s64 + -16252;
	// bl 0x82188cf0
	ctx.lr = 0x8328DB88;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7416, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DBA4"))) PPC_WEAK_FUNC(sub_8328DBA4);
PPC_FUNC_IMPL(__imp__sub_8328DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DBA8"))) PPC_WEAK_FUNC(sub_8328DBA8);
PPC_FUNC_IMPL(__imp__sub_8328DBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22708
	ctx.r3.s64 = ctx.r11.s64 + -22708;
	// bl 0x82188cf0
	ctx.lr = 0x8328DBC0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7412, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DBDC"))) PPC_WEAK_FUNC(sub_8328DBDC);
PPC_FUNC_IMPL(__imp__sub_8328DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DBE0"))) PPC_WEAK_FUNC(sub_8328DBE0);
PPC_FUNC_IMPL(__imp__sub_8328DBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// bl 0x82188cf0
	ctx.lr = 0x8328DBF8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7408, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC14"))) PPC_WEAK_FUNC(sub_8328DC14);
PPC_FUNC_IMPL(__imp__sub_8328DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DC18"))) PPC_WEAK_FUNC(sub_8328DC18);
PPC_FUNC_IMPL(__imp__sub_8328DC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22684
	ctx.r3.s64 = ctx.r11.s64 + -22684;
	// bl 0x82188cf0
	ctx.lr = 0x8328DC30;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7404, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC4C"))) PPC_WEAK_FUNC(sub_8328DC4C);
PPC_FUNC_IMPL(__imp__sub_8328DC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DC50"))) PPC_WEAK_FUNC(sub_8328DC50);
PPC_FUNC_IMPL(__imp__sub_8328DC50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16240
	ctx.r3.s64 = ctx.r11.s64 + -16240;
	// bl 0x82188cf0
	ctx.lr = 0x8328DC68;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7400, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC84"))) PPC_WEAK_FUNC(sub_8328DC84);
PPC_FUNC_IMPL(__imp__sub_8328DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DC88"))) PPC_WEAK_FUNC(sub_8328DC88);
PPC_FUNC_IMPL(__imp__sub_8328DC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// bl 0x82188cf0
	ctx.lr = 0x8328DCA0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7396, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DCBC"))) PPC_WEAK_FUNC(sub_8328DCBC);
PPC_FUNC_IMPL(__imp__sub_8328DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DCC0"))) PPC_WEAK_FUNC(sub_8328DCC0);
PPC_FUNC_IMPL(__imp__sub_8328DCC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16228
	ctx.r3.s64 = ctx.r11.s64 + -16228;
	// bl 0x82188cf0
	ctx.lr = 0x8328DCD8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7392, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DCF4"))) PPC_WEAK_FUNC(sub_8328DCF4);
PPC_FUNC_IMPL(__imp__sub_8328DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DCF8"))) PPC_WEAK_FUNC(sub_8328DCF8);
PPC_FUNC_IMPL(__imp__sub_8328DCF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// bl 0x82188cf0
	ctx.lr = 0x8328DD10;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7388, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DD2C"))) PPC_WEAK_FUNC(sub_8328DD2C);
PPC_FUNC_IMPL(__imp__sub_8328DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DD30"))) PPC_WEAK_FUNC(sub_8328DD30);
PPC_FUNC_IMPL(__imp__sub_8328DD30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16208
	ctx.r3.s64 = ctx.r11.s64 + -16208;
	// bl 0x82188cf0
	ctx.lr = 0x8328DD48;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7384, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DD64"))) PPC_WEAK_FUNC(sub_8328DD64);
PPC_FUNC_IMPL(__imp__sub_8328DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DD68"))) PPC_WEAK_FUNC(sub_8328DD68);
PPC_FUNC_IMPL(__imp__sub_8328DD68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16200
	ctx.r3.s64 = ctx.r11.s64 + -16200;
	// bl 0x82188cf0
	ctx.lr = 0x8328DD80;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7380, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DD9C"))) PPC_WEAK_FUNC(sub_8328DD9C);
PPC_FUNC_IMPL(__imp__sub_8328DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DDA0"))) PPC_WEAK_FUNC(sub_8328DDA0);
PPC_FUNC_IMPL(__imp__sub_8328DDA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16188
	ctx.r3.s64 = ctx.r11.s64 + -16188;
	// bl 0x82188cf0
	ctx.lr = 0x8328DDB8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7376, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DDD4"))) PPC_WEAK_FUNC(sub_8328DDD4);
PPC_FUNC_IMPL(__imp__sub_8328DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DDD8"))) PPC_WEAK_FUNC(sub_8328DDD8);
PPC_FUNC_IMPL(__imp__sub_8328DDD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16176
	ctx.r3.s64 = ctx.r11.s64 + -16176;
	// bl 0x82188cf0
	ctx.lr = 0x8328DDF0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7372, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DE0C"))) PPC_WEAK_FUNC(sub_8328DE0C);
PPC_FUNC_IMPL(__imp__sub_8328DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DE10"))) PPC_WEAK_FUNC(sub_8328DE10);
PPC_FUNC_IMPL(__imp__sub_8328DE10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16164
	ctx.r3.s64 = ctx.r11.s64 + -16164;
	// bl 0x82188cf0
	ctx.lr = 0x8328DE28;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7368, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DE44"))) PPC_WEAK_FUNC(sub_8328DE44);
PPC_FUNC_IMPL(__imp__sub_8328DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DE48"))) PPC_WEAK_FUNC(sub_8328DE48);
PPC_FUNC_IMPL(__imp__sub_8328DE48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// bl 0x82188cf0
	ctx.lr = 0x8328DE60;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DE7C"))) PPC_WEAK_FUNC(sub_8328DE7C);
PPC_FUNC_IMPL(__imp__sub_8328DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DE80"))) PPC_WEAK_FUNC(sub_8328DE80);
PPC_FUNC_IMPL(__imp__sub_8328DE80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16140
	ctx.r3.s64 = ctx.r11.s64 + -16140;
	// bl 0x82188cf0
	ctx.lr = 0x8328DE98;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7360, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DEB4"))) PPC_WEAK_FUNC(sub_8328DEB4);
PPC_FUNC_IMPL(__imp__sub_8328DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DEB8"))) PPC_WEAK_FUNC(sub_8328DEB8);
PPC_FUNC_IMPL(__imp__sub_8328DEB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// bl 0x82188cf0
	ctx.lr = 0x8328DED0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7356, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DEEC"))) PPC_WEAK_FUNC(sub_8328DEEC);
PPC_FUNC_IMPL(__imp__sub_8328DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DEF0"))) PPC_WEAK_FUNC(sub_8328DEF0);
PPC_FUNC_IMPL(__imp__sub_8328DEF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16116
	ctx.r3.s64 = ctx.r11.s64 + -16116;
	// bl 0x82188cf0
	ctx.lr = 0x8328DF08;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7352, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DF24"))) PPC_WEAK_FUNC(sub_8328DF24);
PPC_FUNC_IMPL(__imp__sub_8328DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DF28"))) PPC_WEAK_FUNC(sub_8328DF28);
PPC_FUNC_IMPL(__imp__sub_8328DF28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16100
	ctx.r3.s64 = ctx.r11.s64 + -16100;
	// bl 0x82188cf0
	ctx.lr = 0x8328DF40;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7348, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DF5C"))) PPC_WEAK_FUNC(sub_8328DF5C);
PPC_FUNC_IMPL(__imp__sub_8328DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DF60"))) PPC_WEAK_FUNC(sub_8328DF60);
PPC_FUNC_IMPL(__imp__sub_8328DF60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// bl 0x82188cf0
	ctx.lr = 0x8328DF78;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7344, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DF94"))) PPC_WEAK_FUNC(sub_8328DF94);
PPC_FUNC_IMPL(__imp__sub_8328DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DF98"))) PPC_WEAK_FUNC(sub_8328DF98);
PPC_FUNC_IMPL(__imp__sub_8328DF98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16076
	ctx.r3.s64 = ctx.r11.s64 + -16076;
	// bl 0x82188cf0
	ctx.lr = 0x8328DFB0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DFCC"))) PPC_WEAK_FUNC(sub_8328DFCC);
PPC_FUNC_IMPL(__imp__sub_8328DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328DFD0"))) PPC_WEAK_FUNC(sub_8328DFD0);
PPC_FUNC_IMPL(__imp__sub_8328DFD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// bl 0x82188cf0
	ctx.lr = 0x8328DFE8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7336, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E004"))) PPC_WEAK_FUNC(sub_8328E004);
PPC_FUNC_IMPL(__imp__sub_8328E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E008"))) PPC_WEAK_FUNC(sub_8328E008);
PPC_FUNC_IMPL(__imp__sub_8328E008) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E020;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E03C"))) PPC_WEAK_FUNC(sub_8328E03C);
PPC_FUNC_IMPL(__imp__sub_8328E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E040"))) PPC_WEAK_FUNC(sub_8328E040);
PPC_FUNC_IMPL(__imp__sub_8328E040) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E058;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7328, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E074"))) PPC_WEAK_FUNC(sub_8328E074);
PPC_FUNC_IMPL(__imp__sub_8328E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E078"))) PPC_WEAK_FUNC(sub_8328E078);
PPC_FUNC_IMPL(__imp__sub_8328E078) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E090;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7324, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E0AC"))) PPC_WEAK_FUNC(sub_8328E0AC);
PPC_FUNC_IMPL(__imp__sub_8328E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E0B0"))) PPC_WEAK_FUNC(sub_8328E0B0);
PPC_FUNC_IMPL(__imp__sub_8328E0B0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E0C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7320, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E0E4"))) PPC_WEAK_FUNC(sub_8328E0E4);
PPC_FUNC_IMPL(__imp__sub_8328E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E0E8"))) PPC_WEAK_FUNC(sub_8328E0E8);
PPC_FUNC_IMPL(__imp__sub_8328E0E8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E100;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7316, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E11C"))) PPC_WEAK_FUNC(sub_8328E11C);
PPC_FUNC_IMPL(__imp__sub_8328E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E120"))) PPC_WEAK_FUNC(sub_8328E120);
PPC_FUNC_IMPL(__imp__sub_8328E120) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E138;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7312, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E154"))) PPC_WEAK_FUNC(sub_8328E154);
PPC_FUNC_IMPL(__imp__sub_8328E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E158"))) PPC_WEAK_FUNC(sub_8328E158);
PPC_FUNC_IMPL(__imp__sub_8328E158) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E170;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7308, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E18C"))) PPC_WEAK_FUNC(sub_8328E18C);
PPC_FUNC_IMPL(__imp__sub_8328E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E190"))) PPC_WEAK_FUNC(sub_8328E190);
PPC_FUNC_IMPL(__imp__sub_8328E190) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E1A8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7304, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E1C4"))) PPC_WEAK_FUNC(sub_8328E1C4);
PPC_FUNC_IMPL(__imp__sub_8328E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E1C8"))) PPC_WEAK_FUNC(sub_8328E1C8);
PPC_FUNC_IMPL(__imp__sub_8328E1C8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E1E0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7300, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E1FC"))) PPC_WEAK_FUNC(sub_8328E1FC);
PPC_FUNC_IMPL(__imp__sub_8328E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E200"))) PPC_WEAK_FUNC(sub_8328E200);
PPC_FUNC_IMPL(__imp__sub_8328E200) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E218;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7296, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E234"))) PPC_WEAK_FUNC(sub_8328E234);
PPC_FUNC_IMPL(__imp__sub_8328E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E238"))) PPC_WEAK_FUNC(sub_8328E238);
PPC_FUNC_IMPL(__imp__sub_8328E238) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E250;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7292, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E26C"))) PPC_WEAK_FUNC(sub_8328E26C);
PPC_FUNC_IMPL(__imp__sub_8328E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E270"))) PPC_WEAK_FUNC(sub_8328E270);
PPC_FUNC_IMPL(__imp__sub_8328E270) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E288;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7288, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E2A4"))) PPC_WEAK_FUNC(sub_8328E2A4);
PPC_FUNC_IMPL(__imp__sub_8328E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E2A8"))) PPC_WEAK_FUNC(sub_8328E2A8);
PPC_FUNC_IMPL(__imp__sub_8328E2A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E2C0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7284, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E2DC"))) PPC_WEAK_FUNC(sub_8328E2DC);
PPC_FUNC_IMPL(__imp__sub_8328E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E2E0"))) PPC_WEAK_FUNC(sub_8328E2E0);
PPC_FUNC_IMPL(__imp__sub_8328E2E0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E2F8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7280, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E314"))) PPC_WEAK_FUNC(sub_8328E314);
PPC_FUNC_IMPL(__imp__sub_8328E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E318"))) PPC_WEAK_FUNC(sub_8328E318);
PPC_FUNC_IMPL(__imp__sub_8328E318) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E330;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7276, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E34C"))) PPC_WEAK_FUNC(sub_8328E34C);
PPC_FUNC_IMPL(__imp__sub_8328E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E350"))) PPC_WEAK_FUNC(sub_8328E350);
PPC_FUNC_IMPL(__imp__sub_8328E350) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E368;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7272, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E384"))) PPC_WEAK_FUNC(sub_8328E384);
PPC_FUNC_IMPL(__imp__sub_8328E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E388"))) PPC_WEAK_FUNC(sub_8328E388);
PPC_FUNC_IMPL(__imp__sub_8328E388) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E3A0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7268, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E3BC"))) PPC_WEAK_FUNC(sub_8328E3BC);
PPC_FUNC_IMPL(__imp__sub_8328E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E3C0"))) PPC_WEAK_FUNC(sub_8328E3C0);
PPC_FUNC_IMPL(__imp__sub_8328E3C0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E3D8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7264, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E3F4"))) PPC_WEAK_FUNC(sub_8328E3F4);
PPC_FUNC_IMPL(__imp__sub_8328E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E3F8"))) PPC_WEAK_FUNC(sub_8328E3F8);
PPC_FUNC_IMPL(__imp__sub_8328E3F8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E410;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7260, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E42C"))) PPC_WEAK_FUNC(sub_8328E42C);
PPC_FUNC_IMPL(__imp__sub_8328E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E430"))) PPC_WEAK_FUNC(sub_8328E430);
PPC_FUNC_IMPL(__imp__sub_8328E430) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E448;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7256, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E464"))) PPC_WEAK_FUNC(sub_8328E464);
PPC_FUNC_IMPL(__imp__sub_8328E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E468"))) PPC_WEAK_FUNC(sub_8328E468);
PPC_FUNC_IMPL(__imp__sub_8328E468) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E480;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7252, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E49C"))) PPC_WEAK_FUNC(sub_8328E49C);
PPC_FUNC_IMPL(__imp__sub_8328E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E4A0"))) PPC_WEAK_FUNC(sub_8328E4A0);
PPC_FUNC_IMPL(__imp__sub_8328E4A0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E4B8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7248, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E4D4"))) PPC_WEAK_FUNC(sub_8328E4D4);
PPC_FUNC_IMPL(__imp__sub_8328E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E4D8"))) PPC_WEAK_FUNC(sub_8328E4D8);
PPC_FUNC_IMPL(__imp__sub_8328E4D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E4F0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7244, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E50C"))) PPC_WEAK_FUNC(sub_8328E50C);
PPC_FUNC_IMPL(__imp__sub_8328E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E510"))) PPC_WEAK_FUNC(sub_8328E510);
PPC_FUNC_IMPL(__imp__sub_8328E510) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E528;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7240, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E544"))) PPC_WEAK_FUNC(sub_8328E544);
PPC_FUNC_IMPL(__imp__sub_8328E544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E548"))) PPC_WEAK_FUNC(sub_8328E548);
PPC_FUNC_IMPL(__imp__sub_8328E548) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E560;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7236, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E57C"))) PPC_WEAK_FUNC(sub_8328E57C);
PPC_FUNC_IMPL(__imp__sub_8328E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E580"))) PPC_WEAK_FUNC(sub_8328E580);
PPC_FUNC_IMPL(__imp__sub_8328E580) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E598;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7232, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E5B4"))) PPC_WEAK_FUNC(sub_8328E5B4);
PPC_FUNC_IMPL(__imp__sub_8328E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E5B8"))) PPC_WEAK_FUNC(sub_8328E5B8);
PPC_FUNC_IMPL(__imp__sub_8328E5B8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E5D0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7228, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E5EC"))) PPC_WEAK_FUNC(sub_8328E5EC);
PPC_FUNC_IMPL(__imp__sub_8328E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E5F0"))) PPC_WEAK_FUNC(sub_8328E5F0);
PPC_FUNC_IMPL(__imp__sub_8328E5F0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E608;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7224, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E624"))) PPC_WEAK_FUNC(sub_8328E624);
PPC_FUNC_IMPL(__imp__sub_8328E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E628"))) PPC_WEAK_FUNC(sub_8328E628);
PPC_FUNC_IMPL(__imp__sub_8328E628) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E640;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7220, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E65C"))) PPC_WEAK_FUNC(sub_8328E65C);
PPC_FUNC_IMPL(__imp__sub_8328E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E660"))) PPC_WEAK_FUNC(sub_8328E660);
PPC_FUNC_IMPL(__imp__sub_8328E660) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E678;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7216, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E694"))) PPC_WEAK_FUNC(sub_8328E694);
PPC_FUNC_IMPL(__imp__sub_8328E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E698"))) PPC_WEAK_FUNC(sub_8328E698);
PPC_FUNC_IMPL(__imp__sub_8328E698) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E6B0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E6CC"))) PPC_WEAK_FUNC(sub_8328E6CC);
PPC_FUNC_IMPL(__imp__sub_8328E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E6D0"))) PPC_WEAK_FUNC(sub_8328E6D0);
PPC_FUNC_IMPL(__imp__sub_8328E6D0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E6E8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7208, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E704"))) PPC_WEAK_FUNC(sub_8328E704);
PPC_FUNC_IMPL(__imp__sub_8328E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E708"))) PPC_WEAK_FUNC(sub_8328E708);
PPC_FUNC_IMPL(__imp__sub_8328E708) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E720;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7204, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E73C"))) PPC_WEAK_FUNC(sub_8328E73C);
PPC_FUNC_IMPL(__imp__sub_8328E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E740"))) PPC_WEAK_FUNC(sub_8328E740);
PPC_FUNC_IMPL(__imp__sub_8328E740) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E758;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7200, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E774"))) PPC_WEAK_FUNC(sub_8328E774);
PPC_FUNC_IMPL(__imp__sub_8328E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E778"))) PPC_WEAK_FUNC(sub_8328E778);
PPC_FUNC_IMPL(__imp__sub_8328E778) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E790;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7196, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7AC"))) PPC_WEAK_FUNC(sub_8328E7AC);
PPC_FUNC_IMPL(__imp__sub_8328E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E7B0"))) PPC_WEAK_FUNC(sub_8328E7B0);
PPC_FUNC_IMPL(__imp__sub_8328E7B0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E7C8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7192, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7E4"))) PPC_WEAK_FUNC(sub_8328E7E4);
PPC_FUNC_IMPL(__imp__sub_8328E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E7E8"))) PPC_WEAK_FUNC(sub_8328E7E8);
PPC_FUNC_IMPL(__imp__sub_8328E7E8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E800;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7188, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E81C"))) PPC_WEAK_FUNC(sub_8328E81C);
PPC_FUNC_IMPL(__imp__sub_8328E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E820"))) PPC_WEAK_FUNC(sub_8328E820);
PPC_FUNC_IMPL(__imp__sub_8328E820) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E838;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7184, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E854"))) PPC_WEAK_FUNC(sub_8328E854);
PPC_FUNC_IMPL(__imp__sub_8328E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E858"))) PPC_WEAK_FUNC(sub_8328E858);
PPC_FUNC_IMPL(__imp__sub_8328E858) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E870;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7180, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E88C"))) PPC_WEAK_FUNC(sub_8328E88C);
PPC_FUNC_IMPL(__imp__sub_8328E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E890"))) PPC_WEAK_FUNC(sub_8328E890);
PPC_FUNC_IMPL(__imp__sub_8328E890) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1552
	ctx.r3.s64 = ctx.r9.s64 + -1552;
	// lwz r11,28560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28560);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,28560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28560, ctx.r11.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E8AC"))) PPC_WEAK_FUNC(sub_8328E8AC);
PPC_FUNC_IMPL(__imp__sub_8328E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E8B0"))) PPC_WEAK_FUNC(sub_8328E8B0);
PPC_FUNC_IMPL(__imp__sub_8328E8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-1528
	ctx.r3.s64 = ctx.r11.s64 + -1528;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E8BC"))) PPC_WEAK_FUNC(sub_8328E8BC);
PPC_FUNC_IMPL(__imp__sub_8328E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E8C0"))) PPC_WEAK_FUNC(sub_8328E8C0);
PPC_FUNC_IMPL(__imp__sub_8328E8C0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E8D8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E8F4"))) PPC_WEAK_FUNC(sub_8328E8F4);
PPC_FUNC_IMPL(__imp__sub_8328E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E8F8"))) PPC_WEAK_FUNC(sub_8328E8F8);
PPC_FUNC_IMPL(__imp__sub_8328E8F8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E910;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7108, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E92C"))) PPC_WEAK_FUNC(sub_8328E92C);
PPC_FUNC_IMPL(__imp__sub_8328E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E930"))) PPC_WEAK_FUNC(sub_8328E930);
PPC_FUNC_IMPL(__imp__sub_8328E930) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E948;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E964"))) PPC_WEAK_FUNC(sub_8328E964);
PPC_FUNC_IMPL(__imp__sub_8328E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E968"))) PPC_WEAK_FUNC(sub_8328E968);
PPC_FUNC_IMPL(__imp__sub_8328E968) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E980;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7100, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E99C"))) PPC_WEAK_FUNC(sub_8328E99C);
PPC_FUNC_IMPL(__imp__sub_8328E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E9A0"))) PPC_WEAK_FUNC(sub_8328E9A0);
PPC_FUNC_IMPL(__imp__sub_8328E9A0) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E9B8;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7096, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E9D4"))) PPC_WEAK_FUNC(sub_8328E9D4);
PPC_FUNC_IMPL(__imp__sub_8328E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328E9D8"))) PPC_WEAK_FUNC(sub_8328E9D8);
PPC_FUNC_IMPL(__imp__sub_8328E9D8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328E9F0;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7092, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EA0C"))) PPC_WEAK_FUNC(sub_8328EA0C);
PPC_FUNC_IMPL(__imp__sub_8328EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EA10"))) PPC_WEAK_FUNC(sub_8328EA10);
PPC_FUNC_IMPL(__imp__sub_8328EA10) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328EA28;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7088, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EA44"))) PPC_WEAK_FUNC(sub_8328EA44);
PPC_FUNC_IMPL(__imp__sub_8328EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EA48"))) PPC_WEAK_FUNC(sub_8328EA48);
PPC_FUNC_IMPL(__imp__sub_8328EA48) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328EA60;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7084, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EA7C"))) PPC_WEAK_FUNC(sub_8328EA7C);
PPC_FUNC_IMPL(__imp__sub_8328EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EA80"))) PPC_WEAK_FUNC(sub_8328EA80);
PPC_FUNC_IMPL(__imp__sub_8328EA80) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x8328EA98;
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7080, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

