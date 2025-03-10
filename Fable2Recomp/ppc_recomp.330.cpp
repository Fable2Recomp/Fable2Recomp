#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8329D1F8"))) PPC_WEAK_FUNC(sub_8329D1F8);
PPC_FUNC_IMPL(__imp__sub_8329D1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-21184
	ctx.r4.s64 = ctx.r10.s64 + -21184;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13564
	ctx.r3.s64 = ctx.r10.s64 + -13564;
	// addi r5,r11,30656
	ctx.r5.s64 = ctx.r11.s64 + 30656;
	// bl 0x82ebf160
	ctx.lr = 0x8329D224;
	sub_82EBF160(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5360
	ctx.r3.s64 = ctx.r11.s64 + 5360;
	// bl 0x82ca3700
	ctx.lr = 0x8329D230;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D240"))) PPC_WEAK_FUNC(sub_8329D240);
PPC_FUNC_IMPL(__imp__sub_8329D240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-21136
	ctx.r4.s64 = ctx.r10.s64 + -21136;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13288
	ctx.r3.s64 = ctx.r10.s64 + -13288;
	// addi r5,r11,31168
	ctx.r5.s64 = ctx.r11.s64 + 31168;
	// bl 0x82ebf160
	ctx.lr = 0x8329D26C;
	sub_82EBF160(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// bl 0x82ca3700
	ctx.lr = 0x8329D278;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D288"))) PPC_WEAK_FUNC(sub_8329D288);
PPC_FUNC_IMPL(__imp__sub_8329D288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r4,r10,-21080
	ctx.r4.s64 = ctx.r10.s64 + -21080;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13012
	ctx.r3.s64 = ctx.r10.s64 + -13012;
	// addi r5,r11,32480
	ctx.r5.s64 = ctx.r11.s64 + 32480;
	// bl 0x82ebf338
	ctx.lr = 0x8329D2B4;
	sub_82EBF338(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// bl 0x82ca3700
	ctx.lr = 0x8329D2C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D2D0"))) PPC_WEAK_FUNC(sub_8329D2D0);
PPC_FUNC_IMPL(__imp__sub_8329D2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20908
	ctx.r4.s64 = ctx.r10.s64 + -20908;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12736
	ctx.r3.s64 = ctx.r10.s64 + -12736;
	// addi r5,r11,-31648
	ctx.r5.s64 = ctx.r11.s64 + -31648;
	// bl 0x82ebf338
	ctx.lr = 0x8329D2FC;
	sub_82EBF338(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5432
	ctx.r3.s64 = ctx.r11.s64 + 5432;
	// bl 0x82ca3700
	ctx.lr = 0x8329D308;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D318"))) PPC_WEAK_FUNC(sub_8329D318);
PPC_FUNC_IMPL(__imp__sub_8329D318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20816
	ctx.r4.s64 = ctx.r10.s64 + -20816;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12460
	ctx.r3.s64 = ctx.r10.s64 + -12460;
	// addi r5,r11,-28376
	ctx.r5.s64 = ctx.r11.s64 + -28376;
	// bl 0x82ebf510
	ctx.lr = 0x8329D344;
	sub_82EBF510(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// bl 0x82ca3700
	ctx.lr = 0x8329D350;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D360"))) PPC_WEAK_FUNC(sub_8329D360);
PPC_FUNC_IMPL(__imp__sub_8329D360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20724
	ctx.r4.s64 = ctx.r10.s64 + -20724;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-12180
	ctx.r3.s64 = ctx.r10.s64 + -12180;
	// addi r5,r11,-27144
	ctx.r5.s64 = ctx.r11.s64 + -27144;
	// bl 0x82ebf510
	ctx.lr = 0x8329D38C;
	sub_82EBF510(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// bl 0x82ca3700
	ctx.lr = 0x8329D398;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D3A8"))) PPC_WEAK_FUNC(sub_8329D3A8);
PPC_FUNC_IMPL(__imp__sub_8329D3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8329d3c0
	if (ctx.cr0.eq) goto loc_8329D3C0;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8329d3c8
	goto loc_8329D3C8;
loc_8329D3C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_8329D3C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,26348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-12184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D3E0"))) PPC_WEAK_FUNC(sub_8329D3E0);
PPC_FUNC_IMPL(__imp__sub_8329D3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20668
	ctx.r4.s64 = ctx.r10.s64 + -20668;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11904
	ctx.r3.s64 = ctx.r10.s64 + -11904;
	// addi r5,r11,-23752
	ctx.r5.s64 = ctx.r11.s64 + -23752;
	// bl 0x82ebf510
	ctx.lr = 0x8329D40C;
	sub_82EBF510(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// bl 0x82ca3700
	ctx.lr = 0x8329D418;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D428"))) PPC_WEAK_FUNC(sub_8329D428);
PPC_FUNC_IMPL(__imp__sub_8329D428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20600
	ctx.r4.s64 = ctx.r10.s64 + -20600;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11612
	ctx.r3.s64 = ctx.r10.s64 + -11612;
	// addi r5,r11,-23608
	ctx.r5.s64 = ctx.r11.s64 + -23608;
	// bl 0x82ebf6e8
	ctx.lr = 0x8329D454;
	sub_82EBF6E8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5528
	ctx.r3.s64 = ctx.r11.s64 + 5528;
	// bl 0x82ca3700
	ctx.lr = 0x8329D460;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D470"))) PPC_WEAK_FUNC(sub_8329D470);
PPC_FUNC_IMPL(__imp__sub_8329D470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20568
	ctx.r4.s64 = ctx.r10.s64 + -20568;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11336
	ctx.r3.s64 = ctx.r10.s64 + -11336;
	// addi r5,r11,-23248
	ctx.r5.s64 = ctx.r11.s64 + -23248;
	// bl 0x82ebf6e8
	ctx.lr = 0x8329D49C;
	sub_82EBF6E8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// bl 0x82ca3700
	ctx.lr = 0x8329D4A8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D4B8"))) PPC_WEAK_FUNC(sub_8329D4B8);
PPC_FUNC_IMPL(__imp__sub_8329D4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20548
	ctx.r4.s64 = ctx.r10.s64 + -20548;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-11060
	ctx.r3.s64 = ctx.r10.s64 + -11060;
	// addi r5,r11,-20672
	ctx.r5.s64 = ctx.r11.s64 + -20672;
	// bl 0x82ebf8c0
	ctx.lr = 0x8329D4E4;
	sub_82EBF8C0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// bl 0x82ca3700
	ctx.lr = 0x8329D4F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D500"))) PPC_WEAK_FUNC(sub_8329D500);
PPC_FUNC_IMPL(__imp__sub_8329D500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20484
	ctx.r4.s64 = ctx.r10.s64 + -20484;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10784
	ctx.r3.s64 = ctx.r10.s64 + -10784;
	// addi r5,r11,-19944
	ctx.r5.s64 = ctx.r11.s64 + -19944;
	// bl 0x82ebf8c0
	ctx.lr = 0x8329D52C;
	sub_82EBF8C0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// bl 0x82ca3700
	ctx.lr = 0x8329D538;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D548"))) PPC_WEAK_FUNC(sub_8329D548);
PPC_FUNC_IMPL(__imp__sub_8329D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20404
	ctx.r4.s64 = ctx.r10.s64 + -20404;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10508
	ctx.r3.s64 = ctx.r10.s64 + -10508;
	// addi r5,r11,-19720
	ctx.r5.s64 = ctx.r11.s64 + -19720;
	// bl 0x82ebfa98
	ctx.lr = 0x8329D574;
	sub_82EBFA98(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5624
	ctx.r3.s64 = ctx.r11.s64 + 5624;
	// bl 0x82ca3700
	ctx.lr = 0x8329D580;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D590"))) PPC_WEAK_FUNC(sub_8329D590);
PPC_FUNC_IMPL(__imp__sub_8329D590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20344
	ctx.r4.s64 = ctx.r10.s64 + -20344;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-10232
	ctx.r3.s64 = ctx.r10.s64 + -10232;
	// addi r5,r11,-18656
	ctx.r5.s64 = ctx.r11.s64 + -18656;
	// bl 0x82ebfc70
	ctx.lr = 0x8329D5BC;
	sub_82EBFC70(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// bl 0x82ca3700
	ctx.lr = 0x8329D5C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D5D8"))) PPC_WEAK_FUNC(sub_8329D5D8);
PPC_FUNC_IMPL(__imp__sub_8329D5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20312
	ctx.r4.s64 = ctx.r10.s64 + -20312;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-9956
	ctx.r3.s64 = ctx.r10.s64 + -9956;
	// addi r5,r11,-17600
	ctx.r5.s64 = ctx.r11.s64 + -17600;
	// bl 0x82ebfe48
	ctx.lr = 0x8329D604;
	sub_82EBFE48(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x82ca3700
	ctx.lr = 0x8329D610;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D620"))) PPC_WEAK_FUNC(sub_8329D620);
PPC_FUNC_IMPL(__imp__sub_8329D620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-9404
	ctx.r6.s64 = ctx.r11.s64 + -9404;
	// addi r4,r10,-20252
	ctx.r4.s64 = ctx.r10.s64 + -20252;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-17184
	ctx.r5.s64 = ctx.r11.s64 + -17184;
	// addi r3,r10,-9680
	ctx.r3.s64 = ctx.r10.s64 + -9680;
	// bl 0x82ec0020
	ctx.lr = 0x8329D650;
	sub_82EC0020(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// bl 0x82ca3700
	ctx.lr = 0x8329D65C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D66C"))) PPC_WEAK_FUNC(sub_8329D66C);
PPC_FUNC_IMPL(__imp__sub_8329D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D670"))) PPC_WEAK_FUNC(sub_8329D670);
PPC_FUNC_IMPL(__imp__sub_8329D670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20216
	ctx.r4.s64 = ctx.r10.s64 + -20216;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-9404
	ctx.r3.s64 = ctx.r10.s64 + -9404;
	// addi r5,r11,-16376
	ctx.r5.s64 = ctx.r11.s64 + -16376;
	// bl 0x82ec0020
	ctx.lr = 0x8329D69C;
	sub_82EC0020(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5720
	ctx.r3.s64 = ctx.r11.s64 + 5720;
	// bl 0x82ca3700
	ctx.lr = 0x8329D6A8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D6B8"))) PPC_WEAK_FUNC(sub_8329D6B8);
PPC_FUNC_IMPL(__imp__sub_8329D6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20156
	ctx.r4.s64 = ctx.r10.s64 + -20156;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-9128
	ctx.r3.s64 = ctx.r10.s64 + -9128;
	// addi r5,r11,-15752
	ctx.r5.s64 = ctx.r11.s64 + -15752;
	// bl 0x82ec0020
	ctx.lr = 0x8329D6E4;
	sub_82EC0020(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// bl 0x82ca3700
	ctx.lr = 0x8329D6F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D700"))) PPC_WEAK_FUNC(sub_8329D700);
PPC_FUNC_IMPL(__imp__sub_8329D700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20088
	ctx.r4.s64 = ctx.r10.s64 + -20088;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-8852
	ctx.r3.s64 = ctx.r10.s64 + -8852;
	// addi r5,r11,-14032
	ctx.r5.s64 = ctx.r11.s64 + -14032;
	// bl 0x82ec01f8
	ctx.lr = 0x8329D72C;
	sub_82EC01F8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5768
	ctx.r3.s64 = ctx.r11.s64 + 5768;
	// bl 0x82ca3700
	ctx.lr = 0x8329D738;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D748"))) PPC_WEAK_FUNC(sub_8329D748);
PPC_FUNC_IMPL(__imp__sub_8329D748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-8576
	ctx.r3.s64 = ctx.r10.s64 + -8576;
	// addi r5,r11,-13776
	ctx.r5.s64 = ctx.r11.s64 + -13776;
	// bl 0x82ec01f8
	ctx.lr = 0x8329D774;
	sub_82EC01F8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5792
	ctx.r3.s64 = ctx.r11.s64 + 5792;
	// bl 0x82ca3700
	ctx.lr = 0x8329D780;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D790"))) PPC_WEAK_FUNC(sub_8329D790);
PPC_FUNC_IMPL(__imp__sub_8329D790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-19992
	ctx.r4.s64 = ctx.r10.s64 + -19992;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,-12032
	ctx.r5.s64 = ctx.r11.s64 + -12032;
	// addi r3,r10,-8300
	ctx.r3.s64 = ctx.r10.s64 + -8300;
	// bl 0x82ed96c0
	ctx.lr = 0x8329D7B8;
	sub_82ED96C0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// bl 0x82ca3700
	ctx.lr = 0x8329D7C4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D7D4"))) PPC_WEAK_FUNC(sub_8329D7D4);
PPC_FUNC_IMPL(__imp__sub_8329D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D7D8"))) PPC_WEAK_FUNC(sub_8329D7D8);
PPC_FUNC_IMPL(__imp__sub_8329D7D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6324
	ctx.r6.s64 = ctx.r11.s64 + 6324;
	// addi r4,r10,-19784
	ctx.r4.s64 = ctx.r10.s64 + -19784;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,5672
	ctx.r5.s64 = ctx.r11.s64 + 5672;
	// addi r3,r10,-8020
	ctx.r3.s64 = ctx.r10.s64 + -8020;
	// bl 0x82e82770
	ctx.lr = 0x8329D808;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5840
	ctx.r3.s64 = ctx.r11.s64 + 5840;
	// bl 0x82ca3700
	ctx.lr = 0x8329D814;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D824"))) PPC_WEAK_FUNC(sub_8329D824);
PPC_FUNC_IMPL(__imp__sub_8329D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D828"))) PPC_WEAK_FUNC(sub_8329D828);
PPC_FUNC_IMPL(__imp__sub_8329D828) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6324
	ctx.r6.s64 = ctx.r11.s64 + 6324;
	// addi r4,r10,-19700
	ctx.r4.s64 = ctx.r10.s64 + -19700;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,6440
	ctx.r5.s64 = ctx.r11.s64 + 6440;
	// addi r3,r10,-7744
	ctx.r3.s64 = ctx.r10.s64 + -7744;
	// bl 0x82e82770
	ctx.lr = 0x8329D858;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5864
	ctx.r3.s64 = ctx.r11.s64 + 5864;
	// bl 0x82ca3700
	ctx.lr = 0x8329D864;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D874"))) PPC_WEAK_FUNC(sub_8329D874);
PPC_FUNC_IMPL(__imp__sub_8329D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D878"))) PPC_WEAK_FUNC(sub_8329D878);
PPC_FUNC_IMPL(__imp__sub_8329D878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-19592
	ctx.r4.s64 = ctx.r10.s64 + -19592;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7468
	ctx.r3.s64 = ctx.r10.s64 + -7468;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,9824
	ctx.r5.s64 = ctx.r11.s64 + 9824;
	// bl 0x82e7efd8
	ctx.lr = 0x8329D8AC;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5888
	ctx.r3.s64 = ctx.r11.s64 + 5888;
	// bl 0x82ca3700
	ctx.lr = 0x8329D8B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D8C8"))) PPC_WEAK_FUNC(sub_8329D8C8);
PPC_FUNC_IMPL(__imp__sub_8329D8C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6324
	ctx.r6.s64 = ctx.r11.s64 + 6324;
	// addi r4,r10,-19512
	ctx.r4.s64 = ctx.r10.s64 + -19512;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,10192
	ctx.r5.s64 = ctx.r11.s64 + 10192;
	// addi r3,r10,-7192
	ctx.r3.s64 = ctx.r10.s64 + -7192;
	// bl 0x82e82770
	ctx.lr = 0x8329D8F8;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// bl 0x82ca3700
	ctx.lr = 0x8329D904;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D914"))) PPC_WEAK_FUNC(sub_8329D914);
PPC_FUNC_IMPL(__imp__sub_8329D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D918"))) PPC_WEAK_FUNC(sub_8329D918);
PPC_FUNC_IMPL(__imp__sub_8329D918) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6324
	ctx.r6.s64 = ctx.r11.s64 + 6324;
	// addi r4,r10,-19320
	ctx.r4.s64 = ctx.r10.s64 + -19320;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,14840
	ctx.r5.s64 = ctx.r11.s64 + 14840;
	// addi r3,r10,-6916
	ctx.r3.s64 = ctx.r10.s64 + -6916;
	// bl 0x82e82770
	ctx.lr = 0x8329D948;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5936
	ctx.r3.s64 = ctx.r11.s64 + 5936;
	// bl 0x82ca3700
	ctx.lr = 0x8329D954;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D964"))) PPC_WEAK_FUNC(sub_8329D964);
PPC_FUNC_IMPL(__imp__sub_8329D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D968"))) PPC_WEAK_FUNC(sub_8329D968);
PPC_FUNC_IMPL(__imp__sub_8329D968) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-19240
	ctx.r4.s64 = ctx.r10.s64 + -19240;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,16544
	ctx.r5.s64 = ctx.r11.s64 + 16544;
	// addi r3,r10,-6640
	ctx.r3.s64 = ctx.r10.s64 + -6640;
	// bl 0x82e82770
	ctx.lr = 0x8329D998;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5960
	ctx.r3.s64 = ctx.r11.s64 + 5960;
	// bl 0x82ca3700
	ctx.lr = 0x8329D9A4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D9B4"))) PPC_WEAK_FUNC(sub_8329D9B4);
PPC_FUNC_IMPL(__imp__sub_8329D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D9B8"))) PPC_WEAK_FUNC(sub_8329D9B8);
PPC_FUNC_IMPL(__imp__sub_8329D9B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-19072
	ctx.r4.s64 = ctx.r10.s64 + -19072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,18504
	ctx.r5.s64 = ctx.r11.s64 + 18504;
	// addi r3,r10,-6364
	ctx.r3.s64 = ctx.r10.s64 + -6364;
	// bl 0x82e82770
	ctx.lr = 0x8329D9E8;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// bl 0x82ca3700
	ctx.lr = 0x8329D9F4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DA04"))) PPC_WEAK_FUNC(sub_8329DA04);
PPC_FUNC_IMPL(__imp__sub_8329DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DA08"))) PPC_WEAK_FUNC(sub_8329DA08);
PPC_FUNC_IMPL(__imp__sub_8329DA08) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-18980
	ctx.r4.s64 = ctx.r10.s64 + -18980;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,19312
	ctx.r5.s64 = ctx.r11.s64 + 19312;
	// addi r3,r10,-6088
	ctx.r3.s64 = ctx.r10.s64 + -6088;
	// bl 0x82e82770
	ctx.lr = 0x8329DA38;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// bl 0x82ca3700
	ctx.lr = 0x8329DA44;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DA54"))) PPC_WEAK_FUNC(sub_8329DA54);
PPC_FUNC_IMPL(__imp__sub_8329DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DA58"))) PPC_WEAK_FUNC(sub_8329DA58);
PPC_FUNC_IMPL(__imp__sub_8329DA58) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-18892
	ctx.r4.s64 = ctx.r10.s64 + -18892;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,20072
	ctx.r5.s64 = ctx.r11.s64 + 20072;
	// addi r3,r10,-5812
	ctx.r3.s64 = ctx.r10.s64 + -5812;
	// bl 0x82e82770
	ctx.lr = 0x8329DA88;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// bl 0x82ca3700
	ctx.lr = 0x8329DA94;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DAA4"))) PPC_WEAK_FUNC(sub_8329DAA4);
PPC_FUNC_IMPL(__imp__sub_8329DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DAA8"))) PPC_WEAK_FUNC(sub_8329DAA8);
PPC_FUNC_IMPL(__imp__sub_8329DAA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-18800
	ctx.r4.s64 = ctx.r10.s64 + -18800;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,21056
	ctx.r5.s64 = ctx.r11.s64 + 21056;
	// addi r3,r10,-5536
	ctx.r3.s64 = ctx.r10.s64 + -5536;
	// bl 0x82e82770
	ctx.lr = 0x8329DAD8;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6056
	ctx.r3.s64 = ctx.r11.s64 + 6056;
	// bl 0x82ca3700
	ctx.lr = 0x8329DAE4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DAF4"))) PPC_WEAK_FUNC(sub_8329DAF4);
PPC_FUNC_IMPL(__imp__sub_8329DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DAF8"))) PPC_WEAK_FUNC(sub_8329DAF8);
PPC_FUNC_IMPL(__imp__sub_8329DAF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-18708
	ctx.r4.s64 = ctx.r10.s64 + -18708;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,21872
	ctx.r5.s64 = ctx.r11.s64 + 21872;
	// addi r3,r10,-5260
	ctx.r3.s64 = ctx.r10.s64 + -5260;
	// bl 0x82e82770
	ctx.lr = 0x8329DB28;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6080
	ctx.r3.s64 = ctx.r11.s64 + 6080;
	// bl 0x82ca3700
	ctx.lr = 0x8329DB34;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DB44"))) PPC_WEAK_FUNC(sub_8329DB44);
PPC_FUNC_IMPL(__imp__sub_8329DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DB48"))) PPC_WEAK_FUNC(sub_8329DB48);
PPC_FUNC_IMPL(__imp__sub_8329DB48) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,6600
	ctx.r6.s64 = ctx.r11.s64 + 6600;
	// addi r4,r10,-18620
	ctx.r4.s64 = ctx.r10.s64 + -18620;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r5,r11,22472
	ctx.r5.s64 = ctx.r11.s64 + 22472;
	// addi r3,r10,-4984
	ctx.r3.s64 = ctx.r10.s64 + -4984;
	// bl 0x82e82770
	ctx.lr = 0x8329DB78;
	sub_82E82770(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6104
	ctx.r3.s64 = ctx.r11.s64 + 6104;
	// bl 0x82ca3700
	ctx.lr = 0x8329DB84;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DB94"))) PPC_WEAK_FUNC(sub_8329DB94);
PPC_FUNC_IMPL(__imp__sub_8329DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DB98"))) PPC_WEAK_FUNC(sub_8329DB98);
PPC_FUNC_IMPL(__imp__sub_8329DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r4,r10,-18376
	ctx.r4.s64 = ctx.r10.s64 + -18376;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4704
	ctx.r3.s64 = ctx.r10.s64 + -4704;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,24472
	ctx.r5.s64 = ctx.r11.s64 + 24472;
	// bl 0x82e7efd8
	ctx.lr = 0x8329DBCC;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// bl 0x82ca3700
	ctx.lr = 0x8329DBD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DBE8"))) PPC_WEAK_FUNC(sub_8329DBE8);
PPC_FUNC_IMPL(__imp__sub_8329DBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// addi r4,r10,-17872
	ctx.r4.s64 = ctx.r10.s64 + -17872;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4424
	ctx.r3.s64 = ctx.r10.s64 + -4424;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-23688
	ctx.r5.s64 = ctx.r11.s64 + -23688;
	// bl 0x82e7efd8
	ctx.lr = 0x8329DC1C;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6152
	ctx.r3.s64 = ctx.r11.s64 + 6152;
	// bl 0x82ca3700
	ctx.lr = 0x8329DC28;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DC38"))) PPC_WEAK_FUNC(sub_8329DC38);
PPC_FUNC_IMPL(__imp__sub_8329DC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// addi r4,r10,-17356
	ctx.r4.s64 = ctx.r10.s64 + -17356;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-30748
	ctx.r3.s64 = ctx.r10.s64 + -30748;
	// addi r5,r11,18928
	ctx.r5.s64 = ctx.r11.s64 + 18928;
	// bl 0x82ebf338
	ctx.lr = 0x8329DC64;
	sub_82EBF338(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6176
	ctx.r3.s64 = ctx.r11.s64 + 6176;
	// bl 0x82ca3700
	ctx.lr = 0x8329DC70;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DC80"))) PPC_WEAK_FUNC(sub_8329DC80);
PPC_FUNC_IMPL(__imp__sub_8329DC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// addi r4,r10,-17160
	ctx.r4.s64 = ctx.r10.s64 + -17160;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-30472
	ctx.r3.s64 = ctx.r10.s64 + -30472;
	// addi r5,r11,24032
	ctx.r5.s64 = ctx.r11.s64 + 24032;
	// bl 0x82ebf338
	ctx.lr = 0x8329DCAC;
	sub_82EBF338(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6200
	ctx.r3.s64 = ctx.r11.s64 + 6200;
	// bl 0x82ca3700
	ctx.lr = 0x8329DCB8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DCC8"))) PPC_WEAK_FUNC(sub_8329DCC8);
PPC_FUNC_IMPL(__imp__sub_8329DCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// addi r4,r10,-17116
	ctx.r4.s64 = ctx.r10.s64 + -17116;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30196
	ctx.r3.s64 = ctx.r10.s64 + -30196;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,25880
	ctx.r5.s64 = ctx.r11.s64 + 25880;
	// bl 0x82e7efd8
	ctx.lr = 0x8329DCFC;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6224
	ctx.r3.s64 = ctx.r11.s64 + 6224;
	// bl 0x82ca3700
	ctx.lr = 0x8329DD08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DD18"))) PPC_WEAK_FUNC(sub_8329DD18);
PPC_FUNC_IMPL(__imp__sub_8329DD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r4,r10,-17092
	ctx.r4.s64 = ctx.r10.s64 + -17092;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r5,r11,-32040
	ctx.r5.s64 = ctx.r11.s64 + -32040;
	// addi r3,r10,-29920
	ctx.r3.s64 = ctx.r10.s64 + -29920;
	// bl 0x82ed96c0
	ctx.lr = 0x8329DD40;
	sub_82ED96C0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6248
	ctx.r3.s64 = ctx.r11.s64 + 6248;
	// bl 0x82ca3700
	ctx.lr = 0x8329DD4C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DD5C"))) PPC_WEAK_FUNC(sub_8329DD5C);
PPC_FUNC_IMPL(__imp__sub_8329DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DD60"))) PPC_WEAK_FUNC(sub_8329DD60);
PPC_FUNC_IMPL(__imp__sub_8329DD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r4,r10,-16996
	ctx.r4.s64 = ctx.r10.s64 + -16996;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r5,r11,-27416
	ctx.r5.s64 = ctx.r11.s64 + -27416;
	// addi r3,r10,-29644
	ctx.r3.s64 = ctx.r10.s64 + -29644;
	// bl 0x82ed96c0
	ctx.lr = 0x8329DD88;
	sub_82ED96C0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// bl 0x82ca3700
	ctx.lr = 0x8329DD94;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DDA4"))) PPC_WEAK_FUNC(sub_8329DDA4);
PPC_FUNC_IMPL(__imp__sub_8329DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DDA8"))) PPC_WEAK_FUNC(sub_8329DDA8);
PPC_FUNC_IMPL(__imp__sub_8329DDA8) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-29256
	ctx.r31.s64 = ctx.r11.s64 + -29256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef2698
	ctx.lr = 0x8329DDCC;
	sub_82EF2698(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r3,r10,6296
	ctx.r3.s64 = ctx.r10.s64 + 6296;
	// bl 0x82ca3700
	ctx.lr = 0x8329DDE0;
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

__attribute__((alias("__imp__sub_8329DDF4"))) PPC_WEAK_FUNC(sub_8329DDF4);
PPC_FUNC_IMPL(__imp__sub_8329DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DDF8"))) PPC_WEAK_FUNC(sub_8329DDF8);
PPC_FUNC_IMPL(__imp__sub_8329DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// bl 0x82ef0368
	ctx.lr = 0x8329DE10;
	sub_82EF0368(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// bl 0x82ca3700
	ctx.lr = 0x8329DE1C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DE2C"))) PPC_WEAK_FUNC(sub_8329DE2C);
PPC_FUNC_IMPL(__imp__sub_8329DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DE30"))) PPC_WEAK_FUNC(sub_8329DE30);
PPC_FUNC_IMPL(__imp__sub_8329DE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// bl 0x82ef02d0
	ctx.lr = 0x8329DE48;
	sub_82EF02D0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6432
	ctx.r3.s64 = ctx.r11.s64 + 6432;
	// bl 0x82ca3700
	ctx.lr = 0x8329DE54;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DE64"))) PPC_WEAK_FUNC(sub_8329DE64);
PPC_FUNC_IMPL(__imp__sub_8329DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DE68"))) PPC_WEAK_FUNC(sub_8329DE68);
PPC_FUNC_IMPL(__imp__sub_8329DE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6344
	ctx.r3.s64 = ctx.r11.s64 + 6344;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DE74"))) PPC_WEAK_FUNC(sub_8329DE74);
PPC_FUNC_IMPL(__imp__sub_8329DE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DE78"))) PPC_WEAK_FUNC(sub_8329DE78);
PPC_FUNC_IMPL(__imp__sub_8329DE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6456
	ctx.r3.s64 = ctx.r11.s64 + 6456;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DE84"))) PPC_WEAK_FUNC(sub_8329DE84);
PPC_FUNC_IMPL(__imp__sub_8329DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DE88"))) PPC_WEAK_FUNC(sub_8329DE88);
PPC_FUNC_IMPL(__imp__sub_8329DE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6480
	ctx.r3.s64 = ctx.r11.s64 + 6480;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DE94"))) PPC_WEAK_FUNC(sub_8329DE94);
PPC_FUNC_IMPL(__imp__sub_8329DE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DE98"))) PPC_WEAK_FUNC(sub_8329DE98);
PPC_FUNC_IMPL(__imp__sub_8329DE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DEA4"))) PPC_WEAK_FUNC(sub_8329DEA4);
PPC_FUNC_IMPL(__imp__sub_8329DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DEA8"))) PPC_WEAK_FUNC(sub_8329DEA8);
PPC_FUNC_IMPL(__imp__sub_8329DEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6680
	ctx.r3.s64 = ctx.r11.s64 + 6680;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DEB4"))) PPC_WEAK_FUNC(sub_8329DEB4);
PPC_FUNC_IMPL(__imp__sub_8329DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DEB8"))) PPC_WEAK_FUNC(sub_8329DEB8);
PPC_FUNC_IMPL(__imp__sub_8329DEB8) {
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
	// bl 0x82f98458
	ctx.lr = 0x8329DECC;
	sub_82F98458(ctx, base);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r10,-27568
	ctx.r31.s64 = ctx.r10.s64 + -27568;
	// stb r11,-27568(r10)
	PPC_STORE_U8(ctx.r10.u32 + -27568, ctx.r11.u8);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// bl 0x82f98458
	ctx.lr = 0x8329DEE4;
	sub_82F98458(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f1.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x82f98458
	ctx.lr = 0x8329DEF4;
	sub_82F98458(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,40(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.f1.u64);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x82f98458
	ctx.lr = 0x8329DF04;
	sub_82F98458(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,56(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f1.u64);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6776
	ctx.r3.s64 = ctx.r11.s64 + 6776;
	// bl 0x82ca3700
	ctx.lr = 0x8329DF1C;
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

__attribute__((alias("__imp__sub_8329DF30"))) PPC_WEAK_FUNC(sub_8329DF30);
PPC_FUNC_IMPL(__imp__sub_8329DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27500
	ctx.r3.s64 = ctx.r11.s64 + -27500;
	// b 0x82f983e0
	sub_82F983E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DF3C"))) PPC_WEAK_FUNC(sub_8329DF3C);
PPC_FUNC_IMPL(__imp__sub_8329DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DF40"))) PPC_WEAK_FUNC(sub_8329DF40);
PPC_FUNC_IMPL(__imp__sub_8329DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6872
	ctx.r3.s64 = ctx.r11.s64 + 6872;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DF4C"))) PPC_WEAK_FUNC(sub_8329DF4C);
PPC_FUNC_IMPL(__imp__sub_8329DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DF50"))) PPC_WEAK_FUNC(sub_8329DF50);
PPC_FUNC_IMPL(__imp__sub_8329DF50) {
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
	// bl 0x82f98458
	ctx.lr = 0x8329DF64;
	sub_82F98458(ctx, base);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r10,-27456
	ctx.r31.s64 = ctx.r10.s64 + -27456;
	// stb r11,-27456(r10)
	PPC_STORE_U8(ctx.r10.u32 + -27456, ctx.r11.u8);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// bl 0x82f98458
	ctx.lr = 0x8329DF7C;
	sub_82F98458(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f1.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,6968
	ctx.r3.s64 = ctx.r11.s64 + 6968;
	// bl 0x82ca3700
	ctx.lr = 0x8329DF94;
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

__attribute__((alias("__imp__sub_8329DFA8"))) PPC_WEAK_FUNC(sub_8329DFA8);
PPC_FUNC_IMPL(__imp__sub_8329DFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7064
	ctx.r3.s64 = ctx.r11.s64 + 7064;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329DFB4"))) PPC_WEAK_FUNC(sub_8329DFB4);
PPC_FUNC_IMPL(__imp__sub_8329DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DFB8"))) PPC_WEAK_FUNC(sub_8329DFB8);
PPC_FUNC_IMPL(__imp__sub_8329DFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lis r6,-31946
	ctx.r6.s64 = -2093613056;
	// lwz r11,-2772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2772);
	// lwz r10,-2768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2768);
	// lwz r9,-2764(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2764);
	// addi r5,r6,-27352
	ctx.r5.s64 = ctx.r6.s64 + -27352;
	// lwz r8,-2760(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2760);
	// lwz r7,-2756(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2756);
	// stw r11,-27352(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27352, ctx.r11.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stw r7,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E000"))) PPC_WEAK_FUNC(sub_8329E000);
PPC_FUNC_IMPL(__imp__sub_8329E000) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x8329E008;
	__savegprlr_19(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// lis r5,-31946
	ctx.r5.s64 = -2093613056;
	// lwz r10,-2724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2724);
	// lwz r9,-2720(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2720);
	// lis r4,-31952
	ctx.r4.s64 = -2094006272;
	// addi r11,r5,-27328
	ctx.r11.s64 = ctx.r5.s64 + -27328;
	// lwz r8,-2716(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2716);
	// lwz r7,-2708(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2708);
	// lis r3,-31952
	ctx.r3.s64 = -2094006272;
	// lwz r6,-2704(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2704);
	// lis r31,-31952
	ctx.r31.s64 = -2094006272;
	// stw r10,-27328(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27328, ctx.r10.u32);
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r5,-2696(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + -2696);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// lwz r4,-2688(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2688);
	// lwz r28,-2676(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2676);
	// lis r24,-31952
	ctx.r24.s64 = -2094006272;
	// lwz r27,-2672(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2672);
	// lis r23,-31952
	ctx.r23.s64 = -2094006272;
	// lwz r26,-2668(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2668);
	// lis r22,-31952
	ctx.r22.s64 = -2094006272;
	// lwz r25,-2664(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2664);
	// lis r21,-31952
	ctx.r21.s64 = -2094006272;
	// lis r20,-31952
	ctx.r20.s64 = -2094006272;
	// lwz r3,-2680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2680);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lwz r31,-2700(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2700);
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lwz r30,-2692(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2692);
	// lis r7,-31952
	ctx.r7.s64 = -2094006272;
	// lwz r29,-2684(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2684);
	// lis r6,-31952
	ctx.r6.s64 = -2094006272;
	// lwz r24,-2656(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + -2656);
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// lwz r23,-2652(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + -2652);
	// lwz r22,-2644(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + -2644);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r21,-2636(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + -2636);
	// lwz r10,-2628(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2628);
	// lwz r9,-2648(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -2648);
	// lwz r8,-2640(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2640);
	// lwz r7,-2632(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2632);
	// lwz r6,-2624(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2624);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// stw r27,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// stw r26,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r26.u32);
	// stw r25,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r25.u32);
	// stw r24,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r24.u32);
	// stw r23,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r23.u32);
	// stw r22,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r22.u32);
	// stw r21,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r21.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r7,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// stw r6,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r6.u32);
	// stw r19,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r19.u32);
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E140"))) PPC_WEAK_FUNC(sub_8329E140);
PPC_FUNC_IMPL(__imp__sub_8329E140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-2492
	ctx.r11.s64 = ctx.r11.s64 + -2492;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832b258c
	ctx.lr = 0x8329E15C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7280
	ctx.r3.s64 = ctx.r11.s64 + 7280;
	// bl 0x82ca3700
	ctx.lr = 0x8329E168;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E178"))) PPC_WEAK_FUNC(sub_8329E178);
PPC_FUNC_IMPL(__imp__sub_8329E178) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-27224
	ctx.r31.s64 = ctx.r11.s64 + -27224;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82ffbf80
	ctx.lr = 0x8329E198;
	sub_82FFBF80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b258c
	ctx.lr = 0x8329E1A0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r3,r11,7288
	ctx.r3.s64 = ctx.r11.s64 + 7288;
	// bl 0x82ca3700
	ctx.lr = 0x8329E1C4;
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

__attribute__((alias("__imp__sub_8329E1D8"))) PPC_WEAK_FUNC(sub_8329E1D8);
PPC_FUNC_IMPL(__imp__sub_8329E1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-19648
	ctx.r4.s64 = ctx.r11.s64 + -19648;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27160
	ctx.r3.s64 = ctx.r11.s64 + -27160;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E1FC;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E20C"))) PPC_WEAK_FUNC(sub_8329E20C);
PPC_FUNC_IMPL(__imp__sub_8329E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E210"))) PPC_WEAK_FUNC(sub_8329E210);
PPC_FUNC_IMPL(__imp__sub_8329E210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-19540
	ctx.r4.s64 = ctx.r11.s64 + -19540;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E234;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E244"))) PPC_WEAK_FUNC(sub_8329E244);
PPC_FUNC_IMPL(__imp__sub_8329E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E248"))) PPC_WEAK_FUNC(sub_8329E248);
PPC_FUNC_IMPL(__imp__sub_8329E248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-18536
	ctx.r4.s64 = ctx.r11.s64 + -18536;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E26C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E27C"))) PPC_WEAK_FUNC(sub_8329E27C);
PPC_FUNC_IMPL(__imp__sub_8329E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E280"))) PPC_WEAK_FUNC(sub_8329E280);
PPC_FUNC_IMPL(__imp__sub_8329E280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,9
	ctx.r5.s64 = 9;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-18392
	ctx.r4.s64 = ctx.r11.s64 + -18392;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E2A4;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E2B4"))) PPC_WEAK_FUNC(sub_8329E2B4);
PPC_FUNC_IMPL(__imp__sub_8329E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E2B8"))) PPC_WEAK_FUNC(sub_8329E2B8);
PPC_FUNC_IMPL(__imp__sub_8329E2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-18032
	ctx.r4.s64 = ctx.r11.s64 + -18032;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E2DC;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E2EC"))) PPC_WEAK_FUNC(sub_8329E2EC);
PPC_FUNC_IMPL(__imp__sub_8329E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E2F0"))) PPC_WEAK_FUNC(sub_8329E2F0);
PPC_FUNC_IMPL(__imp__sub_8329E2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-17960
	ctx.r4.s64 = ctx.r11.s64 + -17960;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27120
	ctx.r3.s64 = ctx.r11.s64 + -27120;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E314;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E324"))) PPC_WEAK_FUNC(sub_8329E324);
PPC_FUNC_IMPL(__imp__sub_8329E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E328"))) PPC_WEAK_FUNC(sub_8329E328);
PPC_FUNC_IMPL(__imp__sub_8329E328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-17816
	ctx.r4.s64 = ctx.r11.s64 + -17816;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27112
	ctx.r3.s64 = ctx.r11.s64 + -27112;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E34C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E35C"))) PPC_WEAK_FUNC(sub_8329E35C);
PPC_FUNC_IMPL(__imp__sub_8329E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E360"))) PPC_WEAK_FUNC(sub_8329E360);
PPC_FUNC_IMPL(__imp__sub_8329E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-17672
	ctx.r4.s64 = ctx.r11.s64 + -17672;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27104
	ctx.r3.s64 = ctx.r11.s64 + -27104;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E384;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E394"))) PPC_WEAK_FUNC(sub_8329E394);
PPC_FUNC_IMPL(__imp__sub_8329E394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E398"))) PPC_WEAK_FUNC(sub_8329E398);
PPC_FUNC_IMPL(__imp__sub_8329E398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,11
	ctx.r5.s64 = 11;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-17528
	ctx.r4.s64 = ctx.r11.s64 + -17528;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E3BC;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E3CC"))) PPC_WEAK_FUNC(sub_8329E3CC);
PPC_FUNC_IMPL(__imp__sub_8329E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E3D0"))) PPC_WEAK_FUNC(sub_8329E3D0);
PPC_FUNC_IMPL(__imp__sub_8329E3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-17096
	ctx.r4.s64 = ctx.r11.s64 + -17096;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27088
	ctx.r3.s64 = ctx.r11.s64 + -27088;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E3F4;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E404"))) PPC_WEAK_FUNC(sub_8329E404);
PPC_FUNC_IMPL(__imp__sub_8329E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E408"))) PPC_WEAK_FUNC(sub_8329E408);
PPC_FUNC_IMPL(__imp__sub_8329E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,11
	ctx.r5.s64 = 11;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-16880
	ctx.r4.s64 = ctx.r11.s64 + -16880;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E42C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E43C"))) PPC_WEAK_FUNC(sub_8329E43C);
PPC_FUNC_IMPL(__imp__sub_8329E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E440"))) PPC_WEAK_FUNC(sub_8329E440);
PPC_FUNC_IMPL(__imp__sub_8329E440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-16484
	ctx.r4.s64 = ctx.r11.s64 + -16484;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27072
	ctx.r3.s64 = ctx.r11.s64 + -27072;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E464;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E474"))) PPC_WEAK_FUNC(sub_8329E474);
PPC_FUNC_IMPL(__imp__sub_8329E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E478"))) PPC_WEAK_FUNC(sub_8329E478);
PPC_FUNC_IMPL(__imp__sub_8329E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-16376
	ctx.r4.s64 = ctx.r11.s64 + -16376;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E49C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E4AC"))) PPC_WEAK_FUNC(sub_8329E4AC);
PPC_FUNC_IMPL(__imp__sub_8329E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E4B0"))) PPC_WEAK_FUNC(sub_8329E4B0);
PPC_FUNC_IMPL(__imp__sub_8329E4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-16304
	ctx.r4.s64 = ctx.r11.s64 + -16304;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27056
	ctx.r3.s64 = ctx.r11.s64 + -27056;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E4D4;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E4E4"))) PPC_WEAK_FUNC(sub_8329E4E4);
PPC_FUNC_IMPL(__imp__sub_8329E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E4E8"))) PPC_WEAK_FUNC(sub_8329E4E8);
PPC_FUNC_IMPL(__imp__sub_8329E4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ffca90
	ctx.lr = 0x8329E4F8;
	sub_82FFCA90(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r11,r11,-27048
	ctx.r11.s64 = ctx.r11.s64 + -27048;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E514"))) PPC_WEAK_FUNC(sub_8329E514);
PPC_FUNC_IMPL(__imp__sub_8329E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E518"))) PPC_WEAK_FUNC(sub_8329E518);
PPC_FUNC_IMPL(__imp__sub_8329E518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,10
	ctx.r5.s64 = 10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15720
	ctx.r4.s64 = ctx.r11.s64 + -15720;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27044
	ctx.r3.s64 = ctx.r11.s64 + -27044;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E53C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E54C"))) PPC_WEAK_FUNC(sub_8329E54C);
PPC_FUNC_IMPL(__imp__sub_8329E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E550"))) PPC_WEAK_FUNC(sub_8329E550);
PPC_FUNC_IMPL(__imp__sub_8329E550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-27036
	ctx.r3.s64 = ctx.r11.s64 + -27036;
	// bl 0x82ffe668
	ctx.lr = 0x8329E568;
	sub_82FFE668(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7304
	ctx.r3.s64 = ctx.r11.s64 + 7304;
	// bl 0x82ca3700
	ctx.lr = 0x8329E574;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E584"))) PPC_WEAK_FUNC(sub_8329E584);
PPC_FUNC_IMPL(__imp__sub_8329E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E588"))) PPC_WEAK_FUNC(sub_8329E588);
PPC_FUNC_IMPL(__imp__sub_8329E588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26984
	ctx.r3.s64 = ctx.r11.s64 + -26984;
	// bl 0x82ffcb78
	ctx.lr = 0x8329E5A0;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// bl 0x82ca3700
	ctx.lr = 0x8329E5AC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E5BC"))) PPC_WEAK_FUNC(sub_8329E5BC);
PPC_FUNC_IMPL(__imp__sub_8329E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E5C0"))) PPC_WEAK_FUNC(sub_8329E5C0);
PPC_FUNC_IMPL(__imp__sub_8329E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26996
	ctx.r3.s64 = ctx.r11.s64 + -26996;
	// bl 0x82ffd038
	ctx.lr = 0x8329E5D8;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// bl 0x82ca3700
	ctx.lr = 0x8329E5E4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E5F4"))) PPC_WEAK_FUNC(sub_8329E5F4);
PPC_FUNC_IMPL(__imp__sub_8329E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E5F8"))) PPC_WEAK_FUNC(sub_8329E5F8);
PPC_FUNC_IMPL(__imp__sub_8329E5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26936
	ctx.r3.s64 = ctx.r11.s64 + -26936;
	// bl 0x82ffcb78
	ctx.lr = 0x8329E610;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// bl 0x82ca3700
	ctx.lr = 0x8329E61C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E62C"))) PPC_WEAK_FUNC(sub_8329E62C);
PPC_FUNC_IMPL(__imp__sub_8329E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E630"))) PPC_WEAK_FUNC(sub_8329E630);
PPC_FUNC_IMPL(__imp__sub_8329E630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26948
	ctx.r3.s64 = ctx.r11.s64 + -26948;
	// bl 0x82ffd038
	ctx.lr = 0x8329E648;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7464
	ctx.r3.s64 = ctx.r11.s64 + 7464;
	// bl 0x82ca3700
	ctx.lr = 0x8329E654;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E664"))) PPC_WEAK_FUNC(sub_8329E664);
PPC_FUNC_IMPL(__imp__sub_8329E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E668"))) PPC_WEAK_FUNC(sub_8329E668);
PPC_FUNC_IMPL(__imp__sub_8329E668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x82ffcb78
	ctx.lr = 0x8329E680;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// bl 0x82ca3700
	ctx.lr = 0x8329E68C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E69C"))) PPC_WEAK_FUNC(sub_8329E69C);
PPC_FUNC_IMPL(__imp__sub_8329E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E6A0"))) PPC_WEAK_FUNC(sub_8329E6A0);
PPC_FUNC_IMPL(__imp__sub_8329E6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26900
	ctx.r3.s64 = ctx.r11.s64 + -26900;
	// bl 0x82ffd038
	ctx.lr = 0x8329E6B8;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7544
	ctx.r3.s64 = ctx.r11.s64 + 7544;
	// bl 0x82ca3700
	ctx.lr = 0x8329E6C4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E6D4"))) PPC_WEAK_FUNC(sub_8329E6D4);
PPC_FUNC_IMPL(__imp__sub_8329E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E6D8"))) PPC_WEAK_FUNC(sub_8329E6D8);
PPC_FUNC_IMPL(__imp__sub_8329E6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15248
	ctx.r4.s64 = ctx.r11.s64 + -15248;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26852
	ctx.r3.s64 = ctx.r11.s64 + -26852;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E6FC;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E70C"))) PPC_WEAK_FUNC(sub_8329E70C);
PPC_FUNC_IMPL(__imp__sub_8329E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E710"))) PPC_WEAK_FUNC(sub_8329E710);
PPC_FUNC_IMPL(__imp__sub_8329E710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15212
	ctx.r4.s64 = ctx.r11.s64 + -15212;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26844
	ctx.r3.s64 = ctx.r11.s64 + -26844;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E734;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E744"))) PPC_WEAK_FUNC(sub_8329E744);
PPC_FUNC_IMPL(__imp__sub_8329E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E748"))) PPC_WEAK_FUNC(sub_8329E748);
PPC_FUNC_IMPL(__imp__sub_8329E748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15176
	ctx.r4.s64 = ctx.r11.s64 + -15176;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26836
	ctx.r3.s64 = ctx.r11.s64 + -26836;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E76C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E77C"))) PPC_WEAK_FUNC(sub_8329E77C);
PPC_FUNC_IMPL(__imp__sub_8329E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E780"))) PPC_WEAK_FUNC(sub_8329E780);
PPC_FUNC_IMPL(__imp__sub_8329E780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15140
	ctx.r4.s64 = ctx.r11.s64 + -15140;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26828
	ctx.r3.s64 = ctx.r11.s64 + -26828;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E7A4;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E7B4"))) PPC_WEAK_FUNC(sub_8329E7B4);
PPC_FUNC_IMPL(__imp__sub_8329E7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E7B8"))) PPC_WEAK_FUNC(sub_8329E7B8);
PPC_FUNC_IMPL(__imp__sub_8329E7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15104
	ctx.r4.s64 = ctx.r11.s64 + -15104;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26820
	ctx.r3.s64 = ctx.r11.s64 + -26820;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E7DC;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E7EC"))) PPC_WEAK_FUNC(sub_8329E7EC);
PPC_FUNC_IMPL(__imp__sub_8329E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E7F0"))) PPC_WEAK_FUNC(sub_8329E7F0);
PPC_FUNC_IMPL(__imp__sub_8329E7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15068
	ctx.r4.s64 = ctx.r11.s64 + -15068;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26812
	ctx.r3.s64 = ctx.r11.s64 + -26812;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E814;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E824"))) PPC_WEAK_FUNC(sub_8329E824);
PPC_FUNC_IMPL(__imp__sub_8329E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E828"))) PPC_WEAK_FUNC(sub_8329E828);
PPC_FUNC_IMPL(__imp__sub_8329E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-15032
	ctx.r4.s64 = ctx.r11.s64 + -15032;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26804
	ctx.r3.s64 = ctx.r11.s64 + -26804;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E84C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E85C"))) PPC_WEAK_FUNC(sub_8329E85C);
PPC_FUNC_IMPL(__imp__sub_8329E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E860"))) PPC_WEAK_FUNC(sub_8329E860);
PPC_FUNC_IMPL(__imp__sub_8329E860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-14996
	ctx.r4.s64 = ctx.r11.s64 + -14996;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26796
	ctx.r3.s64 = ctx.r11.s64 + -26796;
	// bl 0x82ffcae8
	ctx.lr = 0x8329E884;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E894"))) PPC_WEAK_FUNC(sub_8329E894);
PPC_FUNC_IMPL(__imp__sub_8329E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E898"))) PPC_WEAK_FUNC(sub_8329E898);
PPC_FUNC_IMPL(__imp__sub_8329E898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26776
	ctx.r3.s64 = ctx.r11.s64 + -26776;
	// bl 0x82ffcb78
	ctx.lr = 0x8329E8B0;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// bl 0x82ca3700
	ctx.lr = 0x8329E8BC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E8CC"))) PPC_WEAK_FUNC(sub_8329E8CC);
PPC_FUNC_IMPL(__imp__sub_8329E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E8D0"))) PPC_WEAK_FUNC(sub_8329E8D0);
PPC_FUNC_IMPL(__imp__sub_8329E8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26788
	ctx.r3.s64 = ctx.r11.s64 + -26788;
	// bl 0x82ffd038
	ctx.lr = 0x8329E8E8;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7624
	ctx.r3.s64 = ctx.r11.s64 + 7624;
	// bl 0x82ca3700
	ctx.lr = 0x8329E8F4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E904"))) PPC_WEAK_FUNC(sub_8329E904);
PPC_FUNC_IMPL(__imp__sub_8329E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E908"))) PPC_WEAK_FUNC(sub_8329E908);
PPC_FUNC_IMPL(__imp__sub_8329E908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26584
	ctx.r3.s64 = ctx.r11.s64 + -26584;
	// bl 0x82ffcb78
	ctx.lr = 0x8329E920;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7664
	ctx.r3.s64 = ctx.r11.s64 + 7664;
	// bl 0x82ca3700
	ctx.lr = 0x8329E92C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E93C"))) PPC_WEAK_FUNC(sub_8329E93C);
PPC_FUNC_IMPL(__imp__sub_8329E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E940"))) PPC_WEAK_FUNC(sub_8329E940);
PPC_FUNC_IMPL(__imp__sub_8329E940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82ffd038
	ctx.lr = 0x8329E958;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7704
	ctx.r3.s64 = ctx.r11.s64 + 7704;
	// bl 0x82ca3700
	ctx.lr = 0x8329E964;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E974"))) PPC_WEAK_FUNC(sub_8329E974);
PPC_FUNC_IMPL(__imp__sub_8329E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E978"))) PPC_WEAK_FUNC(sub_8329E978);
PPC_FUNC_IMPL(__imp__sub_8329E978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26632
	ctx.r3.s64 = ctx.r11.s64 + -26632;
	// bl 0x82ffcb78
	ctx.lr = 0x8329E990;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// bl 0x82ca3700
	ctx.lr = 0x8329E99C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E9AC"))) PPC_WEAK_FUNC(sub_8329E9AC);
PPC_FUNC_IMPL(__imp__sub_8329E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E9B0"))) PPC_WEAK_FUNC(sub_8329E9B0);
PPC_FUNC_IMPL(__imp__sub_8329E9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26644
	ctx.r3.s64 = ctx.r11.s64 + -26644;
	// bl 0x82ffd038
	ctx.lr = 0x8329E9C8;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// bl 0x82ca3700
	ctx.lr = 0x8329E9D4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E9E4"))) PPC_WEAK_FUNC(sub_8329E9E4);
PPC_FUNC_IMPL(__imp__sub_8329E9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E9E8"))) PPC_WEAK_FUNC(sub_8329E9E8);
PPC_FUNC_IMPL(__imp__sub_8329E9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26680
	ctx.r3.s64 = ctx.r11.s64 + -26680;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EA00;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// bl 0x82ca3700
	ctx.lr = 0x8329EA0C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EA1C"))) PPC_WEAK_FUNC(sub_8329EA1C);
PPC_FUNC_IMPL(__imp__sub_8329EA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EA20"))) PPC_WEAK_FUNC(sub_8329EA20);
PPC_FUNC_IMPL(__imp__sub_8329EA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26692
	ctx.r3.s64 = ctx.r11.s64 + -26692;
	// bl 0x82ffd038
	ctx.lr = 0x8329EA38;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7864
	ctx.r3.s64 = ctx.r11.s64 + 7864;
	// bl 0x82ca3700
	ctx.lr = 0x8329EA44;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EA54"))) PPC_WEAK_FUNC(sub_8329EA54);
PPC_FUNC_IMPL(__imp__sub_8329EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EA58"))) PPC_WEAK_FUNC(sub_8329EA58);
PPC_FUNC_IMPL(__imp__sub_8329EA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26728
	ctx.r3.s64 = ctx.r11.s64 + -26728;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EA70;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7904
	ctx.r3.s64 = ctx.r11.s64 + 7904;
	// bl 0x82ca3700
	ctx.lr = 0x8329EA7C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EA8C"))) PPC_WEAK_FUNC(sub_8329EA8C);
PPC_FUNC_IMPL(__imp__sub_8329EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EA90"))) PPC_WEAK_FUNC(sub_8329EA90);
PPC_FUNC_IMPL(__imp__sub_8329EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26740
	ctx.r3.s64 = ctx.r11.s64 + -26740;
	// bl 0x82ffd038
	ctx.lr = 0x8329EAA8;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7944
	ctx.r3.s64 = ctx.r11.s64 + 7944;
	// bl 0x82ca3700
	ctx.lr = 0x8329EAB4;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EAC4"))) PPC_WEAK_FUNC(sub_8329EAC4);
PPC_FUNC_IMPL(__imp__sub_8329EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EAC8"))) PPC_WEAK_FUNC(sub_8329EAC8);
PPC_FUNC_IMPL(__imp__sub_8329EAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26532
	ctx.r3.s64 = ctx.r11.s64 + -26532;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EAE0;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// bl 0x82ca3700
	ctx.lr = 0x8329EAEC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EAFC"))) PPC_WEAK_FUNC(sub_8329EAFC);
PPC_FUNC_IMPL(__imp__sub_8329EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EB00"))) PPC_WEAK_FUNC(sub_8329EB00);
PPC_FUNC_IMPL(__imp__sub_8329EB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26544
	ctx.r3.s64 = ctx.r11.s64 + -26544;
	// bl 0x82ffd038
	ctx.lr = 0x8329EB18;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8024
	ctx.r3.s64 = ctx.r11.s64 + 8024;
	// bl 0x82ca3700
	ctx.lr = 0x8329EB24;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EB34"))) PPC_WEAK_FUNC(sub_8329EB34);
PPC_FUNC_IMPL(__imp__sub_8329EB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EB38"))) PPC_WEAK_FUNC(sub_8329EB38);
PPC_FUNC_IMPL(__imp__sub_8329EB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26484
	ctx.r3.s64 = ctx.r11.s64 + -26484;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EB50;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// bl 0x82ca3700
	ctx.lr = 0x8329EB5C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EB6C"))) PPC_WEAK_FUNC(sub_8329EB6C);
PPC_FUNC_IMPL(__imp__sub_8329EB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EB70"))) PPC_WEAK_FUNC(sub_8329EB70);
PPC_FUNC_IMPL(__imp__sub_8329EB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// bl 0x82ffd038
	ctx.lr = 0x8329EB88;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8104
	ctx.r3.s64 = ctx.r11.s64 + 8104;
	// bl 0x82ca3700
	ctx.lr = 0x8329EB94;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EBA4"))) PPC_WEAK_FUNC(sub_8329EBA4);
PPC_FUNC_IMPL(__imp__sub_8329EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EBA8"))) PPC_WEAK_FUNC(sub_8329EBA8);
PPC_FUNC_IMPL(__imp__sub_8329EBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26388
	ctx.r3.s64 = ctx.r11.s64 + -26388;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EBC0;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8144
	ctx.r3.s64 = ctx.r11.s64 + 8144;
	// bl 0x82ca3700
	ctx.lr = 0x8329EBCC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EBDC"))) PPC_WEAK_FUNC(sub_8329EBDC);
PPC_FUNC_IMPL(__imp__sub_8329EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EBE0"))) PPC_WEAK_FUNC(sub_8329EBE0);
PPC_FUNC_IMPL(__imp__sub_8329EBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26400
	ctx.r3.s64 = ctx.r11.s64 + -26400;
	// bl 0x82ffd038
	ctx.lr = 0x8329EBF8;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8184
	ctx.r3.s64 = ctx.r11.s64 + 8184;
	// bl 0x82ca3700
	ctx.lr = 0x8329EC04;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EC14"))) PPC_WEAK_FUNC(sub_8329EC14);
PPC_FUNC_IMPL(__imp__sub_8329EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EC18"))) PPC_WEAK_FUNC(sub_8329EC18);
PPC_FUNC_IMPL(__imp__sub_8329EC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26436
	ctx.r3.s64 = ctx.r11.s64 + -26436;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EC30;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// bl 0x82ca3700
	ctx.lr = 0x8329EC3C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EC4C"))) PPC_WEAK_FUNC(sub_8329EC4C);
PPC_FUNC_IMPL(__imp__sub_8329EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EC50"))) PPC_WEAK_FUNC(sub_8329EC50);
PPC_FUNC_IMPL(__imp__sub_8329EC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26448
	ctx.r3.s64 = ctx.r11.s64 + -26448;
	// bl 0x82ffd038
	ctx.lr = 0x8329EC68;
	sub_82FFD038(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8264
	ctx.r3.s64 = ctx.r11.s64 + 8264;
	// bl 0x82ca3700
	ctx.lr = 0x8329EC74;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EC84"))) PPC_WEAK_FUNC(sub_8329EC84);
PPC_FUNC_IMPL(__imp__sub_8329EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EC88"))) PPC_WEAK_FUNC(sub_8329EC88);
PPC_FUNC_IMPL(__imp__sub_8329EC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ffe500
	ctx.lr = 0x8329EC98;
	sub_82FFE500(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r11,r11,-26352
	ctx.r11.s64 = ctx.r11.s64 + -26352;
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ECB4"))) PPC_WEAK_FUNC(sub_8329ECB4);
PPC_FUNC_IMPL(__imp__sub_8329ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ECB8"))) PPC_WEAK_FUNC(sub_8329ECB8);
PPC_FUNC_IMPL(__imp__sub_8329ECB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82ffe530
	ctx.lr = 0x8329ECC8;
	sub_82FFE530(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r11,r11,-26344
	ctx.r11.s64 = ctx.r11.s64 + -26344;
	// stfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f1.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ECE4"))) PPC_WEAK_FUNC(sub_8329ECE4);
PPC_FUNC_IMPL(__imp__sub_8329ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ECE8"))) PPC_WEAK_FUNC(sub_8329ECE8);
PPC_FUNC_IMPL(__imp__sub_8329ECE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-11424
	ctx.r4.s64 = ctx.r11.s64 + -11424;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26332
	ctx.r3.s64 = ctx.r11.s64 + -26332;
	// bl 0x82ffcae8
	ctx.lr = 0x8329ED0C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ED1C"))) PPC_WEAK_FUNC(sub_8329ED1C);
PPC_FUNC_IMPL(__imp__sub_8329ED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ED20"))) PPC_WEAK_FUNC(sub_8329ED20);
PPC_FUNC_IMPL(__imp__sub_8329ED20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-11280
	ctx.r4.s64 = ctx.r11.s64 + -11280;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26324
	ctx.r3.s64 = ctx.r11.s64 + -26324;
	// bl 0x82ffcae8
	ctx.lr = 0x8329ED44;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ED54"))) PPC_WEAK_FUNC(sub_8329ED54);
PPC_FUNC_IMPL(__imp__sub_8329ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ED58"))) PPC_WEAK_FUNC(sub_8329ED58);
PPC_FUNC_IMPL(__imp__sub_8329ED58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-11032
	ctx.r4.s64 = ctx.r11.s64 + -11032;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26316
	ctx.r3.s64 = ctx.r11.s64 + -26316;
	// bl 0x82ffcae8
	ctx.lr = 0x8329ED7C;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329ED8C"))) PPC_WEAK_FUNC(sub_8329ED8C);
PPC_FUNC_IMPL(__imp__sub_8329ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ED90"))) PPC_WEAK_FUNC(sub_8329ED90);
PPC_FUNC_IMPL(__imp__sub_8329ED90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10888
	ctx.r4.s64 = ctx.r11.s64 + -10888;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26308
	ctx.r3.s64 = ctx.r11.s64 + -26308;
	// bl 0x82ffcae8
	ctx.lr = 0x8329EDB4;
	sub_82FFCAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EDC4"))) PPC_WEAK_FUNC(sub_8329EDC4);
PPC_FUNC_IMPL(__imp__sub_8329EDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EDC8"))) PPC_WEAK_FUNC(sub_8329EDC8);
PPC_FUNC_IMPL(__imp__sub_8329EDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26300
	ctx.r3.s64 = ctx.r11.s64 + -26300;
	// bl 0x82ffe668
	ctx.lr = 0x8329EDE0;
	sub_82FFE668(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// bl 0x82ca3700
	ctx.lr = 0x8329EDEC;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EDFC"))) PPC_WEAK_FUNC(sub_8329EDFC);
PPC_FUNC_IMPL(__imp__sub_8329EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EE00"))) PPC_WEAK_FUNC(sub_8329EE00);
PPC_FUNC_IMPL(__imp__sub_8329EE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26260
	ctx.r3.s64 = ctx.r11.s64 + -26260;
	// bl 0x82ffcb78
	ctx.lr = 0x8329EE18;
	sub_82FFCB78(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// bl 0x82ca3700
	ctx.lr = 0x8329EE24;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EE34"))) PPC_WEAK_FUNC(sub_8329EE34);
PPC_FUNC_IMPL(__imp__sub_8329EE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EE38"))) PPC_WEAK_FUNC(sub_8329EE38);
PPC_FUNC_IMPL(__imp__sub_8329EE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-26224
	ctx.r3.s64 = ctx.r11.s64 + -26224;
	// bl 0x82fff4b8
	ctx.lr = 0x8329EE50;
	sub_82FFF4B8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8384
	ctx.r3.s64 = ctx.r11.s64 + 8384;
	// bl 0x82ca3700
	ctx.lr = 0x8329EE5C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EE6C"))) PPC_WEAK_FUNC(sub_8329EE6C);
PPC_FUNC_IMPL(__imp__sub_8329EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EE70"))) PPC_WEAK_FUNC(sub_8329EE70);
PPC_FUNC_IMPL(__imp__sub_8329EE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r5,r10,-20244
	ctx.r5.s64 = ctx.r10.s64 + -20244;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,-30948
	ctx.r8.s64 = ctx.r11.s64 + -30948;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-30900
	ctx.r4.s64 = ctx.r10.s64 + -30900;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-21324
	ctx.r3.s64 = ctx.r10.s64 + -21324;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329EED0;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EEE0"))) PPC_WEAK_FUNC(sub_8329EEE0);
PPC_FUNC_IMPL(__imp__sub_8329EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-30728
	ctx.r7.s64 = ctx.r11.s64 + -30728;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21276
	ctx.r3.s64 = ctx.r10.s64 + -21276;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329EF3C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EF4C"))) PPC_WEAK_FUNC(sub_8329EF4C);
PPC_FUNC_IMPL(__imp__sub_8329EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EF50"))) PPC_WEAK_FUNC(sub_8329EF50);
PPC_FUNC_IMPL(__imp__sub_8329EF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-30560
	ctx.r7.s64 = ctx.r11.s64 + -30560;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21228
	ctx.r3.s64 = ctx.r10.s64 + -21228;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329EFAC;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EFBC"))) PPC_WEAK_FUNC(sub_8329EFBC);
PPC_FUNC_IMPL(__imp__sub_8329EFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EFC0"))) PPC_WEAK_FUNC(sub_8329EFC0);
PPC_FUNC_IMPL(__imp__sub_8329EFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,5376
	ctx.r11.s64 = ctx.r11.s64 + 5376;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,5360(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5360);
	// addi r8,r8,19456
	ctx.r8.s64 = ctx.r8.s64 + 19456;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r7,r7,19444
	ctx.r7.s64 = ctx.r7.s64 + 19444;
	// addi r6,r6,17924
	ctx.r6.s64 = ctx.r6.s64 + 17924;
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// addi r5,r5,19436
	ctx.r5.s64 = ctx.r5.s64 + 19436;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stb r9,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r9.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r9,109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 109, ctx.r9.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r10,110(r11)
	PPC_STORE_U16(ctx.r11.u32 + 110, ctx.r10.u16);
	// sth r10,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r9,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r9.u16);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stb r9,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r9.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r10,133(r11)
	PPC_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// sth r10,134(r11)
	PPC_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,136(r11)
	PPC_STORE_U16(ctx.r11.u32 + 136, ctx.r10.u16);
	// sth r9,138(r11)
	PPC_STORE_U16(ctx.r11.u32 + 138, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stb r9,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r9.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// sth r10,158(r11)
	PPC_STORE_U16(ctx.r11.u32 + 158, ctx.r10.u16);
	// sth r10,160(r11)
	PPC_STORE_U16(ctx.r11.u32 + 160, ctx.r10.u16);
	// sth r9,162(r11)
	PPC_STORE_U16(ctx.r11.u32 + 162, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r5,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stb r9,180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 180, ctx.r9.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r10,181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// sth r10,182(r11)
	PPC_STORE_U16(ctx.r11.u32 + 182, ctx.r10.u16);
	// sth r10,184(r11)
	PPC_STORE_U16(ctx.r11.u32 + 184, ctx.r10.u16);
	// sth r9,186(r11)
	PPC_STORE_U16(ctx.r11.u32 + 186, ctx.r9.u16);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F0B4"))) PPC_WEAK_FUNC(sub_8329F0B4);
PPC_FUNC_IMPL(__imp__sub_8329F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F0B8"))) PPC_WEAK_FUNC(sub_8329F0B8);
PPC_FUNC_IMPL(__imp__sub_8329F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-30024
	ctx.r9.s64 = ctx.r10.s64 + -30024;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,5376
	ctx.r8.s64 = ctx.r11.s64 + 5376;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r4,r10,19420
	ctx.r4.s64 = ctx.r10.s64 + 19420;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r3,r10,-21180
	ctx.r3.s64 = ctx.r10.s64 + -21180;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F118;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F128"))) PPC_WEAK_FUNC(sub_8329F128);
PPC_FUNC_IMPL(__imp__sub_8329F128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29964
	ctx.r7.s64 = ctx.r11.s64 + -29964;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18284
	ctx.r4.s64 = ctx.r10.s64 + 18284;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21132
	ctx.r3.s64 = ctx.r10.s64 + -21132;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F184;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F194"))) PPC_WEAK_FUNC(sub_8329F194);
PPC_FUNC_IMPL(__imp__sub_8329F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F198"))) PPC_WEAK_FUNC(sub_8329F198);
PPC_FUNC_IMPL(__imp__sub_8329F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29916
	ctx.r7.s64 = ctx.r11.s64 + -29916;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18300
	ctx.r4.s64 = ctx.r10.s64 + 18300;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21084
	ctx.r3.s64 = ctx.r10.s64 + -21084;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F1F4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F204"))) PPC_WEAK_FUNC(sub_8329F204);
PPC_FUNC_IMPL(__imp__sub_8329F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F208"))) PPC_WEAK_FUNC(sub_8329F208);
PPC_FUNC_IMPL(__imp__sub_8329F208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29848
	ctx.r7.s64 = ctx.r11.s64 + -29848;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21036
	ctx.r3.s64 = ctx.r10.s64 + -21036;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F264;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F274"))) PPC_WEAK_FUNC(sub_8329F274);
PPC_FUNC_IMPL(__imp__sub_8329F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F278"))) PPC_WEAK_FUNC(sub_8329F278);
PPC_FUNC_IMPL(__imp__sub_8329F278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-29608
	ctx.r7.s64 = ctx.r11.s64 + -29608;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r4,r10,18172
	ctx.r4.s64 = ctx.r10.s64 + 18172;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20988
	ctx.r3.s64 = ctx.r10.s64 + -20988;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F2D4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F2E4"))) PPC_WEAK_FUNC(sub_8329F2E4);
PPC_FUNC_IMPL(__imp__sub_8329F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F2E8"))) PPC_WEAK_FUNC(sub_8329F2E8);
PPC_FUNC_IMPL(__imp__sub_8329F2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,5584
	ctx.r11.s64 = ctx.r11.s64 + 5584;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,5568(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5568);
	// addi r8,r8,19456
	ctx.r8.s64 = ctx.r8.s64 + 19456;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r7,r7,19444
	ctx.r7.s64 = ctx.r7.s64 + 19444;
	// addi r6,r6,17924
	ctx.r6.s64 = ctx.r6.s64 + 17924;
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// addi r5,r5,19436
	ctx.r5.s64 = ctx.r5.s64 + 19436;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r4,r4,-29868
	ctx.r4.s64 = ctx.r4.s64 + -29868;
	// stb r9,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r9.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r9,109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 109, ctx.r9.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r10,110(r11)
	PPC_STORE_U16(ctx.r11.u32 + 110, ctx.r10.u16);
	// sth r10,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r10.u16);
	// sth r9,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r9.u16);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stb r9,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r9.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r10,133(r11)
	PPC_STORE_U8(ctx.r11.u32 + 133, ctx.r10.u8);
	// sth r10,134(r11)
	PPC_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,136(r11)
	PPC_STORE_U16(ctx.r11.u32 + 136, ctx.r10.u16);
	// sth r9,138(r11)
	PPC_STORE_U16(ctx.r11.u32 + 138, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stb r9,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r9.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r10.u8);
	// sth r10,158(r11)
	PPC_STORE_U16(ctx.r11.u32 + 158, ctx.r10.u16);
	// sth r10,160(r11)
	PPC_STORE_U16(ctx.r11.u32 + 160, ctx.r10.u16);
	// sth r9,162(r11)
	PPC_STORE_U16(ctx.r11.u32 + 162, ctx.r9.u16);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r5,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stb r9,180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 180, ctx.r9.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r10,181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 181, ctx.r10.u8);
	// sth r10,182(r11)
	PPC_STORE_U16(ctx.r11.u32 + 182, ctx.r10.u16);
	// sth r10,184(r11)
	PPC_STORE_U16(ctx.r11.u32 + 184, ctx.r10.u16);
	// sth r9,186(r11)
	PPC_STORE_U16(ctx.r11.u32 + 186, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// stw r4,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r4.u32);
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// stb r9,204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 204, ctx.r9.u8);
	// stb r10,205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// sth r10,206(r11)
	PPC_STORE_U16(ctx.r11.u32 + 206, ctx.r10.u16);
	// sth r10,208(r11)
	PPC_STORE_U16(ctx.r11.u32 + 208, ctx.r10.u16);
	// sth r9,210(r11)
	PPC_STORE_U16(ctx.r11.u32 + 210, ctx.r9.u16);
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F40C"))) PPC_WEAK_FUNC(sub_8329F40C);
PPC_FUNC_IMPL(__imp__sub_8329F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F410"))) PPC_WEAK_FUNC(sub_8329F410);
PPC_FUNC_IMPL(__imp__sub_8329F410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-29000
	ctx.r9.s64 = ctx.r10.s64 + -29000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,5584
	ctx.r8.s64 = ctx.r11.s64 + 5584;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r4,r10,19420
	ctx.r4.s64 = ctx.r10.s64 + 19420;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r10,-20940
	ctx.r3.s64 = ctx.r10.s64 + -20940;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F470;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F480"))) PPC_WEAK_FUNC(sub_8329F480);
PPC_FUNC_IMPL(__imp__sub_8329F480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-28940
	ctx.r7.s64 = ctx.r11.s64 + -28940;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,18284
	ctx.r4.s64 = ctx.r10.s64 + 18284;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20892
	ctx.r3.s64 = ctx.r10.s64 + -20892;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F4DC;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F4EC"))) PPC_WEAK_FUNC(sub_8329F4EC);
PPC_FUNC_IMPL(__imp__sub_8329F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F4F0"))) PPC_WEAK_FUNC(sub_8329F4F0);
PPC_FUNC_IMPL(__imp__sub_8329F4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,-28888
	ctx.r7.s64 = ctx.r11.s64 + -28888;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,18300
	ctx.r4.s64 = ctx.r10.s64 + 18300;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20844
	ctx.r3.s64 = ctx.r10.s64 + -20844;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F54C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F55C"))) PPC_WEAK_FUNC(sub_8329F55C);
PPC_FUNC_IMPL(__imp__sub_8329F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F560"))) PPC_WEAK_FUNC(sub_8329F560);
PPC_FUNC_IMPL(__imp__sub_8329F560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F57C"))) PPC_WEAK_FUNC(sub_8329F57C);
PPC_FUNC_IMPL(__imp__sub_8329F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F580"))) PPC_WEAK_FUNC(sub_8329F580);
PPC_FUNC_IMPL(__imp__sub_8329F580) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-20792
	ctx.r31.s64 = ctx.r11.s64 + -20792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b259c
	ctx.lr = 0x8329F5A4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,8424
	ctx.r3.s64 = ctx.r10.s64 + 8424;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82ca3700
	ctx.lr = 0x8329F5B8;
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

__attribute__((alias("__imp__sub_8329F5CC"))) PPC_WEAK_FUNC(sub_8329F5CC);
PPC_FUNC_IMPL(__imp__sub_8329F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F5D0"))) PPC_WEAK_FUNC(sub_8329F5D0);
PPC_FUNC_IMPL(__imp__sub_8329F5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-28776
	ctx.r7.s64 = ctx.r11.s64 + -28776;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-28584
	ctx.r4.s64 = ctx.r10.s64 + -28584;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20732
	ctx.r3.s64 = ctx.r10.s64 + -20732;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F62C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F63C"))) PPC_WEAK_FUNC(sub_8329F63C);
PPC_FUNC_IMPL(__imp__sub_8329F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F640"))) PPC_WEAK_FUNC(sub_8329F640);
PPC_FUNC_IMPL(__imp__sub_8329F640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-28728
	ctx.r7.s64 = ctx.r11.s64 + -28728;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r4,r10,-28576
	ctx.r4.s64 = ctx.r10.s64 + -28576;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20684
	ctx.r3.s64 = ctx.r10.s64 + -20684;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F69C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F6AC"))) PPC_WEAK_FUNC(sub_8329F6AC);
PPC_FUNC_IMPL(__imp__sub_8329F6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F6B0"))) PPC_WEAK_FUNC(sub_8329F6B0);
PPC_FUNC_IMPL(__imp__sub_8329F6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r10,-28368
	ctx.r9.s64 = ctx.r10.s64 + -28368;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,-28328
	ctx.r8.s64 = ctx.r11.s64 + -28328;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r4,r10,-28256
	ctx.r4.s64 = ctx.r10.s64 + -28256;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r10,-20636
	ctx.r3.s64 = ctx.r10.s64 + -20636;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F710;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F720"))) PPC_WEAK_FUNC(sub_8329F720);
PPC_FUNC_IMPL(__imp__sub_8329F720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-28096
	ctx.r7.s64 = ctx.r11.s64 + -28096;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,-27880
	ctx.r4.s64 = ctx.r10.s64 + -27880;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20588
	ctx.r3.s64 = ctx.r10.s64 + -20588;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,176
	ctx.r6.s64 = 176;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F77C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F78C"))) PPC_WEAK_FUNC(sub_8329F78C);
PPC_FUNC_IMPL(__imp__sub_8329F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F790"))) PPC_WEAK_FUNC(sub_8329F790);
PPC_FUNC_IMPL(__imp__sub_8329F790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,6012
	ctx.r11.s64 = ctx.r11.s64 + 6012;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F7AC"))) PPC_WEAK_FUNC(sub_8329F7AC);
PPC_FUNC_IMPL(__imp__sub_8329F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F7B0"))) PPC_WEAK_FUNC(sub_8329F7B0);
PPC_FUNC_IMPL(__imp__sub_8329F7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-27596
	ctx.r7.s64 = ctx.r11.s64 + -27596;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-27480
	ctx.r4.s64 = ctx.r10.s64 + -27480;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20532
	ctx.r3.s64 = ctx.r10.s64 + -20532;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F80C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F81C"))) PPC_WEAK_FUNC(sub_8329F81C);
PPC_FUNC_IMPL(__imp__sub_8329F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F820"))) PPC_WEAK_FUNC(sub_8329F820);
PPC_FUNC_IMPL(__imp__sub_8329F820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-27548
	ctx.r7.s64 = ctx.r11.s64 + -27548;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-27444
	ctx.r4.s64 = ctx.r10.s64 + -27444;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20484
	ctx.r3.s64 = ctx.r10.s64 + -20484;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F87C;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F88C"))) PPC_WEAK_FUNC(sub_8329F88C);
PPC_FUNC_IMPL(__imp__sub_8329F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F890"))) PPC_WEAK_FUNC(sub_8329F890);
PPC_FUNC_IMPL(__imp__sub_8329F890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,6080
	ctx.r10.s64 = ctx.r10.s64 + 6080;
	// lwz r11,6024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F8A8"))) PPC_WEAK_FUNC(sub_8329F8A8);
PPC_FUNC_IMPL(__imp__sub_8329F8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-27500
	ctx.r9.s64 = ctx.r10.s64 + -27500;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r8,r11,6080
	ctx.r8.s64 = ctx.r11.s64 + 6080;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r4,r10,-27416
	ctx.r4.s64 = ctx.r10.s64 + -27416;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r3,r10,-20436
	ctx.r3.s64 = ctx.r10.s64 + -20436;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329F908;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F918"))) PPC_WEAK_FUNC(sub_8329F918);
PPC_FUNC_IMPL(__imp__sub_8329F918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26664
	ctx.r7.s64 = ctx.r11.s64 + -26664;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-26616
	ctx.r4.s64 = ctx.r10.s64 + -26616;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20388
	ctx.r3.s64 = ctx.r10.s64 + -20388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F974;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F984"))) PPC_WEAK_FUNC(sub_8329F984);
PPC_FUNC_IMPL(__imp__sub_8329F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F988"))) PPC_WEAK_FUNC(sub_8329F988);
PPC_FUNC_IMPL(__imp__sub_8329F988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26488
	ctx.r7.s64 = ctx.r11.s64 + -26488;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-26296
	ctx.r4.s64 = ctx.r10.s64 + -26296;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20340
	ctx.r3.s64 = ctx.r10.s64 + -20340;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329F9E4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F9F4"))) PPC_WEAK_FUNC(sub_8329F9F4);
PPC_FUNC_IMPL(__imp__sub_8329F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F9F8"))) PPC_WEAK_FUNC(sub_8329F9F8);
PPC_FUNC_IMPL(__imp__sub_8329F9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26392
	ctx.r7.s64 = ctx.r11.s64 + -26392;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-26272
	ctx.r4.s64 = ctx.r10.s64 + -26272;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20292
	ctx.r3.s64 = ctx.r10.s64 + -20292;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FA54;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FA64"))) PPC_WEAK_FUNC(sub_8329FA64);
PPC_FUNC_IMPL(__imp__sub_8329FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FA68"))) PPC_WEAK_FUNC(sub_8329FA68);
PPC_FUNC_IMPL(__imp__sub_8329FA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,14716
	ctx.r4.s64 = ctx.r10.s64 + 14716;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20244
	ctx.r3.s64 = ctx.r10.s64 + -20244;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329FAB8;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FAC8"))) PPC_WEAK_FUNC(sub_8329FAC8);
PPC_FUNC_IMPL(__imp__sub_8329FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-26168
	ctx.r7.s64 = ctx.r11.s64 + -26168;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r4,r10,-26048
	ctx.r4.s64 = ctx.r10.s64 + -26048;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20196
	ctx.r3.s64 = ctx.r10.s64 + -20196;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FB24;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FB34"))) PPC_WEAK_FUNC(sub_8329FB34);
PPC_FUNC_IMPL(__imp__sub_8329FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FB38"))) PPC_WEAK_FUNC(sub_8329FB38);
PPC_FUNC_IMPL(__imp__sub_8329FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,6884
	ctx.r11.s64 = ctx.r11.s64 + 6884;
	// lwz r9,29996(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// stw r11,29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29996, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FB54"))) PPC_WEAK_FUNC(sub_8329FB54);
PPC_FUNC_IMPL(__imp__sub_8329FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FB58"))) PPC_WEAK_FUNC(sub_8329FB58);
PPC_FUNC_IMPL(__imp__sub_8329FB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-24272
	ctx.r7.s64 = ctx.r11.s64 + -24272;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r4,r10,-24008
	ctx.r4.s64 = ctx.r10.s64 + -24008;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20148
	ctx.r3.s64 = ctx.r10.s64 + -20148;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FBB4;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FBC4"))) PPC_WEAK_FUNC(sub_8329FBC4);
PPC_FUNC_IMPL(__imp__sub_8329FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FBC8"))) PPC_WEAK_FUNC(sub_8329FBC8);
PPC_FUNC_IMPL(__imp__sub_8329FBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r7,r11,-23840
	ctx.r7.s64 = ctx.r11.s64 + -23840;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,-23624
	ctx.r4.s64 = ctx.r10.s64 + -23624;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-20100
	ctx.r3.s64 = ctx.r10.s64 + -20100;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x8329FC24;
	sub_82D4F620(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FC34"))) PPC_WEAK_FUNC(sub_8329FC34);
PPC_FUNC_IMPL(__imp__sub_8329FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

