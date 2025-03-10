#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83295064"))) PPC_WEAK_FUNC(sub_83295064);
PPC_FUNC_IMPL(__imp__sub_83295064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295068"))) PPC_WEAK_FUNC(sub_83295068);
PPC_FUNC_IMPL(__imp__sub_83295068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7e8f8
	ctx.lr = 0x83295080;
	sub_82D7E8F8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-24184
	ctx.r10.s64 = ctx.r11.s64 + -24184;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30816
	ctx.r11.s64 = ctx.r11.s64 + -30816;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-5968
	ctx.r10.s64 = ctx.r8.s64 + -5968;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-5992
	ctx.r10.s64 = ctx.r9.s64 + -5992;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832950C4"))) PPC_WEAK_FUNC(sub_832950C4);
PPC_FUNC_IMPL(__imp__sub_832950C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832950C8"))) PPC_WEAK_FUNC(sub_832950C8);
PPC_FUNC_IMPL(__imp__sub_832950C8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27888
	ctx.r5.s64 = ctx.r10.s64 + -27888;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-24248
	ctx.r8.s64 = ctx.r11.s64 + -24248;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-24184
	ctx.r4.s64 = ctx.r10.s64 + -24184;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,352
	ctx.r6.s64 = 352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295128;
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

__attribute__((alias("__imp__sub_83295138"))) PPC_WEAK_FUNC(sub_83295138);
PPC_FUNC_IMPL(__imp__sub_83295138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,-29696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29696);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-29672
	ctx.r11.s64 = ctx.r11.s64 + -29672;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-29704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29704);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329515C"))) PPC_WEAK_FUNC(sub_8329515C);
PPC_FUNC_IMPL(__imp__sub_8329515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295160"))) PPC_WEAK_FUNC(sub_83295160);
PPC_FUNC_IMPL(__imp__sub_83295160) {
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
	ctx.r11.s64 = -2094006272;
	// addi r4,r10,-23656
	ctx.r4.s64 = ctx.r10.s64 + -23656;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r11,r11,-29672
	ctx.r11.s64 = ctx.r11.s64 + -29672;
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
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832951C4;
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

__attribute__((alias("__imp__sub_832951D4"))) PPC_WEAK_FUNC(sub_832951D4);
PPC_FUNC_IMPL(__imp__sub_832951D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832951D8"))) PPC_WEAK_FUNC(sub_832951D8);
PPC_FUNC_IMPL(__imp__sub_832951D8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-23344
	ctx.r7.s64 = ctx.r11.s64 + -23344;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-23100
	ctx.r4.s64 = ctx.r10.s64 + -23100;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x83295234;
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

__attribute__((alias("__imp__sub_83295244"))) PPC_WEAK_FUNC(sub_83295244);
PPC_FUNC_IMPL(__imp__sub_83295244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295248"))) PPC_WEAK_FUNC(sub_83295248);
PPC_FUNC_IMPL(__imp__sub_83295248) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27936
	ctx.r5.s64 = ctx.r10.s64 + -27936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-23296
	ctx.r8.s64 = ctx.r11.s64 + -23296;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r4,r10,-23060
	ctx.r4.s64 = ctx.r10.s64 + -23060;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832952A8;
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

__attribute__((alias("__imp__sub_832952B8"))) PPC_WEAK_FUNC(sub_832952B8);
PPC_FUNC_IMPL(__imp__sub_832952B8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-30608
	ctx.r3.s64 = ctx.r10.s64 + -30608;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x8329530C;
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

__attribute__((alias("__imp__sub_8329531C"))) PPC_WEAK_FUNC(sub_8329531C);
PPC_FUNC_IMPL(__imp__sub_8329531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295320"))) PPC_WEAK_FUNC(sub_83295320);
PPC_FUNC_IMPL(__imp__sub_83295320) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22980
	ctx.r8.s64 = ctx.r11.s64 + -22980;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-22912
	ctx.r4.s64 = ctx.r10.s64 + -22912;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295380;
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

__attribute__((alias("__imp__sub_83295390"))) PPC_WEAK_FUNC(sub_83295390);
PPC_FUNC_IMPL(__imp__sub_83295390) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-30512
	ctx.r3.s64 = ctx.r10.s64 + -30512;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x832953E4;
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

__attribute__((alias("__imp__sub_832953F4"))) PPC_WEAK_FUNC(sub_832953F4);
PPC_FUNC_IMPL(__imp__sub_832953F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832953F8"))) PPC_WEAK_FUNC(sub_832953F8);
PPC_FUNC_IMPL(__imp__sub_832953F8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-30464
	ctx.r3.s64 = ctx.r10.s64 + -30464;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x8329544C;
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

__attribute__((alias("__imp__sub_8329545C"))) PPC_WEAK_FUNC(sub_8329545C);
PPC_FUNC_IMPL(__imp__sub_8329545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295460"))) PPC_WEAK_FUNC(sub_83295460);
PPC_FUNC_IMPL(__imp__sub_83295460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ec40
	ctx.lr = 0x83295478;
	sub_82D7EC40(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-22692
	ctx.r10.s64 = ctx.r11.s64 + -22692;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30416
	ctx.r11.s64 = ctx.r11.s64 + -30416;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-5128
	ctx.r10.s64 = ctx.r8.s64 + -5128;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-5152
	ctx.r10.s64 = ctx.r9.s64 + -5152;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832954BC"))) PPC_WEAK_FUNC(sub_832954BC);
PPC_FUNC_IMPL(__imp__sub_832954BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832954C0"))) PPC_WEAK_FUNC(sub_832954C0);
PPC_FUNC_IMPL(__imp__sub_832954C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27984
	ctx.r5.s64 = ctx.r10.s64 + -27984;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22796
	ctx.r8.s64 = ctx.r11.s64 + -22796;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-22692
	ctx.r4.s64 = ctx.r10.s64 + -22692;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,208
	ctx.r6.s64 = 208;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295520;
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

__attribute__((alias("__imp__sub_83295530"))) PPC_WEAK_FUNC(sub_83295530);
PPC_FUNC_IMPL(__imp__sub_83295530) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22656
	ctx.r7.s64 = ctx.r11.s64 + -22656;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-22464
	ctx.r4.s64 = ctx.r10.s64 + -22464;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x8329558C;
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

__attribute__((alias("__imp__sub_8329559C"))) PPC_WEAK_FUNC(sub_8329559C);
PPC_FUNC_IMPL(__imp__sub_8329559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832955A0"))) PPC_WEAK_FUNC(sub_832955A0);
PPC_FUNC_IMPL(__imp__sub_832955A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d85388
	ctx.lr = 0x832955B8;
	sub_82D85388(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-22424
	ctx.r10.s64 = ctx.r11.s64 + -22424;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30304
	ctx.r11.s64 = ctx.r11.s64 + -30304;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4840
	ctx.r10.s64 = ctx.r8.s64 + -4840;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4816
	ctx.r10.s64 = ctx.r9.s64 + -4816;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832955FC"))) PPC_WEAK_FUNC(sub_832955FC);
PPC_FUNC_IMPL(__imp__sub_832955FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295600"))) PPC_WEAK_FUNC(sub_83295600);
PPC_FUNC_IMPL(__imp__sub_83295600) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28640
	ctx.r5.s64 = ctx.r10.s64 + -28640;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22584
	ctx.r8.s64 = ctx.r11.s64 + -22584;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,-22424
	ctx.r4.s64 = ctx.r10.s64 + -22424;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295660;
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

__attribute__((alias("__imp__sub_83295670"))) PPC_WEAK_FUNC(sub_83295670);
PPC_FUNC_IMPL(__imp__sub_83295670) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22392
	ctx.r7.s64 = ctx.r11.s64 + -22392;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-22268
	ctx.r4.s64 = ctx.r10.s64 + -22268;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x832956CC;
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

__attribute__((alias("__imp__sub_832956DC"))) PPC_WEAK_FUNC(sub_832956DC);
PPC_FUNC_IMPL(__imp__sub_832956DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832956E0"))) PPC_WEAK_FUNC(sub_832956E0);
PPC_FUNC_IMPL(__imp__sub_832956E0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22344
	ctx.r8.s64 = ctx.r11.s64 + -22344;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-22232
	ctx.r4.s64 = ctx.r10.s64 + -22232;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295740;
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

__attribute__((alias("__imp__sub_83295750"))) PPC_WEAK_FUNC(sub_83295750);
PPC_FUNC_IMPL(__imp__sub_83295750) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22200
	ctx.r7.s64 = ctx.r11.s64 + -22200;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-22076
	ctx.r4.s64 = ctx.r10.s64 + -22076;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x832957AC;
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

__attribute__((alias("__imp__sub_832957BC"))) PPC_WEAK_FUNC(sub_832957BC);
PPC_FUNC_IMPL(__imp__sub_832957BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832957C0"))) PPC_WEAK_FUNC(sub_832957C0);
PPC_FUNC_IMPL(__imp__sub_832957C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-22152
	ctx.r8.s64 = ctx.r11.s64 + -22152;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-22040
	ctx.r4.s64 = ctx.r10.s64 + -22040;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295820;
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

__attribute__((alias("__imp__sub_83295830"))) PPC_WEAK_FUNC(sub_83295830);
PPC_FUNC_IMPL(__imp__sub_83295830) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22008
	ctx.r7.s64 = ctx.r11.s64 + -22008;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-21816
	ctx.r4.s64 = ctx.r10.s64 + -21816;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x8329588C;
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

__attribute__((alias("__imp__sub_8329589C"))) PPC_WEAK_FUNC(sub_8329589C);
PPC_FUNC_IMPL(__imp__sub_8329589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832958A0"))) PPC_WEAK_FUNC(sub_832958A0);
PPC_FUNC_IMPL(__imp__sub_832958A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9b5b8
	ctx.lr = 0x832958B8;
	sub_82D9B5B8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-21776
	ctx.r10.s64 = ctx.r11.s64 + -21776;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-30000
	ctx.r11.s64 = ctx.r11.s64 + -30000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4560
	ctx.r10.s64 = ctx.r8.s64 + -4560;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4536
	ctx.r10.s64 = ctx.r9.s64 + -4536;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832958FC"))) PPC_WEAK_FUNC(sub_832958FC);
PPC_FUNC_IMPL(__imp__sub_832958FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295900"))) PPC_WEAK_FUNC(sub_83295900);
PPC_FUNC_IMPL(__imp__sub_83295900) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28640
	ctx.r5.s64 = ctx.r10.s64 + -28640;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21960
	ctx.r8.s64 = ctx.r11.s64 + -21960;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r10,-21776
	ctx.r4.s64 = ctx.r10.s64 + -21776;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,52
	ctx.r6.s64 = 52;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295960;
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

__attribute__((alias("__imp__sub_83295970"))) PPC_WEAK_FUNC(sub_83295970);
PPC_FUNC_IMPL(__imp__sub_83295970) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-29936
	ctx.r3.s64 = ctx.r10.s64 + -29936;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x832959C4;
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

__attribute__((alias("__imp__sub_832959D4"))) PPC_WEAK_FUNC(sub_832959D4);
PPC_FUNC_IMPL(__imp__sub_832959D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832959D8"))) PPC_WEAK_FUNC(sub_832959D8);
PPC_FUNC_IMPL(__imp__sub_832959D8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-21536
	ctx.r9.s64 = ctx.r11.s64 + -21536;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r4,r10,-21220
	ctx.r4.s64 = ctx.r10.s64 + -21220;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x83295A34;
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

__attribute__((alias("__imp__sub_83295A44"))) PPC_WEAK_FUNC(sub_83295A44);
PPC_FUNC_IMPL(__imp__sub_83295A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295A48"))) PPC_WEAK_FUNC(sub_83295A48);
PPC_FUNC_IMPL(__imp__sub_83295A48) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21344
	ctx.r8.s64 = ctx.r11.s64 + -21344;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-21192
	ctx.r4.s64 = ctx.r10.s64 + -21192;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,352
	ctx.r6.s64 = 352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295AA8;
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

__attribute__((alias("__imp__sub_83295AB8"))) PPC_WEAK_FUNC(sub_83295AB8);
PPC_FUNC_IMPL(__imp__sub_83295AB8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-29792
	ctx.r3.s64 = ctx.r10.s64 + -29792;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x83295B0C;
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

__attribute__((alias("__imp__sub_83295B1C"))) PPC_WEAK_FUNC(sub_83295B1C);
PPC_FUNC_IMPL(__imp__sub_83295B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295B20"))) PPC_WEAK_FUNC(sub_83295B20);
PPC_FUNC_IMPL(__imp__sub_83295B20) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28240
	ctx.r5.s64 = ctx.r10.s64 + -28240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21096
	ctx.r8.s64 = ctx.r11.s64 + -21096;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-21004
	ctx.r4.s64 = ctx.r10.s64 + -21004;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295B80;
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

__attribute__((alias("__imp__sub_83295B90"))) PPC_WEAK_FUNC(sub_83295B90);
PPC_FUNC_IMPL(__imp__sub_83295B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9c638
	ctx.lr = 0x83295BA8;
	sub_82D9C638(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-20640
	ctx.r10.s64 = ctx.r11.s64 + -20640;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4136
	ctx.r10.s64 = ctx.r8.s64 + -4136;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4160
	ctx.r10.s64 = ctx.r9.s64 + -4160;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295BEC"))) PPC_WEAK_FUNC(sub_83295BEC);
PPC_FUNC_IMPL(__imp__sub_83295BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295BF0"))) PPC_WEAK_FUNC(sub_83295BF0);
PPC_FUNC_IMPL(__imp__sub_83295BF0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-20832
	ctx.r8.s64 = ctx.r11.s64 + -20832;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r10,-20640
	ctx.r4.s64 = ctx.r10.s64 + -20640;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295C50;
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

__attribute__((alias("__imp__sub_83295C60"))) PPC_WEAK_FUNC(sub_83295C60);
PPC_FUNC_IMPL(__imp__sub_83295C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7f080
	ctx.lr = 0x83295C78;
	sub_82D7F080(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-20588
	ctx.r10.s64 = ctx.r11.s64 + -20588;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29632
	ctx.r11.s64 = ctx.r11.s64 + -29632;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4040
	ctx.r10.s64 = ctx.r8.s64 + -4040;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4064
	ctx.r10.s64 = ctx.r9.s64 + -4064;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295CBC"))) PPC_WEAK_FUNC(sub_83295CBC);
PPC_FUNC_IMPL(__imp__sub_83295CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295CC0"))) PPC_WEAK_FUNC(sub_83295CC0);
PPC_FUNC_IMPL(__imp__sub_83295CC0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27888
	ctx.r5.s64 = ctx.r10.s64 + -27888;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-20612
	ctx.r8.s64 = ctx.r11.s64 + -20612;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-20588
	ctx.r4.s64 = ctx.r10.s64 + -20588;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,352
	ctx.r6.s64 = 352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295D20;
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

__attribute__((alias("__imp__sub_83295D30"))) PPC_WEAK_FUNC(sub_83295D30);
PPC_FUNC_IMPL(__imp__sub_83295D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d76050
	ctx.lr = 0x83295D48;
	sub_82D76050(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-30464
	ctx.r10.s64 = ctx.r11.s64 + -30464;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-3760
	ctx.r10.s64 = ctx.r8.s64 + -3760;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-3736
	ctx.r10.s64 = ctx.r9.s64 + -3736;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295D8C"))) PPC_WEAK_FUNC(sub_83295D8C);
PPC_FUNC_IMPL(__imp__sub_83295D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295D90"))) PPC_WEAK_FUNC(sub_83295D90);
PPC_FUNC_IMPL(__imp__sub_83295D90) {
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
	ctx.r11.s64 = -2113732608;
	// addi r4,r10,-30464
	ctx.r4.s64 = ctx.r10.s64 + -30464;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r11,r11,-17936
	ctx.r11.s64 = ctx.r11.s64 + -17936;
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
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295DF4;
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

__attribute__((alias("__imp__sub_83295E04"))) PPC_WEAK_FUNC(sub_83295E04);
PPC_FUNC_IMPL(__imp__sub_83295E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295E08"))) PPC_WEAK_FUNC(sub_83295E08);
PPC_FUNC_IMPL(__imp__sub_83295E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-28704
	ctx.r10.s64 = ctx.r10.s64 + -28704;
	// lwz r11,-28728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28728);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295E20"))) PPC_WEAK_FUNC(sub_83295E20);
PPC_FUNC_IMPL(__imp__sub_83295E20) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-28704
	ctx.r8.s64 = ctx.r11.s64 + -28704;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-16040
	ctx.r4.s64 = ctx.r10.s64 + -16040;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82d4f620
	ctx.lr = 0x83295E84;
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

__attribute__((alias("__imp__sub_83295E94"))) PPC_WEAK_FUNC(sub_83295E94);
PPC_FUNC_IMPL(__imp__sub_83295E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295E98"))) PPC_WEAK_FUNC(sub_83295E98);
PPC_FUNC_IMPL(__imp__sub_83295E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7f908
	ctx.lr = 0x83295EB0;
	sub_82D7F908(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-14736
	ctx.r10.s64 = ctx.r11.s64 + -14736;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29456
	ctx.r11.s64 = ctx.r11.s64 + -29456;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-3592
	ctx.r10.s64 = ctx.r8.s64 + -3592;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-3568
	ctx.r10.s64 = ctx.r9.s64 + -3568;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295EF4"))) PPC_WEAK_FUNC(sub_83295EF4);
PPC_FUNC_IMPL(__imp__sub_83295EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295EF8"))) PPC_WEAK_FUNC(sub_83295EF8);
PPC_FUNC_IMPL(__imp__sub_83295EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,-28524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28524);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-28520
	ctx.r11.s64 = ctx.r11.s64 + -28520;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-28528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28528);
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-28532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28532);
	// stw r10,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295F28"))) PPC_WEAK_FUNC(sub_83295F28);
PPC_FUNC_IMPL(__imp__sub_83295F28) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r11,-15072
	ctx.r9.s64 = ctx.r11.s64 + -15072;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,80
	ctx.r7.s64 = ctx.r9.s64 + 80;
	// li r6,39
	ctx.r6.s64 = 39;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r4,r10,-14736
	ctx.r4.s64 = ctx.r10.s64 + -14736;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-28520
	ctx.r11.s64 = ctx.r11.s64 + -28520;
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
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83295F8C;
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

__attribute__((alias("__imp__sub_83295F9C"))) PPC_WEAK_FUNC(sub_83295F9C);
PPC_FUNC_IMPL(__imp__sub_83295F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295FA0"))) PPC_WEAK_FUNC(sub_83295FA0);
PPC_FUNC_IMPL(__imp__sub_83295FA0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-29392
	ctx.r3.s64 = ctx.r10.s64 + -29392;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x83295FF4;
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

__attribute__((alias("__imp__sub_83296004"))) PPC_WEAK_FUNC(sub_83296004);
PPC_FUNC_IMPL(__imp__sub_83296004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296008"))) PPC_WEAK_FUNC(sub_83296008);
PPC_FUNC_IMPL(__imp__sub_83296008) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-29248
	ctx.r5.s64 = ctx.r10.s64 + -29248;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-14220
	ctx.r8.s64 = ctx.r11.s64 + -14220;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-14108
	ctx.r4.s64 = ctx.r10.s64 + -14108;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296068;
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

__attribute__((alias("__imp__sub_83296078"))) PPC_WEAK_FUNC(sub_83296078);
PPC_FUNC_IMPL(__imp__sub_83296078) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-14060
	ctx.r8.s64 = ctx.r11.s64 + -14060;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-14000
	ctx.r4.s64 = ctx.r10.s64 + -14000;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832960D8;
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

__attribute__((alias("__imp__sub_832960E8"))) PPC_WEAK_FUNC(sub_832960E8);
PPC_FUNC_IMPL(__imp__sub_832960E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-27352
	ctx.r10.s64 = ctx.r10.s64 + -27352;
	// lwz r11,-27384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27384);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296100"))) PPC_WEAK_FUNC(sub_83296100);
PPC_FUNC_IMPL(__imp__sub_83296100) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-27352
	ctx.r8.s64 = ctx.r11.s64 + -27352;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-13488
	ctx.r4.s64 = ctx.r10.s64 + -13488;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-29248
	ctx.r3.s64 = ctx.r11.s64 + -29248;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82d4f620
	ctx.lr = 0x83296164;
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

__attribute__((alias("__imp__sub_83296174"))) PPC_WEAK_FUNC(sub_83296174);
PPC_FUNC_IMPL(__imp__sub_83296174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296178"))) PPC_WEAK_FUNC(sub_83296178);
PPC_FUNC_IMPL(__imp__sub_83296178) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-12816
	ctx.r7.s64 = ctx.r11.s64 + -12816;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-12120
	ctx.r4.s64 = ctx.r10.s64 + -12120;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x832961D4;
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

__attribute__((alias("__imp__sub_832961E4"))) PPC_WEAK_FUNC(sub_832961E4);
PPC_FUNC_IMPL(__imp__sub_832961E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832961E8"))) PPC_WEAK_FUNC(sub_832961E8);
PPC_FUNC_IMPL(__imp__sub_832961E8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-12744
	ctx.r7.s64 = ctx.r11.s64 + -12744;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,-12076
	ctx.r4.s64 = ctx.r10.s64 + -12076;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x83296244;
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

__attribute__((alias("__imp__sub_83296254"))) PPC_WEAK_FUNC(sub_83296254);
PPC_FUNC_IMPL(__imp__sub_83296254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296258"))) PPC_WEAK_FUNC(sub_83296258);
PPC_FUNC_IMPL(__imp__sub_83296258) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-12648
	ctx.r7.s64 = ctx.r11.s64 + -12648;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r4,r10,-12044
	ctx.r4.s64 = ctx.r10.s64 + -12044;
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x832962B4;
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

__attribute__((alias("__imp__sub_832962C4"))) PPC_WEAK_FUNC(sub_832962C4);
PPC_FUNC_IMPL(__imp__sub_832962C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832962C8"))) PPC_WEAK_FUNC(sub_832962C8);
PPC_FUNC_IMPL(__imp__sub_832962C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d7ca30
	ctx.lr = 0x832962E0;
	sub_82D7CA30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-12016
	ctx.r10.s64 = ctx.r11.s64 + -12016;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-29056
	ctx.r11.s64 = ctx.r11.s64 + -29056;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-2864
	ctx.r10.s64 = ctx.r8.s64 + -2864;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-2888
	ctx.r10.s64 = ctx.r9.s64 + -2888;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296324"))) PPC_WEAK_FUNC(sub_83296324);
PPC_FUNC_IMPL(__imp__sub_83296324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296328"))) PPC_WEAK_FUNC(sub_83296328);
PPC_FUNC_IMPL(__imp__sub_83296328) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,-12840
	ctx.r9.s64 = ctx.r11.s64 + -12840;
	// addi r5,r10,-27792
	ctx.r5.s64 = ctx.r10.s64 + -27792;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,648
	ctx.r7.s64 = ctx.r9.s64 + 648;
	// li r6,17
	ctx.r6.s64 = 17;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r10,-12016
	ctx.r4.s64 = ctx.r10.s64 + -12016;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-12600
	ctx.r11.s64 = ctx.r11.s64 + -12600;
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
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x8329638C;
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

__attribute__((alias("__imp__sub_8329639C"))) PPC_WEAK_FUNC(sub_8329639C);
PPC_FUNC_IMPL(__imp__sub_8329639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832963A0"))) PPC_WEAK_FUNC(sub_832963A0);
PPC_FUNC_IMPL(__imp__sub_832963A0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28992
	ctx.r3.s64 = ctx.r10.s64 + -28992;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	ctx.lr = 0x832963F4;
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

__attribute__((alias("__imp__sub_83296404"))) PPC_WEAK_FUNC(sub_83296404);
PPC_FUNC_IMPL(__imp__sub_83296404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296408"))) PPC_WEAK_FUNC(sub_83296408);
PPC_FUNC_IMPL(__imp__sub_83296408) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11928
	ctx.r8.s64 = ctx.r11.s64 + -11928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-11904
	ctx.r4.s64 = ctx.r10.s64 + -11904;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296468;
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

__attribute__((alias("__imp__sub_83296478"))) PPC_WEAK_FUNC(sub_83296478);
PPC_FUNC_IMPL(__imp__sub_83296478) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28896
	ctx.r3.s64 = ctx.r10.s64 + -28896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x832964CC;
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

__attribute__((alias("__imp__sub_832964DC"))) PPC_WEAK_FUNC(sub_832964DC);
PPC_FUNC_IMPL(__imp__sub_832964DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832964E0"))) PPC_WEAK_FUNC(sub_832964E0);
PPC_FUNC_IMPL(__imp__sub_832964E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11840
	ctx.r8.s64 = ctx.r11.s64 + -11840;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-11744
	ctx.r4.s64 = ctx.r10.s64 + -11744;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296540;
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

__attribute__((alias("__imp__sub_83296550"))) PPC_WEAK_FUNC(sub_83296550);
PPC_FUNC_IMPL(__imp__sub_83296550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d812f0
	ctx.lr = 0x83296568;
	sub_82D812F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-11648
	ctx.r10.s64 = ctx.r11.s64 + -11648;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-28800
	ctx.r11.s64 = ctx.r11.s64 + -28800;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-1696
	ctx.r10.s64 = ctx.r8.s64 + -1696;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-1720
	ctx.r10.s64 = ctx.r9.s64 + -1720;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832965AC"))) PPC_WEAK_FUNC(sub_832965AC);
PPC_FUNC_IMPL(__imp__sub_832965AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832965B0"))) PPC_WEAK_FUNC(sub_832965B0);
PPC_FUNC_IMPL(__imp__sub_832965B0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11696
	ctx.r8.s64 = ctx.r11.s64 + -11696;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-11648
	ctx.r4.s64 = ctx.r10.s64 + -11648;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,88
	ctx.r6.s64 = 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296610;
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

__attribute__((alias("__imp__sub_83296620"))) PPC_WEAK_FUNC(sub_83296620);
PPC_FUNC_IMPL(__imp__sub_83296620) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11620
	ctx.r8.s64 = ctx.r11.s64 + -11620;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-11596
	ctx.r4.s64 = ctx.r10.s64 + -11596;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296680;
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

__attribute__((alias("__imp__sub_83296690"))) PPC_WEAK_FUNC(sub_83296690);
PPC_FUNC_IMPL(__imp__sub_83296690) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-11564
	ctx.r8.s64 = ctx.r11.s64 + -11564;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-11516
	ctx.r4.s64 = ctx.r10.s64 + -11516;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832966F0;
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

__attribute__((alias("__imp__sub_83296700"))) PPC_WEAK_FUNC(sub_83296700);
PPC_FUNC_IMPL(__imp__sub_83296700) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28640
	ctx.r3.s64 = ctx.r10.s64 + -28640;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d4f620
	ctx.lr = 0x83296754;
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

__attribute__((alias("__imp__sub_83296764"))) PPC_WEAK_FUNC(sub_83296764);
PPC_FUNC_IMPL(__imp__sub_83296764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296768"))) PPC_WEAK_FUNC(sub_83296768);
PPC_FUNC_IMPL(__imp__sub_83296768) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28592
	ctx.r3.s64 = ctx.r10.s64 + -28592;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x832967BC;
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

__attribute__((alias("__imp__sub_832967CC"))) PPC_WEAK_FUNC(sub_832967CC);
PPC_FUNC_IMPL(__imp__sub_832967CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832967D0"))) PPC_WEAK_FUNC(sub_832967D0);
PPC_FUNC_IMPL(__imp__sub_832967D0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28544
	ctx.r3.s64 = ctx.r10.s64 + -28544;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x83296824;
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

__attribute__((alias("__imp__sub_83296834"))) PPC_WEAK_FUNC(sub_83296834);
PPC_FUNC_IMPL(__imp__sub_83296834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296838"))) PPC_WEAK_FUNC(sub_83296838);
PPC_FUNC_IMPL(__imp__sub_83296838) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r11,-10640
	ctx.r9.s64 = ctx.r11.s64 + -10640;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r10,-10596
	ctx.r4.s64 = ctx.r10.s64 + -10596;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x83296898;
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

__attribute__((alias("__imp__sub_832968A8"))) PPC_WEAK_FUNC(sub_832968A8);
PPC_FUNC_IMPL(__imp__sub_832968A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-26940
	ctx.r10.s64 = ctx.r10.s64 + -26940;
	// lwz r11,-26944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26944);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832968C0"))) PPC_WEAK_FUNC(sub_832968C0);
PPC_FUNC_IMPL(__imp__sub_832968C0) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26940
	ctx.r8.s64 = ctx.r11.s64 + -26940;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-10412
	ctx.r4.s64 = ctx.r10.s64 + -10412;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-28448
	ctx.r3.s64 = ctx.r11.s64 + -28448;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82d4f620
	ctx.lr = 0x83296924;
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

__attribute__((alias("__imp__sub_83296934"))) PPC_WEAK_FUNC(sub_83296934);
PPC_FUNC_IMPL(__imp__sub_83296934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296938"))) PPC_WEAK_FUNC(sub_83296938);
PPC_FUNC_IMPL(__imp__sub_83296938) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28096
	ctx.r5.s64 = ctx.r10.s64 + -28096;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-10312
	ctx.r8.s64 = ctx.r11.s64 + -10312;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,-10140
	ctx.r4.s64 = ctx.r10.s64 + -10140;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296998;
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

__attribute__((alias("__imp__sub_832969A8"))) PPC_WEAK_FUNC(sub_832969A8);
PPC_FUNC_IMPL(__imp__sub_832969A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28352
	ctx.r3.s64 = ctx.r10.s64 + -28352;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	ctx.lr = 0x832969FC;
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

__attribute__((alias("__imp__sub_83296A0C"))) PPC_WEAK_FUNC(sub_83296A0C);
PPC_FUNC_IMPL(__imp__sub_83296A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296A10"))) PPC_WEAK_FUNC(sub_83296A10);
PPC_FUNC_IMPL(__imp__sub_83296A10) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d9e4f0
	ctx.lr = 0x83296A28;
	sub_82D9E4F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-10000
	ctx.r10.s64 = ctx.r11.s64 + -10000;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-28304
	ctx.r11.s64 = ctx.r11.s64 + -28304;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-1136
	ctx.r10.s64 = ctx.r8.s64 + -1136;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-1160
	ctx.r10.s64 = ctx.r9.s64 + -1160;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296A6C"))) PPC_WEAK_FUNC(sub_83296A6C);
PPC_FUNC_IMPL(__imp__sub_83296A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296A70"))) PPC_WEAK_FUNC(sub_83296A70);
PPC_FUNC_IMPL(__imp__sub_83296A70) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28496
	ctx.r5.s64 = ctx.r10.s64 + -28496;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-10072
	ctx.r8.s64 = ctx.r11.s64 + -10072;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-10000
	ctx.r4.s64 = ctx.r10.s64 + -10000;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296AD0;
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

__attribute__((alias("__imp__sub_83296AE0"))) PPC_WEAK_FUNC(sub_83296AE0);
PPC_FUNC_IMPL(__imp__sub_83296AE0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28448
	ctx.r5.s64 = ctx.r10.s64 + -28448;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-9948
	ctx.r8.s64 = ctx.r11.s64 + -9948;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-9900
	ctx.r4.s64 = ctx.r10.s64 + -9900;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296B40;
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

__attribute__((alias("__imp__sub_83296B50"))) PPC_WEAK_FUNC(sub_83296B50);
PPC_FUNC_IMPL(__imp__sub_83296B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-26816
	ctx.r10.s64 = ctx.r10.s64 + -26816;
	// lwz r11,-26824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26824);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296B68"))) PPC_WEAK_FUNC(sub_83296B68);
PPC_FUNC_IMPL(__imp__sub_83296B68) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26816
	ctx.r8.s64 = ctx.r11.s64 + -26816;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-28192
	ctx.r3.s64 = ctx.r11.s64 + -28192;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82d4f620
	ctx.lr = 0x83296BCC;
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

__attribute__((alias("__imp__sub_83296BDC"))) PPC_WEAK_FUNC(sub_83296BDC);
PPC_FUNC_IMPL(__imp__sub_83296BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296BE0"))) PPC_WEAK_FUNC(sub_83296BE0);
PPC_FUNC_IMPL(__imp__sub_83296BE0) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r10,-9296
	ctx.r8.s64 = ctx.r10.s64 + -9296;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
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
	ctx.r11.s64 = ctx.r11.s64 + -9128;
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
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82d4f620
	ctx.lr = 0x83296C44;
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

__attribute__((alias("__imp__sub_83296C54"))) PPC_WEAK_FUNC(sub_83296C54);
PPC_FUNC_IMPL(__imp__sub_83296C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296C58"))) PPC_WEAK_FUNC(sub_83296C58);
PPC_FUNC_IMPL(__imp__sub_83296C58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-28096
	ctx.r3.s64 = ctx.r10.s64 + -28096;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	ctx.lr = 0x83296CAC;
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

__attribute__((alias("__imp__sub_83296CBC"))) PPC_WEAK_FUNC(sub_83296CBC);
PPC_FUNC_IMPL(__imp__sub_83296CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296CC0"))) PPC_WEAK_FUNC(sub_83296CC0);
PPC_FUNC_IMPL(__imp__sub_83296CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-8736
	ctx.r11.s64 = ctx.r11.s64 + -8736;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d9e708
	ctx.lr = 0x83296CEC;
	sub_82D9E708(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32040
	ctx.r8.s64 = -2099773440;
	// addi r10,r11,-8688
	ctx.r10.s64 = ctx.r11.s64 + -8688;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32040
	ctx.r9.s64 = -2099773440;
	// addi r11,r11,-28048
	ctx.r11.s64 = ctx.r11.s64 + -28048;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-864
	ctx.r10.s64 = ctx.r8.s64 + -864;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-888
	ctx.r10.s64 = ctx.r9.s64 + -888;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296D30"))) PPC_WEAK_FUNC(sub_83296D30);
PPC_FUNC_IMPL(__imp__sub_83296D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// lwz r11,-26504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26504);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296D48"))) PPC_WEAK_FUNC(sub_83296D48);
PPC_FUNC_IMPL(__imp__sub_83296D48) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-26496
	ctx.r8.s64 = ctx.r11.s64 + -26496;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-8688
	ctx.r4.s64 = ctx.r10.s64 + -8688;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82d4f620
	ctx.lr = 0x83296DAC;
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

__attribute__((alias("__imp__sub_83296DBC"))) PPC_WEAK_FUNC(sub_83296DBC);
PPC_FUNC_IMPL(__imp__sub_83296DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296DC0"))) PPC_WEAK_FUNC(sub_83296DC0);
PPC_FUNC_IMPL(__imp__sub_83296DC0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27792
	ctx.r5.s64 = ctx.r10.s64 + -27792;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8620
	ctx.r8.s64 = ctx.r11.s64 + -8620;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-8572
	ctx.r4.s64 = ctx.r10.s64 + -8572;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,152
	ctx.r6.s64 = 152;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296E20;
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

__attribute__((alias("__imp__sub_83296E30"))) PPC_WEAK_FUNC(sub_83296E30);
PPC_FUNC_IMPL(__imp__sub_83296E30) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r10,-8412
	ctx.r4.s64 = ctx.r10.s64 + -8412;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-27936
	ctx.r3.s64 = ctx.r10.s64 + -27936;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82d4f620
	ctx.lr = 0x83296E88;
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

__attribute__((alias("__imp__sub_83296E98"))) PPC_WEAK_FUNC(sub_83296E98);
PPC_FUNC_IMPL(__imp__sub_83296E98) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27984
	ctx.r5.s64 = ctx.r10.s64 + -27984;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8388
	ctx.r8.s64 = ctx.r11.s64 + -8388;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-8364
	ctx.r4.s64 = ctx.r10.s64 + -8364;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,336
	ctx.r6.s64 = 336;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296EF8;
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

__attribute__((alias("__imp__sub_83296F08"))) PPC_WEAK_FUNC(sub_83296F08);
PPC_FUNC_IMPL(__imp__sub_83296F08) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-28848
	ctx.r5.s64 = ctx.r10.s64 + -28848;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8348
	ctx.r8.s64 = ctx.r11.s64 + -8348;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83296F68;
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

__attribute__((alias("__imp__sub_83296F78"))) PPC_WEAK_FUNC(sub_83296F78);
PPC_FUNC_IMPL(__imp__sub_83296F78) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-8056
	ctx.r8.s64 = ctx.r11.s64 + -8056;
	// li r11,0
	ctx.r11.s64 = 0;
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
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-7912
	ctx.r4.s64 = ctx.r10.s64 + -7912;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-27792
	ctx.r3.s64 = ctx.r11.s64 + -27792;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82d4f620
	ctx.lr = 0x83296FDC;
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

__attribute__((alias("__imp__sub_83296FEC"))) PPC_WEAK_FUNC(sub_83296FEC);
PPC_FUNC_IMPL(__imp__sub_83296FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296FF0"))) PPC_WEAK_FUNC(sub_83296FF0);
PPC_FUNC_IMPL(__imp__sub_83296FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-24548
	ctx.r10.s64 = ctx.r10.s64 + -24548;
	// lwz r11,-25024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25024);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297008"))) PPC_WEAK_FUNC(sub_83297008);
PPC_FUNC_IMPL(__imp__sub_83297008) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r9,r10,-4248
	ctx.r9.s64 = ctx.r10.s64 + -4248;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-24548
	ctx.r8.s64 = ctx.r11.s64 + -24548;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r10,-2184
	ctx.r4.s64 = ctx.r10.s64 + -2184;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r10,-27744
	ctx.r3.s64 = ctx.r10.s64 + -27744;
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
	ctx.lr = 0x83297068;
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

__attribute__((alias("__imp__sub_83297078"))) PPC_WEAK_FUNC(sub_83297078);
PPC_FUNC_IMPL(__imp__sub_83297078) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-4208
	ctx.r8.s64 = ctx.r11.s64 + -4208;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-2164
	ctx.r4.s64 = ctx.r10.s64 + -2164;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27696
	ctx.r3.s64 = ctx.r10.s64 + -27696;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832970D8;
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

__attribute__((alias("__imp__sub_832970E8"))) PPC_WEAK_FUNC(sub_832970E8);
PPC_FUNC_IMPL(__imp__sub_832970E8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-4160
	ctx.r7.s64 = ctx.r11.s64 + -4160;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-2140
	ctx.r4.s64 = ctx.r10.s64 + -2140;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-27648
	ctx.r3.s64 = ctx.r10.s64 + -27648;
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
	ctx.lr = 0x83297144;
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

__attribute__((alias("__imp__sub_83297154"))) PPC_WEAK_FUNC(sub_83297154);
PPC_FUNC_IMPL(__imp__sub_83297154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297158"))) PPC_WEAK_FUNC(sub_83297158);
PPC_FUNC_IMPL(__imp__sub_83297158) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-4136
	ctx.r8.s64 = ctx.r11.s64 + -4136;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r10,-2124
	ctx.r4.s64 = ctx.r10.s64 + -2124;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27600
	ctx.r3.s64 = ctx.r10.s64 + -27600;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832971B8;
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

__attribute__((alias("__imp__sub_832971C8"))) PPC_WEAK_FUNC(sub_832971C8);
PPC_FUNC_IMPL(__imp__sub_832971C8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-2092
	ctx.r4.s64 = ctx.r10.s64 + -2092;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-27552
	ctx.r3.s64 = ctx.r10.s64 + -27552;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d4f620
	ctx.lr = 0x8329721C;
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

__attribute__((alias("__imp__sub_8329722C"))) PPC_WEAK_FUNC(sub_8329722C);
PPC_FUNC_IMPL(__imp__sub_8329722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297230"))) PPC_WEAK_FUNC(sub_83297230);
PPC_FUNC_IMPL(__imp__sub_83297230) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3944
	ctx.r8.s64 = ctx.r11.s64 + -3944;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-2064
	ctx.r4.s64 = ctx.r10.s64 + -2064;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27504
	ctx.r3.s64 = ctx.r10.s64 + -27504;
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
	ctx.lr = 0x83297290;
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

__attribute__((alias("__imp__sub_832972A0"))) PPC_WEAK_FUNC(sub_832972A0);
PPC_FUNC_IMPL(__imp__sub_832972A0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3920
	ctx.r8.s64 = ctx.r11.s64 + -3920;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-2032
	ctx.r4.s64 = ctx.r10.s64 + -2032;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27456
	ctx.r3.s64 = ctx.r10.s64 + -27456;
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
	// li r6,144
	ctx.r6.s64 = 144;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297300;
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

__attribute__((alias("__imp__sub_83297310"))) PPC_WEAK_FUNC(sub_83297310);
PPC_FUNC_IMPL(__imp__sub_83297310) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3872
	ctx.r8.s64 = ctx.r11.s64 + -3872;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-1996
	ctx.r4.s64 = ctx.r10.s64 + -1996;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27408
	ctx.r3.s64 = ctx.r10.s64 + -27408;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297370;
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

__attribute__((alias("__imp__sub_83297380"))) PPC_WEAK_FUNC(sub_83297380);
PPC_FUNC_IMPL(__imp__sub_83297380) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3824
	ctx.r8.s64 = ctx.r11.s64 + -3824;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-1956
	ctx.r4.s64 = ctx.r10.s64 + -1956;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27360
	ctx.r3.s64 = ctx.r10.s64 + -27360;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832973E0;
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

__attribute__((alias("__imp__sub_832973F0"))) PPC_WEAK_FUNC(sub_832973F0);
PPC_FUNC_IMPL(__imp__sub_832973F0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3776
	ctx.r8.s64 = ctx.r11.s64 + -3776;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-1920
	ctx.r4.s64 = ctx.r10.s64 + -1920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27312
	ctx.r3.s64 = ctx.r10.s64 + -27312;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297450;
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

__attribute__((alias("__imp__sub_83297460"))) PPC_WEAK_FUNC(sub_83297460);
PPC_FUNC_IMPL(__imp__sub_83297460) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3752
	ctx.r8.s64 = ctx.r11.s64 + -3752;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-1888
	ctx.r4.s64 = ctx.r10.s64 + -1888;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27264
	ctx.r3.s64 = ctx.r10.s64 + -27264;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832974C0;
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

__attribute__((alias("__imp__sub_832974D0"))) PPC_WEAK_FUNC(sub_832974D0);
PPC_FUNC_IMPL(__imp__sub_832974D0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3728
	ctx.r8.s64 = ctx.r11.s64 + -3728;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-1864
	ctx.r4.s64 = ctx.r10.s64 + -1864;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27216
	ctx.r3.s64 = ctx.r10.s64 + -27216;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297530;
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

__attribute__((alias("__imp__sub_83297540"))) PPC_WEAK_FUNC(sub_83297540);
PPC_FUNC_IMPL(__imp__sub_83297540) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3656
	ctx.r8.s64 = ctx.r11.s64 + -3656;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-1836
	ctx.r4.s64 = ctx.r10.s64 + -1836;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27168
	ctx.r3.s64 = ctx.r10.s64 + -27168;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832975A0;
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

__attribute__((alias("__imp__sub_832975B0"))) PPC_WEAK_FUNC(sub_832975B0);
PPC_FUNC_IMPL(__imp__sub_832975B0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3584
	ctx.r8.s64 = ctx.r11.s64 + -3584;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-1808
	ctx.r4.s64 = ctx.r10.s64 + -1808;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27120
	ctx.r3.s64 = ctx.r10.s64 + -27120;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297610;
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

__attribute__((alias("__imp__sub_83297620"))) PPC_WEAK_FUNC(sub_83297620);
PPC_FUNC_IMPL(__imp__sub_83297620) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3560
	ctx.r8.s64 = ctx.r11.s64 + -3560;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-1784
	ctx.r4.s64 = ctx.r10.s64 + -1784;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27072
	ctx.r3.s64 = ctx.r10.s64 + -27072;
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
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297680;
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

__attribute__((alias("__imp__sub_83297690"))) PPC_WEAK_FUNC(sub_83297690);
PPC_FUNC_IMPL(__imp__sub_83297690) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,120
	ctx.r8.s64 = ctx.r11.s64 + 120;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r4,r10,-1760
	ctx.r4.s64 = ctx.r10.s64 + -1760;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r10,-27024
	ctx.r3.s64 = ctx.r10.s64 + -27024;
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
	ctx.lr = 0x832976F0;
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

__attribute__((alias("__imp__sub_83297700"))) PPC_WEAK_FUNC(sub_83297700);
PPC_FUNC_IMPL(__imp__sub_83297700) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-3368
	ctx.r11.s64 = ctx.r11.s64 + -3368;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,144
	ctx.r8.s64 = ctx.r11.s64 + 144;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r4,r10,-1732
	ctx.r4.s64 = ctx.r10.s64 + -1732;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r3,r10,-26976
	ctx.r3.s64 = ctx.r10.s64 + -26976;
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
	ctx.lr = 0x83297760;
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

__attribute__((alias("__imp__sub_83297770"))) PPC_WEAK_FUNC(sub_83297770);
PPC_FUNC_IMPL(__imp__sub_83297770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-24520
	ctx.r10.s64 = ctx.r10.s64 + -24520;
	// lwz r11,-25016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25016);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297788"))) PPC_WEAK_FUNC(sub_83297788);
PPC_FUNC_IMPL(__imp__sub_83297788) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,-3180
	ctx.r9.s64 = ctx.r11.s64 + -3180;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r4,r10,-1704
	ctx.r4.s64 = ctx.r10.s64 + -1704;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-24520
	ctx.r11.s64 = ctx.r11.s64 + -24520;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26928
	ctx.r3.s64 = ctx.r10.s64 + -26928;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832977EC;
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

__attribute__((alias("__imp__sub_832977FC"))) PPC_WEAK_FUNC(sub_832977FC);
PPC_FUNC_IMPL(__imp__sub_832977FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297800"))) PPC_WEAK_FUNC(sub_83297800);
PPC_FUNC_IMPL(__imp__sub_83297800) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3120
	ctx.r8.s64 = ctx.r11.s64 + -3120;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-1652
	ctx.r4.s64 = ctx.r10.s64 + -1652;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26880
	ctx.r3.s64 = ctx.r10.s64 + -26880;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297860;
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

__attribute__((alias("__imp__sub_83297870"))) PPC_WEAK_FUNC(sub_83297870);
PPC_FUNC_IMPL(__imp__sub_83297870) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-3024
	ctx.r8.s64 = ctx.r11.s64 + -3024;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r4,r10,-1620
	ctx.r4.s64 = ctx.r10.s64 + -1620;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26832
	ctx.r3.s64 = ctx.r10.s64 + -26832;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832978D0;
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

__attribute__((alias("__imp__sub_832978E0"))) PPC_WEAK_FUNC(sub_832978E0);
PPC_FUNC_IMPL(__imp__sub_832978E0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2856
	ctx.r8.s64 = ctx.r11.s64 + -2856;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,-1592
	ctx.r4.s64 = ctx.r10.s64 + -1592;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26784
	ctx.r3.s64 = ctx.r10.s64 + -26784;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297940;
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

__attribute__((alias("__imp__sub_83297950"))) PPC_WEAK_FUNC(sub_83297950);
PPC_FUNC_IMPL(__imp__sub_83297950) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2736
	ctx.r8.s64 = ctx.r11.s64 + -2736;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-1560
	ctx.r4.s64 = ctx.r10.s64 + -1560;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26736
	ctx.r3.s64 = ctx.r10.s64 + -26736;
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
	ctx.lr = 0x832979B0;
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

__attribute__((alias("__imp__sub_832979C0"))) PPC_WEAK_FUNC(sub_832979C0);
PPC_FUNC_IMPL(__imp__sub_832979C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2664
	ctx.r8.s64 = ctx.r11.s64 + -2664;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r10,-1528
	ctx.r4.s64 = ctx.r10.s64 + -1528;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26688
	ctx.r3.s64 = ctx.r10.s64 + -26688;
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
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297A20;
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

__attribute__((alias("__imp__sub_83297A30"))) PPC_WEAK_FUNC(sub_83297A30);
PPC_FUNC_IMPL(__imp__sub_83297A30) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2520
	ctx.r8.s64 = ctx.r11.s64 + -2520;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-1500
	ctx.r4.s64 = ctx.r10.s64 + -1500;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26640
	ctx.r3.s64 = ctx.r10.s64 + -26640;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297A90;
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

__attribute__((alias("__imp__sub_83297AA0"))) PPC_WEAK_FUNC(sub_83297AA0);
PPC_FUNC_IMPL(__imp__sub_83297AA0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-27744
	ctx.r5.s64 = ctx.r10.s64 + -27744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2424
	ctx.r8.s64 = ctx.r11.s64 + -2424;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,-1476
	ctx.r4.s64 = ctx.r10.s64 + -1476;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26592
	ctx.r3.s64 = ctx.r10.s64 + -26592;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297B00;
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

__attribute__((alias("__imp__sub_83297B10"))) PPC_WEAK_FUNC(sub_83297B10);
PPC_FUNC_IMPL(__imp__sub_83297B10) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-26592
	ctx.r5.s64 = ctx.r10.s64 + -26592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2328
	ctx.r8.s64 = ctx.r11.s64 + -2328;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,-1448
	ctx.r4.s64 = ctx.r10.s64 + -1448;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26544
	ctx.r3.s64 = ctx.r10.s64 + -26544;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297B70;
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

__attribute__((alias("__imp__sub_83297B80"))) PPC_WEAK_FUNC(sub_83297B80);
PPC_FUNC_IMPL(__imp__sub_83297B80) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-26592
	ctx.r5.s64 = ctx.r10.s64 + -26592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2280
	ctx.r8.s64 = ctx.r11.s64 + -2280;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,-1408
	ctx.r4.s64 = ctx.r10.s64 + -1408;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26496
	ctx.r3.s64 = ctx.r10.s64 + -26496;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297BE0;
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

__attribute__((alias("__imp__sub_83297BF0"))) PPC_WEAK_FUNC(sub_83297BF0);
PPC_FUNC_IMPL(__imp__sub_83297BF0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-26592
	ctx.r5.s64 = ctx.r10.s64 + -26592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-1368
	ctx.r4.s64 = ctx.r10.s64 + -1368;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-26448
	ctx.r3.s64 = ctx.r10.s64 + -26448;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82d4f620
	ctx.lr = 0x83297C44;
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

__attribute__((alias("__imp__sub_83297C54"))) PPC_WEAK_FUNC(sub_83297C54);
PPC_FUNC_IMPL(__imp__sub_83297C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297C58"))) PPC_WEAK_FUNC(sub_83297C58);
PPC_FUNC_IMPL(__imp__sub_83297C58) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-26592
	ctx.r5.s64 = ctx.r10.s64 + -26592;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-2208
	ctx.r8.s64 = ctx.r11.s64 + -2208;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,-1328
	ctx.r4.s64 = ctx.r10.s64 + -1328;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26400
	ctx.r3.s64 = ctx.r10.s64 + -26400;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297CB8;
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

__attribute__((alias("__imp__sub_83297CC8"))) PPC_WEAK_FUNC(sub_83297CC8);
PPC_FUNC_IMPL(__imp__sub_83297CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,2024
	ctx.r3.s64 = ctx.r11.s64 + 2024;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83297CD4"))) PPC_WEAK_FUNC(sub_83297CD4);
PPC_FUNC_IMPL(__imp__sub_83297CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297CD8"))) PPC_WEAK_FUNC(sub_83297CD8);
PPC_FUNC_IMPL(__imp__sub_83297CD8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-336
	ctx.r7.s64 = ctx.r11.s64 + -336;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,-264
	ctx.r4.s64 = ctx.r10.s64 + -264;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-26284
	ctx.r3.s64 = ctx.r10.s64 + -26284;
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
	ctx.lr = 0x83297D34;
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

__attribute__((alias("__imp__sub_83297D44"))) PPC_WEAK_FUNC(sub_83297D44);
PPC_FUNC_IMPL(__imp__sub_83297D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297D48"))) PPC_WEAK_FUNC(sub_83297D48);
PPC_FUNC_IMPL(__imp__sub_83297D48) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,576
	ctx.r8.s64 = ctx.r11.s64 + 576;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,696
	ctx.r4.s64 = ctx.r10.s64 + 696;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26204
	ctx.r3.s64 = ctx.r10.s64 + -26204;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297DA8;
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

__attribute__((alias("__imp__sub_83297DB8"))) PPC_WEAK_FUNC(sub_83297DB8);
PPC_FUNC_IMPL(__imp__sub_83297DB8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,744
	ctx.r8.s64 = ctx.r11.s64 + 744;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,840
	ctx.r4.s64 = ctx.r10.s64 + 840;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26156
	ctx.r3.s64 = ctx.r10.s64 + -26156;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297E18;
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

__attribute__((alias("__imp__sub_83297E28"))) PPC_WEAK_FUNC(sub_83297E28);
PPC_FUNC_IMPL(__imp__sub_83297E28) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,944
	ctx.r7.s64 = ctx.r11.s64 + 944;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,1064
	ctx.r4.s64 = ctx.r10.s64 + 1064;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-26108
	ctx.r3.s64 = ctx.r10.s64 + -26108;
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
	ctx.lr = 0x83297E84;
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

__attribute__((alias("__imp__sub_83297E94"))) PPC_WEAK_FUNC(sub_83297E94);
PPC_FUNC_IMPL(__imp__sub_83297E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297E98"))) PPC_WEAK_FUNC(sub_83297E98);
PPC_FUNC_IMPL(__imp__sub_83297E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-23280
	ctx.r10.s64 = ctx.r10.s64 + -23280;
	// lwz r11,-20136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20136);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297EB0"))) PPC_WEAK_FUNC(sub_83297EB0);
PPC_FUNC_IMPL(__imp__sub_83297EB0) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r8,r10,-23280
	ctx.r8.s64 = ctx.r10.s64 + -23280;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23100
	ctx.r5.s64 = ctx.r10.s64 + -23100;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,1092
	ctx.r4.s64 = ctx.r10.s64 + 1092;
	// addi r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 + 1040;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26060
	ctx.r3.s64 = ctx.r10.s64 + -26060;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82d4f620
	ctx.lr = 0x83297F14;
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

__attribute__((alias("__imp__sub_83297F24"))) PPC_WEAK_FUNC(sub_83297F24);
PPC_FUNC_IMPL(__imp__sub_83297F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297F28"))) PPC_WEAK_FUNC(sub_83297F28);
PPC_FUNC_IMPL(__imp__sub_83297F28) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1124
	ctx.r8.s64 = ctx.r11.s64 + 1124;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,1148
	ctx.r4.s64 = ctx.r10.s64 + 1148;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26012
	ctx.r3.s64 = ctx.r10.s64 + -26012;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83297F88;
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

__attribute__((alias("__imp__sub_83297F98"))) PPC_WEAK_FUNC(sub_83297F98);
PPC_FUNC_IMPL(__imp__sub_83297F98) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,1196
	ctx.r4.s64 = ctx.r10.s64 + 1196;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-25964
	ctx.r3.s64 = ctx.r10.s64 + -25964;
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
	ctx.lr = 0x83297FE8;
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

__attribute__((alias("__imp__sub_83297FF8"))) PPC_WEAK_FUNC(sub_83297FF8);
PPC_FUNC_IMPL(__imp__sub_83297FF8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-25964
	ctx.r5.s64 = ctx.r10.s64 + -25964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1172
	ctx.r8.s64 = ctx.r11.s64 + 1172;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,1216
	ctx.r4.s64 = ctx.r10.s64 + 1216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25916
	ctx.r3.s64 = ctx.r10.s64 + -25916;
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
	ctx.lr = 0x83298058;
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

__attribute__((alias("__imp__sub_83298068"))) PPC_WEAK_FUNC(sub_83298068);
PPC_FUNC_IMPL(__imp__sub_83298068) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1260
	ctx.r8.s64 = ctx.r11.s64 + 1260;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,1348
	ctx.r4.s64 = ctx.r10.s64 + 1348;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25868
	ctx.r3.s64 = ctx.r10.s64 + -25868;
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
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832980C8;
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

__attribute__((alias("__imp__sub_832980D8"))) PPC_WEAK_FUNC(sub_832980D8);
PPC_FUNC_IMPL(__imp__sub_832980D8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1360
	ctx.r8.s64 = ctx.r11.s64 + 1360;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,1384
	ctx.r4.s64 = ctx.r10.s64 + 1384;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25820
	ctx.r3.s64 = ctx.r10.s64 + -25820;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298138;
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

__attribute__((alias("__imp__sub_83298148"))) PPC_WEAK_FUNC(sub_83298148);
PPC_FUNC_IMPL(__imp__sub_83298148) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1508
	ctx.r8.s64 = ctx.r11.s64 + 1508;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1488
	ctx.r9.s64 = ctx.r10.s64 + 1488;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,1556
	ctx.r4.s64 = ctx.r10.s64 + 1556;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-25772
	ctx.r3.s64 = ctx.r11.s64 + -25772;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82d4f620
	ctx.lr = 0x832981AC;
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

__attribute__((alias("__imp__sub_832981BC"))) PPC_WEAK_FUNC(sub_832981BC);
PPC_FUNC_IMPL(__imp__sub_832981BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832981C0"))) PPC_WEAK_FUNC(sub_832981C0);
PPC_FUNC_IMPL(__imp__sub_832981C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbddc0
	ctx.lr = 0x832981D8;
	sub_82DBDDC0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,1968
	ctx.r10.s64 = ctx.r11.s64 + 1968;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-25724
	ctx.r11.s64 = ctx.r11.s64 + -25724;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4816
	ctx.r10.s64 = ctx.r8.s64 + -4816;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4792
	ctx.r10.s64 = ctx.r9.s64 + -4792;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329821C"))) PPC_WEAK_FUNC(sub_8329821C);
PPC_FUNC_IMPL(__imp__sub_8329821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298220"))) PPC_WEAK_FUNC(sub_83298220);
PPC_FUNC_IMPL(__imp__sub_83298220) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1656
	ctx.r8.s64 = ctx.r11.s64 + 1656;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r10,1968
	ctx.r4.s64 = ctx.r10.s64 + 1968;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25708
	ctx.r3.s64 = ctx.r10.s64 + -25708;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298280;
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

__attribute__((alias("__imp__sub_83298290"))) PPC_WEAK_FUNC(sub_83298290);
PPC_FUNC_IMPL(__imp__sub_83298290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbd9a8
	ctx.lr = 0x832982A8;
	sub_82DBD9A8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,2016
	ctx.r10.s64 = ctx.r11.s64 + 2016;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-25660
	ctx.r11.s64 = ctx.r11.s64 + -25660;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4720
	ctx.r10.s64 = ctx.r8.s64 + -4720;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4696
	ctx.r10.s64 = ctx.r9.s64 + -4696;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832982EC"))) PPC_WEAK_FUNC(sub_832982EC);
PPC_FUNC_IMPL(__imp__sub_832982EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832982F0"))) PPC_WEAK_FUNC(sub_832982F0);
PPC_FUNC_IMPL(__imp__sub_832982F0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1800
	ctx.r8.s64 = ctx.r11.s64 + 1800;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,2016
	ctx.r4.s64 = ctx.r10.s64 + 2016;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25644
	ctx.r3.s64 = ctx.r10.s64 + -25644;
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
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298350;
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

__attribute__((alias("__imp__sub_83298360"))) PPC_WEAK_FUNC(sub_83298360);
PPC_FUNC_IMPL(__imp__sub_83298360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbd9c0
	ctx.lr = 0x83298378;
	sub_82DBD9C0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,2064
	ctx.r10.s64 = ctx.r11.s64 + 2064;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-25596
	ctx.r11.s64 = ctx.r11.s64 + -25596;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-4624
	ctx.r10.s64 = ctx.r8.s64 + -4624;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-4600
	ctx.r10.s64 = ctx.r9.s64 + -4600;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832983BC"))) PPC_WEAK_FUNC(sub_832983BC);
PPC_FUNC_IMPL(__imp__sub_832983BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832983C0"))) PPC_WEAK_FUNC(sub_832983C0);
PPC_FUNC_IMPL(__imp__sub_832983C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24412
	ctx.r5.s64 = ctx.r10.s64 + -24412;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,1896
	ctx.r8.s64 = ctx.r11.s64 + 1896;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,2064
	ctx.r4.s64 = ctx.r10.s64 + 2064;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25580
	ctx.r3.s64 = ctx.r10.s64 + -25580;
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
	// li r6,304
	ctx.r6.s64 = 304;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298420;
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

__attribute__((alias("__imp__sub_83298430"))) PPC_WEAK_FUNC(sub_83298430);
PPC_FUNC_IMPL(__imp__sub_83298430) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,2112
	ctx.r8.s64 = ctx.r11.s64 + 2112;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,2208
	ctx.r4.s64 = ctx.r10.s64 + 2208;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25532
	ctx.r3.s64 = ctx.r10.s64 + -25532;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298490;
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

__attribute__((alias("__imp__sub_832984A0"))) PPC_WEAK_FUNC(sub_832984A0);
PPC_FUNC_IMPL(__imp__sub_832984A0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,2312
	ctx.r8.s64 = ctx.r11.s64 + 2312;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,2432
	ctx.r4.s64 = ctx.r10.s64 + 2432;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25484
	ctx.r3.s64 = ctx.r10.s64 + -25484;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298500;
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

__attribute__((alias("__imp__sub_83298510"))) PPC_WEAK_FUNC(sub_83298510);
PPC_FUNC_IMPL(__imp__sub_83298510) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23100
	ctx.r5.s64 = ctx.r10.s64 + -23100;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,2488
	ctx.r8.s64 = ctx.r11.s64 + 2488;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,2636
	ctx.r4.s64 = ctx.r10.s64 + 2636;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25436
	ctx.r3.s64 = ctx.r10.s64 + -25436;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298570;
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

__attribute__((alias("__imp__sub_83298580"))) PPC_WEAK_FUNC(sub_83298580);
PPC_FUNC_IMPL(__imp__sub_83298580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc0a70
	ctx.lr = 0x83298598;
	sub_82DC0A70(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,2840
	ctx.r10.s64 = ctx.r11.s64 + 2840;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-25388
	ctx.r11.s64 = ctx.r11.s64 + -25388;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-3784
	ctx.r10.s64 = ctx.r8.s64 + -3784;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-3760
	ctx.r10.s64 = ctx.r9.s64 + -3760;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832985DC"))) PPC_WEAK_FUNC(sub_832985DC);
PPC_FUNC_IMPL(__imp__sub_832985DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832985E0"))) PPC_WEAK_FUNC(sub_832985E0);
PPC_FUNC_IMPL(__imp__sub_832985E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,2672
	ctx.r8.s64 = ctx.r11.s64 + 2672;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r4,r10,2840
	ctx.r4.s64 = ctx.r10.s64 + 2840;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25372
	ctx.r3.s64 = ctx.r10.s64 + -25372;
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
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298640;
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

__attribute__((alias("__imp__sub_83298650"))) PPC_WEAK_FUNC(sub_83298650);
PPC_FUNC_IMPL(__imp__sub_83298650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc0aa0
	ctx.lr = 0x83298668;
	sub_82DC0AA0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,2876
	ctx.r10.s64 = ctx.r11.s64 + 2876;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-25324
	ctx.r11.s64 = ctx.r11.s64 + -25324;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-3688
	ctx.r10.s64 = ctx.r8.s64 + -3688;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-3664
	ctx.r10.s64 = ctx.r9.s64 + -3664;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832986AC"))) PPC_WEAK_FUNC(sub_832986AC);
PPC_FUNC_IMPL(__imp__sub_832986AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832986B0"))) PPC_WEAK_FUNC(sub_832986B0);
PPC_FUNC_IMPL(__imp__sub_832986B0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23692
	ctx.r5.s64 = ctx.r10.s64 + -23692;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,2816
	ctx.r8.s64 = ctx.r11.s64 + 2816;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r10,2876
	ctx.r4.s64 = ctx.r10.s64 + 2876;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25308
	ctx.r3.s64 = ctx.r10.s64 + -25308;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298710;
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

__attribute__((alias("__imp__sub_83298720"))) PPC_WEAK_FUNC(sub_83298720);
PPC_FUNC_IMPL(__imp__sub_83298720) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,2912
	ctx.r8.s64 = ctx.r11.s64 + 2912;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,2984
	ctx.r4.s64 = ctx.r10.s64 + 2984;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25260
	ctx.r3.s64 = ctx.r10.s64 + -25260;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298780;
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

__attribute__((alias("__imp__sub_83298790"))) PPC_WEAK_FUNC(sub_83298790);
PPC_FUNC_IMPL(__imp__sub_83298790) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,3024
	ctx.r8.s64 = ctx.r11.s64 + 3024;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,3164
	ctx.r4.s64 = ctx.r10.s64 + 3164;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25212
	ctx.r3.s64 = ctx.r10.s64 + -25212;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832987F0;
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

__attribute__((alias("__imp__sub_83298800"))) PPC_WEAK_FUNC(sub_83298800);
PPC_FUNC_IMPL(__imp__sub_83298800) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23340
	ctx.r5.s64 = ctx.r10.s64 + -23340;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,3232
	ctx.r8.s64 = ctx.r11.s64 + 3232;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,3392
	ctx.r4.s64 = ctx.r10.s64 + 3392;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25164
	ctx.r3.s64 = ctx.r10.s64 + -25164;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298860;
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

__attribute__((alias("__imp__sub_83298870"))) PPC_WEAK_FUNC(sub_83298870);
PPC_FUNC_IMPL(__imp__sub_83298870) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,3472
	ctx.r7.s64 = ctx.r11.s64 + 3472;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,3664
	ctx.r4.s64 = ctx.r10.s64 + 3664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-25116
	ctx.r3.s64 = ctx.r10.s64 + -25116;
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
	ctx.lr = 0x832988CC;
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

__attribute__((alias("__imp__sub_832988DC"))) PPC_WEAK_FUNC(sub_832988DC);
PPC_FUNC_IMPL(__imp__sub_832988DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832988E0"))) PPC_WEAK_FUNC(sub_832988E0);
PPC_FUNC_IMPL(__imp__sub_832988E0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,3544
	ctx.r8.s64 = ctx.r11.s64 + 3544;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,3700
	ctx.r4.s64 = ctx.r10.s64 + 3700;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25068
	ctx.r3.s64 = ctx.r10.s64 + -25068;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298940;
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

__attribute__((alias("__imp__sub_83298950"))) PPC_WEAK_FUNC(sub_83298950);
PPC_FUNC_IMPL(__imp__sub_83298950) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,3736
	ctx.r8.s64 = ctx.r11.s64 + 3736;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,3848
	ctx.r4.s64 = ctx.r10.s64 + 3848;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25020
	ctx.r3.s64 = ctx.r10.s64 + -25020;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832989B0;
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

__attribute__((alias("__imp__sub_832989C0"))) PPC_WEAK_FUNC(sub_832989C0);
PPC_FUNC_IMPL(__imp__sub_832989C0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24764
	ctx.r5.s64 = ctx.r10.s64 + -24764;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,3920
	ctx.r8.s64 = ctx.r11.s64 + 3920;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,4064
	ctx.r4.s64 = ctx.r10.s64 + 4064;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24972
	ctx.r3.s64 = ctx.r10.s64 + -24972;
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
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298A20;
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

__attribute__((alias("__imp__sub_83298A30"))) PPC_WEAK_FUNC(sub_83298A30);
PPC_FUNC_IMPL(__imp__sub_83298A30) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24972
	ctx.r5.s64 = ctx.r10.s64 + -24972;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,4016
	ctx.r8.s64 = ctx.r11.s64 + 4016;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,4088
	ctx.r4.s64 = ctx.r10.s64 + 4088;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24924
	ctx.r3.s64 = ctx.r10.s64 + -24924;
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
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298A90;
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

__attribute__((alias("__imp__sub_83298AA0"))) PPC_WEAK_FUNC(sub_83298AA0);
PPC_FUNC_IMPL(__imp__sub_83298AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7258
	ctx.lr = 0x83298AB8;
	sub_82DB7258(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,4632
	ctx.r10.s64 = ctx.r11.s64 + 4632;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-24876
	ctx.r11.s64 = ctx.r11.s64 + -24876;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-1552
	ctx.r10.s64 = ctx.r8.s64 + -1552;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-1576
	ctx.r10.s64 = ctx.r9.s64 + -1576;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298AFC"))) PPC_WEAK_FUNC(sub_83298AFC);
PPC_FUNC_IMPL(__imp__sub_83298AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298B00"))) PPC_WEAK_FUNC(sub_83298B00);
PPC_FUNC_IMPL(__imp__sub_83298B00) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,4440
	ctx.r9.s64 = ctx.r11.s64 + 4440;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// li r6,6
	ctx.r6.s64 = 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r10,4632
	ctx.r4.s64 = ctx.r10.s64 + 4632;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,4488
	ctx.r11.s64 = ctx.r11.s64 + 4488;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24860
	ctx.r3.s64 = ctx.r10.s64 + -24860;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298B64;
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

__attribute__((alias("__imp__sub_83298B74"))) PPC_WEAK_FUNC(sub_83298B74);
PPC_FUNC_IMPL(__imp__sub_83298B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298B78"))) PPC_WEAK_FUNC(sub_83298B78);
PPC_FUNC_IMPL(__imp__sub_83298B78) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24764
	ctx.r5.s64 = ctx.r10.s64 + -24764;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,4676
	ctx.r8.s64 = ctx.r11.s64 + 4676;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,4724
	ctx.r4.s64 = ctx.r10.s64 + 4724;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24812
	ctx.r3.s64 = ctx.r10.s64 + -24812;
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
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298BD8;
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

__attribute__((alias("__imp__sub_83298BE8"))) PPC_WEAK_FUNC(sub_83298BE8);
PPC_FUNC_IMPL(__imp__sub_83298BE8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,4760
	ctx.r4.s64 = ctx.r10.s64 + 4760;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-24764
	ctx.r3.s64 = ctx.r10.s64 + -24764;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d4f620
	ctx.lr = 0x83298C3C;
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

__attribute__((alias("__imp__sub_83298C4C"))) PPC_WEAK_FUNC(sub_83298C4C);
PPC_FUNC_IMPL(__imp__sub_83298C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298C50"))) PPC_WEAK_FUNC(sub_83298C50);
PPC_FUNC_IMPL(__imp__sub_83298C50) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-24060
	ctx.r5.s64 = ctx.r10.s64 + -24060;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,4776
	ctx.r4.s64 = ctx.r10.s64 + 4776;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-24716
	ctx.r3.s64 = ctx.r10.s64 + -24716;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82d4f620
	ctx.lr = 0x83298CA4;
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

__attribute__((alias("__imp__sub_83298CB4"))) PPC_WEAK_FUNC(sub_83298CB4);
PPC_FUNC_IMPL(__imp__sub_83298CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298CB8"))) PPC_WEAK_FUNC(sub_83298CB8);
PPC_FUNC_IMPL(__imp__sub_83298CB8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23100
	ctx.r5.s64 = ctx.r10.s64 + -23100;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,4804
	ctx.r8.s64 = ctx.r11.s64 + 4804;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,4928
	ctx.r4.s64 = ctx.r10.s64 + 4928;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24668
	ctx.r3.s64 = ctx.r10.s64 + -24668;
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
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298D18;
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

__attribute__((alias("__imp__sub_83298D28"))) PPC_WEAK_FUNC(sub_83298D28);
PPC_FUNC_IMPL(__imp__sub_83298D28) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,4964
	ctx.r4.s64 = ctx.r10.s64 + 4964;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-24620
	ctx.r3.s64 = ctx.r10.s64 + -24620;
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
	ctx.lr = 0x83298D78;
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

__attribute__((alias("__imp__sub_83298D88"))) PPC_WEAK_FUNC(sub_83298D88);
PPC_FUNC_IMPL(__imp__sub_83298D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,-22376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22376);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-22320
	ctx.r11.s64 = ctx.r11.s64 + -22320;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r10,-22384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22384);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298DAC"))) PPC_WEAK_FUNC(sub_83298DAC);
PPC_FUNC_IMPL(__imp__sub_83298DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298DB0"))) PPC_WEAK_FUNC(sub_83298DB0);
PPC_FUNC_IMPL(__imp__sub_83298DB0) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,-22320
	ctx.r7.s64 = ctx.r11.s64 + -22320;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r4,r10,5792
	ctx.r4.s64 = ctx.r10.s64 + 5792;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-24572
	ctx.r3.s64 = ctx.r10.s64 + -24572;
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
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x83298E0C;
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

__attribute__((alias("__imp__sub_83298E1C"))) PPC_WEAK_FUNC(sub_83298E1C);
PPC_FUNC_IMPL(__imp__sub_83298E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298E20"))) PPC_WEAK_FUNC(sub_83298E20);
PPC_FUNC_IMPL(__imp__sub_83298E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-22104
	ctx.r10.s64 = ctx.r10.s64 + -22104;
	// lwz r11,-22384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22384);
	// stw r11,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298E38"))) PPC_WEAK_FUNC(sub_83298E38);
PPC_FUNC_IMPL(__imp__sub_83298E38) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r8,r10,-22104
	ctx.r8.s64 = ctx.r10.s64 + -22104;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24572
	ctx.r5.s64 = ctx.r10.s64 + -24572;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,5956
	ctx.r4.s64 = ctx.r10.s64 + 5956;
	// addi r11,r11,5580
	ctx.r11.s64 = ctx.r11.s64 + 5580;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24524
	ctx.r3.s64 = ctx.r10.s64 + -24524;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82d4f620
	ctx.lr = 0x83298E9C;
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

__attribute__((alias("__imp__sub_83298EAC"))) PPC_WEAK_FUNC(sub_83298EAC);
PPC_FUNC_IMPL(__imp__sub_83298EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298EB0"))) PPC_WEAK_FUNC(sub_83298EB0);
PPC_FUNC_IMPL(__imp__sub_83298EB0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24572
	ctx.r5.s64 = ctx.r10.s64 + -24572;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,5624
	ctx.r8.s64 = ctx.r11.s64 + 5624;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,6036
	ctx.r4.s64 = ctx.r10.s64 + 6036;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24476
	ctx.r3.s64 = ctx.r10.s64 + -24476;
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
	// li r6,144
	ctx.r6.s64 = 144;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298F10;
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

__attribute__((alias("__imp__sub_83298F20"))) PPC_WEAK_FUNC(sub_83298F20);
PPC_FUNC_IMPL(__imp__sub_83298F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dac7b0
	ctx.lr = 0x83298F38;
	sub_82DAC7B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,6072
	ctx.r10.s64 = ctx.r11.s64 + 6072;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-24428
	ctx.r11.s64 = ctx.r11.s64 + -24428;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-1080
	ctx.r10.s64 = ctx.r8.s64 + -1080;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-1056
	ctx.r10.s64 = ctx.r9.s64 + -1056;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298F7C"))) PPC_WEAK_FUNC(sub_83298F7C);
PPC_FUNC_IMPL(__imp__sub_83298F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298F80"))) PPC_WEAK_FUNC(sub_83298F80);
PPC_FUNC_IMPL(__imp__sub_83298F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-21864
	ctx.r10.s64 = ctx.r10.s64 + -21864;
	// lwz r11,-20136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20136);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298F98"))) PPC_WEAK_FUNC(sub_83298F98);
PPC_FUNC_IMPL(__imp__sub_83298F98) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r9,r11,5520
	ctx.r9.s64 = ctx.r11.s64 + 5520;
	// addi r5,r10,-23100
	ctx.r5.s64 = ctx.r10.s64 + -23100;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r9,224
	ctx.r7.s64 = ctx.r9.s64 + 224;
	// li r6,11
	ctx.r6.s64 = 11;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r4,r10,6072
	ctx.r4.s64 = ctx.r10.s64 + 6072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-21864
	ctx.r11.s64 = ctx.r11.s64 + -21864;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24412
	ctx.r3.s64 = ctx.r10.s64 + -24412;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83298FFC;
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

__attribute__((alias("__imp__sub_8329900C"))) PPC_WEAK_FUNC(sub_8329900C);
PPC_FUNC_IMPL(__imp__sub_8329900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299010"))) PPC_WEAK_FUNC(sub_83299010);
PPC_FUNC_IMPL(__imp__sub_83299010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-21584
	ctx.r10.s64 = ctx.r10.s64 + -21584;
	// lwz r11,-20136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20136);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299028"))) PPC_WEAK_FUNC(sub_83299028);
PPC_FUNC_IMPL(__imp__sub_83299028) {
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
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r8,r10,-21584
	ctx.r8.s64 = ctx.r10.s64 + -21584;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23964
	ctx.r5.s64 = ctx.r10.s64 + -23964;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,6172
	ctx.r4.s64 = ctx.r10.s64 + 6172;
	// addi r11,r11,6140
	ctx.r11.s64 = ctx.r11.s64 + 6140;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24364
	ctx.r3.s64 = ctx.r10.s64 + -24364;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d4f620
	ctx.lr = 0x8329908C;
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

__attribute__((alias("__imp__sub_8329909C"))) PPC_WEAK_FUNC(sub_8329909C);
PPC_FUNC_IMPL(__imp__sub_8329909C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832990A0"))) PPC_WEAK_FUNC(sub_832990A0);
PPC_FUNC_IMPL(__imp__sub_832990A0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,6240
	ctx.r7.s64 = ctx.r11.s64 + 6240;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,6336
	ctx.r4.s64 = ctx.r10.s64 + 6336;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-24316
	ctx.r3.s64 = ctx.r10.s64 + -24316;
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
	ctx.lr = 0x832990FC;
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

__attribute__((alias("__imp__sub_8329910C"))) PPC_WEAK_FUNC(sub_8329910C);
PPC_FUNC_IMPL(__imp__sub_8329910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299110"))) PPC_WEAK_FUNC(sub_83299110);
PPC_FUNC_IMPL(__imp__sub_83299110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-21396
	ctx.r10.s64 = ctx.r10.s64 + -21396;
	// lwz r11,-21400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21400);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299128"))) PPC_WEAK_FUNC(sub_83299128);
PPC_FUNC_IMPL(__imp__sub_83299128) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,-21396
	ctx.r8.s64 = ctx.r11.s64 + -21396;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6548
	ctx.r9.s64 = ctx.r10.s64 + 6548;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,6568
	ctx.r4.s64 = ctx.r10.s64 + 6568;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-24268
	ctx.r3.s64 = ctx.r11.s64 + -24268;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82d4f620
	ctx.lr = 0x8329918C;
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

__attribute__((alias("__imp__sub_8329919C"))) PPC_WEAK_FUNC(sub_8329919C);
PPC_FUNC_IMPL(__imp__sub_8329919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832991A0"))) PPC_WEAK_FUNC(sub_832991A0);
PPC_FUNC_IMPL(__imp__sub_832991A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db62f8
	ctx.lr = 0x832991B8;
	sub_82DB62F8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r7,-32037
	ctx.r7.s64 = -2099576832;
	// addi r10,r11,6668
	ctx.r10.s64 = ctx.r11.s64 + 6668;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r9,r11,6628
	ctx.r9.s64 = ctx.r11.s64 + 6628;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,-24220
	ctx.r11.s64 = ctx.r11.s64 + -24220;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r7,-864
	ctx.r10.s64 = ctx.r7.s64 + -864;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r8,-888
	ctx.r10.s64 = ctx.r8.s64 + -888;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299200"))) PPC_WEAK_FUNC(sub_83299200);
PPC_FUNC_IMPL(__imp__sub_83299200) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23692
	ctx.r5.s64 = ctx.r10.s64 + -23692;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,6668
	ctx.r4.s64 = ctx.r10.s64 + 6668;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-24204
	ctx.r3.s64 = ctx.r10.s64 + -24204;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82d4f620
	ctx.lr = 0x83299254;
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

__attribute__((alias("__imp__sub_83299264"))) PPC_WEAK_FUNC(sub_83299264);
PPC_FUNC_IMPL(__imp__sub_83299264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299268"))) PPC_WEAK_FUNC(sub_83299268);
PPC_FUNC_IMPL(__imp__sub_83299268) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,7040
	ctx.r7.s64 = ctx.r11.s64 + 7040;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r4,r10,7376
	ctx.r4.s64 = ctx.r10.s64 + 7376;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-24156
	ctx.r3.s64 = ctx.r10.s64 + -24156;
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
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4f620
	ctx.lr = 0x832992C4;
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

__attribute__((alias("__imp__sub_832992D4"))) PPC_WEAK_FUNC(sub_832992D4);
PPC_FUNC_IMPL(__imp__sub_832992D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832992D8"))) PPC_WEAK_FUNC(sub_832992D8);
PPC_FUNC_IMPL(__imp__sub_832992D8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,7232
	ctx.r8.s64 = ctx.r11.s64 + 7232;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,7016
	ctx.r9.s64 = ctx.r10.s64 + 7016;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r5,r10,-24316
	ctx.r5.s64 = ctx.r10.s64 + -24316;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,7408
	ctx.r4.s64 = ctx.r10.s64 + 7408;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-24108
	ctx.r3.s64 = ctx.r11.s64 + -24108;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82d4f620
	ctx.lr = 0x8329933C;
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

__attribute__((alias("__imp__sub_8329934C"))) PPC_WEAK_FUNC(sub_8329934C);
PPC_FUNC_IMPL(__imp__sub_8329934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299350"))) PPC_WEAK_FUNC(sub_83299350);
PPC_FUNC_IMPL(__imp__sub_83299350) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,7556
	ctx.r9.s64 = ctx.r10.s64 + 7556;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-21324
	ctx.r5.s64 = ctx.r10.s64 + -21324;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r10,7576
	ctx.r4.s64 = ctx.r10.s64 + 7576;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-24060
	ctx.r3.s64 = ctx.r10.s64 + -24060;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82d4f620
	ctx.lr = 0x832993A8;
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

__attribute__((alias("__imp__sub_832993B8"))) PPC_WEAK_FUNC(sub_832993B8);
PPC_FUNC_IMPL(__imp__sub_832993B8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-24268
	ctx.r5.s64 = ctx.r10.s64 + -24268;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,7648
	ctx.r8.s64 = ctx.r11.s64 + 7648;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r10,7796
	ctx.r4.s64 = ctx.r10.s64 + 7796;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24012
	ctx.r3.s64 = ctx.r10.s64 + -24012;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x83299418;
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

__attribute__((alias("__imp__sub_83299428"))) PPC_WEAK_FUNC(sub_83299428);
PPC_FUNC_IMPL(__imp__sub_83299428) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,7992
	ctx.r8.s64 = ctx.r11.s64 + 7992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,7972
	ctx.r9.s64 = ctx.r10.s64 + 7972;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-22860
	ctx.r5.s64 = ctx.r10.s64 + -22860;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,8016
	ctx.r4.s64 = ctx.r10.s64 + 8016;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r11,-23964
	ctx.r3.s64 = ctx.r11.s64 + -23964;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82d4f620
	ctx.lr = 0x8329948C;
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

__attribute__((alias("__imp__sub_8329949C"))) PPC_WEAK_FUNC(sub_8329949C);
PPC_FUNC_IMPL(__imp__sub_8329949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832994A0"))) PPC_WEAK_FUNC(sub_832994A0);
PPC_FUNC_IMPL(__imp__sub_832994A0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r11,8112
	ctx.r7.s64 = ctx.r11.s64 + 8112;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r10,8304
	ctx.r4.s64 = ctx.r10.s64 + 8304;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23916
	ctx.r3.s64 = ctx.r10.s64 + -23916;
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
	ctx.lr = 0x832994FC;
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

__attribute__((alias("__imp__sub_8329950C"))) PPC_WEAK_FUNC(sub_8329950C);
PPC_FUNC_IMPL(__imp__sub_8329950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299510"))) PPC_WEAK_FUNC(sub_83299510);
PPC_FUNC_IMPL(__imp__sub_83299510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1fe0
	ctx.lr = 0x83299528;
	sub_82DC1FE0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r8,-32037
	ctx.r8.s64 = -2099576832;
	// addi r10,r11,8328
	ctx.r10.s64 = ctx.r11.s64 + 8328;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32037
	ctx.r9.s64 = -2099576832;
	// addi r11,r11,-23868
	ctx.r11.s64 = ctx.r11.s64 + -23868;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r8,-192
	ctx.r10.s64 = ctx.r8.s64 + -192;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,-216
	ctx.r10.s64 = ctx.r9.s64 + -216;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329956C"))) PPC_WEAK_FUNC(sub_8329956C);
PPC_FUNC_IMPL(__imp__sub_8329956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299570"))) PPC_WEAK_FUNC(sub_83299570);
PPC_FUNC_IMPL(__imp__sub_83299570) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r10,-23100
	ctx.r5.s64 = ctx.r10.s64 + -23100;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,8208
	ctx.r8.s64 = ctx.r11.s64 + 8208;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r4,r10,8328
	ctx.r4.s64 = ctx.r10.s64 + 8328;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23852
	ctx.r3.s64 = ctx.r10.s64 + -23852;
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
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82d4f620
	ctx.lr = 0x832995D0;
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

__attribute__((alias("__imp__sub_832995E0"))) PPC_WEAK_FUNC(sub_832995E0);
PPC_FUNC_IMPL(__imp__sub_832995E0) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23196
	ctx.r5.s64 = ctx.r10.s64 + -23196;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8344
	ctx.r4.s64 = ctx.r10.s64 + 8344;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r10,-23804
	ctx.r3.s64 = ctx.r10.s64 + -23804;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82d4f620
	ctx.lr = 0x83299634;
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

__attribute__((alias("__imp__sub_83299644"))) PPC_WEAK_FUNC(sub_83299644);
PPC_FUNC_IMPL(__imp__sub_83299644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299648"))) PPC_WEAK_FUNC(sub_83299648);
PPC_FUNC_IMPL(__imp__sub_83299648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r10,r10,-21152
	ctx.r10.s64 = ctx.r10.s64 + -21152;
	// lwz r11,-21176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21176);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

