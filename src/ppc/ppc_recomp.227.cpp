#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A1558"))) PPC_WEAK_FUNC(sub_832A1558);
PPC_FUNC_IMPL(__imp__sub_832A1558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r30,7
	r30.s64 = 7;
	// addi r11,r11,31360
	r11.s64 = r11.s64 + 31360;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,32
	r31.s64 = r11.s64 + 32;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A1580:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A1590:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a1590
	if (!cr0.eq) goto loc_832A1590;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a1580
	if (!cr0.lt) goto loc_832A1580;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A15C0"))) PPC_WEAK_FUNC(sub_832A15C0);
PPC_FUNC_IMPL(__imp__sub_832A15C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31392
	ctx.r3.s64 = r11.s64 + 31392;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A15D0"))) PPC_WEAK_FUNC(sub_832A15D0);
PPC_FUNC_IMPL(__imp__sub_832A15D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31396
	ctx.r3.s64 = r11.s64 + 31396;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A15E0"))) PPC_WEAK_FUNC(sub_832A15E0);
PPC_FUNC_IMPL(__imp__sub_832A15E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31400
	ctx.r3.s64 = r11.s64 + 31400;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A15F0"))) PPC_WEAK_FUNC(sub_832A15F0);
PPC_FUNC_IMPL(__imp__sub_832A15F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31404
	ctx.r3.s64 = r11.s64 + 31404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1600"))) PPC_WEAK_FUNC(sub_832A1600);
PPC_FUNC_IMPL(__imp__sub_832A1600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31408
	ctx.r3.s64 = r11.s64 + 31408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1610"))) PPC_WEAK_FUNC(sub_832A1610);
PPC_FUNC_IMPL(__imp__sub_832A1610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31412
	ctx.r3.s64 = r11.s64 + 31412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1620"))) PPC_WEAK_FUNC(sub_832A1620);
PPC_FUNC_IMPL(__imp__sub_832A1620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31416
	ctx.r3.s64 = r11.s64 + 31416;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1630"))) PPC_WEAK_FUNC(sub_832A1630);
PPC_FUNC_IMPL(__imp__sub_832A1630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31420
	ctx.r3.s64 = r11.s64 + 31420;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1640"))) PPC_WEAK_FUNC(sub_832A1640);
PPC_FUNC_IMPL(__imp__sub_832A1640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31424
	ctx.r3.s64 = r11.s64 + 31424;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1650"))) PPC_WEAK_FUNC(sub_832A1650);
PPC_FUNC_IMPL(__imp__sub_832A1650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31428
	ctx.r3.s64 = r11.s64 + 31428;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1660"))) PPC_WEAK_FUNC(sub_832A1660);
PPC_FUNC_IMPL(__imp__sub_832A1660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31432
	ctx.r3.s64 = r11.s64 + 31432;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1670"))) PPC_WEAK_FUNC(sub_832A1670);
PPC_FUNC_IMPL(__imp__sub_832A1670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31436
	ctx.r3.s64 = r11.s64 + 31436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1680"))) PPC_WEAK_FUNC(sub_832A1680);
PPC_FUNC_IMPL(__imp__sub_832A1680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31440
	ctx.r3.s64 = r11.s64 + 31440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1690"))) PPC_WEAK_FUNC(sub_832A1690);
PPC_FUNC_IMPL(__imp__sub_832A1690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31444
	ctx.r3.s64 = r11.s64 + 31444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A16A0"))) PPC_WEAK_FUNC(sub_832A16A0);
PPC_FUNC_IMPL(__imp__sub_832A16A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31448
	ctx.r3.s64 = r11.s64 + 31448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A16B0"))) PPC_WEAK_FUNC(sub_832A16B0);
PPC_FUNC_IMPL(__imp__sub_832A16B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31452
	ctx.r3.s64 = r11.s64 + 31452;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A16C0"))) PPC_WEAK_FUNC(sub_832A16C0);
PPC_FUNC_IMPL(__imp__sub_832A16C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31456
	ctx.r3.s64 = r11.s64 + 31456;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A16D0"))) PPC_WEAK_FUNC(sub_832A16D0);
PPC_FUNC_IMPL(__imp__sub_832A16D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31460
	ctx.r3.s64 = r11.s64 + 31460;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A16E0"))) PPC_WEAK_FUNC(sub_832A16E0);
PPC_FUNC_IMPL(__imp__sub_832A16E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31464
	ctx.r3.s64 = r11.s64 + 31464;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A16F0"))) PPC_WEAK_FUNC(sub_832A16F0);
PPC_FUNC_IMPL(__imp__sub_832A16F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31468
	ctx.r3.s64 = r11.s64 + 31468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1700"))) PPC_WEAK_FUNC(sub_832A1700);
PPC_FUNC_IMPL(__imp__sub_832A1700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31472
	ctx.r3.s64 = r11.s64 + 31472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1710"))) PPC_WEAK_FUNC(sub_832A1710);
PPC_FUNC_IMPL(__imp__sub_832A1710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31476
	ctx.r3.s64 = r11.s64 + 31476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1720"))) PPC_WEAK_FUNC(sub_832A1720);
PPC_FUNC_IMPL(__imp__sub_832A1720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31480
	ctx.r3.s64 = r11.s64 + 31480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1730"))) PPC_WEAK_FUNC(sub_832A1730);
PPC_FUNC_IMPL(__imp__sub_832A1730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31484
	ctx.r3.s64 = r11.s64 + 31484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1740"))) PPC_WEAK_FUNC(sub_832A1740);
PPC_FUNC_IMPL(__imp__sub_832A1740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31488
	ctx.r3.s64 = r11.s64 + 31488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1750"))) PPC_WEAK_FUNC(sub_832A1750);
PPC_FUNC_IMPL(__imp__sub_832A1750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31492
	ctx.r3.s64 = r11.s64 + 31492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1760"))) PPC_WEAK_FUNC(sub_832A1760);
PPC_FUNC_IMPL(__imp__sub_832A1760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31496
	ctx.r3.s64 = r11.s64 + 31496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1770"))) PPC_WEAK_FUNC(sub_832A1770);
PPC_FUNC_IMPL(__imp__sub_832A1770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31500
	ctx.r3.s64 = r11.s64 + 31500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1780"))) PPC_WEAK_FUNC(sub_832A1780);
PPC_FUNC_IMPL(__imp__sub_832A1780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31504
	ctx.r3.s64 = r11.s64 + 31504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1790"))) PPC_WEAK_FUNC(sub_832A1790);
PPC_FUNC_IMPL(__imp__sub_832A1790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31592
	ctx.r3.s64 = r11.s64 + 31592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A17A0"))) PPC_WEAK_FUNC(sub_832A17A0);
PPC_FUNC_IMPL(__imp__sub_832A17A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31596
	ctx.r3.s64 = r11.s64 + 31596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A17B0"))) PPC_WEAK_FUNC(sub_832A17B0);
PPC_FUNC_IMPL(__imp__sub_832A17B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31600
	ctx.r3.s64 = r11.s64 + 31600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A17C0"))) PPC_WEAK_FUNC(sub_832A17C0);
PPC_FUNC_IMPL(__imp__sub_832A17C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31604
	ctx.r3.s64 = r11.s64 + 31604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A17D0"))) PPC_WEAK_FUNC(sub_832A17D0);
PPC_FUNC_IMPL(__imp__sub_832A17D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31608
	ctx.r3.s64 = r11.s64 + 31608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A17E0"))) PPC_WEAK_FUNC(sub_832A17E0);
PPC_FUNC_IMPL(__imp__sub_832A17E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31612
	ctx.r3.s64 = r11.s64 + 31612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A17F0"))) PPC_WEAK_FUNC(sub_832A17F0);
PPC_FUNC_IMPL(__imp__sub_832A17F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31700
	ctx.r3.s64 = r11.s64 + 31700;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1800"))) PPC_WEAK_FUNC(sub_832A1800);
PPC_FUNC_IMPL(__imp__sub_832A1800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31704
	ctx.r3.s64 = r11.s64 + 31704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1810"))) PPC_WEAK_FUNC(sub_832A1810);
PPC_FUNC_IMPL(__imp__sub_832A1810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31708
	ctx.r3.s64 = r11.s64 + 31708;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1820"))) PPC_WEAK_FUNC(sub_832A1820);
PPC_FUNC_IMPL(__imp__sub_832A1820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31712
	ctx.r3.s64 = r11.s64 + 31712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1830"))) PPC_WEAK_FUNC(sub_832A1830);
PPC_FUNC_IMPL(__imp__sub_832A1830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31716
	ctx.r3.s64 = r11.s64 + 31716;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1840"))) PPC_WEAK_FUNC(sub_832A1840);
PPC_FUNC_IMPL(__imp__sub_832A1840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31720
	ctx.r3.s64 = r11.s64 + 31720;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1850"))) PPC_WEAK_FUNC(sub_832A1850);
PPC_FUNC_IMPL(__imp__sub_832A1850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31724
	ctx.r3.s64 = r11.s64 + 31724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1860"))) PPC_WEAK_FUNC(sub_832A1860);
PPC_FUNC_IMPL(__imp__sub_832A1860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31728
	ctx.r3.s64 = r11.s64 + 31728;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1870"))) PPC_WEAK_FUNC(sub_832A1870);
PPC_FUNC_IMPL(__imp__sub_832A1870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31732
	ctx.r3.s64 = r11.s64 + 31732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1880"))) PPC_WEAK_FUNC(sub_832A1880);
PPC_FUNC_IMPL(__imp__sub_832A1880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31736
	ctx.r3.s64 = r11.s64 + 31736;
	// b 0x821c6868
	sub_821C6868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1890"))) PPC_WEAK_FUNC(sub_832A1890);
PPC_FUNC_IMPL(__imp__sub_832A1890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31740
	ctx.r3.s64 = r11.s64 + 31740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A18A0"))) PPC_WEAK_FUNC(sub_832A18A0);
PPC_FUNC_IMPL(__imp__sub_832A18A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31744
	ctx.r3.s64 = r11.s64 + 31744;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A18B0"))) PPC_WEAK_FUNC(sub_832A18B0);
PPC_FUNC_IMPL(__imp__sub_832A18B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31748
	ctx.r3.s64 = r11.s64 + 31748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A18C0"))) PPC_WEAK_FUNC(sub_832A18C0);
PPC_FUNC_IMPL(__imp__sub_832A18C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31752
	ctx.r3.s64 = r11.s64 + 31752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A18D0"))) PPC_WEAK_FUNC(sub_832A18D0);
PPC_FUNC_IMPL(__imp__sub_832A18D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31756
	ctx.r3.s64 = r11.s64 + 31756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A18E0"))) PPC_WEAK_FUNC(sub_832A18E0);
PPC_FUNC_IMPL(__imp__sub_832A18E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31760
	ctx.r3.s64 = r11.s64 + 31760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A18F0"))) PPC_WEAK_FUNC(sub_832A18F0);
PPC_FUNC_IMPL(__imp__sub_832A18F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31764
	ctx.r3.s64 = r11.s64 + 31764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1900"))) PPC_WEAK_FUNC(sub_832A1900);
PPC_FUNC_IMPL(__imp__sub_832A1900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31852
	ctx.r3.s64 = r11.s64 + 31852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1910"))) PPC_WEAK_FUNC(sub_832A1910);
PPC_FUNC_IMPL(__imp__sub_832A1910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31856
	ctx.r3.s64 = r11.s64 + 31856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1920"))) PPC_WEAK_FUNC(sub_832A1920);
PPC_FUNC_IMPL(__imp__sub_832A1920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31860
	ctx.r3.s64 = r11.s64 + 31860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1930"))) PPC_WEAK_FUNC(sub_832A1930);
PPC_FUNC_IMPL(__imp__sub_832A1930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31864
	ctx.r3.s64 = r11.s64 + 31864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1940"))) PPC_WEAK_FUNC(sub_832A1940);
PPC_FUNC_IMPL(__imp__sub_832A1940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31868
	ctx.r3.s64 = r11.s64 + 31868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1950"))) PPC_WEAK_FUNC(sub_832A1950);
PPC_FUNC_IMPL(__imp__sub_832A1950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31872
	ctx.r3.s64 = r11.s64 + 31872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1960"))) PPC_WEAK_FUNC(sub_832A1960);
PPC_FUNC_IMPL(__imp__sub_832A1960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31876
	ctx.r3.s64 = r11.s64 + 31876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1970"))) PPC_WEAK_FUNC(sub_832A1970);
PPC_FUNC_IMPL(__imp__sub_832A1970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31880
	ctx.r3.s64 = r11.s64 + 31880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1980"))) PPC_WEAK_FUNC(sub_832A1980);
PPC_FUNC_IMPL(__imp__sub_832A1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31884
	ctx.r3.s64 = r11.s64 + 31884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1990"))) PPC_WEAK_FUNC(sub_832A1990);
PPC_FUNC_IMPL(__imp__sub_832A1990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31888
	ctx.r3.s64 = r11.s64 + 31888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A19A0"))) PPC_WEAK_FUNC(sub_832A19A0);
PPC_FUNC_IMPL(__imp__sub_832A19A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31892
	ctx.r3.s64 = r11.s64 + 31892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A19B0"))) PPC_WEAK_FUNC(sub_832A19B0);
PPC_FUNC_IMPL(__imp__sub_832A19B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31896
	ctx.r3.s64 = r11.s64 + 31896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A19C0"))) PPC_WEAK_FUNC(sub_832A19C0);
PPC_FUNC_IMPL(__imp__sub_832A19C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31900
	ctx.r3.s64 = r11.s64 + 31900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A19D0"))) PPC_WEAK_FUNC(sub_832A19D0);
PPC_FUNC_IMPL(__imp__sub_832A19D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31904
	ctx.r3.s64 = r11.s64 + 31904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A19E0"))) PPC_WEAK_FUNC(sub_832A19E0);
PPC_FUNC_IMPL(__imp__sub_832A19E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31908
	ctx.r3.s64 = r11.s64 + 31908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A19F0"))) PPC_WEAK_FUNC(sub_832A19F0);
PPC_FUNC_IMPL(__imp__sub_832A19F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31912
	ctx.r3.s64 = r11.s64 + 31912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A00"))) PPC_WEAK_FUNC(sub_832A1A00);
PPC_FUNC_IMPL(__imp__sub_832A1A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31916
	ctx.r3.s64 = r11.s64 + 31916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A10"))) PPC_WEAK_FUNC(sub_832A1A10);
PPC_FUNC_IMPL(__imp__sub_832A1A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31920
	ctx.r3.s64 = r11.s64 + 31920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A20"))) PPC_WEAK_FUNC(sub_832A1A20);
PPC_FUNC_IMPL(__imp__sub_832A1A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31924
	ctx.r3.s64 = r11.s64 + 31924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A30"))) PPC_WEAK_FUNC(sub_832A1A30);
PPC_FUNC_IMPL(__imp__sub_832A1A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31928
	ctx.r3.s64 = r11.s64 + 31928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A40"))) PPC_WEAK_FUNC(sub_832A1A40);
PPC_FUNC_IMPL(__imp__sub_832A1A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31932
	ctx.r3.s64 = r11.s64 + 31932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A50"))) PPC_WEAK_FUNC(sub_832A1A50);
PPC_FUNC_IMPL(__imp__sub_832A1A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31936
	ctx.r3.s64 = r11.s64 + 31936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A60"))) PPC_WEAK_FUNC(sub_832A1A60);
PPC_FUNC_IMPL(__imp__sub_832A1A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31940
	ctx.r3.s64 = r11.s64 + 31940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A70"))) PPC_WEAK_FUNC(sub_832A1A70);
PPC_FUNC_IMPL(__imp__sub_832A1A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31944
	ctx.r3.s64 = r11.s64 + 31944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1A80"))) PPC_WEAK_FUNC(sub_832A1A80);
PPC_FUNC_IMPL(__imp__sub_832A1A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1A88"))) PPC_WEAK_FUNC(sub_832A1A88);
PPC_FUNC_IMPL(__imp__sub_832A1A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1A90"))) PPC_WEAK_FUNC(sub_832A1A90);
PPC_FUNC_IMPL(__imp__sub_832A1A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1A98"))) PPC_WEAK_FUNC(sub_832A1A98);
PPC_FUNC_IMPL(__imp__sub_832A1A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AA0"))) PPC_WEAK_FUNC(sub_832A1AA0);
PPC_FUNC_IMPL(__imp__sub_832A1AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AA8"))) PPC_WEAK_FUNC(sub_832A1AA8);
PPC_FUNC_IMPL(__imp__sub_832A1AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AB0"))) PPC_WEAK_FUNC(sub_832A1AB0);
PPC_FUNC_IMPL(__imp__sub_832A1AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AB8"))) PPC_WEAK_FUNC(sub_832A1AB8);
PPC_FUNC_IMPL(__imp__sub_832A1AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AC0"))) PPC_WEAK_FUNC(sub_832A1AC0);
PPC_FUNC_IMPL(__imp__sub_832A1AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AC8"))) PPC_WEAK_FUNC(sub_832A1AC8);
PPC_FUNC_IMPL(__imp__sub_832A1AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AD0"))) PPC_WEAK_FUNC(sub_832A1AD0);
PPC_FUNC_IMPL(__imp__sub_832A1AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1AD8"))) PPC_WEAK_FUNC(sub_832A1AD8);
PPC_FUNC_IMPL(__imp__sub_832A1AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31992
	ctx.r3.s64 = r11.s64 + 31992;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1AE8"))) PPC_WEAK_FUNC(sub_832A1AE8);
PPC_FUNC_IMPL(__imp__sub_832A1AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,31996
	ctx.r3.s64 = r11.s64 + 31996;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1AF8"))) PPC_WEAK_FUNC(sub_832A1AF8);
PPC_FUNC_IMPL(__imp__sub_832A1AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32000
	ctx.r3.s64 = r11.s64 + 32000;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B08"))) PPC_WEAK_FUNC(sub_832A1B08);
PPC_FUNC_IMPL(__imp__sub_832A1B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32004
	ctx.r3.s64 = r11.s64 + 32004;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B18"))) PPC_WEAK_FUNC(sub_832A1B18);
PPC_FUNC_IMPL(__imp__sub_832A1B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32012
	ctx.r3.s64 = r11.s64 + 32012;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B28"))) PPC_WEAK_FUNC(sub_832A1B28);
PPC_FUNC_IMPL(__imp__sub_832A1B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32016
	ctx.r3.s64 = r11.s64 + 32016;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B38"))) PPC_WEAK_FUNC(sub_832A1B38);
PPC_FUNC_IMPL(__imp__sub_832A1B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32020
	ctx.r3.s64 = r11.s64 + 32020;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B48"))) PPC_WEAK_FUNC(sub_832A1B48);
PPC_FUNC_IMPL(__imp__sub_832A1B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32024
	ctx.r3.s64 = r11.s64 + 32024;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B58"))) PPC_WEAK_FUNC(sub_832A1B58);
PPC_FUNC_IMPL(__imp__sub_832A1B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32028
	ctx.r3.s64 = r11.s64 + 32028;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B68"))) PPC_WEAK_FUNC(sub_832A1B68);
PPC_FUNC_IMPL(__imp__sub_832A1B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32032
	ctx.r3.s64 = r11.s64 + 32032;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B78"))) PPC_WEAK_FUNC(sub_832A1B78);
PPC_FUNC_IMPL(__imp__sub_832A1B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32036
	ctx.r3.s64 = r11.s64 + 32036;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B88"))) PPC_WEAK_FUNC(sub_832A1B88);
PPC_FUNC_IMPL(__imp__sub_832A1B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32040
	ctx.r3.s64 = r11.s64 + 32040;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1B98"))) PPC_WEAK_FUNC(sub_832A1B98);
PPC_FUNC_IMPL(__imp__sub_832A1B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32072
	ctx.r3.s64 = r11.s64 + 32072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1BA8"))) PPC_WEAK_FUNC(sub_832A1BA8);
PPC_FUNC_IMPL(__imp__sub_832A1BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32076
	ctx.r3.s64 = r11.s64 + 32076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1BB8"))) PPC_WEAK_FUNC(sub_832A1BB8);
PPC_FUNC_IMPL(__imp__sub_832A1BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32128
	ctx.r3.s64 = r11.s64 + 32128;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1BC8"))) PPC_WEAK_FUNC(sub_832A1BC8);
PPC_FUNC_IMPL(__imp__sub_832A1BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32132
	ctx.r3.s64 = r11.s64 + 32132;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1BD8"))) PPC_WEAK_FUNC(sub_832A1BD8);
PPC_FUNC_IMPL(__imp__sub_832A1BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32136
	ctx.r3.s64 = r11.s64 + 32136;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1BE8"))) PPC_WEAK_FUNC(sub_832A1BE8);
PPC_FUNC_IMPL(__imp__sub_832A1BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32140
	ctx.r3.s64 = r11.s64 + 32140;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1BF8"))) PPC_WEAK_FUNC(sub_832A1BF8);
PPC_FUNC_IMPL(__imp__sub_832A1BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32144
	ctx.r3.s64 = r11.s64 + 32144;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C08"))) PPC_WEAK_FUNC(sub_832A1C08);
PPC_FUNC_IMPL(__imp__sub_832A1C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32148
	ctx.r3.s64 = r11.s64 + 32148;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C18"))) PPC_WEAK_FUNC(sub_832A1C18);
PPC_FUNC_IMPL(__imp__sub_832A1C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32152
	ctx.r3.s64 = r11.s64 + 32152;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C28"))) PPC_WEAK_FUNC(sub_832A1C28);
PPC_FUNC_IMPL(__imp__sub_832A1C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32156
	ctx.r3.s64 = r11.s64 + 32156;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C38"))) PPC_WEAK_FUNC(sub_832A1C38);
PPC_FUNC_IMPL(__imp__sub_832A1C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32160
	ctx.r3.s64 = r11.s64 + 32160;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C48"))) PPC_WEAK_FUNC(sub_832A1C48);
PPC_FUNC_IMPL(__imp__sub_832A1C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32164
	ctx.r3.s64 = r11.s64 + 32164;
	// b 0x8241c228
	sub_8241C228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C58"))) PPC_WEAK_FUNC(sub_832A1C58);
PPC_FUNC_IMPL(__imp__sub_832A1C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32176
	ctx.r3.s64 = r11.s64 + 32176;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C68"))) PPC_WEAK_FUNC(sub_832A1C68);
PPC_FUNC_IMPL(__imp__sub_832A1C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32180
	ctx.r3.s64 = r11.s64 + 32180;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C78"))) PPC_WEAK_FUNC(sub_832A1C78);
PPC_FUNC_IMPL(__imp__sub_832A1C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32184
	ctx.r3.s64 = r11.s64 + 32184;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C88"))) PPC_WEAK_FUNC(sub_832A1C88);
PPC_FUNC_IMPL(__imp__sub_832A1C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32188
	ctx.r3.s64 = r11.s64 + 32188;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1C98"))) PPC_WEAK_FUNC(sub_832A1C98);
PPC_FUNC_IMPL(__imp__sub_832A1C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32192
	ctx.r3.s64 = r11.s64 + 32192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1CA8"))) PPC_WEAK_FUNC(sub_832A1CA8);
PPC_FUNC_IMPL(__imp__sub_832A1CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32196
	ctx.r3.s64 = r11.s64 + 32196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1CB8"))) PPC_WEAK_FUNC(sub_832A1CB8);
PPC_FUNC_IMPL(__imp__sub_832A1CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32200
	ctx.r3.s64 = r11.s64 + 32200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1CC8"))) PPC_WEAK_FUNC(sub_832A1CC8);
PPC_FUNC_IMPL(__imp__sub_832A1CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32204
	ctx.r3.s64 = r11.s64 + 32204;
	// b 0x8292bb38
	sub_8292BB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1CD8"))) PPC_WEAK_FUNC(sub_832A1CD8);
PPC_FUNC_IMPL(__imp__sub_832A1CD8) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r10,-26068
	r31.s64 = ctx.r10.s64 + -26068;
	// addi r11,r11,5732
	r11.s64 = r11.s64 + 5732;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-26068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26068, r11.u32);
	// bl 0x821940c8
	sub_821940C8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_832A1D20"))) PPC_WEAK_FUNC(sub_832A1D20);
PPC_FUNC_IMPL(__imp__sub_832A1D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32216
	ctx.r3.s64 = r11.s64 + 32216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D30"))) PPC_WEAK_FUNC(sub_832A1D30);
PPC_FUNC_IMPL(__imp__sub_832A1D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32220
	ctx.r3.s64 = r11.s64 + 32220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D40"))) PPC_WEAK_FUNC(sub_832A1D40);
PPC_FUNC_IMPL(__imp__sub_832A1D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32224
	ctx.r3.s64 = r11.s64 + 32224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D50"))) PPC_WEAK_FUNC(sub_832A1D50);
PPC_FUNC_IMPL(__imp__sub_832A1D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32228
	ctx.r3.s64 = r11.s64 + 32228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D60"))) PPC_WEAK_FUNC(sub_832A1D60);
PPC_FUNC_IMPL(__imp__sub_832A1D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32232
	ctx.r3.s64 = r11.s64 + 32232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D70"))) PPC_WEAK_FUNC(sub_832A1D70);
PPC_FUNC_IMPL(__imp__sub_832A1D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-15612
	ctx.r3.s64 = r11.s64 + -15612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D80"))) PPC_WEAK_FUNC(sub_832A1D80);
PPC_FUNC_IMPL(__imp__sub_832A1D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-15608
	ctx.r3.s64 = r11.s64 + -15608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1D90"))) PPC_WEAK_FUNC(sub_832A1D90);
PPC_FUNC_IMPL(__imp__sub_832A1D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r3,r11,-15604
	ctx.r3.s64 = r11.s64 + -15604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1DA0"))) PPC_WEAK_FUNC(sub_832A1DA0);
PPC_FUNC_IMPL(__imp__sub_832A1DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32328
	ctx.r3.s64 = r11.s64 + 32328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1DB0"))) PPC_WEAK_FUNC(sub_832A1DB0);
PPC_FUNC_IMPL(__imp__sub_832A1DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32332
	ctx.r3.s64 = r11.s64 + 32332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1DC0"))) PPC_WEAK_FUNC(sub_832A1DC0);
PPC_FUNC_IMPL(__imp__sub_832A1DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32336
	ctx.r3.s64 = r11.s64 + 32336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1DD0"))) PPC_WEAK_FUNC(sub_832A1DD0);
PPC_FUNC_IMPL(__imp__sub_832A1DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32340
	ctx.r3.s64 = r11.s64 + 32340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1DE0"))) PPC_WEAK_FUNC(sub_832A1DE0);
PPC_FUNC_IMPL(__imp__sub_832A1DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32364
	ctx.r3.s64 = r11.s64 + 32364;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1DF0"))) PPC_WEAK_FUNC(sub_832A1DF0);
PPC_FUNC_IMPL(__imp__sub_832A1DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// li r30,4
	r30.s64 = 4;
	// addi r11,r11,27252
	r11.s64 = r11.s64 + 27252;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A1E18:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A1E28:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a1e28
	if (!cr0.eq) goto loc_832A1E28;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a1e18
	if (!cr0.lt) goto loc_832A1E18;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A1E58"))) PPC_WEAK_FUNC(sub_832A1E58);
PPC_FUNC_IMPL(__imp__sub_832A1E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r31,r11,32372
	r31.s64 = r11.s64 + 32372;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a1e80
	if (cr6.eq) goto loc_832A1E80;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832A1E80:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A1EB0"))) PPC_WEAK_FUNC(sub_832A1EB0);
PPC_FUNC_IMPL(__imp__sub_832A1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32388
	ctx.r3.s64 = r11.s64 + 32388;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1EC0"))) PPC_WEAK_FUNC(sub_832A1EC0);
PPC_FUNC_IMPL(__imp__sub_832A1EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32392
	ctx.r3.s64 = r11.s64 + 32392;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1ED0"))) PPC_WEAK_FUNC(sub_832A1ED0);
PPC_FUNC_IMPL(__imp__sub_832A1ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32396
	ctx.r3.s64 = r11.s64 + 32396;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1EE0"))) PPC_WEAK_FUNC(sub_832A1EE0);
PPC_FUNC_IMPL(__imp__sub_832A1EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32400
	ctx.r3.s64 = r11.s64 + 32400;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1EF0"))) PPC_WEAK_FUNC(sub_832A1EF0);
PPC_FUNC_IMPL(__imp__sub_832A1EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32404
	ctx.r3.s64 = r11.s64 + 32404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F00"))) PPC_WEAK_FUNC(sub_832A1F00);
PPC_FUNC_IMPL(__imp__sub_832A1F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32408
	ctx.r3.s64 = r11.s64 + 32408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F10"))) PPC_WEAK_FUNC(sub_832A1F10);
PPC_FUNC_IMPL(__imp__sub_832A1F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32412
	ctx.r3.s64 = r11.s64 + 32412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F20"))) PPC_WEAK_FUNC(sub_832A1F20);
PPC_FUNC_IMPL(__imp__sub_832A1F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r30,31
	r30.s64 = 31;
	// addi r11,r11,32416
	r11.s64 = r11.s64 + 32416;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A1F48:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A1F58:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a1f58
	if (!cr0.eq) goto loc_832A1F58;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a1f48
	if (!cr0.lt) goto loc_832A1F48;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A1F88"))) PPC_WEAK_FUNC(sub_832A1F88);
PPC_FUNC_IMPL(__imp__sub_832A1F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32544
	ctx.r3.s64 = r11.s64 + 32544;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F98"))) PPC_WEAK_FUNC(sub_832A1F98);
PPC_FUNC_IMPL(__imp__sub_832A1F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32548
	ctx.r3.s64 = r11.s64 + 32548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1FA8"))) PPC_WEAK_FUNC(sub_832A1FA8);
PPC_FUNC_IMPL(__imp__sub_832A1FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32552
	ctx.r3.s64 = r11.s64 + 32552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1FB8"))) PPC_WEAK_FUNC(sub_832A1FB8);
PPC_FUNC_IMPL(__imp__sub_832A1FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r31,r11,32556
	r31.s64 = r11.s64 + 32556;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a1fe0
	if (cr6.eq) goto loc_832A1FE0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832A1FE0:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A2010"))) PPC_WEAK_FUNC(sub_832A2010);
PPC_FUNC_IMPL(__imp__sub_832A2010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32576
	ctx.r3.s64 = r11.s64 + 32576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2020"))) PPC_WEAK_FUNC(sub_832A2020);
PPC_FUNC_IMPL(__imp__sub_832A2020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32580
	ctx.r3.s64 = r11.s64 + 32580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2030"))) PPC_WEAK_FUNC(sub_832A2030);
PPC_FUNC_IMPL(__imp__sub_832A2030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32584
	ctx.r3.s64 = r11.s64 + 32584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2040"))) PPC_WEAK_FUNC(sub_832A2040);
PPC_FUNC_IMPL(__imp__sub_832A2040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32588
	ctx.r3.s64 = r11.s64 + 32588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2050"))) PPC_WEAK_FUNC(sub_832A2050);
PPC_FUNC_IMPL(__imp__sub_832A2050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32592
	ctx.r3.s64 = r11.s64 + 32592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2060"))) PPC_WEAK_FUNC(sub_832A2060);
PPC_FUNC_IMPL(__imp__sub_832A2060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32596
	ctx.r3.s64 = r11.s64 + 32596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2070"))) PPC_WEAK_FUNC(sub_832A2070);
PPC_FUNC_IMPL(__imp__sub_832A2070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32600
	ctx.r3.s64 = r11.s64 + 32600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2080"))) PPC_WEAK_FUNC(sub_832A2080);
PPC_FUNC_IMPL(__imp__sub_832A2080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32604
	ctx.r3.s64 = r11.s64 + 32604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2090"))) PPC_WEAK_FUNC(sub_832A2090);
PPC_FUNC_IMPL(__imp__sub_832A2090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32608
	ctx.r3.s64 = r11.s64 + 32608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A20A0"))) PPC_WEAK_FUNC(sub_832A20A0);
PPC_FUNC_IMPL(__imp__sub_832A20A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32612
	ctx.r3.s64 = r11.s64 + 32612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A20B0"))) PPC_WEAK_FUNC(sub_832A20B0);
PPC_FUNC_IMPL(__imp__sub_832A20B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A20C0"))) PPC_WEAK_FUNC(sub_832A20C0);
PPC_FUNC_IMPL(__imp__sub_832A20C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32704
	ctx.r3.s64 = r11.s64 + 32704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A20D0"))) PPC_WEAK_FUNC(sub_832A20D0);
PPC_FUNC_IMPL(__imp__sub_832A20D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32708
	ctx.r3.s64 = r11.s64 + 32708;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A20E0"))) PPC_WEAK_FUNC(sub_832A20E0);
PPC_FUNC_IMPL(__imp__sub_832A20E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32712
	ctx.r3.s64 = r11.s64 + 32712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A20F0"))) PPC_WEAK_FUNC(sub_832A20F0);
PPC_FUNC_IMPL(__imp__sub_832A20F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32716
	ctx.r3.s64 = r11.s64 + 32716;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2100"))) PPC_WEAK_FUNC(sub_832A2100);
PPC_FUNC_IMPL(__imp__sub_832A2100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32720
	ctx.r3.s64 = r11.s64 + 32720;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2110"))) PPC_WEAK_FUNC(sub_832A2110);
PPC_FUNC_IMPL(__imp__sub_832A2110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32724
	ctx.r3.s64 = r11.s64 + 32724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2120"))) PPC_WEAK_FUNC(sub_832A2120);
PPC_FUNC_IMPL(__imp__sub_832A2120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32728
	ctx.r3.s64 = r11.s64 + 32728;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2130"))) PPC_WEAK_FUNC(sub_832A2130);
PPC_FUNC_IMPL(__imp__sub_832A2130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32732
	ctx.r3.s64 = r11.s64 + 32732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2140"))) PPC_WEAK_FUNC(sub_832A2140);
PPC_FUNC_IMPL(__imp__sub_832A2140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32736
	ctx.r3.s64 = r11.s64 + 32736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2150"))) PPC_WEAK_FUNC(sub_832A2150);
PPC_FUNC_IMPL(__imp__sub_832A2150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32740
	ctx.r3.s64 = r11.s64 + 32740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2160"))) PPC_WEAK_FUNC(sub_832A2160);
PPC_FUNC_IMPL(__imp__sub_832A2160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32744
	ctx.r3.s64 = r11.s64 + 32744;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2170"))) PPC_WEAK_FUNC(sub_832A2170);
PPC_FUNC_IMPL(__imp__sub_832A2170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32748
	ctx.r3.s64 = r11.s64 + 32748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2180"))) PPC_WEAK_FUNC(sub_832A2180);
PPC_FUNC_IMPL(__imp__sub_832A2180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32752
	ctx.r3.s64 = r11.s64 + 32752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2190"))) PPC_WEAK_FUNC(sub_832A2190);
PPC_FUNC_IMPL(__imp__sub_832A2190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32756
	ctx.r3.s64 = r11.s64 + 32756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A21A0"))) PPC_WEAK_FUNC(sub_832A21A0);
PPC_FUNC_IMPL(__imp__sub_832A21A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32760
	ctx.r3.s64 = r11.s64 + 32760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A21B0"))) PPC_WEAK_FUNC(sub_832A21B0);
PPC_FUNC_IMPL(__imp__sub_832A21B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r3,r11,32764
	ctx.r3.s64 = r11.s64 + 32764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A21C0"))) PPC_WEAK_FUNC(sub_832A21C0);
PPC_FUNC_IMPL(__imp__sub_832A21C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32768
	ctx.r3.s64 = r11.s64 + -32768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A21D0"))) PPC_WEAK_FUNC(sub_832A21D0);
PPC_FUNC_IMPL(__imp__sub_832A21D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32764
	ctx.r3.s64 = r11.s64 + -32764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A21E0"))) PPC_WEAK_FUNC(sub_832A21E0);
PPC_FUNC_IMPL(__imp__sub_832A21E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32760
	ctx.r3.s64 = r11.s64 + -32760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A21F0"))) PPC_WEAK_FUNC(sub_832A21F0);
PPC_FUNC_IMPL(__imp__sub_832A21F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32756
	ctx.r3.s64 = r11.s64 + -32756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2200"))) PPC_WEAK_FUNC(sub_832A2200);
PPC_FUNC_IMPL(__imp__sub_832A2200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32752
	ctx.r3.s64 = r11.s64 + -32752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2210"))) PPC_WEAK_FUNC(sub_832A2210);
PPC_FUNC_IMPL(__imp__sub_832A2210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32748
	ctx.r3.s64 = r11.s64 + -32748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2220"))) PPC_WEAK_FUNC(sub_832A2220);
PPC_FUNC_IMPL(__imp__sub_832A2220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32744
	ctx.r3.s64 = r11.s64 + -32744;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2230"))) PPC_WEAK_FUNC(sub_832A2230);
PPC_FUNC_IMPL(__imp__sub_832A2230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32740
	ctx.r3.s64 = r11.s64 + -32740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2240"))) PPC_WEAK_FUNC(sub_832A2240);
PPC_FUNC_IMPL(__imp__sub_832A2240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32736
	ctx.r3.s64 = r11.s64 + -32736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2250"))) PPC_WEAK_FUNC(sub_832A2250);
PPC_FUNC_IMPL(__imp__sub_832A2250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32732
	ctx.r3.s64 = r11.s64 + -32732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2260"))) PPC_WEAK_FUNC(sub_832A2260);
PPC_FUNC_IMPL(__imp__sub_832A2260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32728
	ctx.r3.s64 = r11.s64 + -32728;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2270"))) PPC_WEAK_FUNC(sub_832A2270);
PPC_FUNC_IMPL(__imp__sub_832A2270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32724
	ctx.r3.s64 = r11.s64 + -32724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2280"))) PPC_WEAK_FUNC(sub_832A2280);
PPC_FUNC_IMPL(__imp__sub_832A2280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32720
	ctx.r3.s64 = r11.s64 + -32720;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2290"))) PPC_WEAK_FUNC(sub_832A2290);
PPC_FUNC_IMPL(__imp__sub_832A2290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32716
	ctx.r3.s64 = r11.s64 + -32716;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A22A0"))) PPC_WEAK_FUNC(sub_832A22A0);
PPC_FUNC_IMPL(__imp__sub_832A22A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32712
	ctx.r3.s64 = r11.s64 + -32712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A22B0"))) PPC_WEAK_FUNC(sub_832A22B0);
PPC_FUNC_IMPL(__imp__sub_832A22B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A22B8"))) PPC_WEAK_FUNC(sub_832A22B8);
PPC_FUNC_IMPL(__imp__sub_832A22B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32704
	ctx.r3.s64 = r11.s64 + -32704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A22C8"))) PPC_WEAK_FUNC(sub_832A22C8);
PPC_FUNC_IMPL(__imp__sub_832A22C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32700
	ctx.r3.s64 = r11.s64 + -32700;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A22D8"))) PPC_WEAK_FUNC(sub_832A22D8);
PPC_FUNC_IMPL(__imp__sub_832A22D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32696
	ctx.r3.s64 = r11.s64 + -32696;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A22E8"))) PPC_WEAK_FUNC(sub_832A22E8);
PPC_FUNC_IMPL(__imp__sub_832A22E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32692
	ctx.r3.s64 = r11.s64 + -32692;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A22F8"))) PPC_WEAK_FUNC(sub_832A22F8);
PPC_FUNC_IMPL(__imp__sub_832A22F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32688
	ctx.r3.s64 = r11.s64 + -32688;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2308"))) PPC_WEAK_FUNC(sub_832A2308);
PPC_FUNC_IMPL(__imp__sub_832A2308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,6
	r30.s64 = 6;
	// addi r11,r11,-32684
	r11.s64 = r11.s64 + -32684;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A2330:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A2340:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a2340
	if (!cr0.eq) goto loc_832A2340;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a2330
	if (!cr0.lt) goto loc_832A2330;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A2370"))) PPC_WEAK_FUNC(sub_832A2370);
PPC_FUNC_IMPL(__imp__sub_832A2370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,6
	r30.s64 = 6;
	// addi r11,r11,-32656
	r11.s64 = r11.s64 + -32656;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A2398:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A23A8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a23a8
	if (!cr0.eq) goto loc_832A23A8;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a2398
	if (!cr0.lt) goto loc_832A2398;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A23D8"))) PPC_WEAK_FUNC(sub_832A23D8);
PPC_FUNC_IMPL(__imp__sub_832A23D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32628
	ctx.r3.s64 = r11.s64 + -32628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A23E8"))) PPC_WEAK_FUNC(sub_832A23E8);
PPC_FUNC_IMPL(__imp__sub_832A23E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32528
	ctx.r3.s64 = r11.s64 + -32528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A23F8"))) PPC_WEAK_FUNC(sub_832A23F8);
PPC_FUNC_IMPL(__imp__sub_832A23F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32524
	ctx.r3.s64 = r11.s64 + -32524;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2408"))) PPC_WEAK_FUNC(sub_832A2408);
PPC_FUNC_IMPL(__imp__sub_832A2408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32520
	ctx.r3.s64 = r11.s64 + -32520;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2418"))) PPC_WEAK_FUNC(sub_832A2418);
PPC_FUNC_IMPL(__imp__sub_832A2418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32516
	ctx.r3.s64 = r11.s64 + -32516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2428"))) PPC_WEAK_FUNC(sub_832A2428);
PPC_FUNC_IMPL(__imp__sub_832A2428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32512
	ctx.r3.s64 = r11.s64 + -32512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2438"))) PPC_WEAK_FUNC(sub_832A2438);
PPC_FUNC_IMPL(__imp__sub_832A2438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32508
	ctx.r3.s64 = r11.s64 + -32508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2448"))) PPC_WEAK_FUNC(sub_832A2448);
PPC_FUNC_IMPL(__imp__sub_832A2448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32504
	ctx.r3.s64 = r11.s64 + -32504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2458"))) PPC_WEAK_FUNC(sub_832A2458);
PPC_FUNC_IMPL(__imp__sub_832A2458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32500
	ctx.r3.s64 = r11.s64 + -32500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2468"))) PPC_WEAK_FUNC(sub_832A2468);
PPC_FUNC_IMPL(__imp__sub_832A2468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-32496
	r31.s64 = r11.s64 + -32496;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a24a0
	if (cr6.eq) goto loc_832A24A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82488058
	sub_82488058(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832A24A0:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A24D0"))) PPC_WEAK_FUNC(sub_832A24D0);
PPC_FUNC_IMPL(__imp__sub_832A24D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-32480
	r31.s64 = r11.s64 + -32480;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a2508
	if (cr6.eq) goto loc_832A2508;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82488058
	sub_82488058(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832A2508:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A2538"))) PPC_WEAK_FUNC(sub_832A2538);
PPC_FUNC_IMPL(__imp__sub_832A2538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-32464
	r31.s64 = r11.s64 + -32464;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a2560
	if (cr6.eq) goto loc_832A2560;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832A2560:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832A2590"))) PPC_WEAK_FUNC(sub_832A2590);
PPC_FUNC_IMPL(__imp__sub_832A2590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32448
	ctx.r3.s64 = r11.s64 + -32448;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A25A0"))) PPC_WEAK_FUNC(sub_832A25A0);
PPC_FUNC_IMPL(__imp__sub_832A25A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32444
	ctx.r3.s64 = r11.s64 + -32444;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A25B0"))) PPC_WEAK_FUNC(sub_832A25B0);
PPC_FUNC_IMPL(__imp__sub_832A25B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32440
	ctx.r3.s64 = r11.s64 + -32440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A25C0"))) PPC_WEAK_FUNC(sub_832A25C0);
PPC_FUNC_IMPL(__imp__sub_832A25C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32436
	ctx.r3.s64 = r11.s64 + -32436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A25D0"))) PPC_WEAK_FUNC(sub_832A25D0);
PPC_FUNC_IMPL(__imp__sub_832A25D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32432
	ctx.r3.s64 = r11.s64 + -32432;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A25E0"))) PPC_WEAK_FUNC(sub_832A25E0);
PPC_FUNC_IMPL(__imp__sub_832A25E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32428
	ctx.r3.s64 = r11.s64 + -32428;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A25F0"))) PPC_WEAK_FUNC(sub_832A25F0);
PPC_FUNC_IMPL(__imp__sub_832A25F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32424
	ctx.r3.s64 = r11.s64 + -32424;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2600"))) PPC_WEAK_FUNC(sub_832A2600);
PPC_FUNC_IMPL(__imp__sub_832A2600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32420
	ctx.r3.s64 = r11.s64 + -32420;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2610"))) PPC_WEAK_FUNC(sub_832A2610);
PPC_FUNC_IMPL(__imp__sub_832A2610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32416
	ctx.r3.s64 = r11.s64 + -32416;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2620"))) PPC_WEAK_FUNC(sub_832A2620);
PPC_FUNC_IMPL(__imp__sub_832A2620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32412
	ctx.r3.s64 = r11.s64 + -32412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2630"))) PPC_WEAK_FUNC(sub_832A2630);
PPC_FUNC_IMPL(__imp__sub_832A2630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32408
	ctx.r3.s64 = r11.s64 + -32408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2640"))) PPC_WEAK_FUNC(sub_832A2640);
PPC_FUNC_IMPL(__imp__sub_832A2640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32404
	ctx.r3.s64 = r11.s64 + -32404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2650"))) PPC_WEAK_FUNC(sub_832A2650);
PPC_FUNC_IMPL(__imp__sub_832A2650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32400
	ctx.r3.s64 = r11.s64 + -32400;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2660"))) PPC_WEAK_FUNC(sub_832A2660);
PPC_FUNC_IMPL(__imp__sub_832A2660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32396
	ctx.r3.s64 = r11.s64 + -32396;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2670"))) PPC_WEAK_FUNC(sub_832A2670);
PPC_FUNC_IMPL(__imp__sub_832A2670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32392
	ctx.r3.s64 = r11.s64 + -32392;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2680"))) PPC_WEAK_FUNC(sub_832A2680);
PPC_FUNC_IMPL(__imp__sub_832A2680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32388
	ctx.r3.s64 = r11.s64 + -32388;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2690"))) PPC_WEAK_FUNC(sub_832A2690);
PPC_FUNC_IMPL(__imp__sub_832A2690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31924
	r11.s64 = -2092171264;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,14156
	r11.s64 = r11.s64 + 14156;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A26B8:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A26C8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a26c8
	if (!cr0.eq) goto loc_832A26C8;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a26b8
	if (!cr0.lt) goto loc_832A26B8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A26F8"))) PPC_WEAK_FUNC(sub_832A26F8);
PPC_FUNC_IMPL(__imp__sub_832A26F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32360
	ctx.r3.s64 = r11.s64 + -32360;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2708"))) PPC_WEAK_FUNC(sub_832A2708);
PPC_FUNC_IMPL(__imp__sub_832A2708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32356
	ctx.r3.s64 = r11.s64 + -32356;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2718"))) PPC_WEAK_FUNC(sub_832A2718);
PPC_FUNC_IMPL(__imp__sub_832A2718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32352
	ctx.r3.s64 = r11.s64 + -32352;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2728"))) PPC_WEAK_FUNC(sub_832A2728);
PPC_FUNC_IMPL(__imp__sub_832A2728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32348
	ctx.r3.s64 = r11.s64 + -32348;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2738"))) PPC_WEAK_FUNC(sub_832A2738);
PPC_FUNC_IMPL(__imp__sub_832A2738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32344
	ctx.r3.s64 = r11.s64 + -32344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2748"))) PPC_WEAK_FUNC(sub_832A2748);
PPC_FUNC_IMPL(__imp__sub_832A2748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32340
	ctx.r3.s64 = r11.s64 + -32340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2758"))) PPC_WEAK_FUNC(sub_832A2758);
PPC_FUNC_IMPL(__imp__sub_832A2758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32336
	ctx.r3.s64 = r11.s64 + -32336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2768"))) PPC_WEAK_FUNC(sub_832A2768);
PPC_FUNC_IMPL(__imp__sub_832A2768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32332
	ctx.r3.s64 = r11.s64 + -32332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2778"))) PPC_WEAK_FUNC(sub_832A2778);
PPC_FUNC_IMPL(__imp__sub_832A2778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32328
	ctx.r3.s64 = r11.s64 + -32328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2788"))) PPC_WEAK_FUNC(sub_832A2788);
PPC_FUNC_IMPL(__imp__sub_832A2788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32324
	ctx.r3.s64 = r11.s64 + -32324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2798"))) PPC_WEAK_FUNC(sub_832A2798);
PPC_FUNC_IMPL(__imp__sub_832A2798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32320
	ctx.r3.s64 = r11.s64 + -32320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27A8"))) PPC_WEAK_FUNC(sub_832A27A8);
PPC_FUNC_IMPL(__imp__sub_832A27A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32316
	ctx.r3.s64 = r11.s64 + -32316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27B8"))) PPC_WEAK_FUNC(sub_832A27B8);
PPC_FUNC_IMPL(__imp__sub_832A27B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32312
	ctx.r3.s64 = r11.s64 + -32312;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27C8"))) PPC_WEAK_FUNC(sub_832A27C8);
PPC_FUNC_IMPL(__imp__sub_832A27C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32308
	ctx.r3.s64 = r11.s64 + -32308;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27D8"))) PPC_WEAK_FUNC(sub_832A27D8);
PPC_FUNC_IMPL(__imp__sub_832A27D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32304
	ctx.r3.s64 = r11.s64 + -32304;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27E8"))) PPC_WEAK_FUNC(sub_832A27E8);
PPC_FUNC_IMPL(__imp__sub_832A27E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32300
	ctx.r3.s64 = r11.s64 + -32300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27F8"))) PPC_WEAK_FUNC(sub_832A27F8);
PPC_FUNC_IMPL(__imp__sub_832A27F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32296
	ctx.r3.s64 = r11.s64 + -32296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2808"))) PPC_WEAK_FUNC(sub_832A2808);
PPC_FUNC_IMPL(__imp__sub_832A2808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32292
	ctx.r3.s64 = r11.s64 + -32292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2818"))) PPC_WEAK_FUNC(sub_832A2818);
PPC_FUNC_IMPL(__imp__sub_832A2818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32288
	ctx.r3.s64 = r11.s64 + -32288;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2828"))) PPC_WEAK_FUNC(sub_832A2828);
PPC_FUNC_IMPL(__imp__sub_832A2828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32284
	ctx.r3.s64 = r11.s64 + -32284;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2838"))) PPC_WEAK_FUNC(sub_832A2838);
PPC_FUNC_IMPL(__imp__sub_832A2838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32280
	ctx.r3.s64 = r11.s64 + -32280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2848"))) PPC_WEAK_FUNC(sub_832A2848);
PPC_FUNC_IMPL(__imp__sub_832A2848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32276
	ctx.r3.s64 = r11.s64 + -32276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2858"))) PPC_WEAK_FUNC(sub_832A2858);
PPC_FUNC_IMPL(__imp__sub_832A2858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32272
	ctx.r3.s64 = r11.s64 + -32272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2868"))) PPC_WEAK_FUNC(sub_832A2868);
PPC_FUNC_IMPL(__imp__sub_832A2868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32268
	ctx.r3.s64 = r11.s64 + -32268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2878"))) PPC_WEAK_FUNC(sub_832A2878);
PPC_FUNC_IMPL(__imp__sub_832A2878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,41
	r30.s64 = 41;
	// addi r11,r11,-32264
	r11.s64 = r11.s64 + -32264;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,168
	r31.s64 = r11.s64 + 168;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832A28A0:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832A28B0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x832a28b0
	if (!cr0.eq) goto loc_832A28B0;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832a28a0
	if (!cr0.lt) goto loc_832A28A0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832A28E0"))) PPC_WEAK_FUNC(sub_832A28E0);
PPC_FUNC_IMPL(__imp__sub_832A28E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32096
	ctx.r3.s64 = r11.s64 + -32096;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A28F0"))) PPC_WEAK_FUNC(sub_832A28F0);
PPC_FUNC_IMPL(__imp__sub_832A28F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32092
	ctx.r3.s64 = r11.s64 + -32092;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2900"))) PPC_WEAK_FUNC(sub_832A2900);
PPC_FUNC_IMPL(__imp__sub_832A2900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32088
	ctx.r3.s64 = r11.s64 + -32088;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2910"))) PPC_WEAK_FUNC(sub_832A2910);
PPC_FUNC_IMPL(__imp__sub_832A2910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-32084
	ctx.r3.s64 = r11.s64 + -32084;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

