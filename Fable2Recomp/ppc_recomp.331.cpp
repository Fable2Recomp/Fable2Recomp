#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8329FC38"))) PPC_WEAK_FUNC(sub_8329FC38);
PPC_FUNC_IMPL(__imp__sub_8329FC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-22828
	ctx.r4.s64 = ctx.r11.s64 + -22828;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-20044
	ctx.r3.s64 = ctx.r11.s64 + -20044;
	// bl 0x82e83328
	ctx.lr = 0x8329FC60;
	sub_82E83328(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// bl 0x82ca3700
	ctx.lr = 0x8329FC6C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FC7C"))) PPC_WEAK_FUNC(sub_8329FC7C);
PPC_FUNC_IMPL(__imp__sub_8329FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FC80"))) PPC_WEAK_FUNC(sub_8329FC80);
PPC_FUNC_IMPL(__imp__sub_8329FC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FC8C"))) PPC_WEAK_FUNC(sub_8329FC8C);
PPC_FUNC_IMPL(__imp__sub_8329FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FC90"))) PPC_WEAK_FUNC(sub_8329FC90);
PPC_FUNC_IMPL(__imp__sub_8329FC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r4,r10,-22772
	ctx.r4.s64 = ctx.r10.s64 + -22772;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18256
	ctx.r3.s64 = ctx.r10.s64 + -18256;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-29392
	ctx.r5.s64 = ctx.r11.s64 + -29392;
	// bl 0x82e7efd8
	ctx.lr = 0x8329FCC4;
	sub_82E7EFD8(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8648
	ctx.r3.s64 = ctx.r11.s64 + 8648;
	// bl 0x82ca3700
	ctx.lr = 0x8329FCD0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FCE0"))) PPC_WEAK_FUNC(sub_8329FCE0);
PPC_FUNC_IMPL(__imp__sub_8329FCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FCEC"))) PPC_WEAK_FUNC(sub_8329FCEC);
PPC_FUNC_IMPL(__imp__sub_8329FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FCF0"))) PPC_WEAK_FUNC(sub_8329FCF0);
PPC_FUNC_IMPL(__imp__sub_8329FCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,-16020
	ctx.r3.s64 = ctx.r11.s64 + -16020;
	// b 0x831ca898
	sub_831CA898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD00"))) PPC_WEAK_FUNC(sub_8329FD00);
PPC_FUNC_IMPL(__imp__sub_8329FD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r4,r11,-16020
	ctx.r4.s64 = ctx.r11.s64 + -16020;
	// addi r3,r10,-15976
	ctx.r3.s64 = ctx.r10.s64 + -15976;
	// b 0x831cb4d0
	sub_831CB4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD14"))) PPC_WEAK_FUNC(sub_8329FD14);
PPC_FUNC_IMPL(__imp__sub_8329FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD18"))) PPC_WEAK_FUNC(sub_8329FD18);
PPC_FUNC_IMPL(__imp__sub_8329FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r3,r11,6904
	ctx.r3.s64 = ctx.r11.s64 + 6904;
	// b 0x822f0250
	sub_822F0250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD24"))) PPC_WEAK_FUNC(sub_8329FD24);
PPC_FUNC_IMPL(__imp__sub_8329FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD28"))) PPC_WEAK_FUNC(sub_8329FD28);
PPC_FUNC_IMPL(__imp__sub_8329FD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28884
	ctx.r3.s64 = ctx.r11.s64 + 28884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD34"))) PPC_WEAK_FUNC(sub_8329FD34);
PPC_FUNC_IMPL(__imp__sub_8329FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD38"))) PPC_WEAK_FUNC(sub_8329FD38);
PPC_FUNC_IMPL(__imp__sub_8329FD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28888
	ctx.r3.s64 = ctx.r11.s64 + 28888;
	// b 0x822f0808
	sub_822F0808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD44"))) PPC_WEAK_FUNC(sub_8329FD44);
PPC_FUNC_IMPL(__imp__sub_8329FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD48"))) PPC_WEAK_FUNC(sub_8329FD48);
PPC_FUNC_IMPL(__imp__sub_8329FD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28900
	ctx.r3.s64 = ctx.r11.s64 + 28900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD54"))) PPC_WEAK_FUNC(sub_8329FD54);
PPC_FUNC_IMPL(__imp__sub_8329FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD58"))) PPC_WEAK_FUNC(sub_8329FD58);
PPC_FUNC_IMPL(__imp__sub_8329FD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28904
	ctx.r3.s64 = ctx.r11.s64 + 28904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD64"))) PPC_WEAK_FUNC(sub_8329FD64);
PPC_FUNC_IMPL(__imp__sub_8329FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD68"))) PPC_WEAK_FUNC(sub_8329FD68);
PPC_FUNC_IMPL(__imp__sub_8329FD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28908
	ctx.r3.s64 = ctx.r11.s64 + 28908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD74"))) PPC_WEAK_FUNC(sub_8329FD74);
PPC_FUNC_IMPL(__imp__sub_8329FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD78"))) PPC_WEAK_FUNC(sub_8329FD78);
PPC_FUNC_IMPL(__imp__sub_8329FD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28912
	ctx.r3.s64 = ctx.r11.s64 + 28912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD84"))) PPC_WEAK_FUNC(sub_8329FD84);
PPC_FUNC_IMPL(__imp__sub_8329FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD88"))) PPC_WEAK_FUNC(sub_8329FD88);
PPC_FUNC_IMPL(__imp__sub_8329FD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28916
	ctx.r3.s64 = ctx.r11.s64 + 28916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FD94"))) PPC_WEAK_FUNC(sub_8329FD94);
PPC_FUNC_IMPL(__imp__sub_8329FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FD98"))) PPC_WEAK_FUNC(sub_8329FD98);
PPC_FUNC_IMPL(__imp__sub_8329FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28920
	ctx.r3.s64 = ctx.r11.s64 + 28920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FDA4"))) PPC_WEAK_FUNC(sub_8329FDA4);
PPC_FUNC_IMPL(__imp__sub_8329FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FDA8"))) PPC_WEAK_FUNC(sub_8329FDA8);
PPC_FUNC_IMPL(__imp__sub_8329FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28924
	ctx.r3.s64 = ctx.r11.s64 + 28924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FDB4"))) PPC_WEAK_FUNC(sub_8329FDB4);
PPC_FUNC_IMPL(__imp__sub_8329FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FDB8"))) PPC_WEAK_FUNC(sub_8329FDB8);
PPC_FUNC_IMPL(__imp__sub_8329FDB8) {
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
	// addi r31,r11,28928
	ctx.r31.s64 = ctx.r11.s64 + 28928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f5c0
	ctx.lr = 0x8329FDD8;
	sub_82A0F5C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FDE0;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8329FDFC"))) PPC_WEAK_FUNC(sub_8329FDFC);
PPC_FUNC_IMPL(__imp__sub_8329FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE00"))) PPC_WEAK_FUNC(sub_8329FE00);
PPC_FUNC_IMPL(__imp__sub_8329FE00) {
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
	// addi r31,r11,28940
	ctx.r31.s64 = ctx.r11.s64 + 28940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ff7e0
	ctx.lr = 0x8329FE20;
	sub_822FF7E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FE28;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8329FE44"))) PPC_WEAK_FUNC(sub_8329FE44);
PPC_FUNC_IMPL(__imp__sub_8329FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE48"))) PPC_WEAK_FUNC(sub_8329FE48);
PPC_FUNC_IMPL(__imp__sub_8329FE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,28952
	ctx.r3.s64 = ctx.r11.s64 + 28952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE54"))) PPC_WEAK_FUNC(sub_8329FE54);
PPC_FUNC_IMPL(__imp__sub_8329FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE58"))) PPC_WEAK_FUNC(sub_8329FE58);
PPC_FUNC_IMPL(__imp__sub_8329FE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE64"))) PPC_WEAK_FUNC(sub_8329FE64);
PPC_FUNC_IMPL(__imp__sub_8329FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE68"))) PPC_WEAK_FUNC(sub_8329FE68);
PPC_FUNC_IMPL(__imp__sub_8329FE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29044
	ctx.r3.s64 = ctx.r11.s64 + 29044;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE74"))) PPC_WEAK_FUNC(sub_8329FE74);
PPC_FUNC_IMPL(__imp__sub_8329FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE78"))) PPC_WEAK_FUNC(sub_8329FE78);
PPC_FUNC_IMPL(__imp__sub_8329FE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29048
	ctx.r3.s64 = ctx.r11.s64 + 29048;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE84"))) PPC_WEAK_FUNC(sub_8329FE84);
PPC_FUNC_IMPL(__imp__sub_8329FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE88"))) PPC_WEAK_FUNC(sub_8329FE88);
PPC_FUNC_IMPL(__imp__sub_8329FE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29052
	ctx.r3.s64 = ctx.r11.s64 + 29052;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FE94"))) PPC_WEAK_FUNC(sub_8329FE94);
PPC_FUNC_IMPL(__imp__sub_8329FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FE98"))) PPC_WEAK_FUNC(sub_8329FE98);
PPC_FUNC_IMPL(__imp__sub_8329FE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29056
	ctx.r3.s64 = ctx.r11.s64 + 29056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEA4"))) PPC_WEAK_FUNC(sub_8329FEA4);
PPC_FUNC_IMPL(__imp__sub_8329FEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEA8"))) PPC_WEAK_FUNC(sub_8329FEA8);
PPC_FUNC_IMPL(__imp__sub_8329FEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29064
	ctx.r3.s64 = ctx.r11.s64 + 29064;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEB4"))) PPC_WEAK_FUNC(sub_8329FEB4);
PPC_FUNC_IMPL(__imp__sub_8329FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEB8"))) PPC_WEAK_FUNC(sub_8329FEB8);
PPC_FUNC_IMPL(__imp__sub_8329FEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29068
	ctx.r3.s64 = ctx.r11.s64 + 29068;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEC4"))) PPC_WEAK_FUNC(sub_8329FEC4);
PPC_FUNC_IMPL(__imp__sub_8329FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEC8"))) PPC_WEAK_FUNC(sub_8329FEC8);
PPC_FUNC_IMPL(__imp__sub_8329FEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29072
	ctx.r3.s64 = ctx.r11.s64 + 29072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FED4"))) PPC_WEAK_FUNC(sub_8329FED4);
PPC_FUNC_IMPL(__imp__sub_8329FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FED8"))) PPC_WEAK_FUNC(sub_8329FED8);
PPC_FUNC_IMPL(__imp__sub_8329FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29076
	ctx.r3.s64 = ctx.r11.s64 + 29076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEE4"))) PPC_WEAK_FUNC(sub_8329FEE4);
PPC_FUNC_IMPL(__imp__sub_8329FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEE8"))) PPC_WEAK_FUNC(sub_8329FEE8);
PPC_FUNC_IMPL(__imp__sub_8329FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29136
	ctx.r3.s64 = ctx.r11.s64 + 29136;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FEF4"))) PPC_WEAK_FUNC(sub_8329FEF4);
PPC_FUNC_IMPL(__imp__sub_8329FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FEF8"))) PPC_WEAK_FUNC(sub_8329FEF8);
PPC_FUNC_IMPL(__imp__sub_8329FEF8) {
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
	// addi r31,r11,29144
	ctx.r31.s64 = ctx.r11.s64 + 29144;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8329ff30
	if (ctx.cr6.eq) goto loc_8329FF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82325000
	ctx.lr = 0x8329FF28;
	sub_82325000(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FF30;
	sub_8221BE68(ctx, base);
loc_8329FF30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8329FF5C"))) PPC_WEAK_FUNC(sub_8329FF5C);
PPC_FUNC_IMPL(__imp__sub_8329FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FF60"))) PPC_WEAK_FUNC(sub_8329FF60);
PPC_FUNC_IMPL(__imp__sub_8329FF60) {
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
	// addi r31,r11,29160
	ctx.r31.s64 = ctx.r11.s64 + 29160;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8329ff98
	if (ctx.cr6.eq) goto loc_8329FF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82325690
	ctx.lr = 0x8329FF90;
	sub_82325690(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8329FF98;
	sub_8221BE68(ctx, base);
loc_8329FF98:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8329FFC4"))) PPC_WEAK_FUNC(sub_8329FFC4);
PPC_FUNC_IMPL(__imp__sub_8329FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FFC8"))) PPC_WEAK_FUNC(sub_8329FFC8);
PPC_FUNC_IMPL(__imp__sub_8329FFC8) {
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
	// addi r31,r11,29176
	ctx.r31.s64 = ctx.r11.s64 + 29176;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832a0000
	if (ctx.cr6.eq) goto loc_832A0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82325690
	ctx.lr = 0x8329FFF8;
	sub_82325690(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A0000;
	sub_8221BE68(ctx, base);
loc_832A0000:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A002C"))) PPC_WEAK_FUNC(sub_832A002C);
PPC_FUNC_IMPL(__imp__sub_832A002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0030"))) PPC_WEAK_FUNC(sub_832A0030);
PPC_FUNC_IMPL(__imp__sub_832A0030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,4784
	ctx.r11.s64 = ctx.r11.s64 + 4784;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0040"))) PPC_WEAK_FUNC(sub_832A0040);
PPC_FUNC_IMPL(__imp__sub_832A0040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r11,r11,-11616
	ctx.r11.s64 = ctx.r11.s64 + -11616;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0050"))) PPC_WEAK_FUNC(sub_832A0050);
PPC_FUNC_IMPL(__imp__sub_832A0050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29192
	ctx.r3.s64 = ctx.r11.s64 + 29192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A005C"))) PPC_WEAK_FUNC(sub_832A005C);
PPC_FUNC_IMPL(__imp__sub_832A005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0060"))) PPC_WEAK_FUNC(sub_832A0060);
PPC_FUNC_IMPL(__imp__sub_832A0060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29196
	ctx.r3.s64 = ctx.r11.s64 + 29196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A006C"))) PPC_WEAK_FUNC(sub_832A006C);
PPC_FUNC_IMPL(__imp__sub_832A006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0070"))) PPC_WEAK_FUNC(sub_832A0070);
PPC_FUNC_IMPL(__imp__sub_832A0070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29200
	ctx.r3.s64 = ctx.r11.s64 + 29200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A007C"))) PPC_WEAK_FUNC(sub_832A007C);
PPC_FUNC_IMPL(__imp__sub_832A007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0080"))) PPC_WEAK_FUNC(sub_832A0080);
PPC_FUNC_IMPL(__imp__sub_832A0080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29204
	ctx.r3.s64 = ctx.r11.s64 + 29204;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A008C"))) PPC_WEAK_FUNC(sub_832A008C);
PPC_FUNC_IMPL(__imp__sub_832A008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0090"))) PPC_WEAK_FUNC(sub_832A0090);
PPC_FUNC_IMPL(__imp__sub_832A0090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29268
	ctx.r3.s64 = ctx.r11.s64 + 29268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A009C"))) PPC_WEAK_FUNC(sub_832A009C);
PPC_FUNC_IMPL(__imp__sub_832A009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00A0"))) PPC_WEAK_FUNC(sub_832A00A0);
PPC_FUNC_IMPL(__imp__sub_832A00A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A00AC"))) PPC_WEAK_FUNC(sub_832A00AC);
PPC_FUNC_IMPL(__imp__sub_832A00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00B0"))) PPC_WEAK_FUNC(sub_832A00B0);
PPC_FUNC_IMPL(__imp__sub_832A00B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29276
	ctx.r3.s64 = ctx.r11.s64 + 29276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A00BC"))) PPC_WEAK_FUNC(sub_832A00BC);
PPC_FUNC_IMPL(__imp__sub_832A00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00C0"))) PPC_WEAK_FUNC(sub_832A00C0);
PPC_FUNC_IMPL(__imp__sub_832A00C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29280
	ctx.r3.s64 = ctx.r11.s64 + 29280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A00CC"))) PPC_WEAK_FUNC(sub_832A00CC);
PPC_FUNC_IMPL(__imp__sub_832A00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A00D0"))) PPC_WEAK_FUNC(sub_832A00D0);
PPC_FUNC_IMPL(__imp__sub_832A00D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A00D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,29288
	ctx.r11.s64 = ctx.r11.s64 + 29288;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A00F8:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A0104;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A0108:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a0108
	if (!ctx.cr0.eq) goto loc_832A0108;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a00f8
	if (!ctx.cr0.lt) goto loc_832A00F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0138"))) PPC_WEAK_FUNC(sub_832A0138);
PPC_FUNC_IMPL(__imp__sub_832A0138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A0140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,29352
	ctx.r11.s64 = ctx.r11.s64 + 29352;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A0160:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A016C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A0170:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a0170
	if (!ctx.cr0.eq) goto loc_832A0170;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a0160
	if (!ctx.cr0.lt) goto loc_832A0160;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01A0"))) PPC_WEAK_FUNC(sub_832A01A0);
PPC_FUNC_IMPL(__imp__sub_832A01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01AC"))) PPC_WEAK_FUNC(sub_832A01AC);
PPC_FUNC_IMPL(__imp__sub_832A01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01B0"))) PPC_WEAK_FUNC(sub_832A01B0);
PPC_FUNC_IMPL(__imp__sub_832A01B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29500
	ctx.r3.s64 = ctx.r11.s64 + 29500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01BC"))) PPC_WEAK_FUNC(sub_832A01BC);
PPC_FUNC_IMPL(__imp__sub_832A01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01C0"))) PPC_WEAK_FUNC(sub_832A01C0);
PPC_FUNC_IMPL(__imp__sub_832A01C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29504
	ctx.r3.s64 = ctx.r11.s64 + 29504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01CC"))) PPC_WEAK_FUNC(sub_832A01CC);
PPC_FUNC_IMPL(__imp__sub_832A01CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01D0"))) PPC_WEAK_FUNC(sub_832A01D0);
PPC_FUNC_IMPL(__imp__sub_832A01D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29508
	ctx.r3.s64 = ctx.r11.s64 + 29508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01DC"))) PPC_WEAK_FUNC(sub_832A01DC);
PPC_FUNC_IMPL(__imp__sub_832A01DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01E0"))) PPC_WEAK_FUNC(sub_832A01E0);
PPC_FUNC_IMPL(__imp__sub_832A01E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29512
	ctx.r3.s64 = ctx.r11.s64 + 29512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A01EC"))) PPC_WEAK_FUNC(sub_832A01EC);
PPC_FUNC_IMPL(__imp__sub_832A01EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01F0"))) PPC_WEAK_FUNC(sub_832A01F0);
PPC_FUNC_IMPL(__imp__sub_832A01F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A01F4"))) PPC_WEAK_FUNC(sub_832A01F4);
PPC_FUNC_IMPL(__imp__sub_832A01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A01F8"))) PPC_WEAK_FUNC(sub_832A01F8);
PPC_FUNC_IMPL(__imp__sub_832A01F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29516
	ctx.r3.s64 = ctx.r11.s64 + 29516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0204"))) PPC_WEAK_FUNC(sub_832A0204);
PPC_FUNC_IMPL(__imp__sub_832A0204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0208"))) PPC_WEAK_FUNC(sub_832A0208);
PPC_FUNC_IMPL(__imp__sub_832A0208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A020C"))) PPC_WEAK_FUNC(sub_832A020C);
PPC_FUNC_IMPL(__imp__sub_832A020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0210"))) PPC_WEAK_FUNC(sub_832A0210);
PPC_FUNC_IMPL(__imp__sub_832A0210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29548
	ctx.r3.s64 = ctx.r11.s64 + 29548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A021C"))) PPC_WEAK_FUNC(sub_832A021C);
PPC_FUNC_IMPL(__imp__sub_832A021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0220"))) PPC_WEAK_FUNC(sub_832A0220);
PPC_FUNC_IMPL(__imp__sub_832A0220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29552
	ctx.r3.s64 = ctx.r11.s64 + 29552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A022C"))) PPC_WEAK_FUNC(sub_832A022C);
PPC_FUNC_IMPL(__imp__sub_832A022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0230"))) PPC_WEAK_FUNC(sub_832A0230);
PPC_FUNC_IMPL(__imp__sub_832A0230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29556
	ctx.r3.s64 = ctx.r11.s64 + 29556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A023C"))) PPC_WEAK_FUNC(sub_832A023C);
PPC_FUNC_IMPL(__imp__sub_832A023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0240"))) PPC_WEAK_FUNC(sub_832A0240);
PPC_FUNC_IMPL(__imp__sub_832A0240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29560
	ctx.r3.s64 = ctx.r11.s64 + 29560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A024C"))) PPC_WEAK_FUNC(sub_832A024C);
PPC_FUNC_IMPL(__imp__sub_832A024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0250"))) PPC_WEAK_FUNC(sub_832A0250);
PPC_FUNC_IMPL(__imp__sub_832A0250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29564
	ctx.r3.s64 = ctx.r11.s64 + 29564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A025C"))) PPC_WEAK_FUNC(sub_832A025C);
PPC_FUNC_IMPL(__imp__sub_832A025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0260"))) PPC_WEAK_FUNC(sub_832A0260);
PPC_FUNC_IMPL(__imp__sub_832A0260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A026C"))) PPC_WEAK_FUNC(sub_832A026C);
PPC_FUNC_IMPL(__imp__sub_832A026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0270"))) PPC_WEAK_FUNC(sub_832A0270);
PPC_FUNC_IMPL(__imp__sub_832A0270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29572
	ctx.r3.s64 = ctx.r11.s64 + 29572;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A027C"))) PPC_WEAK_FUNC(sub_832A027C);
PPC_FUNC_IMPL(__imp__sub_832A027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0280"))) PPC_WEAK_FUNC(sub_832A0280);
PPC_FUNC_IMPL(__imp__sub_832A0280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A028C"))) PPC_WEAK_FUNC(sub_832A028C);
PPC_FUNC_IMPL(__imp__sub_832A028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0290"))) PPC_WEAK_FUNC(sub_832A0290);
PPC_FUNC_IMPL(__imp__sub_832A0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A029C"))) PPC_WEAK_FUNC(sub_832A029C);
PPC_FUNC_IMPL(__imp__sub_832A029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02A0"))) PPC_WEAK_FUNC(sub_832A02A0);
PPC_FUNC_IMPL(__imp__sub_832A02A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29580
	ctx.r3.s64 = ctx.r11.s64 + 29580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02AC"))) PPC_WEAK_FUNC(sub_832A02AC);
PPC_FUNC_IMPL(__imp__sub_832A02AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02B0"))) PPC_WEAK_FUNC(sub_832A02B0);
PPC_FUNC_IMPL(__imp__sub_832A02B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29584
	ctx.r3.s64 = ctx.r11.s64 + 29584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02BC"))) PPC_WEAK_FUNC(sub_832A02BC);
PPC_FUNC_IMPL(__imp__sub_832A02BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02C0"))) PPC_WEAK_FUNC(sub_832A02C0);
PPC_FUNC_IMPL(__imp__sub_832A02C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29588
	ctx.r3.s64 = ctx.r11.s64 + 29588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02CC"))) PPC_WEAK_FUNC(sub_832A02CC);
PPC_FUNC_IMPL(__imp__sub_832A02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02D0"))) PPC_WEAK_FUNC(sub_832A02D0);
PPC_FUNC_IMPL(__imp__sub_832A02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02DC"))) PPC_WEAK_FUNC(sub_832A02DC);
PPC_FUNC_IMPL(__imp__sub_832A02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02E0"))) PPC_WEAK_FUNC(sub_832A02E0);
PPC_FUNC_IMPL(__imp__sub_832A02E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29596
	ctx.r3.s64 = ctx.r11.s64 + 29596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02EC"))) PPC_WEAK_FUNC(sub_832A02EC);
PPC_FUNC_IMPL(__imp__sub_832A02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A02F0"))) PPC_WEAK_FUNC(sub_832A02F0);
PPC_FUNC_IMPL(__imp__sub_832A02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29600
	ctx.r3.s64 = ctx.r11.s64 + 29600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A02FC"))) PPC_WEAK_FUNC(sub_832A02FC);
PPC_FUNC_IMPL(__imp__sub_832A02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0300"))) PPC_WEAK_FUNC(sub_832A0300);
PPC_FUNC_IMPL(__imp__sub_832A0300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29604
	ctx.r3.s64 = ctx.r11.s64 + 29604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A030C"))) PPC_WEAK_FUNC(sub_832A030C);
PPC_FUNC_IMPL(__imp__sub_832A030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0310"))) PPC_WEAK_FUNC(sub_832A0310);
PPC_FUNC_IMPL(__imp__sub_832A0310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29608
	ctx.r3.s64 = ctx.r11.s64 + 29608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A031C"))) PPC_WEAK_FUNC(sub_832A031C);
PPC_FUNC_IMPL(__imp__sub_832A031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0320"))) PPC_WEAK_FUNC(sub_832A0320);
PPC_FUNC_IMPL(__imp__sub_832A0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29612
	ctx.r3.s64 = ctx.r11.s64 + 29612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A032C"))) PPC_WEAK_FUNC(sub_832A032C);
PPC_FUNC_IMPL(__imp__sub_832A032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0330"))) PPC_WEAK_FUNC(sub_832A0330);
PPC_FUNC_IMPL(__imp__sub_832A0330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29616
	ctx.r3.s64 = ctx.r11.s64 + 29616;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A033C"))) PPC_WEAK_FUNC(sub_832A033C);
PPC_FUNC_IMPL(__imp__sub_832A033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0340"))) PPC_WEAK_FUNC(sub_832A0340);
PPC_FUNC_IMPL(__imp__sub_832A0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29620
	ctx.r3.s64 = ctx.r11.s64 + 29620;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A034C"))) PPC_WEAK_FUNC(sub_832A034C);
PPC_FUNC_IMPL(__imp__sub_832A034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0350"))) PPC_WEAK_FUNC(sub_832A0350);
PPC_FUNC_IMPL(__imp__sub_832A0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29624
	ctx.r3.s64 = ctx.r11.s64 + 29624;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A035C"))) PPC_WEAK_FUNC(sub_832A035C);
PPC_FUNC_IMPL(__imp__sub_832A035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0360"))) PPC_WEAK_FUNC(sub_832A0360);
PPC_FUNC_IMPL(__imp__sub_832A0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29628
	ctx.r3.s64 = ctx.r11.s64 + 29628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A036C"))) PPC_WEAK_FUNC(sub_832A036C);
PPC_FUNC_IMPL(__imp__sub_832A036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0370"))) PPC_WEAK_FUNC(sub_832A0370);
PPC_FUNC_IMPL(__imp__sub_832A0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29632
	ctx.r3.s64 = ctx.r11.s64 + 29632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A037C"))) PPC_WEAK_FUNC(sub_832A037C);
PPC_FUNC_IMPL(__imp__sub_832A037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0380"))) PPC_WEAK_FUNC(sub_832A0380);
PPC_FUNC_IMPL(__imp__sub_832A0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29636
	ctx.r3.s64 = ctx.r11.s64 + 29636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A038C"))) PPC_WEAK_FUNC(sub_832A038C);
PPC_FUNC_IMPL(__imp__sub_832A038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0390"))) PPC_WEAK_FUNC(sub_832A0390);
PPC_FUNC_IMPL(__imp__sub_832A0390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29640
	ctx.r3.s64 = ctx.r11.s64 + 29640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A039C"))) PPC_WEAK_FUNC(sub_832A039C);
PPC_FUNC_IMPL(__imp__sub_832A039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03A0"))) PPC_WEAK_FUNC(sub_832A03A0);
PPC_FUNC_IMPL(__imp__sub_832A03A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29644
	ctx.r3.s64 = ctx.r11.s64 + 29644;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03AC"))) PPC_WEAK_FUNC(sub_832A03AC);
PPC_FUNC_IMPL(__imp__sub_832A03AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03B0"))) PPC_WEAK_FUNC(sub_832A03B0);
PPC_FUNC_IMPL(__imp__sub_832A03B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03BC"))) PPC_WEAK_FUNC(sub_832A03BC);
PPC_FUNC_IMPL(__imp__sub_832A03BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03C0"))) PPC_WEAK_FUNC(sub_832A03C0);
PPC_FUNC_IMPL(__imp__sub_832A03C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29652
	ctx.r3.s64 = ctx.r11.s64 + 29652;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03CC"))) PPC_WEAK_FUNC(sub_832A03CC);
PPC_FUNC_IMPL(__imp__sub_832A03CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03D0"))) PPC_WEAK_FUNC(sub_832A03D0);
PPC_FUNC_IMPL(__imp__sub_832A03D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29656
	ctx.r3.s64 = ctx.r11.s64 + 29656;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03DC"))) PPC_WEAK_FUNC(sub_832A03DC);
PPC_FUNC_IMPL(__imp__sub_832A03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03E0"))) PPC_WEAK_FUNC(sub_832A03E0);
PPC_FUNC_IMPL(__imp__sub_832A03E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29660
	ctx.r3.s64 = ctx.r11.s64 + 29660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03EC"))) PPC_WEAK_FUNC(sub_832A03EC);
PPC_FUNC_IMPL(__imp__sub_832A03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03F0"))) PPC_WEAK_FUNC(sub_832A03F0);
PPC_FUNC_IMPL(__imp__sub_832A03F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29664
	ctx.r3.s64 = ctx.r11.s64 + 29664;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03FC"))) PPC_WEAK_FUNC(sub_832A03FC);
PPC_FUNC_IMPL(__imp__sub_832A03FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0400"))) PPC_WEAK_FUNC(sub_832A0400);
PPC_FUNC_IMPL(__imp__sub_832A0400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29668
	ctx.r3.s64 = ctx.r11.s64 + 29668;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A040C"))) PPC_WEAK_FUNC(sub_832A040C);
PPC_FUNC_IMPL(__imp__sub_832A040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0410"))) PPC_WEAK_FUNC(sub_832A0410);
PPC_FUNC_IMPL(__imp__sub_832A0410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29672
	ctx.r3.s64 = ctx.r11.s64 + 29672;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A041C"))) PPC_WEAK_FUNC(sub_832A041C);
PPC_FUNC_IMPL(__imp__sub_832A041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0420"))) PPC_WEAK_FUNC(sub_832A0420);
PPC_FUNC_IMPL(__imp__sub_832A0420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29676
	ctx.r3.s64 = ctx.r11.s64 + 29676;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A042C"))) PPC_WEAK_FUNC(sub_832A042C);
PPC_FUNC_IMPL(__imp__sub_832A042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0430"))) PPC_WEAK_FUNC(sub_832A0430);
PPC_FUNC_IMPL(__imp__sub_832A0430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// b 0x82358038
	sub_82358038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A043C"))) PPC_WEAK_FUNC(sub_832A043C);
PPC_FUNC_IMPL(__imp__sub_832A043C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0440"))) PPC_WEAK_FUNC(sub_832A0440);
PPC_FUNC_IMPL(__imp__sub_832A0440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29696
	ctx.r3.s64 = ctx.r11.s64 + 29696;
	// b 0x823580a0
	sub_823580A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A044C"))) PPC_WEAK_FUNC(sub_832A044C);
PPC_FUNC_IMPL(__imp__sub_832A044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0450"))) PPC_WEAK_FUNC(sub_832A0450);
PPC_FUNC_IMPL(__imp__sub_832A0450) {
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
	// addi r31,r11,29712
	ctx.r31.s64 = ctx.r11.s64 + 29712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823091a8
	ctx.lr = 0x832A0470;
	sub_823091A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A0478;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A0494"))) PPC_WEAK_FUNC(sub_832A0494);
PPC_FUNC_IMPL(__imp__sub_832A0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0498"))) PPC_WEAK_FUNC(sub_832A0498);
PPC_FUNC_IMPL(__imp__sub_832A0498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29724
	ctx.r3.s64 = ctx.r11.s64 + 29724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04A4"))) PPC_WEAK_FUNC(sub_832A04A4);
PPC_FUNC_IMPL(__imp__sub_832A04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04A8"))) PPC_WEAK_FUNC(sub_832A04A8);
PPC_FUNC_IMPL(__imp__sub_832A04A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04B4"))) PPC_WEAK_FUNC(sub_832A04B4);
PPC_FUNC_IMPL(__imp__sub_832A04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04B8"))) PPC_WEAK_FUNC(sub_832A04B8);
PPC_FUNC_IMPL(__imp__sub_832A04B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29740
	ctx.r3.s64 = ctx.r11.s64 + 29740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04C4"))) PPC_WEAK_FUNC(sub_832A04C4);
PPC_FUNC_IMPL(__imp__sub_832A04C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04C8"))) PPC_WEAK_FUNC(sub_832A04C8);
PPC_FUNC_IMPL(__imp__sub_832A04C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29792
	ctx.r3.s64 = ctx.r11.s64 + 29792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04D4"))) PPC_WEAK_FUNC(sub_832A04D4);
PPC_FUNC_IMPL(__imp__sub_832A04D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04D8"))) PPC_WEAK_FUNC(sub_832A04D8);
PPC_FUNC_IMPL(__imp__sub_832A04D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29796
	ctx.r3.s64 = ctx.r11.s64 + 29796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04E4"))) PPC_WEAK_FUNC(sub_832A04E4);
PPC_FUNC_IMPL(__imp__sub_832A04E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04E8"))) PPC_WEAK_FUNC(sub_832A04E8);
PPC_FUNC_IMPL(__imp__sub_832A04E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29800
	ctx.r3.s64 = ctx.r11.s64 + 29800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A04F4"))) PPC_WEAK_FUNC(sub_832A04F4);
PPC_FUNC_IMPL(__imp__sub_832A04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A04F8"))) PPC_WEAK_FUNC(sub_832A04F8);
PPC_FUNC_IMPL(__imp__sub_832A04F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29804
	ctx.r3.s64 = ctx.r11.s64 + 29804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0504"))) PPC_WEAK_FUNC(sub_832A0504);
PPC_FUNC_IMPL(__imp__sub_832A0504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0508"))) PPC_WEAK_FUNC(sub_832A0508);
PPC_FUNC_IMPL(__imp__sub_832A0508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0514"))) PPC_WEAK_FUNC(sub_832A0514);
PPC_FUNC_IMPL(__imp__sub_832A0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0518"))) PPC_WEAK_FUNC(sub_832A0518);
PPC_FUNC_IMPL(__imp__sub_832A0518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29812
	ctx.r3.s64 = ctx.r11.s64 + 29812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0524"))) PPC_WEAK_FUNC(sub_832A0524);
PPC_FUNC_IMPL(__imp__sub_832A0524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0528"))) PPC_WEAK_FUNC(sub_832A0528);
PPC_FUNC_IMPL(__imp__sub_832A0528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29816
	ctx.r3.s64 = ctx.r11.s64 + 29816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0534"))) PPC_WEAK_FUNC(sub_832A0534);
PPC_FUNC_IMPL(__imp__sub_832A0534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0538"))) PPC_WEAK_FUNC(sub_832A0538);
PPC_FUNC_IMPL(__imp__sub_832A0538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29820
	ctx.r3.s64 = ctx.r11.s64 + 29820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0544"))) PPC_WEAK_FUNC(sub_832A0544);
PPC_FUNC_IMPL(__imp__sub_832A0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0548"))) PPC_WEAK_FUNC(sub_832A0548);
PPC_FUNC_IMPL(__imp__sub_832A0548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29824
	ctx.r3.s64 = ctx.r11.s64 + 29824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0554"))) PPC_WEAK_FUNC(sub_832A0554);
PPC_FUNC_IMPL(__imp__sub_832A0554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0558"))) PPC_WEAK_FUNC(sub_832A0558);
PPC_FUNC_IMPL(__imp__sub_832A0558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29828
	ctx.r3.s64 = ctx.r11.s64 + 29828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0564"))) PPC_WEAK_FUNC(sub_832A0564);
PPC_FUNC_IMPL(__imp__sub_832A0564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0568"))) PPC_WEAK_FUNC(sub_832A0568);
PPC_FUNC_IMPL(__imp__sub_832A0568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29832
	ctx.r3.s64 = ctx.r11.s64 + 29832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0574"))) PPC_WEAK_FUNC(sub_832A0574);
PPC_FUNC_IMPL(__imp__sub_832A0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0578"))) PPC_WEAK_FUNC(sub_832A0578);
PPC_FUNC_IMPL(__imp__sub_832A0578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29836
	ctx.r3.s64 = ctx.r11.s64 + 29836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0584"))) PPC_WEAK_FUNC(sub_832A0584);
PPC_FUNC_IMPL(__imp__sub_832A0584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0588"))) PPC_WEAK_FUNC(sub_832A0588);
PPC_FUNC_IMPL(__imp__sub_832A0588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29872
	ctx.r3.s64 = ctx.r11.s64 + 29872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0594"))) PPC_WEAK_FUNC(sub_832A0594);
PPC_FUNC_IMPL(__imp__sub_832A0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0598"))) PPC_WEAK_FUNC(sub_832A0598);
PPC_FUNC_IMPL(__imp__sub_832A0598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29876
	ctx.r3.s64 = ctx.r11.s64 + 29876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A05A4"))) PPC_WEAK_FUNC(sub_832A05A4);
PPC_FUNC_IMPL(__imp__sub_832A05A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05A8"))) PPC_WEAK_FUNC(sub_832A05A8);
PPC_FUNC_IMPL(__imp__sub_832A05A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A05AC"))) PPC_WEAK_FUNC(sub_832A05AC);
PPC_FUNC_IMPL(__imp__sub_832A05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05B0"))) PPC_WEAK_FUNC(sub_832A05B0);
PPC_FUNC_IMPL(__imp__sub_832A05B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29884
	ctx.r3.s64 = ctx.r11.s64 + 29884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A05BC"))) PPC_WEAK_FUNC(sub_832A05BC);
PPC_FUNC_IMPL(__imp__sub_832A05BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05C0"))) PPC_WEAK_FUNC(sub_832A05C0);
PPC_FUNC_IMPL(__imp__sub_832A05C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A05CC"))) PPC_WEAK_FUNC(sub_832A05CC);
PPC_FUNC_IMPL(__imp__sub_832A05CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05D0"))) PPC_WEAK_FUNC(sub_832A05D0);
PPC_FUNC_IMPL(__imp__sub_832A05D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A05D4"))) PPC_WEAK_FUNC(sub_832A05D4);
PPC_FUNC_IMPL(__imp__sub_832A05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05D8"))) PPC_WEAK_FUNC(sub_832A05D8);
PPC_FUNC_IMPL(__imp__sub_832A05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29896
	ctx.r3.s64 = ctx.r11.s64 + 29896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A05E4"))) PPC_WEAK_FUNC(sub_832A05E4);
PPC_FUNC_IMPL(__imp__sub_832A05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05E8"))) PPC_WEAK_FUNC(sub_832A05E8);
PPC_FUNC_IMPL(__imp__sub_832A05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29900
	ctx.r3.s64 = ctx.r11.s64 + 29900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A05F4"))) PPC_WEAK_FUNC(sub_832A05F4);
PPC_FUNC_IMPL(__imp__sub_832A05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A05F8"))) PPC_WEAK_FUNC(sub_832A05F8);
PPC_FUNC_IMPL(__imp__sub_832A05F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29904
	ctx.r3.s64 = ctx.r11.s64 + 29904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0604"))) PPC_WEAK_FUNC(sub_832A0604);
PPC_FUNC_IMPL(__imp__sub_832A0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0608"))) PPC_WEAK_FUNC(sub_832A0608);
PPC_FUNC_IMPL(__imp__sub_832A0608) {
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
	// addi r31,r11,29908
	ctx.r31.s64 = ctx.r11.s64 + 29908;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x832a0640
	if (ctx.cr6.eq) goto loc_832A0640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a86b88
	ctx.lr = 0x832A0638;
	sub_82A86B88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A0640;
	sub_8221BE68(ctx, base);
loc_832A0640:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A066C"))) PPC_WEAK_FUNC(sub_832A066C);
PPC_FUNC_IMPL(__imp__sub_832A066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0670"))) PPC_WEAK_FUNC(sub_832A0670);
PPC_FUNC_IMPL(__imp__sub_832A0670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29924
	ctx.r3.s64 = ctx.r11.s64 + 29924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A067C"))) PPC_WEAK_FUNC(sub_832A067C);
PPC_FUNC_IMPL(__imp__sub_832A067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0680"))) PPC_WEAK_FUNC(sub_832A0680);
PPC_FUNC_IMPL(__imp__sub_832A0680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A068C"))) PPC_WEAK_FUNC(sub_832A068C);
PPC_FUNC_IMPL(__imp__sub_832A068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0690"))) PPC_WEAK_FUNC(sub_832A0690);
PPC_FUNC_IMPL(__imp__sub_832A0690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29932
	ctx.r3.s64 = ctx.r11.s64 + 29932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A069C"))) PPC_WEAK_FUNC(sub_832A069C);
PPC_FUNC_IMPL(__imp__sub_832A069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06A0"))) PPC_WEAK_FUNC(sub_832A06A0);
PPC_FUNC_IMPL(__imp__sub_832A06A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29936
	ctx.r3.s64 = ctx.r11.s64 + 29936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06AC"))) PPC_WEAK_FUNC(sub_832A06AC);
PPC_FUNC_IMPL(__imp__sub_832A06AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06B0"))) PPC_WEAK_FUNC(sub_832A06B0);
PPC_FUNC_IMPL(__imp__sub_832A06B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29940
	ctx.r3.s64 = ctx.r11.s64 + 29940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06BC"))) PPC_WEAK_FUNC(sub_832A06BC);
PPC_FUNC_IMPL(__imp__sub_832A06BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06C0"))) PPC_WEAK_FUNC(sub_832A06C0);
PPC_FUNC_IMPL(__imp__sub_832A06C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29944
	ctx.r3.s64 = ctx.r11.s64 + 29944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06CC"))) PPC_WEAK_FUNC(sub_832A06CC);
PPC_FUNC_IMPL(__imp__sub_832A06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06D0"))) PPC_WEAK_FUNC(sub_832A06D0);
PPC_FUNC_IMPL(__imp__sub_832A06D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29948
	ctx.r3.s64 = ctx.r11.s64 + 29948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06DC"))) PPC_WEAK_FUNC(sub_832A06DC);
PPC_FUNC_IMPL(__imp__sub_832A06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06E0"))) PPC_WEAK_FUNC(sub_832A06E0);
PPC_FUNC_IMPL(__imp__sub_832A06E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06EC"))) PPC_WEAK_FUNC(sub_832A06EC);
PPC_FUNC_IMPL(__imp__sub_832A06EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06F0"))) PPC_WEAK_FUNC(sub_832A06F0);
PPC_FUNC_IMPL(__imp__sub_832A06F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29956
	ctx.r3.s64 = ctx.r11.s64 + 29956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06FC"))) PPC_WEAK_FUNC(sub_832A06FC);
PPC_FUNC_IMPL(__imp__sub_832A06FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0700"))) PPC_WEAK_FUNC(sub_832A0700);
PPC_FUNC_IMPL(__imp__sub_832A0700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29960
	ctx.r3.s64 = ctx.r11.s64 + 29960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A070C"))) PPC_WEAK_FUNC(sub_832A070C);
PPC_FUNC_IMPL(__imp__sub_832A070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0710"))) PPC_WEAK_FUNC(sub_832A0710);
PPC_FUNC_IMPL(__imp__sub_832A0710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29964
	ctx.r3.s64 = ctx.r11.s64 + 29964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A071C"))) PPC_WEAK_FUNC(sub_832A071C);
PPC_FUNC_IMPL(__imp__sub_832A071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0720"))) PPC_WEAK_FUNC(sub_832A0720);
PPC_FUNC_IMPL(__imp__sub_832A0720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29968
	ctx.r3.s64 = ctx.r11.s64 + 29968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A072C"))) PPC_WEAK_FUNC(sub_832A072C);
PPC_FUNC_IMPL(__imp__sub_832A072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0730"))) PPC_WEAK_FUNC(sub_832A0730);
PPC_FUNC_IMPL(__imp__sub_832A0730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29972
	ctx.r3.s64 = ctx.r11.s64 + 29972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A073C"))) PPC_WEAK_FUNC(sub_832A073C);
PPC_FUNC_IMPL(__imp__sub_832A073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0740"))) PPC_WEAK_FUNC(sub_832A0740);
PPC_FUNC_IMPL(__imp__sub_832A0740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A074C"))) PPC_WEAK_FUNC(sub_832A074C);
PPC_FUNC_IMPL(__imp__sub_832A074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0750"))) PPC_WEAK_FUNC(sub_832A0750);
PPC_FUNC_IMPL(__imp__sub_832A0750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29980
	ctx.r3.s64 = ctx.r11.s64 + 29980;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A075C"))) PPC_WEAK_FUNC(sub_832A075C);
PPC_FUNC_IMPL(__imp__sub_832A075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0760"))) PPC_WEAK_FUNC(sub_832A0760);
PPC_FUNC_IMPL(__imp__sub_832A0760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29984
	ctx.r3.s64 = ctx.r11.s64 + 29984;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A076C"))) PPC_WEAK_FUNC(sub_832A076C);
PPC_FUNC_IMPL(__imp__sub_832A076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0770"))) PPC_WEAK_FUNC(sub_832A0770);
PPC_FUNC_IMPL(__imp__sub_832A0770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r3,r11,29988
	ctx.r3.s64 = ctx.r11.s64 + 29988;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A077C"))) PPC_WEAK_FUNC(sub_832A077C);
PPC_FUNC_IMPL(__imp__sub_832A077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

