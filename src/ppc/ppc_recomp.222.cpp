#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8328CF30"))) PPC_WEAK_FUNC(sub_8328CF30);
PPC_FUNC_IMPL(__imp__sub_8328CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16940
	ctx.r3.s64 = r11.s64 + -16940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7640, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CF68"))) PPC_WEAK_FUNC(sub_8328CF68);
PPC_FUNC_IMPL(__imp__sub_8328CF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16932
	ctx.r3.s64 = r11.s64 + -16932;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7636, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CFA0"))) PPC_WEAK_FUNC(sub_8328CFA0);
PPC_FUNC_IMPL(__imp__sub_8328CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16924
	ctx.r3.s64 = r11.s64 + -16924;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7632, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328CFD8"))) PPC_WEAK_FUNC(sub_8328CFD8);
PPC_FUNC_IMPL(__imp__sub_8328CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16916
	ctx.r3.s64 = r11.s64 + -16916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7628, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D010"))) PPC_WEAK_FUNC(sub_8328D010);
PPC_FUNC_IMPL(__imp__sub_8328D010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16900
	ctx.r3.s64 = r11.s64 + -16900;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7624, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D048"))) PPC_WEAK_FUNC(sub_8328D048);
PPC_FUNC_IMPL(__imp__sub_8328D048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16888
	ctx.r3.s64 = r11.s64 + -16888;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7620, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D080"))) PPC_WEAK_FUNC(sub_8328D080);
PPC_FUNC_IMPL(__imp__sub_8328D080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16876
	ctx.r3.s64 = r11.s64 + -16876;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7616, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D0B8"))) PPC_WEAK_FUNC(sub_8328D0B8);
PPC_FUNC_IMPL(__imp__sub_8328D0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16868
	ctx.r3.s64 = r11.s64 + -16868;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7612, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D0F0"))) PPC_WEAK_FUNC(sub_8328D0F0);
PPC_FUNC_IMPL(__imp__sub_8328D0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16864
	ctx.r3.s64 = r11.s64 + -16864;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7608, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D128"))) PPC_WEAK_FUNC(sub_8328D128);
PPC_FUNC_IMPL(__imp__sub_8328D128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16856
	ctx.r3.s64 = r11.s64 + -16856;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7604, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D160"))) PPC_WEAK_FUNC(sub_8328D160);
PPC_FUNC_IMPL(__imp__sub_8328D160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16848
	ctx.r3.s64 = r11.s64 + -16848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7600, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D198"))) PPC_WEAK_FUNC(sub_8328D198);
PPC_FUNC_IMPL(__imp__sub_8328D198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16836
	ctx.r3.s64 = r11.s64 + -16836;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7596, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D1D0"))) PPC_WEAK_FUNC(sub_8328D1D0);
PPC_FUNC_IMPL(__imp__sub_8328D1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16824
	ctx.r3.s64 = r11.s64 + -16824;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7592, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D208"))) PPC_WEAK_FUNC(sub_8328D208);
PPC_FUNC_IMPL(__imp__sub_8328D208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16812
	ctx.r3.s64 = r11.s64 + -16812;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7588, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D240"))) PPC_WEAK_FUNC(sub_8328D240);
PPC_FUNC_IMPL(__imp__sub_8328D240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16800
	ctx.r3.s64 = r11.s64 + -16800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7584, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D278"))) PPC_WEAK_FUNC(sub_8328D278);
PPC_FUNC_IMPL(__imp__sub_8328D278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,11180
	ctx.r3.s64 = r11.s64 + 11180;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7580, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D2B0"))) PPC_WEAK_FUNC(sub_8328D2B0);
PPC_FUNC_IMPL(__imp__sub_8328D2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16784
	ctx.r3.s64 = r11.s64 + -16784;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7576, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D2E8"))) PPC_WEAK_FUNC(sub_8328D2E8);
PPC_FUNC_IMPL(__imp__sub_8328D2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16768
	ctx.r3.s64 = r11.s64 + -16768;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7572, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D320"))) PPC_WEAK_FUNC(sub_8328D320);
PPC_FUNC_IMPL(__imp__sub_8328D320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16756
	ctx.r3.s64 = r11.s64 + -16756;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7568, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D358"))) PPC_WEAK_FUNC(sub_8328D358);
PPC_FUNC_IMPL(__imp__sub_8328D358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16744
	ctx.r3.s64 = r11.s64 + -16744;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7564, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D390"))) PPC_WEAK_FUNC(sub_8328D390);
PPC_FUNC_IMPL(__imp__sub_8328D390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16736
	ctx.r3.s64 = r11.s64 + -16736;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7560, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D3C8"))) PPC_WEAK_FUNC(sub_8328D3C8);
PPC_FUNC_IMPL(__imp__sub_8328D3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16720
	ctx.r3.s64 = r11.s64 + -16720;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7556, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D400"))) PPC_WEAK_FUNC(sub_8328D400);
PPC_FUNC_IMPL(__imp__sub_8328D400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16704
	ctx.r3.s64 = r11.s64 + -16704;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7552, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D438"))) PPC_WEAK_FUNC(sub_8328D438);
PPC_FUNC_IMPL(__imp__sub_8328D438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16688
	ctx.r3.s64 = r11.s64 + -16688;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7548, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D470"))) PPC_WEAK_FUNC(sub_8328D470);
PPC_FUNC_IMPL(__imp__sub_8328D470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16672
	ctx.r3.s64 = r11.s64 + -16672;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7544, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D4A8"))) PPC_WEAK_FUNC(sub_8328D4A8);
PPC_FUNC_IMPL(__imp__sub_8328D4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16656
	ctx.r3.s64 = r11.s64 + -16656;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7540, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D4E0"))) PPC_WEAK_FUNC(sub_8328D4E0);
PPC_FUNC_IMPL(__imp__sub_8328D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16640
	ctx.r3.s64 = r11.s64 + -16640;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7536, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D518"))) PPC_WEAK_FUNC(sub_8328D518);
PPC_FUNC_IMPL(__imp__sub_8328D518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16624
	ctx.r3.s64 = r11.s64 + -16624;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7532, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D550"))) PPC_WEAK_FUNC(sub_8328D550);
PPC_FUNC_IMPL(__imp__sub_8328D550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16608
	ctx.r3.s64 = r11.s64 + -16608;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7528, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D588"))) PPC_WEAK_FUNC(sub_8328D588);
PPC_FUNC_IMPL(__imp__sub_8328D588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16592
	ctx.r3.s64 = r11.s64 + -16592;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7524, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D5C0"))) PPC_WEAK_FUNC(sub_8328D5C0);
PPC_FUNC_IMPL(__imp__sub_8328D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16576
	ctx.r3.s64 = r11.s64 + -16576;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7520, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D5F8"))) PPC_WEAK_FUNC(sub_8328D5F8);
PPC_FUNC_IMPL(__imp__sub_8328D5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16560
	ctx.r3.s64 = r11.s64 + -16560;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7516, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D630"))) PPC_WEAK_FUNC(sub_8328D630);
PPC_FUNC_IMPL(__imp__sub_8328D630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16548
	ctx.r3.s64 = r11.s64 + -16548;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7512, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D668"))) PPC_WEAK_FUNC(sub_8328D668);
PPC_FUNC_IMPL(__imp__sub_8328D668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16536
	ctx.r3.s64 = r11.s64 + -16536;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7508, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D6A0"))) PPC_WEAK_FUNC(sub_8328D6A0);
PPC_FUNC_IMPL(__imp__sub_8328D6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16524
	ctx.r3.s64 = r11.s64 + -16524;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7504, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D6D8"))) PPC_WEAK_FUNC(sub_8328D6D8);
PPC_FUNC_IMPL(__imp__sub_8328D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16512
	ctx.r3.s64 = r11.s64 + -16512;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7500, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D710"))) PPC_WEAK_FUNC(sub_8328D710);
PPC_FUNC_IMPL(__imp__sub_8328D710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16500
	ctx.r3.s64 = r11.s64 + -16500;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7496, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D748"))) PPC_WEAK_FUNC(sub_8328D748);
PPC_FUNC_IMPL(__imp__sub_8328D748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16488
	ctx.r3.s64 = r11.s64 + -16488;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7492, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D780"))) PPC_WEAK_FUNC(sub_8328D780);
PPC_FUNC_IMPL(__imp__sub_8328D780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16476
	ctx.r3.s64 = r11.s64 + -16476;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7488, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D7B8"))) PPC_WEAK_FUNC(sub_8328D7B8);
PPC_FUNC_IMPL(__imp__sub_8328D7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16464
	ctx.r3.s64 = r11.s64 + -16464;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7484, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D7F0"))) PPC_WEAK_FUNC(sub_8328D7F0);
PPC_FUNC_IMPL(__imp__sub_8328D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16452
	ctx.r3.s64 = r11.s64 + -16452;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7480, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D828"))) PPC_WEAK_FUNC(sub_8328D828);
PPC_FUNC_IMPL(__imp__sub_8328D828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16436
	ctx.r3.s64 = r11.s64 + -16436;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7476, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D860"))) PPC_WEAK_FUNC(sub_8328D860);
PPC_FUNC_IMPL(__imp__sub_8328D860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16424
	ctx.r3.s64 = r11.s64 + -16424;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7472, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D898"))) PPC_WEAK_FUNC(sub_8328D898);
PPC_FUNC_IMPL(__imp__sub_8328D898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16412
	ctx.r3.s64 = r11.s64 + -16412;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7468, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D8D0"))) PPC_WEAK_FUNC(sub_8328D8D0);
PPC_FUNC_IMPL(__imp__sub_8328D8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16400
	ctx.r3.s64 = r11.s64 + -16400;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7464, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D908"))) PPC_WEAK_FUNC(sub_8328D908);
PPC_FUNC_IMPL(__imp__sub_8328D908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16392
	ctx.r3.s64 = r11.s64 + -16392;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7460, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D940"))) PPC_WEAK_FUNC(sub_8328D940);
PPC_FUNC_IMPL(__imp__sub_8328D940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -16384;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7456, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D978"))) PPC_WEAK_FUNC(sub_8328D978);
PPC_FUNC_IMPL(__imp__sub_8328D978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16376
	ctx.r3.s64 = r11.s64 + -16376;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7452, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D9B0"))) PPC_WEAK_FUNC(sub_8328D9B0);
PPC_FUNC_IMPL(__imp__sub_8328D9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16368
	ctx.r3.s64 = r11.s64 + -16368;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7448, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328D9E8"))) PPC_WEAK_FUNC(sub_8328D9E8);
PPC_FUNC_IMPL(__imp__sub_8328D9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16352
	ctx.r3.s64 = r11.s64 + -16352;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7444, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DA20"))) PPC_WEAK_FUNC(sub_8328DA20);
PPC_FUNC_IMPL(__imp__sub_8328DA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16336
	ctx.r3.s64 = r11.s64 + -16336;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7440, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DA58"))) PPC_WEAK_FUNC(sub_8328DA58);
PPC_FUNC_IMPL(__imp__sub_8328DA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16320
	ctx.r3.s64 = r11.s64 + -16320;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7436, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DA90"))) PPC_WEAK_FUNC(sub_8328DA90);
PPC_FUNC_IMPL(__imp__sub_8328DA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16308
	ctx.r3.s64 = r11.s64 + -16308;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7432, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DAC8"))) PPC_WEAK_FUNC(sub_8328DAC8);
PPC_FUNC_IMPL(__imp__sub_8328DAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16296
	ctx.r3.s64 = r11.s64 + -16296;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7428, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DB00"))) PPC_WEAK_FUNC(sub_8328DB00);
PPC_FUNC_IMPL(__imp__sub_8328DB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16284
	ctx.r3.s64 = r11.s64 + -16284;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7424, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DB38"))) PPC_WEAK_FUNC(sub_8328DB38);
PPC_FUNC_IMPL(__imp__sub_8328DB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16268
	ctx.r3.s64 = r11.s64 + -16268;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7420, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DB70"))) PPC_WEAK_FUNC(sub_8328DB70);
PPC_FUNC_IMPL(__imp__sub_8328DB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16252
	ctx.r3.s64 = r11.s64 + -16252;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7416, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DBA8"))) PPC_WEAK_FUNC(sub_8328DBA8);
PPC_FUNC_IMPL(__imp__sub_8328DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r11,-22708
	ctx.r3.s64 = r11.s64 + -22708;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7412, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DBE0"))) PPC_WEAK_FUNC(sub_8328DBE0);
PPC_FUNC_IMPL(__imp__sub_8328DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r11,-22696
	ctx.r3.s64 = r11.s64 + -22696;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7408, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC18"))) PPC_WEAK_FUNC(sub_8328DC18);
PPC_FUNC_IMPL(__imp__sub_8328DC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r11,-22684
	ctx.r3.s64 = r11.s64 + -22684;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7404, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC50"))) PPC_WEAK_FUNC(sub_8328DC50);
PPC_FUNC_IMPL(__imp__sub_8328DC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16240
	ctx.r3.s64 = r11.s64 + -16240;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7400, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DC88"))) PPC_WEAK_FUNC(sub_8328DC88);
PPC_FUNC_IMPL(__imp__sub_8328DC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r11,-22728
	ctx.r3.s64 = r11.s64 + -22728;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7396, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DCC0"))) PPC_WEAK_FUNC(sub_8328DCC0);
PPC_FUNC_IMPL(__imp__sub_8328DCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16228
	ctx.r3.s64 = r11.s64 + -16228;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7392, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DCF8"))) PPC_WEAK_FUNC(sub_8328DCF8);
PPC_FUNC_IMPL(__imp__sub_8328DCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16216
	ctx.r3.s64 = r11.s64 + -16216;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7388, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DD30"))) PPC_WEAK_FUNC(sub_8328DD30);
PPC_FUNC_IMPL(__imp__sub_8328DD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16208
	ctx.r3.s64 = r11.s64 + -16208;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7384, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DD68"))) PPC_WEAK_FUNC(sub_8328DD68);
PPC_FUNC_IMPL(__imp__sub_8328DD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16200
	ctx.r3.s64 = r11.s64 + -16200;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7380, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DDA0"))) PPC_WEAK_FUNC(sub_8328DDA0);
PPC_FUNC_IMPL(__imp__sub_8328DDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16188
	ctx.r3.s64 = r11.s64 + -16188;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7376, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DDD8"))) PPC_WEAK_FUNC(sub_8328DDD8);
PPC_FUNC_IMPL(__imp__sub_8328DDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16176
	ctx.r3.s64 = r11.s64 + -16176;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7372, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DE10"))) PPC_WEAK_FUNC(sub_8328DE10);
PPC_FUNC_IMPL(__imp__sub_8328DE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16164
	ctx.r3.s64 = r11.s64 + -16164;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7368, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DE48"))) PPC_WEAK_FUNC(sub_8328DE48);
PPC_FUNC_IMPL(__imp__sub_8328DE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16152
	ctx.r3.s64 = r11.s64 + -16152;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7364, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DE80"))) PPC_WEAK_FUNC(sub_8328DE80);
PPC_FUNC_IMPL(__imp__sub_8328DE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16140
	ctx.r3.s64 = r11.s64 + -16140;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7360, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DEB8"))) PPC_WEAK_FUNC(sub_8328DEB8);
PPC_FUNC_IMPL(__imp__sub_8328DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16128
	ctx.r3.s64 = r11.s64 + -16128;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7356, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DEF0"))) PPC_WEAK_FUNC(sub_8328DEF0);
PPC_FUNC_IMPL(__imp__sub_8328DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16116
	ctx.r3.s64 = r11.s64 + -16116;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7352, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DF28"))) PPC_WEAK_FUNC(sub_8328DF28);
PPC_FUNC_IMPL(__imp__sub_8328DF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16100
	ctx.r3.s64 = r11.s64 + -16100;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7348, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DF60"))) PPC_WEAK_FUNC(sub_8328DF60);
PPC_FUNC_IMPL(__imp__sub_8328DF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16088
	ctx.r3.s64 = r11.s64 + -16088;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7344, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DF98"))) PPC_WEAK_FUNC(sub_8328DF98);
PPC_FUNC_IMPL(__imp__sub_8328DF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16076
	ctx.r3.s64 = r11.s64 + -16076;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7340, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328DFD0"))) PPC_WEAK_FUNC(sub_8328DFD0);
PPC_FUNC_IMPL(__imp__sub_8328DFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16064
	ctx.r3.s64 = r11.s64 + -16064;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-7336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7336, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E008"))) PPC_WEAK_FUNC(sub_8328E008);
PPC_FUNC_IMPL(__imp__sub_8328E008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = r11.s64 + -16052;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7332, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E040"))) PPC_WEAK_FUNC(sub_8328E040);
PPC_FUNC_IMPL(__imp__sub_8328E040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7328, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E078"))) PPC_WEAK_FUNC(sub_8328E078);
PPC_FUNC_IMPL(__imp__sub_8328E078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = r11.s64 + -16012;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7324, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E0B0"))) PPC_WEAK_FUNC(sub_8328E0B0);
PPC_FUNC_IMPL(__imp__sub_8328E0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = r11.s64 + -15992;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7320, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E0E8"))) PPC_WEAK_FUNC(sub_8328E0E8);
PPC_FUNC_IMPL(__imp__sub_8328E0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = r11.s64 + -15976;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7316, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E120"))) PPC_WEAK_FUNC(sub_8328E120);
PPC_FUNC_IMPL(__imp__sub_8328E120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = r11.s64 + -15960;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7312, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E158"))) PPC_WEAK_FUNC(sub_8328E158);
PPC_FUNC_IMPL(__imp__sub_8328E158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = r11.s64 + -15940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7308, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E190"))) PPC_WEAK_FUNC(sub_8328E190);
PPC_FUNC_IMPL(__imp__sub_8328E190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = r11.s64 + -15916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7304, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E1C8"))) PPC_WEAK_FUNC(sub_8328E1C8);
PPC_FUNC_IMPL(__imp__sub_8328E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = r11.s64 + -15896;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7300, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E200"))) PPC_WEAK_FUNC(sub_8328E200);
PPC_FUNC_IMPL(__imp__sub_8328E200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7296, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E238"))) PPC_WEAK_FUNC(sub_8328E238);
PPC_FUNC_IMPL(__imp__sub_8328E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = r11.s64 + -15848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7292, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E270"))) PPC_WEAK_FUNC(sub_8328E270);
PPC_FUNC_IMPL(__imp__sub_8328E270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = r11.s64 + -15820;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7288, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E2A8"))) PPC_WEAK_FUNC(sub_8328E2A8);
PPC_FUNC_IMPL(__imp__sub_8328E2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = r11.s64 + -15800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7284, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E2E0"))) PPC_WEAK_FUNC(sub_8328E2E0);
PPC_FUNC_IMPL(__imp__sub_8328E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7280, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E318"))) PPC_WEAK_FUNC(sub_8328E318);
PPC_FUNC_IMPL(__imp__sub_8328E318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7276, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E350"))) PPC_WEAK_FUNC(sub_8328E350);
PPC_FUNC_IMPL(__imp__sub_8328E350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15748
	ctx.r3.s64 = r11.s64 + -15748;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7272, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E388"))) PPC_WEAK_FUNC(sub_8328E388);
PPC_FUNC_IMPL(__imp__sub_8328E388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15736
	ctx.r3.s64 = r11.s64 + -15736;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7268, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E3C0"))) PPC_WEAK_FUNC(sub_8328E3C0);
PPC_FUNC_IMPL(__imp__sub_8328E3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15724
	ctx.r3.s64 = r11.s64 + -15724;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7264, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E3F8"))) PPC_WEAK_FUNC(sub_8328E3F8);
PPC_FUNC_IMPL(__imp__sub_8328E3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15704
	ctx.r3.s64 = r11.s64 + -15704;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7260, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E430"))) PPC_WEAK_FUNC(sub_8328E430);
PPC_FUNC_IMPL(__imp__sub_8328E430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15684
	ctx.r3.s64 = r11.s64 + -15684;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7256, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E468"))) PPC_WEAK_FUNC(sub_8328E468);
PPC_FUNC_IMPL(__imp__sub_8328E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15672
	ctx.r3.s64 = r11.s64 + -15672;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7252, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E4A0"))) PPC_WEAK_FUNC(sub_8328E4A0);
PPC_FUNC_IMPL(__imp__sub_8328E4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15660
	ctx.r3.s64 = r11.s64 + -15660;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7248, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E4D8"))) PPC_WEAK_FUNC(sub_8328E4D8);
PPC_FUNC_IMPL(__imp__sub_8328E4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15644
	ctx.r3.s64 = r11.s64 + -15644;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7244, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E510"))) PPC_WEAK_FUNC(sub_8328E510);
PPC_FUNC_IMPL(__imp__sub_8328E510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15628
	ctx.r3.s64 = r11.s64 + -15628;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7240, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E548"))) PPC_WEAK_FUNC(sub_8328E548);
PPC_FUNC_IMPL(__imp__sub_8328E548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15608
	ctx.r3.s64 = r11.s64 + -15608;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7236, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E580"))) PPC_WEAK_FUNC(sub_8328E580);
PPC_FUNC_IMPL(__imp__sub_8328E580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15592
	ctx.r3.s64 = r11.s64 + -15592;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7232, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E5B8"))) PPC_WEAK_FUNC(sub_8328E5B8);
PPC_FUNC_IMPL(__imp__sub_8328E5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15572
	ctx.r3.s64 = r11.s64 + -15572;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7228, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E5F0"))) PPC_WEAK_FUNC(sub_8328E5F0);
PPC_FUNC_IMPL(__imp__sub_8328E5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15548
	ctx.r3.s64 = r11.s64 + -15548;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7224, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E628"))) PPC_WEAK_FUNC(sub_8328E628);
PPC_FUNC_IMPL(__imp__sub_8328E628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15528
	ctx.r3.s64 = r11.s64 + -15528;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7220, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E660"))) PPC_WEAK_FUNC(sub_8328E660);
PPC_FUNC_IMPL(__imp__sub_8328E660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15512
	ctx.r3.s64 = r11.s64 + -15512;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7216, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E698"))) PPC_WEAK_FUNC(sub_8328E698);
PPC_FUNC_IMPL(__imp__sub_8328E698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15492
	ctx.r3.s64 = r11.s64 + -15492;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7212, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E6D0"))) PPC_WEAK_FUNC(sub_8328E6D0);
PPC_FUNC_IMPL(__imp__sub_8328E6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15468
	ctx.r3.s64 = r11.s64 + -15468;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7208, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E708"))) PPC_WEAK_FUNC(sub_8328E708);
PPC_FUNC_IMPL(__imp__sub_8328E708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15460
	ctx.r3.s64 = r11.s64 + -15460;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7204, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E740"))) PPC_WEAK_FUNC(sub_8328E740);
PPC_FUNC_IMPL(__imp__sub_8328E740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15448
	ctx.r3.s64 = r11.s64 + -15448;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7200, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E778"))) PPC_WEAK_FUNC(sub_8328E778);
PPC_FUNC_IMPL(__imp__sub_8328E778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15440
	ctx.r3.s64 = r11.s64 + -15440;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7196, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7B0"))) PPC_WEAK_FUNC(sub_8328E7B0);
PPC_FUNC_IMPL(__imp__sub_8328E7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15432
	ctx.r3.s64 = r11.s64 + -15432;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7192, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E7E8"))) PPC_WEAK_FUNC(sub_8328E7E8);
PPC_FUNC_IMPL(__imp__sub_8328E7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15424
	ctx.r3.s64 = r11.s64 + -15424;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7188, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E820"))) PPC_WEAK_FUNC(sub_8328E820);
PPC_FUNC_IMPL(__imp__sub_8328E820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15416
	ctx.r3.s64 = r11.s64 + -15416;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7184, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E858"))) PPC_WEAK_FUNC(sub_8328E858);
PPC_FUNC_IMPL(__imp__sub_8328E858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15408
	ctx.r3.s64 = r11.s64 + -15408;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7180, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E890"))) PPC_WEAK_FUNC(sub_8328E890);
PPC_FUNC_IMPL(__imp__sub_8328E890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-1552
	ctx.r3.s64 = ctx.r9.s64 + -1552;
	// lwz r11,28560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28560);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stw r11,28560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28560, r11.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E8B0"))) PPC_WEAK_FUNC(sub_8328E8B0);
PPC_FUNC_IMPL(__imp__sub_8328E8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1528
	ctx.r3.s64 = r11.s64 + -1528;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328E8C0"))) PPC_WEAK_FUNC(sub_8328E8C0);
PPC_FUNC_IMPL(__imp__sub_8328E8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = r11.s64 + -16052;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7112, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E8F8"))) PPC_WEAK_FUNC(sub_8328E8F8);
PPC_FUNC_IMPL(__imp__sub_8328E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7108, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E930"))) PPC_WEAK_FUNC(sub_8328E930);
PPC_FUNC_IMPL(__imp__sub_8328E930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = r11.s64 + -16012;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7104, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E968"))) PPC_WEAK_FUNC(sub_8328E968);
PPC_FUNC_IMPL(__imp__sub_8328E968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = r11.s64 + -15992;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7100, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E9A0"))) PPC_WEAK_FUNC(sub_8328E9A0);
PPC_FUNC_IMPL(__imp__sub_8328E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = r11.s64 + -15976;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7096, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328E9D8"))) PPC_WEAK_FUNC(sub_8328E9D8);
PPC_FUNC_IMPL(__imp__sub_8328E9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = r11.s64 + -15960;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7092, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EA10"))) PPC_WEAK_FUNC(sub_8328EA10);
PPC_FUNC_IMPL(__imp__sub_8328EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = r11.s64 + -15940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7088, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EA48"))) PPC_WEAK_FUNC(sub_8328EA48);
PPC_FUNC_IMPL(__imp__sub_8328EA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = r11.s64 + -15916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7084, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EA80"))) PPC_WEAK_FUNC(sub_8328EA80);
PPC_FUNC_IMPL(__imp__sub_8328EA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = r11.s64 + -15896;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7080, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EAB8"))) PPC_WEAK_FUNC(sub_8328EAB8);
PPC_FUNC_IMPL(__imp__sub_8328EAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7076, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EAF0"))) PPC_WEAK_FUNC(sub_8328EAF0);
PPC_FUNC_IMPL(__imp__sub_8328EAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = r11.s64 + -15848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7072, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EB28"))) PPC_WEAK_FUNC(sub_8328EB28);
PPC_FUNC_IMPL(__imp__sub_8328EB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = r11.s64 + -15820;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7068, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EB60"))) PPC_WEAK_FUNC(sub_8328EB60);
PPC_FUNC_IMPL(__imp__sub_8328EB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = r11.s64 + -15800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7064, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EB98"))) PPC_WEAK_FUNC(sub_8328EB98);
PPC_FUNC_IMPL(__imp__sub_8328EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7060, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EBD0"))) PPC_WEAK_FUNC(sub_8328EBD0);
PPC_FUNC_IMPL(__imp__sub_8328EBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7056, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC08"))) PPC_WEAK_FUNC(sub_8328EC08);
PPC_FUNC_IMPL(__imp__sub_8328EC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11588
	ctx.r3.s64 = r11.s64 + -11588;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7052, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC40"))) PPC_WEAK_FUNC(sub_8328EC40);
PPC_FUNC_IMPL(__imp__sub_8328EC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11600
	ctx.r3.s64 = r11.s64 + -11600;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7048, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EC78"))) PPC_WEAK_FUNC(sub_8328EC78);
PPC_FUNC_IMPL(__imp__sub_8328EC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11616
	ctx.r3.s64 = r11.s64 + -11616;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7044, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ECB0"))) PPC_WEAK_FUNC(sub_8328ECB0);
PPC_FUNC_IMPL(__imp__sub_8328ECB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,4156
	ctx.r3.s64 = r11.s64 + 4156;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7040, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ECE8"))) PPC_WEAK_FUNC(sub_8328ECE8);
PPC_FUNC_IMPL(__imp__sub_8328ECE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7036, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED20"))) PPC_WEAK_FUNC(sub_8328ED20);
PPC_FUNC_IMPL(__imp__sub_8328ED20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7032, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED58"))) PPC_WEAK_FUNC(sub_8328ED58);
PPC_FUNC_IMPL(__imp__sub_8328ED58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11548
	ctx.r3.s64 = r11.s64 + -11548;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328ED88"))) PPC_WEAK_FUNC(sub_8328ED88);
PPC_FUNC_IMPL(__imp__sub_8328ED88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11540
	ctx.r3.s64 = r11.s64 + -11540;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7024, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EDB8"))) PPC_WEAK_FUNC(sub_8328EDB8);
PPC_FUNC_IMPL(__imp__sub_8328EDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11528
	ctx.r3.s64 = r11.s64 + -11528;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EDE8"))) PPC_WEAK_FUNC(sub_8328EDE8);
PPC_FUNC_IMPL(__imp__sub_8328EDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11520
	ctx.r3.s64 = r11.s64 + -11520;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EE18"))) PPC_WEAK_FUNC(sub_8328EE18);
PPC_FUNC_IMPL(__imp__sub_8328EE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-11508
	ctx.r3.s64 = r11.s64 + -11508;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EE48"))) PPC_WEAK_FUNC(sub_8328EE48);
PPC_FUNC_IMPL(__imp__sub_8328EE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,3336
	ctx.r3.s64 = r11.s64 + 3336;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-7008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7008, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EE78"))) PPC_WEAK_FUNC(sub_8328EE78);
PPC_FUNC_IMPL(__imp__sub_8328EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = r11.s64 + -16052;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7004, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EEB0"))) PPC_WEAK_FUNC(sub_8328EEB0);
PPC_FUNC_IMPL(__imp__sub_8328EEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-7000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7000, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EEE8"))) PPC_WEAK_FUNC(sub_8328EEE8);
PPC_FUNC_IMPL(__imp__sub_8328EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = r11.s64 + -16012;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6996, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EF20"))) PPC_WEAK_FUNC(sub_8328EF20);
PPC_FUNC_IMPL(__imp__sub_8328EF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = r11.s64 + -15992;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6992, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EF58"))) PPC_WEAK_FUNC(sub_8328EF58);
PPC_FUNC_IMPL(__imp__sub_8328EF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = r11.s64 + -15976;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6988, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EF90"))) PPC_WEAK_FUNC(sub_8328EF90);
PPC_FUNC_IMPL(__imp__sub_8328EF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = r11.s64 + -15960;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6984, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328EFC8"))) PPC_WEAK_FUNC(sub_8328EFC8);
PPC_FUNC_IMPL(__imp__sub_8328EFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = r11.s64 + -15940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6980, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F000"))) PPC_WEAK_FUNC(sub_8328F000);
PPC_FUNC_IMPL(__imp__sub_8328F000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = r11.s64 + -15916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6976, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F038"))) PPC_WEAK_FUNC(sub_8328F038);
PPC_FUNC_IMPL(__imp__sub_8328F038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = r11.s64 + -15896;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6972, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F070"))) PPC_WEAK_FUNC(sub_8328F070);
PPC_FUNC_IMPL(__imp__sub_8328F070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6968, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F0A8"))) PPC_WEAK_FUNC(sub_8328F0A8);
PPC_FUNC_IMPL(__imp__sub_8328F0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = r11.s64 + -15848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6964, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F0E0"))) PPC_WEAK_FUNC(sub_8328F0E0);
PPC_FUNC_IMPL(__imp__sub_8328F0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = r11.s64 + -15820;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6960, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F118"))) PPC_WEAK_FUNC(sub_8328F118);
PPC_FUNC_IMPL(__imp__sub_8328F118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = r11.s64 + -15800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6956, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F150"))) PPC_WEAK_FUNC(sub_8328F150);
PPC_FUNC_IMPL(__imp__sub_8328F150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6952, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F188"))) PPC_WEAK_FUNC(sub_8328F188);
PPC_FUNC_IMPL(__imp__sub_8328F188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6948, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F1C0"))) PPC_WEAK_FUNC(sub_8328F1C0);
PPC_FUNC_IMPL(__imp__sub_8328F1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r9,r11,-6944
	ctx.r9.s64 = r11.s64 + -6944;
	// addi r11,r10,18928
	r11.s64 = ctx.r10.s64 + 18928;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8328F1DC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8328f1dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8328F1DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F1F8"))) PPC_WEAK_FUNC(sub_8328F1F8);
PPC_FUNC_IMPL(__imp__sub_8328F1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,3648
	ctx.r3.s64 = r11.s64 + 3648;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-6880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F228"))) PPC_WEAK_FUNC(sub_8328F228);
PPC_FUNC_IMPL(__imp__sub_8328F228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-9556
	ctx.r3.s64 = r11.s64 + -9556;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,-6876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6876, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F258"))) PPC_WEAK_FUNC(sub_8328F258);
PPC_FUNC_IMPL(__imp__sub_8328F258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-9548
	ctx.r3.s64 = r11.s64 + -9548;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-6872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6872, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F290"))) PPC_WEAK_FUNC(sub_8328F290);
PPC_FUNC_IMPL(__imp__sub_8328F290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-9540
	ctx.r3.s64 = r11.s64 + -9540;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,5
	r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,-6868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6868, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F2C8"))) PPC_WEAK_FUNC(sub_8328F2C8);
PPC_FUNC_IMPL(__imp__sub_8328F2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = r11.s64 + -16052;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6864, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F300"))) PPC_WEAK_FUNC(sub_8328F300);
PPC_FUNC_IMPL(__imp__sub_8328F300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6860, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F338"))) PPC_WEAK_FUNC(sub_8328F338);
PPC_FUNC_IMPL(__imp__sub_8328F338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = r11.s64 + -16012;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6856, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F370"))) PPC_WEAK_FUNC(sub_8328F370);
PPC_FUNC_IMPL(__imp__sub_8328F370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = r11.s64 + -15992;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6852, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F3A8"))) PPC_WEAK_FUNC(sub_8328F3A8);
PPC_FUNC_IMPL(__imp__sub_8328F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = r11.s64 + -15976;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6848, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F3E0"))) PPC_WEAK_FUNC(sub_8328F3E0);
PPC_FUNC_IMPL(__imp__sub_8328F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = r11.s64 + -15960;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6844, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F418"))) PPC_WEAK_FUNC(sub_8328F418);
PPC_FUNC_IMPL(__imp__sub_8328F418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = r11.s64 + -15940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6840, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F450"))) PPC_WEAK_FUNC(sub_8328F450);
PPC_FUNC_IMPL(__imp__sub_8328F450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = r11.s64 + -15916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6836, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F488"))) PPC_WEAK_FUNC(sub_8328F488);
PPC_FUNC_IMPL(__imp__sub_8328F488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = r11.s64 + -15896;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6832, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F4C0"))) PPC_WEAK_FUNC(sub_8328F4C0);
PPC_FUNC_IMPL(__imp__sub_8328F4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6828, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F4F8"))) PPC_WEAK_FUNC(sub_8328F4F8);
PPC_FUNC_IMPL(__imp__sub_8328F4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = r11.s64 + -15848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6824, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F530"))) PPC_WEAK_FUNC(sub_8328F530);
PPC_FUNC_IMPL(__imp__sub_8328F530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = r11.s64 + -15820;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6820, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F568"))) PPC_WEAK_FUNC(sub_8328F568);
PPC_FUNC_IMPL(__imp__sub_8328F568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = r11.s64 + -15800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6816, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F5A0"))) PPC_WEAK_FUNC(sub_8328F5A0);
PPC_FUNC_IMPL(__imp__sub_8328F5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6812, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F5D8"))) PPC_WEAK_FUNC(sub_8328F5D8);
PPC_FUNC_IMPL(__imp__sub_8328F5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6808, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F610"))) PPC_WEAK_FUNC(sub_8328F610);
PPC_FUNC_IMPL(__imp__sub_8328F610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16052
	ctx.r3.s64 = r11.s64 + -16052;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6804, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F648"))) PPC_WEAK_FUNC(sub_8328F648);
PPC_FUNC_IMPL(__imp__sub_8328F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6800, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F680"))) PPC_WEAK_FUNC(sub_8328F680);
PPC_FUNC_IMPL(__imp__sub_8328F680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-16012
	ctx.r3.s64 = r11.s64 + -16012;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6796, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F6B8"))) PPC_WEAK_FUNC(sub_8328F6B8);
PPC_FUNC_IMPL(__imp__sub_8328F6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15992
	ctx.r3.s64 = r11.s64 + -15992;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6792, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F6F0"))) PPC_WEAK_FUNC(sub_8328F6F0);
PPC_FUNC_IMPL(__imp__sub_8328F6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15976
	ctx.r3.s64 = r11.s64 + -15976;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6788, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F728"))) PPC_WEAK_FUNC(sub_8328F728);
PPC_FUNC_IMPL(__imp__sub_8328F728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15960
	ctx.r3.s64 = r11.s64 + -15960;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6784, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F760"))) PPC_WEAK_FUNC(sub_8328F760);
PPC_FUNC_IMPL(__imp__sub_8328F760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15940
	ctx.r3.s64 = r11.s64 + -15940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6780, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F798"))) PPC_WEAK_FUNC(sub_8328F798);
PPC_FUNC_IMPL(__imp__sub_8328F798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15916
	ctx.r3.s64 = r11.s64 + -15916;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6776, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F7D0"))) PPC_WEAK_FUNC(sub_8328F7D0);
PPC_FUNC_IMPL(__imp__sub_8328F7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15896
	ctx.r3.s64 = r11.s64 + -15896;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6772, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F808"))) PPC_WEAK_FUNC(sub_8328F808);
PPC_FUNC_IMPL(__imp__sub_8328F808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15872
	ctx.r3.s64 = r11.s64 + -15872;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6768, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F840"))) PPC_WEAK_FUNC(sub_8328F840);
PPC_FUNC_IMPL(__imp__sub_8328F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15848
	ctx.r3.s64 = r11.s64 + -15848;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6764, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F878"))) PPC_WEAK_FUNC(sub_8328F878);
PPC_FUNC_IMPL(__imp__sub_8328F878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15820
	ctx.r3.s64 = r11.s64 + -15820;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6760, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F8B0"))) PPC_WEAK_FUNC(sub_8328F8B0);
PPC_FUNC_IMPL(__imp__sub_8328F8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15800
	ctx.r3.s64 = r11.s64 + -15800;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6756, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F8E8"))) PPC_WEAK_FUNC(sub_8328F8E8);
PPC_FUNC_IMPL(__imp__sub_8328F8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15776
	ctx.r3.s64 = r11.s64 + -15776;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6752, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F920"))) PPC_WEAK_FUNC(sub_8328F920);
PPC_FUNC_IMPL(__imp__sub_8328F920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15760
	ctx.r3.s64 = r11.s64 + -15760;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6748, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F958"))) PPC_WEAK_FUNC(sub_8328F958);
PPC_FUNC_IMPL(__imp__sub_8328F958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1520
	ctx.r3.s64 = r11.s64 + -1520;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F968"))) PPC_WEAK_FUNC(sub_8328F968);
PPC_FUNC_IMPL(__imp__sub_8328F968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1504
	ctx.r3.s64 = r11.s64 + -1504;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F978"))) PPC_WEAK_FUNC(sub_8328F978);
PPC_FUNC_IMPL(__imp__sub_8328F978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1488
	ctx.r3.s64 = r11.s64 + -1488;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F988"))) PPC_WEAK_FUNC(sub_8328F988);
PPC_FUNC_IMPL(__imp__sub_8328F988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1472
	ctx.r3.s64 = r11.s64 + -1472;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F998"))) PPC_WEAK_FUNC(sub_8328F998);
PPC_FUNC_IMPL(__imp__sub_8328F998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15748
	ctx.r3.s64 = r11.s64 + -15748;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6704, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328F9D0"))) PPC_WEAK_FUNC(sub_8328F9D0);
PPC_FUNC_IMPL(__imp__sub_8328F9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15736
	ctx.r3.s64 = r11.s64 + -15736;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6700, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA08"))) PPC_WEAK_FUNC(sub_8328FA08);
PPC_FUNC_IMPL(__imp__sub_8328FA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15724
	ctx.r3.s64 = r11.s64 + -15724;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6696, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA40"))) PPC_WEAK_FUNC(sub_8328FA40);
PPC_FUNC_IMPL(__imp__sub_8328FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15704
	ctx.r3.s64 = r11.s64 + -15704;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6692, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FA78"))) PPC_WEAK_FUNC(sub_8328FA78);
PPC_FUNC_IMPL(__imp__sub_8328FA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15684
	ctx.r3.s64 = r11.s64 + -15684;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6688, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FAB0"))) PPC_WEAK_FUNC(sub_8328FAB0);
PPC_FUNC_IMPL(__imp__sub_8328FAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15672
	ctx.r3.s64 = r11.s64 + -15672;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6684, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FAE8"))) PPC_WEAK_FUNC(sub_8328FAE8);
PPC_FUNC_IMPL(__imp__sub_8328FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15660
	ctx.r3.s64 = r11.s64 + -15660;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6680, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB20"))) PPC_WEAK_FUNC(sub_8328FB20);
PPC_FUNC_IMPL(__imp__sub_8328FB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15644
	ctx.r3.s64 = r11.s64 + -15644;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6676, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB58"))) PPC_WEAK_FUNC(sub_8328FB58);
PPC_FUNC_IMPL(__imp__sub_8328FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15628
	ctx.r3.s64 = r11.s64 + -15628;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6672, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FB90"))) PPC_WEAK_FUNC(sub_8328FB90);
PPC_FUNC_IMPL(__imp__sub_8328FB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15608
	ctx.r3.s64 = r11.s64 + -15608;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6668, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FBC8"))) PPC_WEAK_FUNC(sub_8328FBC8);
PPC_FUNC_IMPL(__imp__sub_8328FBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15592
	ctx.r3.s64 = r11.s64 + -15592;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6664, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC00"))) PPC_WEAK_FUNC(sub_8328FC00);
PPC_FUNC_IMPL(__imp__sub_8328FC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15572
	ctx.r3.s64 = r11.s64 + -15572;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6660, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC38"))) PPC_WEAK_FUNC(sub_8328FC38);
PPC_FUNC_IMPL(__imp__sub_8328FC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15548
	ctx.r3.s64 = r11.s64 + -15548;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6656, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FC70"))) PPC_WEAK_FUNC(sub_8328FC70);
PPC_FUNC_IMPL(__imp__sub_8328FC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15528
	ctx.r3.s64 = r11.s64 + -15528;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6652, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FCA8"))) PPC_WEAK_FUNC(sub_8328FCA8);
PPC_FUNC_IMPL(__imp__sub_8328FCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15512
	ctx.r3.s64 = r11.s64 + -15512;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6648, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FCE0"))) PPC_WEAK_FUNC(sub_8328FCE0);
PPC_FUNC_IMPL(__imp__sub_8328FCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15492
	ctx.r3.s64 = r11.s64 + -15492;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6644, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD18"))) PPC_WEAK_FUNC(sub_8328FD18);
PPC_FUNC_IMPL(__imp__sub_8328FD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15468
	ctx.r3.s64 = r11.s64 + -15468;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6640, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD50"))) PPC_WEAK_FUNC(sub_8328FD50);
PPC_FUNC_IMPL(__imp__sub_8328FD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15460
	ctx.r3.s64 = r11.s64 + -15460;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6636, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FD88"))) PPC_WEAK_FUNC(sub_8328FD88);
PPC_FUNC_IMPL(__imp__sub_8328FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15448
	ctx.r3.s64 = r11.s64 + -15448;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6632, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDC0"))) PPC_WEAK_FUNC(sub_8328FDC0);
PPC_FUNC_IMPL(__imp__sub_8328FDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15440
	ctx.r3.s64 = r11.s64 + -15440;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6628, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDF8"))) PPC_WEAK_FUNC(sub_8328FDF8);
PPC_FUNC_IMPL(__imp__sub_8328FDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15432
	ctx.r3.s64 = r11.s64 + -15432;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6624, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE30"))) PPC_WEAK_FUNC(sub_8328FE30);
PPC_FUNC_IMPL(__imp__sub_8328FE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15424
	ctx.r3.s64 = r11.s64 + -15424;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6620, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FE68"))) PPC_WEAK_FUNC(sub_8328FE68);
PPC_FUNC_IMPL(__imp__sub_8328FE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15416
	ctx.r3.s64 = r11.s64 + -15416;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6616, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FEA0"))) PPC_WEAK_FUNC(sub_8328FEA0);
PPC_FUNC_IMPL(__imp__sub_8328FEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r3,r11,-15408
	ctx.r3.s64 = r11.s64 + -15408;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-6612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6612, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FED8"))) PPC_WEAK_FUNC(sub_8328FED8);
PPC_FUNC_IMPL(__imp__sub_8328FED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1384
	ctx.r3.s64 = r11.s64 + -1384;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEE8"))) PPC_WEAK_FUNC(sub_8328FEE8);
PPC_FUNC_IMPL(__imp__sub_8328FEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1352
	ctx.r3.s64 = r11.s64 + -1352;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FEF8"))) PPC_WEAK_FUNC(sub_8328FEF8);
PPC_FUNC_IMPL(__imp__sub_8328FEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1368
	ctx.r3.s64 = r11.s64 + -1368;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF08"))) PPC_WEAK_FUNC(sub_8328FF08);
PPC_FUNC_IMPL(__imp__sub_8328FF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1248
	ctx.r3.s64 = r11.s64 + -1248;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF18"))) PPC_WEAK_FUNC(sub_8328FF18);
PPC_FUNC_IMPL(__imp__sub_8328FF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1336
	ctx.r3.s64 = r11.s64 + -1336;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF28"))) PPC_WEAK_FUNC(sub_8328FF28);
PPC_FUNC_IMPL(__imp__sub_8328FF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1232
	ctx.r3.s64 = r11.s64 + -1232;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF38"))) PPC_WEAK_FUNC(sub_8328FF38);
PPC_FUNC_IMPL(__imp__sub_8328FF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-1216
	ctx.r3.s64 = r11.s64 + -1216;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF48"))) PPC_WEAK_FUNC(sub_8328FF48);
PPC_FUNC_IMPL(__imp__sub_8328FF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,18900
	ctx.r3.s64 = r11.s64 + 18900;
	// bl 0x82bfbd78
	sub_82BFBD78(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1128
	ctx.r3.s64 = ctx.r10.s64 + -1128;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FF80"))) PPC_WEAK_FUNC(sub_8328FF80);
PPC_FUNC_IMPL(__imp__sub_8328FF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-968
	ctx.r3.s64 = r11.s64 + -968;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF90"))) PPC_WEAK_FUNC(sub_8328FF90);
PPC_FUNC_IMPL(__imp__sub_8328FF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,18924
	ctx.r3.s64 = r11.s64 + 18924;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1016
	ctx.r3.s64 = ctx.r10.s64 + -1016;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FFC8"))) PPC_WEAK_FUNC(sub_8328FFC8);
PPC_FUNC_IMPL(__imp__sub_8328FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,18928
	ctx.r3.s64 = r11.s64 + 18928;
	// bl 0x823445b0
	sub_823445B0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-928
	ctx.r3.s64 = ctx.r10.s64 + -928;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290000"))) PPC_WEAK_FUNC(sub_83290000);
PPC_FUNC_IMPL(__imp__sub_83290000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,18940
	ctx.r3.s64 = r11.s64 + 18940;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-1000
	ctx.r3.s64 = ctx.r10.s64 + -1000;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290038"))) PPC_WEAK_FUNC(sub_83290038);
PPC_FUNC_IMPL(__imp__sub_83290038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,18944
	ctx.r3.s64 = r11.s64 + 18944;
	// bl 0x821f7798
	sub_821F7798(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-984
	ctx.r3.s64 = ctx.r10.s64 + -984;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290070"))) PPC_WEAK_FUNC(sub_83290070);
PPC_FUNC_IMPL(__imp__sub_83290070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,18968
	ctx.r3.s64 = r11.s64 + 18968;
	// bl 0x82c03b90
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-816
	ctx.r3.s64 = ctx.r10.s64 + -816;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832900A8"))) PPC_WEAK_FUNC(sub_832900A8);
PPC_FUNC_IMPL(__imp__sub_832900A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,8995
	r11.s64 = 589496320;
	// addi r8,r10,19064
	ctx.r8.s64 = ctx.r10.s64 + 19064;
	// ori r11,r11,8995
	r11.u64 = r11.u64 | 8995;
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
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_832900DC:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x832900dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832900DC;
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290100"))) PPC_WEAK_FUNC(sub_83290100);
PPC_FUNC_IMPL(__imp__sub_83290100) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,8995
	r11.s64 = 589496320;
	// addi r31,r10,19080
	r31.s64 = ctx.r10.s64 + 19080;
	// ori r11,r11,8995
	r11.u64 = r11.u64 | 8995;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r8,-22344
	ctx.r4.s64 = ctx.r8.s64 + -22344;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290160"))) PPC_WEAK_FUNC(sub_83290160);
PPC_FUNC_IMPL(__imp__sub_83290160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,19104
	ctx.r3.s64 = r11.s64 + 19104;
	// bl 0x82c03b90
	sub_82C03B90(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-736
	ctx.r3.s64 = ctx.r10.s64 + -736;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290198"))) PPC_WEAK_FUNC(sub_83290198);
PPC_FUNC_IMPL(__imp__sub_83290198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r11,25268
	ctx.r4.s64 = r11.s64 + 25268;
	// addi r3,r10,19192
	ctx.r3.s64 = ctx.r10.s64 + 19192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-720
	ctx.r3.s64 = ctx.r9.s64 + -720;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832901D8"))) PPC_WEAK_FUNC(sub_832901D8);
PPC_FUNC_IMPL(__imp__sub_832901D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,19196
	ctx.r3.s64 = r11.s64 + 19196;
	// bl 0x823445b0
	sub_823445B0(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-704
	ctx.r3.s64 = ctx.r10.s64 + -704;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290210"))) PPC_WEAK_FUNC(sub_83290210);
PPC_FUNC_IMPL(__imp__sub_83290210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,19208
	ctx.r3.s64 = r11.s64 + 19208;
	// bl 0x82a12828
	sub_82A12828(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-592
	ctx.r3.s64 = ctx.r10.s64 + -592;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290248"))) PPC_WEAK_FUNC(sub_83290248);
PPC_FUNC_IMPL(__imp__sub_83290248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,19220
	ctx.r3.s64 = r11.s64 + 19220;
	// bl 0x82c04dc8
	sub_82C04DC8(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-480
	ctx.r3.s64 = ctx.r10.s64 + -480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290280"))) PPC_WEAK_FUNC(sub_83290280);
PPC_FUNC_IMPL(__imp__sub_83290280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r3,r11,19232
	ctx.r3.s64 = r11.s64 + 19232;
	// bl 0x82c42f48
	sub_82C42F48(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-368
	ctx.r3.s64 = ctx.r10.s64 + -368;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832902B8"))) PPC_WEAK_FUNC(sub_832902B8);
PPC_FUNC_IMPL(__imp__sub_832902B8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r30,4
	r30.s64 = 4;
	// addi r11,r11,19252
	r11.s64 = r11.s64 + 19252;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
loc_832902D8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832902ec
	if (cr6.eq) goto loc_832902EC;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_832902EC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x832902f8
	if (cr0.eq) goto loc_832902F8;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_832902F8:
	// stw r3,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r3.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bge 0x832902d8
	if (!cr0.lt) goto loc_832902D8;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-96
	ctx.r3.s64 = r11.s64 + -96;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_83290320"))) PPC_WEAK_FUNC(sub_83290320);
PPC_FUNC_IMPL(__imp__sub_83290320) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r31,4
	r31.s64 = 4;
	// addi r30,r11,19312
	r30.s64 = r11.s64 + 19312;
loc_83290340:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b38560
	sub_82B38560(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// bge 0x83290340
	if (!cr0.lt) goto loc_83290340;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-256
	ctx.r3.s64 = r11.s64 + -256;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290378"))) PPC_WEAK_FUNC(sub_83290378);
PPC_FUNC_IMPL(__imp__sub_83290378) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r29,4
	r29.s64 = 4;
	// addi r11,r11,19452
	r11.s64 = r11.s64 + 19452;
	// li r27,5
	r27.s64 = 5;
	// addi r31,r11,24
	r31.s64 = r11.s64 + 24;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,-22236
	r28.s64 = r11.s64 + -22236;
loc_832903A4:
	// addi r3,r31,-24
	ctx.r3.s64 = r31.s64 + -24;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x82b385e8
	sub_82B385E8(ctx, base);
	// stw r28,-24(r31)
	PPC_STORE_U32(r31.u32 + -24, r28.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r27.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// bge 0x832903a4
	if (!cr0.lt) goto loc_832903A4;
	// lis r11,-31957
	r11.s64 = -2094333952;
	// addi r3,r11,-176
	ctx.r3.s64 = r11.s64 + -176;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_832903E8"))) PPC_WEAK_FUNC(sub_832903E8);
PPC_FUNC_IMPL(__imp__sub_832903E8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,19636
	r31.s64 = r11.s64 + 19636;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x823445b0
	sub_823445B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82b38560
	sub_82B38560(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290438"))) PPC_WEAK_FUNC(sub_83290438);
PPC_FUNC_IMPL(__imp__sub_83290438) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r31,r11,19696
	r31.s64 = r11.s64 + 19696;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x823445b0
	sub_823445B0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82b38560
	sub_82B38560(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290488"))) PPC_WEAK_FUNC(sub_83290488);
PPC_FUNC_IMPL(__imp__sub_83290488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r4,r11,-19488
	ctx.r4.s64 = r11.s64 + -19488;
	// addi r3,r10,19768
	ctx.r3.s64 = ctx.r10.s64 + 19768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832904C8"))) PPC_WEAK_FUNC(sub_832904C8);
PPC_FUNC_IMPL(__imp__sub_832904C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r4,r11,-19472
	ctx.r4.s64 = r11.s64 + -19472;
	// addi r3,r10,19772
	ctx.r3.s64 = ctx.r10.s64 + 19772;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,80
	ctx.r3.s64 = ctx.r9.s64 + 80;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290508"))) PPC_WEAK_FUNC(sub_83290508);
PPC_FUNC_IMPL(__imp__sub_83290508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r4,r11,-19140
	ctx.r4.s64 = r11.s64 + -19140;
	// addi r3,r10,19776
	ctx.r3.s64 = ctx.r10.s64 + 19776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,96
	ctx.r3.s64 = ctx.r9.s64 + 96;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290548"))) PPC_WEAK_FUNC(sub_83290548);
PPC_FUNC_IMPL(__imp__sub_83290548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r4,r11,-19128
	ctx.r4.s64 = r11.s64 + -19128;
	// addi r3,r10,19780
	ctx.r3.s64 = ctx.r10.s64 + 19780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,112
	ctx.r3.s64 = ctx.r9.s64 + 112;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290588"))) PPC_WEAK_FUNC(sub_83290588);
PPC_FUNC_IMPL(__imp__sub_83290588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r4,r11,-18560
	ctx.r4.s64 = r11.s64 + -18560;
	// addi r3,r10,19784
	ctx.r3.s64 = ctx.r10.s64 + 19784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832905C8"))) PPC_WEAK_FUNC(sub_832905C8);
PPC_FUNC_IMPL(__imp__sub_832905C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r4,r11,-18544
	ctx.r4.s64 = r11.s64 + -18544;
	// addi r3,r10,19788
	ctx.r3.s64 = ctx.r10.s64 + 19788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,144
	ctx.r3.s64 = ctx.r9.s64 + 144;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

