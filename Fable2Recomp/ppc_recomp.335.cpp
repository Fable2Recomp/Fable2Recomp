#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A261C"))) PPC_WEAK_FUNC(sub_832A261C);
PPC_FUNC_IMPL(__imp__sub_832A261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2620"))) PPC_WEAK_FUNC(sub_832A2620);
PPC_FUNC_IMPL(__imp__sub_832A2620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32412
	ctx.r3.s64 = ctx.r11.s64 + -32412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A262C"))) PPC_WEAK_FUNC(sub_832A262C);
PPC_FUNC_IMPL(__imp__sub_832A262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2630"))) PPC_WEAK_FUNC(sub_832A2630);
PPC_FUNC_IMPL(__imp__sub_832A2630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32408
	ctx.r3.s64 = ctx.r11.s64 + -32408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A263C"))) PPC_WEAK_FUNC(sub_832A263C);
PPC_FUNC_IMPL(__imp__sub_832A263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2640"))) PPC_WEAK_FUNC(sub_832A2640);
PPC_FUNC_IMPL(__imp__sub_832A2640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32404
	ctx.r3.s64 = ctx.r11.s64 + -32404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A264C"))) PPC_WEAK_FUNC(sub_832A264C);
PPC_FUNC_IMPL(__imp__sub_832A264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2650"))) PPC_WEAK_FUNC(sub_832A2650);
PPC_FUNC_IMPL(__imp__sub_832A2650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32400
	ctx.r3.s64 = ctx.r11.s64 + -32400;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A265C"))) PPC_WEAK_FUNC(sub_832A265C);
PPC_FUNC_IMPL(__imp__sub_832A265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2660"))) PPC_WEAK_FUNC(sub_832A2660);
PPC_FUNC_IMPL(__imp__sub_832A2660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32396
	ctx.r3.s64 = ctx.r11.s64 + -32396;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A266C"))) PPC_WEAK_FUNC(sub_832A266C);
PPC_FUNC_IMPL(__imp__sub_832A266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2670"))) PPC_WEAK_FUNC(sub_832A2670);
PPC_FUNC_IMPL(__imp__sub_832A2670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A267C"))) PPC_WEAK_FUNC(sub_832A267C);
PPC_FUNC_IMPL(__imp__sub_832A267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2680"))) PPC_WEAK_FUNC(sub_832A2680);
PPC_FUNC_IMPL(__imp__sub_832A2680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32388
	ctx.r3.s64 = ctx.r11.s64 + -32388;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A268C"))) PPC_WEAK_FUNC(sub_832A268C);
PPC_FUNC_IMPL(__imp__sub_832A268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2690"))) PPC_WEAK_FUNC(sub_832A2690);
PPC_FUNC_IMPL(__imp__sub_832A2690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A2698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,14156
	ctx.r11.s64 = ctx.r11.s64 + 14156;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A26B8:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A26C4;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A26C8:
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
	// bne 0x832a26c8
	if (!ctx.cr0.eq) goto loc_832A26C8;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a26b8
	if (!ctx.cr0.lt) goto loc_832A26B8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A26F8"))) PPC_WEAK_FUNC(sub_832A26F8);
PPC_FUNC_IMPL(__imp__sub_832A26F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2704"))) PPC_WEAK_FUNC(sub_832A2704);
PPC_FUNC_IMPL(__imp__sub_832A2704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2708"))) PPC_WEAK_FUNC(sub_832A2708);
PPC_FUNC_IMPL(__imp__sub_832A2708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32356
	ctx.r3.s64 = ctx.r11.s64 + -32356;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2714"))) PPC_WEAK_FUNC(sub_832A2714);
PPC_FUNC_IMPL(__imp__sub_832A2714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2718"))) PPC_WEAK_FUNC(sub_832A2718);
PPC_FUNC_IMPL(__imp__sub_832A2718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32352
	ctx.r3.s64 = ctx.r11.s64 + -32352;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2724"))) PPC_WEAK_FUNC(sub_832A2724);
PPC_FUNC_IMPL(__imp__sub_832A2724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2728"))) PPC_WEAK_FUNC(sub_832A2728);
PPC_FUNC_IMPL(__imp__sub_832A2728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32348
	ctx.r3.s64 = ctx.r11.s64 + -32348;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2734"))) PPC_WEAK_FUNC(sub_832A2734);
PPC_FUNC_IMPL(__imp__sub_832A2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2738"))) PPC_WEAK_FUNC(sub_832A2738);
PPC_FUNC_IMPL(__imp__sub_832A2738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32344
	ctx.r3.s64 = ctx.r11.s64 + -32344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2744"))) PPC_WEAK_FUNC(sub_832A2744);
PPC_FUNC_IMPL(__imp__sub_832A2744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2748"))) PPC_WEAK_FUNC(sub_832A2748);
PPC_FUNC_IMPL(__imp__sub_832A2748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32340
	ctx.r3.s64 = ctx.r11.s64 + -32340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2754"))) PPC_WEAK_FUNC(sub_832A2754);
PPC_FUNC_IMPL(__imp__sub_832A2754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2758"))) PPC_WEAK_FUNC(sub_832A2758);
PPC_FUNC_IMPL(__imp__sub_832A2758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32336
	ctx.r3.s64 = ctx.r11.s64 + -32336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2764"))) PPC_WEAK_FUNC(sub_832A2764);
PPC_FUNC_IMPL(__imp__sub_832A2764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2768"))) PPC_WEAK_FUNC(sub_832A2768);
PPC_FUNC_IMPL(__imp__sub_832A2768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32332
	ctx.r3.s64 = ctx.r11.s64 + -32332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2774"))) PPC_WEAK_FUNC(sub_832A2774);
PPC_FUNC_IMPL(__imp__sub_832A2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2778"))) PPC_WEAK_FUNC(sub_832A2778);
PPC_FUNC_IMPL(__imp__sub_832A2778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2784"))) PPC_WEAK_FUNC(sub_832A2784);
PPC_FUNC_IMPL(__imp__sub_832A2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2788"))) PPC_WEAK_FUNC(sub_832A2788);
PPC_FUNC_IMPL(__imp__sub_832A2788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32324
	ctx.r3.s64 = ctx.r11.s64 + -32324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2794"))) PPC_WEAK_FUNC(sub_832A2794);
PPC_FUNC_IMPL(__imp__sub_832A2794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2798"))) PPC_WEAK_FUNC(sub_832A2798);
PPC_FUNC_IMPL(__imp__sub_832A2798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32320
	ctx.r3.s64 = ctx.r11.s64 + -32320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27A4"))) PPC_WEAK_FUNC(sub_832A27A4);
PPC_FUNC_IMPL(__imp__sub_832A27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27A8"))) PPC_WEAK_FUNC(sub_832A27A8);
PPC_FUNC_IMPL(__imp__sub_832A27A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32316
	ctx.r3.s64 = ctx.r11.s64 + -32316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27B4"))) PPC_WEAK_FUNC(sub_832A27B4);
PPC_FUNC_IMPL(__imp__sub_832A27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27B8"))) PPC_WEAK_FUNC(sub_832A27B8);
PPC_FUNC_IMPL(__imp__sub_832A27B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32312
	ctx.r3.s64 = ctx.r11.s64 + -32312;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27C4"))) PPC_WEAK_FUNC(sub_832A27C4);
PPC_FUNC_IMPL(__imp__sub_832A27C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27C8"))) PPC_WEAK_FUNC(sub_832A27C8);
PPC_FUNC_IMPL(__imp__sub_832A27C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32308
	ctx.r3.s64 = ctx.r11.s64 + -32308;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27D4"))) PPC_WEAK_FUNC(sub_832A27D4);
PPC_FUNC_IMPL(__imp__sub_832A27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27D8"))) PPC_WEAK_FUNC(sub_832A27D8);
PPC_FUNC_IMPL(__imp__sub_832A27D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32304
	ctx.r3.s64 = ctx.r11.s64 + -32304;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27E4"))) PPC_WEAK_FUNC(sub_832A27E4);
PPC_FUNC_IMPL(__imp__sub_832A27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27E8"))) PPC_WEAK_FUNC(sub_832A27E8);
PPC_FUNC_IMPL(__imp__sub_832A27E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32300
	ctx.r3.s64 = ctx.r11.s64 + -32300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27F4"))) PPC_WEAK_FUNC(sub_832A27F4);
PPC_FUNC_IMPL(__imp__sub_832A27F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27F8"))) PPC_WEAK_FUNC(sub_832A27F8);
PPC_FUNC_IMPL(__imp__sub_832A27F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2804"))) PPC_WEAK_FUNC(sub_832A2804);
PPC_FUNC_IMPL(__imp__sub_832A2804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2808"))) PPC_WEAK_FUNC(sub_832A2808);
PPC_FUNC_IMPL(__imp__sub_832A2808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32292
	ctx.r3.s64 = ctx.r11.s64 + -32292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2814"))) PPC_WEAK_FUNC(sub_832A2814);
PPC_FUNC_IMPL(__imp__sub_832A2814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2818"))) PPC_WEAK_FUNC(sub_832A2818);
PPC_FUNC_IMPL(__imp__sub_832A2818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32288
	ctx.r3.s64 = ctx.r11.s64 + -32288;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2824"))) PPC_WEAK_FUNC(sub_832A2824);
PPC_FUNC_IMPL(__imp__sub_832A2824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2828"))) PPC_WEAK_FUNC(sub_832A2828);
PPC_FUNC_IMPL(__imp__sub_832A2828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32284
	ctx.r3.s64 = ctx.r11.s64 + -32284;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2834"))) PPC_WEAK_FUNC(sub_832A2834);
PPC_FUNC_IMPL(__imp__sub_832A2834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2838"))) PPC_WEAK_FUNC(sub_832A2838);
PPC_FUNC_IMPL(__imp__sub_832A2838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2844"))) PPC_WEAK_FUNC(sub_832A2844);
PPC_FUNC_IMPL(__imp__sub_832A2844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2848"))) PPC_WEAK_FUNC(sub_832A2848);
PPC_FUNC_IMPL(__imp__sub_832A2848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32276
	ctx.r3.s64 = ctx.r11.s64 + -32276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2854"))) PPC_WEAK_FUNC(sub_832A2854);
PPC_FUNC_IMPL(__imp__sub_832A2854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2858"))) PPC_WEAK_FUNC(sub_832A2858);
PPC_FUNC_IMPL(__imp__sub_832A2858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32272
	ctx.r3.s64 = ctx.r11.s64 + -32272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2864"))) PPC_WEAK_FUNC(sub_832A2864);
PPC_FUNC_IMPL(__imp__sub_832A2864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2868"))) PPC_WEAK_FUNC(sub_832A2868);
PPC_FUNC_IMPL(__imp__sub_832A2868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32268
	ctx.r3.s64 = ctx.r11.s64 + -32268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2874"))) PPC_WEAK_FUNC(sub_832A2874);
PPC_FUNC_IMPL(__imp__sub_832A2874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2878"))) PPC_WEAK_FUNC(sub_832A2878);
PPC_FUNC_IMPL(__imp__sub_832A2878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A2880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,41
	ctx.r30.s64 = 41;
	// addi r11,r11,-32264
	ctx.r11.s64 = ctx.r11.s64 + -32264;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,168
	ctx.r31.s64 = ctx.r11.s64 + 168;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A28A0:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A28AC;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A28B0:
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
	// bne 0x832a28b0
	if (!ctx.cr0.eq) goto loc_832A28B0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a28a0
	if (!ctx.cr0.lt) goto loc_832A28A0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A28E0"))) PPC_WEAK_FUNC(sub_832A28E0);
PPC_FUNC_IMPL(__imp__sub_832A28E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32096
	ctx.r3.s64 = ctx.r11.s64 + -32096;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A28EC"))) PPC_WEAK_FUNC(sub_832A28EC);
PPC_FUNC_IMPL(__imp__sub_832A28EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A28F0"))) PPC_WEAK_FUNC(sub_832A28F0);
PPC_FUNC_IMPL(__imp__sub_832A28F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32092
	ctx.r3.s64 = ctx.r11.s64 + -32092;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A28FC"))) PPC_WEAK_FUNC(sub_832A28FC);
PPC_FUNC_IMPL(__imp__sub_832A28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2900"))) PPC_WEAK_FUNC(sub_832A2900);
PPC_FUNC_IMPL(__imp__sub_832A2900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32088
	ctx.r3.s64 = ctx.r11.s64 + -32088;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A290C"))) PPC_WEAK_FUNC(sub_832A290C);
PPC_FUNC_IMPL(__imp__sub_832A290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2910"))) PPC_WEAK_FUNC(sub_832A2910);
PPC_FUNC_IMPL(__imp__sub_832A2910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32084
	ctx.r3.s64 = ctx.r11.s64 + -32084;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A291C"))) PPC_WEAK_FUNC(sub_832A291C);
PPC_FUNC_IMPL(__imp__sub_832A291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2920"))) PPC_WEAK_FUNC(sub_832A2920);
PPC_FUNC_IMPL(__imp__sub_832A2920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A292C"))) PPC_WEAK_FUNC(sub_832A292C);
PPC_FUNC_IMPL(__imp__sub_832A292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2930"))) PPC_WEAK_FUNC(sub_832A2930);
PPC_FUNC_IMPL(__imp__sub_832A2930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32076
	ctx.r3.s64 = ctx.r11.s64 + -32076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A293C"))) PPC_WEAK_FUNC(sub_832A293C);
PPC_FUNC_IMPL(__imp__sub_832A293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2940"))) PPC_WEAK_FUNC(sub_832A2940);
PPC_FUNC_IMPL(__imp__sub_832A2940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32072
	ctx.r3.s64 = ctx.r11.s64 + -32072;
	// b 0x82a1a908
	sub_82A1A908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A294C"))) PPC_WEAK_FUNC(sub_832A294C);
PPC_FUNC_IMPL(__imp__sub_832A294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2950"))) PPC_WEAK_FUNC(sub_832A2950);
PPC_FUNC_IMPL(__imp__sub_832A2950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32060
	ctx.r3.s64 = ctx.r11.s64 + -32060;
	// b 0x82a1a908
	sub_82A1A908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A295C"))) PPC_WEAK_FUNC(sub_832A295C);
PPC_FUNC_IMPL(__imp__sub_832A295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2960"))) PPC_WEAK_FUNC(sub_832A2960);
PPC_FUNC_IMPL(__imp__sub_832A2960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32048
	ctx.r3.s64 = ctx.r11.s64 + -32048;
	// b 0x82a1a908
	sub_82A1A908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A296C"))) PPC_WEAK_FUNC(sub_832A296C);
PPC_FUNC_IMPL(__imp__sub_832A296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2970"))) PPC_WEAK_FUNC(sub_832A2970);
PPC_FUNC_IMPL(__imp__sub_832A2970) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-32028
	ctx.r31.s64 = ctx.r11.s64 + -32028;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832a29d0
	if (ctx.cr6.eq) goto loc_832A29D0;
loc_832A29B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x832A29C0;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832a29b4
	if (!ctx.cr6.eq) goto loc_832A29B4;
loc_832A29D0:
	// bl 0x8221be68
	ctx.lr = 0x832A29D4;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A29F4"))) PPC_WEAK_FUNC(sub_832A29F4);
PPC_FUNC_IMPL(__imp__sub_832A29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A29F8"))) PPC_WEAK_FUNC(sub_832A29F8);
PPC_FUNC_IMPL(__imp__sub_832A29F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// b 0x82356698
	sub_82356698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2A04"))) PPC_WEAK_FUNC(sub_832A2A04);
PPC_FUNC_IMPL(__imp__sub_832A2A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2A08"))) PPC_WEAK_FUNC(sub_832A2A08);
PPC_FUNC_IMPL(__imp__sub_832A2A08) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-31952
	ctx.r31.s64 = ctx.r11.s64 + -31952;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832a2a68
	if (ctx.cr6.eq) goto loc_832A2A68;
loc_832A2A4C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x832A2A58;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832a2a4c
	if (!ctx.cr6.eq) goto loc_832A2A4C;
loc_832A2A68:
	// bl 0x8221be68
	ctx.lr = 0x832A2A6C;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A2A8C"))) PPC_WEAK_FUNC(sub_832A2A8C);
PPC_FUNC_IMPL(__imp__sub_832A2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2A90"))) PPC_WEAK_FUNC(sub_832A2A90);
PPC_FUNC_IMPL(__imp__sub_832A2A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31940
	ctx.r3.s64 = ctx.r11.s64 + -31940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2A9C"))) PPC_WEAK_FUNC(sub_832A2A9C);
PPC_FUNC_IMPL(__imp__sub_832A2A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2AA0"))) PPC_WEAK_FUNC(sub_832A2AA0);
PPC_FUNC_IMPL(__imp__sub_832A2AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31936
	ctx.r3.s64 = ctx.r11.s64 + -31936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2AAC"))) PPC_WEAK_FUNC(sub_832A2AAC);
PPC_FUNC_IMPL(__imp__sub_832A2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2AB0"))) PPC_WEAK_FUNC(sub_832A2AB0);
PPC_FUNC_IMPL(__imp__sub_832A2AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31932
	ctx.r3.s64 = ctx.r11.s64 + -31932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2ABC"))) PPC_WEAK_FUNC(sub_832A2ABC);
PPC_FUNC_IMPL(__imp__sub_832A2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2AC0"))) PPC_WEAK_FUNC(sub_832A2AC0);
PPC_FUNC_IMPL(__imp__sub_832A2AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31928
	ctx.r3.s64 = ctx.r11.s64 + -31928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2ACC"))) PPC_WEAK_FUNC(sub_832A2ACC);
PPC_FUNC_IMPL(__imp__sub_832A2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2AD0"))) PPC_WEAK_FUNC(sub_832A2AD0);
PPC_FUNC_IMPL(__imp__sub_832A2AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31924
	ctx.r3.s64 = ctx.r11.s64 + -31924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2ADC"))) PPC_WEAK_FUNC(sub_832A2ADC);
PPC_FUNC_IMPL(__imp__sub_832A2ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2AE0"))) PPC_WEAK_FUNC(sub_832A2AE0);
PPC_FUNC_IMPL(__imp__sub_832A2AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31920
	ctx.r3.s64 = ctx.r11.s64 + -31920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2AEC"))) PPC_WEAK_FUNC(sub_832A2AEC);
PPC_FUNC_IMPL(__imp__sub_832A2AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2AF0"))) PPC_WEAK_FUNC(sub_832A2AF0);
PPC_FUNC_IMPL(__imp__sub_832A2AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31916
	ctx.r3.s64 = ctx.r11.s64 + -31916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2AFC"))) PPC_WEAK_FUNC(sub_832A2AFC);
PPC_FUNC_IMPL(__imp__sub_832A2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B00"))) PPC_WEAK_FUNC(sub_832A2B00);
PPC_FUNC_IMPL(__imp__sub_832A2B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31912
	ctx.r3.s64 = ctx.r11.s64 + -31912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B0C"))) PPC_WEAK_FUNC(sub_832A2B0C);
PPC_FUNC_IMPL(__imp__sub_832A2B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B10"))) PPC_WEAK_FUNC(sub_832A2B10);
PPC_FUNC_IMPL(__imp__sub_832A2B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31908
	ctx.r3.s64 = ctx.r11.s64 + -31908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B1C"))) PPC_WEAK_FUNC(sub_832A2B1C);
PPC_FUNC_IMPL(__imp__sub_832A2B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B20"))) PPC_WEAK_FUNC(sub_832A2B20);
PPC_FUNC_IMPL(__imp__sub_832A2B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31904
	ctx.r3.s64 = ctx.r11.s64 + -31904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B2C"))) PPC_WEAK_FUNC(sub_832A2B2C);
PPC_FUNC_IMPL(__imp__sub_832A2B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B30"))) PPC_WEAK_FUNC(sub_832A2B30);
PPC_FUNC_IMPL(__imp__sub_832A2B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B3C"))) PPC_WEAK_FUNC(sub_832A2B3C);
PPC_FUNC_IMPL(__imp__sub_832A2B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B40"))) PPC_WEAK_FUNC(sub_832A2B40);
PPC_FUNC_IMPL(__imp__sub_832A2B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31892
	ctx.r3.s64 = ctx.r11.s64 + -31892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B4C"))) PPC_WEAK_FUNC(sub_832A2B4C);
PPC_FUNC_IMPL(__imp__sub_832A2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B50"))) PPC_WEAK_FUNC(sub_832A2B50);
PPC_FUNC_IMPL(__imp__sub_832A2B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31888
	ctx.r3.s64 = ctx.r11.s64 + -31888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B5C"))) PPC_WEAK_FUNC(sub_832A2B5C);
PPC_FUNC_IMPL(__imp__sub_832A2B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B60"))) PPC_WEAK_FUNC(sub_832A2B60);
PPC_FUNC_IMPL(__imp__sub_832A2B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31880
	ctx.r3.s64 = ctx.r11.s64 + -31880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B6C"))) PPC_WEAK_FUNC(sub_832A2B6C);
PPC_FUNC_IMPL(__imp__sub_832A2B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B70"))) PPC_WEAK_FUNC(sub_832A2B70);
PPC_FUNC_IMPL(__imp__sub_832A2B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31876
	ctx.r3.s64 = ctx.r11.s64 + -31876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B7C"))) PPC_WEAK_FUNC(sub_832A2B7C);
PPC_FUNC_IMPL(__imp__sub_832A2B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B80"))) PPC_WEAK_FUNC(sub_832A2B80);
PPC_FUNC_IMPL(__imp__sub_832A2B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31872
	ctx.r3.s64 = ctx.r11.s64 + -31872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B8C"))) PPC_WEAK_FUNC(sub_832A2B8C);
PPC_FUNC_IMPL(__imp__sub_832A2B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2B90"))) PPC_WEAK_FUNC(sub_832A2B90);
PPC_FUNC_IMPL(__imp__sub_832A2B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31836
	ctx.r3.s64 = ctx.r11.s64 + -31836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B9C"))) PPC_WEAK_FUNC(sub_832A2B9C);
PPC_FUNC_IMPL(__imp__sub_832A2B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2BA0"))) PPC_WEAK_FUNC(sub_832A2BA0);
PPC_FUNC_IMPL(__imp__sub_832A2BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31832
	ctx.r3.s64 = ctx.r11.s64 + -31832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2BAC"))) PPC_WEAK_FUNC(sub_832A2BAC);
PPC_FUNC_IMPL(__imp__sub_832A2BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2BB0"))) PPC_WEAK_FUNC(sub_832A2BB0);
PPC_FUNC_IMPL(__imp__sub_832A2BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31828
	ctx.r3.s64 = ctx.r11.s64 + -31828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2BBC"))) PPC_WEAK_FUNC(sub_832A2BBC);
PPC_FUNC_IMPL(__imp__sub_832A2BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2BC0"))) PPC_WEAK_FUNC(sub_832A2BC0);
PPC_FUNC_IMPL(__imp__sub_832A2BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2BCC"))) PPC_WEAK_FUNC(sub_832A2BCC);
PPC_FUNC_IMPL(__imp__sub_832A2BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2BD0"))) PPC_WEAK_FUNC(sub_832A2BD0);
PPC_FUNC_IMPL(__imp__sub_832A2BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2BDC"))) PPC_WEAK_FUNC(sub_832A2BDC);
PPC_FUNC_IMPL(__imp__sub_832A2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2BE0"))) PPC_WEAK_FUNC(sub_832A2BE0);
PPC_FUNC_IMPL(__imp__sub_832A2BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31780
	ctx.r3.s64 = ctx.r11.s64 + -31780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2BEC"))) PPC_WEAK_FUNC(sub_832A2BEC);
PPC_FUNC_IMPL(__imp__sub_832A2BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2BF0"))) PPC_WEAK_FUNC(sub_832A2BF0);
PPC_FUNC_IMPL(__imp__sub_832A2BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2BFC"))) PPC_WEAK_FUNC(sub_832A2BFC);
PPC_FUNC_IMPL(__imp__sub_832A2BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C00"))) PPC_WEAK_FUNC(sub_832A2C00);
PPC_FUNC_IMPL(__imp__sub_832A2C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31772
	ctx.r3.s64 = ctx.r11.s64 + -31772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2C0C"))) PPC_WEAK_FUNC(sub_832A2C0C);
PPC_FUNC_IMPL(__imp__sub_832A2C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C10"))) PPC_WEAK_FUNC(sub_832A2C10);
PPC_FUNC_IMPL(__imp__sub_832A2C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31768
	ctx.r3.s64 = ctx.r11.s64 + -31768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2C1C"))) PPC_WEAK_FUNC(sub_832A2C1C);
PPC_FUNC_IMPL(__imp__sub_832A2C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C20"))) PPC_WEAK_FUNC(sub_832A2C20);
PPC_FUNC_IMPL(__imp__sub_832A2C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31764
	ctx.r3.s64 = ctx.r11.s64 + -31764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2C2C"))) PPC_WEAK_FUNC(sub_832A2C2C);
PPC_FUNC_IMPL(__imp__sub_832A2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C30"))) PPC_WEAK_FUNC(sub_832A2C30);
PPC_FUNC_IMPL(__imp__sub_832A2C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31760
	ctx.r3.s64 = ctx.r11.s64 + -31760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2C3C"))) PPC_WEAK_FUNC(sub_832A2C3C);
PPC_FUNC_IMPL(__imp__sub_832A2C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C40"))) PPC_WEAK_FUNC(sub_832A2C40);
PPC_FUNC_IMPL(__imp__sub_832A2C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31756
	ctx.r3.s64 = ctx.r11.s64 + -31756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2C4C"))) PPC_WEAK_FUNC(sub_832A2C4C);
PPC_FUNC_IMPL(__imp__sub_832A2C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C50"))) PPC_WEAK_FUNC(sub_832A2C50);
PPC_FUNC_IMPL(__imp__sub_832A2C50) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,12896
	ctx.r31.s64 = ctx.r11.s64 + 12896;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824f9118
	ctx.lr = 0x832A2C70;
	sub_824F9118(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8221be68
	ctx.lr = 0x832A2C78;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x832A2C88;
	sub_82214F08(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82214f08
	ctx.lr = 0x832A2C90;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_832A2CA4"))) PPC_WEAK_FUNC(sub_832A2CA4);
PPC_FUNC_IMPL(__imp__sub_832A2CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2CA8"))) PPC_WEAK_FUNC(sub_832A2CA8);
PPC_FUNC_IMPL(__imp__sub_832A2CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31752
	ctx.r3.s64 = ctx.r11.s64 + -31752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2CB4"))) PPC_WEAK_FUNC(sub_832A2CB4);
PPC_FUNC_IMPL(__imp__sub_832A2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2CB8"))) PPC_WEAK_FUNC(sub_832A2CB8);
PPC_FUNC_IMPL(__imp__sub_832A2CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A2CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A2CE0:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A2CEC;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A2CF0:
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
	// bne 0x832a2cf0
	if (!ctx.cr0.eq) goto loc_832A2CF0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a2ce0
	if (!ctx.cr0.lt) goto loc_832A2CE0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D20"))) PPC_WEAK_FUNC(sub_832A2D20);
PPC_FUNC_IMPL(__imp__sub_832A2D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A2D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-31600
	ctx.r11.s64 = ctx.r11.s64 + -31600;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A2D48:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A2D54;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A2D58:
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
	// bne 0x832a2d58
	if (!ctx.cr0.eq) goto loc_832A2D58;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a2d48
	if (!ctx.cr0.lt) goto loc_832A2D48;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D88"))) PPC_WEAK_FUNC(sub_832A2D88);
PPC_FUNC_IMPL(__imp__sub_832A2D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D94"))) PPC_WEAK_FUNC(sub_832A2D94);
PPC_FUNC_IMPL(__imp__sub_832A2D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2D98"))) PPC_WEAK_FUNC(sub_832A2D98);
PPC_FUNC_IMPL(__imp__sub_832A2D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31532
	ctx.r3.s64 = ctx.r11.s64 + -31532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DA4"))) PPC_WEAK_FUNC(sub_832A2DA4);
PPC_FUNC_IMPL(__imp__sub_832A2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DA8"))) PPC_WEAK_FUNC(sub_832A2DA8);
PPC_FUNC_IMPL(__imp__sub_832A2DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DB4"))) PPC_WEAK_FUNC(sub_832A2DB4);
PPC_FUNC_IMPL(__imp__sub_832A2DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DB8"))) PPC_WEAK_FUNC(sub_832A2DB8);
PPC_FUNC_IMPL(__imp__sub_832A2DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31524
	ctx.r3.s64 = ctx.r11.s64 + -31524;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DC4"))) PPC_WEAK_FUNC(sub_832A2DC4);
PPC_FUNC_IMPL(__imp__sub_832A2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DC8"))) PPC_WEAK_FUNC(sub_832A2DC8);
PPC_FUNC_IMPL(__imp__sub_832A2DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DD4"))) PPC_WEAK_FUNC(sub_832A2DD4);
PPC_FUNC_IMPL(__imp__sub_832A2DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DD8"))) PPC_WEAK_FUNC(sub_832A2DD8);
PPC_FUNC_IMPL(__imp__sub_832A2DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31516
	ctx.r3.s64 = ctx.r11.s64 + -31516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DE4"))) PPC_WEAK_FUNC(sub_832A2DE4);
PPC_FUNC_IMPL(__imp__sub_832A2DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DE8"))) PPC_WEAK_FUNC(sub_832A2DE8);
PPC_FUNC_IMPL(__imp__sub_832A2DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DF4"))) PPC_WEAK_FUNC(sub_832A2DF4);
PPC_FUNC_IMPL(__imp__sub_832A2DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DF8"))) PPC_WEAK_FUNC(sub_832A2DF8);
PPC_FUNC_IMPL(__imp__sub_832A2DF8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82874660
	ctx.lr = 0x832A2E18;
	sub_82874660(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A2E20;
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

__attribute__((alias("__imp__sub_832A2E3C"))) PPC_WEAK_FUNC(sub_832A2E3C);
PPC_FUNC_IMPL(__imp__sub_832A2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E40"))) PPC_WEAK_FUNC(sub_832A2E40);
PPC_FUNC_IMPL(__imp__sub_832A2E40) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r10,-25084
	ctx.r31.s64 = ctx.r10.s64 + -25084;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-25084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25084, ctx.r11.u32);
	// bl 0x821940c8
	ctx.lr = 0x832A2E6C;
	sub_821940C8(ctx, base);
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

__attribute__((alias("__imp__sub_832A2E88"))) PPC_WEAK_FUNC(sub_832A2E88);
PPC_FUNC_IMPL(__imp__sub_832A2E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31428
	ctx.r3.s64 = ctx.r11.s64 + -31428;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2E94"))) PPC_WEAK_FUNC(sub_832A2E94);
PPC_FUNC_IMPL(__imp__sub_832A2E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E98"))) PPC_WEAK_FUNC(sub_832A2E98);
PPC_FUNC_IMPL(__imp__sub_832A2E98) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,-31420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a2ef8
	if (ctx.cr6.eq) goto loc_832A2EF8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832A2EBC:
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
	// bne 0x832a2ebc
	if (!ctx.cr0.eq) goto loc_832A2EBC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832a2ef0
	if (!ctx.cr6.eq) goto loc_832A2EF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A2EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832A2EF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31420, ctx.r11.u32);
loc_832A2EF8:
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

__attribute__((alias("__imp__sub_832A2F0C"))) PPC_WEAK_FUNC(sub_832A2F0C);
PPC_FUNC_IMPL(__imp__sub_832A2F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F10"))) PPC_WEAK_FUNC(sub_832A2F10);
PPC_FUNC_IMPL(__imp__sub_832A2F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31416
	ctx.r3.s64 = ctx.r11.s64 + -31416;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F1C"))) PPC_WEAK_FUNC(sub_832A2F1C);
PPC_FUNC_IMPL(__imp__sub_832A2F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F20"))) PPC_WEAK_FUNC(sub_832A2F20);
PPC_FUNC_IMPL(__imp__sub_832A2F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31412
	ctx.r3.s64 = ctx.r11.s64 + -31412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F2C"))) PPC_WEAK_FUNC(sub_832A2F2C);
PPC_FUNC_IMPL(__imp__sub_832A2F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F30"))) PPC_WEAK_FUNC(sub_832A2F30);
PPC_FUNC_IMPL(__imp__sub_832A2F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31408
	ctx.r3.s64 = ctx.r11.s64 + -31408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F3C"))) PPC_WEAK_FUNC(sub_832A2F3C);
PPC_FUNC_IMPL(__imp__sub_832A2F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F40"))) PPC_WEAK_FUNC(sub_832A2F40);
PPC_FUNC_IMPL(__imp__sub_832A2F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31404
	ctx.r3.s64 = ctx.r11.s64 + -31404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F4C"))) PPC_WEAK_FUNC(sub_832A2F4C);
PPC_FUNC_IMPL(__imp__sub_832A2F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F50"))) PPC_WEAK_FUNC(sub_832A2F50);
PPC_FUNC_IMPL(__imp__sub_832A2F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// b 0x8246d1f0
	sub_8246D1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F5C"))) PPC_WEAK_FUNC(sub_832A2F5C);
PPC_FUNC_IMPL(__imp__sub_832A2F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F60"))) PPC_WEAK_FUNC(sub_832A2F60);
PPC_FUNC_IMPL(__imp__sub_832A2F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31384
	ctx.r3.s64 = ctx.r11.s64 + -31384;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F6C"))) PPC_WEAK_FUNC(sub_832A2F6C);
PPC_FUNC_IMPL(__imp__sub_832A2F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F70"))) PPC_WEAK_FUNC(sub_832A2F70);
PPC_FUNC_IMPL(__imp__sub_832A2F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31380
	ctx.r3.s64 = ctx.r11.s64 + -31380;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F7C"))) PPC_WEAK_FUNC(sub_832A2F7C);
PPC_FUNC_IMPL(__imp__sub_832A2F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F80"))) PPC_WEAK_FUNC(sub_832A2F80);
PPC_FUNC_IMPL(__imp__sub_832A2F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31376
	ctx.r3.s64 = ctx.r11.s64 + -31376;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F8C"))) PPC_WEAK_FUNC(sub_832A2F8C);
PPC_FUNC_IMPL(__imp__sub_832A2F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2F90"))) PPC_WEAK_FUNC(sub_832A2F90);
PPC_FUNC_IMPL(__imp__sub_832A2F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31372
	ctx.r3.s64 = ctx.r11.s64 + -31372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2F9C"))) PPC_WEAK_FUNC(sub_832A2F9C);
PPC_FUNC_IMPL(__imp__sub_832A2F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FA0"))) PPC_WEAK_FUNC(sub_832A2FA0);
PPC_FUNC_IMPL(__imp__sub_832A2FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31368
	ctx.r3.s64 = ctx.r11.s64 + -31368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FAC"))) PPC_WEAK_FUNC(sub_832A2FAC);
PPC_FUNC_IMPL(__imp__sub_832A2FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FB0"))) PPC_WEAK_FUNC(sub_832A2FB0);
PPC_FUNC_IMPL(__imp__sub_832A2FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31364
	ctx.r3.s64 = ctx.r11.s64 + -31364;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FBC"))) PPC_WEAK_FUNC(sub_832A2FBC);
PPC_FUNC_IMPL(__imp__sub_832A2FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FC0"))) PPC_WEAK_FUNC(sub_832A2FC0);
PPC_FUNC_IMPL(__imp__sub_832A2FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14452
	ctx.r3.s64 = ctx.r11.s64 + 14452;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FCC"))) PPC_WEAK_FUNC(sub_832A2FCC);
PPC_FUNC_IMPL(__imp__sub_832A2FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FD0"))) PPC_WEAK_FUNC(sub_832A2FD0);
PPC_FUNC_IMPL(__imp__sub_832A2FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31360
	ctx.r3.s64 = ctx.r11.s64 + -31360;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FDC"))) PPC_WEAK_FUNC(sub_832A2FDC);
PPC_FUNC_IMPL(__imp__sub_832A2FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FE0"))) PPC_WEAK_FUNC(sub_832A2FE0);
PPC_FUNC_IMPL(__imp__sub_832A2FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31356
	ctx.r3.s64 = ctx.r11.s64 + -31356;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FEC"))) PPC_WEAK_FUNC(sub_832A2FEC);
PPC_FUNC_IMPL(__imp__sub_832A2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FF0"))) PPC_WEAK_FUNC(sub_832A2FF0);
PPC_FUNC_IMPL(__imp__sub_832A2FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31352
	ctx.r3.s64 = ctx.r11.s64 + -31352;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FFC"))) PPC_WEAK_FUNC(sub_832A2FFC);
PPC_FUNC_IMPL(__imp__sub_832A2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3000"))) PPC_WEAK_FUNC(sub_832A3000);
PPC_FUNC_IMPL(__imp__sub_832A3000) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r10,-25028
	ctx.r31.s64 = ctx.r10.s64 + -25028;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-25028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25028, ctx.r11.u32);
	// bl 0x821940c8
	ctx.lr = 0x832A302C;
	sub_821940C8(ctx, base);
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

__attribute__((alias("__imp__sub_832A3048"))) PPC_WEAK_FUNC(sub_832A3048);
PPC_FUNC_IMPL(__imp__sub_832A3048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31336
	ctx.r3.s64 = ctx.r11.s64 + -31336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3054"))) PPC_WEAK_FUNC(sub_832A3054);
PPC_FUNC_IMPL(__imp__sub_832A3054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3058"))) PPC_WEAK_FUNC(sub_832A3058);
PPC_FUNC_IMPL(__imp__sub_832A3058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31332
	ctx.r3.s64 = ctx.r11.s64 + -31332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3064"))) PPC_WEAK_FUNC(sub_832A3064);
PPC_FUNC_IMPL(__imp__sub_832A3064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3068"))) PPC_WEAK_FUNC(sub_832A3068);
PPC_FUNC_IMPL(__imp__sub_832A3068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31328
	ctx.r3.s64 = ctx.r11.s64 + -31328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3074"))) PPC_WEAK_FUNC(sub_832A3074);
PPC_FUNC_IMPL(__imp__sub_832A3074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3078"))) PPC_WEAK_FUNC(sub_832A3078);
PPC_FUNC_IMPL(__imp__sub_832A3078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31324
	ctx.r3.s64 = ctx.r11.s64 + -31324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3084"))) PPC_WEAK_FUNC(sub_832A3084);
PPC_FUNC_IMPL(__imp__sub_832A3084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3088"))) PPC_WEAK_FUNC(sub_832A3088);
PPC_FUNC_IMPL(__imp__sub_832A3088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31320
	ctx.r3.s64 = ctx.r11.s64 + -31320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3094"))) PPC_WEAK_FUNC(sub_832A3094);
PPC_FUNC_IMPL(__imp__sub_832A3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3098"))) PPC_WEAK_FUNC(sub_832A3098);
PPC_FUNC_IMPL(__imp__sub_832A3098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31316
	ctx.r3.s64 = ctx.r11.s64 + -31316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30A4"))) PPC_WEAK_FUNC(sub_832A30A4);
PPC_FUNC_IMPL(__imp__sub_832A30A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30A8"))) PPC_WEAK_FUNC(sub_832A30A8);
PPC_FUNC_IMPL(__imp__sub_832A30A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31312
	ctx.r3.s64 = ctx.r11.s64 + -31312;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30B4"))) PPC_WEAK_FUNC(sub_832A30B4);
PPC_FUNC_IMPL(__imp__sub_832A30B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30B8"))) PPC_WEAK_FUNC(sub_832A30B8);
PPC_FUNC_IMPL(__imp__sub_832A30B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31308
	ctx.r3.s64 = ctx.r11.s64 + -31308;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30C4"))) PPC_WEAK_FUNC(sub_832A30C4);
PPC_FUNC_IMPL(__imp__sub_832A30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30C8"))) PPC_WEAK_FUNC(sub_832A30C8);
PPC_FUNC_IMPL(__imp__sub_832A30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31304
	ctx.r3.s64 = ctx.r11.s64 + -31304;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30D4"))) PPC_WEAK_FUNC(sub_832A30D4);
PPC_FUNC_IMPL(__imp__sub_832A30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30D8"))) PPC_WEAK_FUNC(sub_832A30D8);
PPC_FUNC_IMPL(__imp__sub_832A30D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31300
	ctx.r3.s64 = ctx.r11.s64 + -31300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30E4"))) PPC_WEAK_FUNC(sub_832A30E4);
PPC_FUNC_IMPL(__imp__sub_832A30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30E8"))) PPC_WEAK_FUNC(sub_832A30E8);
PPC_FUNC_IMPL(__imp__sub_832A30E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31296
	ctx.r3.s64 = ctx.r11.s64 + -31296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30F4"))) PPC_WEAK_FUNC(sub_832A30F4);
PPC_FUNC_IMPL(__imp__sub_832A30F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30F8"))) PPC_WEAK_FUNC(sub_832A30F8);
PPC_FUNC_IMPL(__imp__sub_832A30F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31292
	ctx.r3.s64 = ctx.r11.s64 + -31292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3104"))) PPC_WEAK_FUNC(sub_832A3104);
PPC_FUNC_IMPL(__imp__sub_832A3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3108"))) PPC_WEAK_FUNC(sub_832A3108);
PPC_FUNC_IMPL(__imp__sub_832A3108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3114"))) PPC_WEAK_FUNC(sub_832A3114);
PPC_FUNC_IMPL(__imp__sub_832A3114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3118"))) PPC_WEAK_FUNC(sub_832A3118);
PPC_FUNC_IMPL(__imp__sub_832A3118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31284
	ctx.r3.s64 = ctx.r11.s64 + -31284;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3124"))) PPC_WEAK_FUNC(sub_832A3124);
PPC_FUNC_IMPL(__imp__sub_832A3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3128"))) PPC_WEAK_FUNC(sub_832A3128);
PPC_FUNC_IMPL(__imp__sub_832A3128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3134"))) PPC_WEAK_FUNC(sub_832A3134);
PPC_FUNC_IMPL(__imp__sub_832A3134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3138"))) PPC_WEAK_FUNC(sub_832A3138);
PPC_FUNC_IMPL(__imp__sub_832A3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31276
	ctx.r3.s64 = ctx.r11.s64 + -31276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3144"))) PPC_WEAK_FUNC(sub_832A3144);
PPC_FUNC_IMPL(__imp__sub_832A3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3148"))) PPC_WEAK_FUNC(sub_832A3148);
PPC_FUNC_IMPL(__imp__sub_832A3148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3154"))) PPC_WEAK_FUNC(sub_832A3154);
PPC_FUNC_IMPL(__imp__sub_832A3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3158"))) PPC_WEAK_FUNC(sub_832A3158);
PPC_FUNC_IMPL(__imp__sub_832A3158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31268
	ctx.r3.s64 = ctx.r11.s64 + -31268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3164"))) PPC_WEAK_FUNC(sub_832A3164);
PPC_FUNC_IMPL(__imp__sub_832A3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3168"))) PPC_WEAK_FUNC(sub_832A3168);
PPC_FUNC_IMPL(__imp__sub_832A3168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3174"))) PPC_WEAK_FUNC(sub_832A3174);
PPC_FUNC_IMPL(__imp__sub_832A3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3178"))) PPC_WEAK_FUNC(sub_832A3178);
PPC_FUNC_IMPL(__imp__sub_832A3178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31260
	ctx.r3.s64 = ctx.r11.s64 + -31260;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3184"))) PPC_WEAK_FUNC(sub_832A3184);
PPC_FUNC_IMPL(__imp__sub_832A3184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3188"))) PPC_WEAK_FUNC(sub_832A3188);
PPC_FUNC_IMPL(__imp__sub_832A3188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31256
	ctx.r3.s64 = ctx.r11.s64 + -31256;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3194"))) PPC_WEAK_FUNC(sub_832A3194);
PPC_FUNC_IMPL(__imp__sub_832A3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3198"))) PPC_WEAK_FUNC(sub_832A3198);
PPC_FUNC_IMPL(__imp__sub_832A3198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31252
	ctx.r3.s64 = ctx.r11.s64 + -31252;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31A4"))) PPC_WEAK_FUNC(sub_832A31A4);
PPC_FUNC_IMPL(__imp__sub_832A31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31A8"))) PPC_WEAK_FUNC(sub_832A31A8);
PPC_FUNC_IMPL(__imp__sub_832A31A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31B4"))) PPC_WEAK_FUNC(sub_832A31B4);
PPC_FUNC_IMPL(__imp__sub_832A31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31B8"))) PPC_WEAK_FUNC(sub_832A31B8);
PPC_FUNC_IMPL(__imp__sub_832A31B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31244
	ctx.r3.s64 = ctx.r11.s64 + -31244;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31C4"))) PPC_WEAK_FUNC(sub_832A31C4);
PPC_FUNC_IMPL(__imp__sub_832A31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31C8"))) PPC_WEAK_FUNC(sub_832A31C8);
PPC_FUNC_IMPL(__imp__sub_832A31C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31D4"))) PPC_WEAK_FUNC(sub_832A31D4);
PPC_FUNC_IMPL(__imp__sub_832A31D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31D8"))) PPC_WEAK_FUNC(sub_832A31D8);
PPC_FUNC_IMPL(__imp__sub_832A31D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31236
	ctx.r3.s64 = ctx.r11.s64 + -31236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31E4"))) PPC_WEAK_FUNC(sub_832A31E4);
PPC_FUNC_IMPL(__imp__sub_832A31E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31E8"))) PPC_WEAK_FUNC(sub_832A31E8);
PPC_FUNC_IMPL(__imp__sub_832A31E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

