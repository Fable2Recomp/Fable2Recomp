#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832AB1D0"))) PPC_WEAK_FUNC(sub_832AB1D0);
PPC_FUNC_IMPL(__imp__sub_832AB1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6440
	ctx.r3.s64 = r11.s64 + -6440;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB1E0"))) PPC_WEAK_FUNC(sub_832AB1E0);
PPC_FUNC_IMPL(__imp__sub_832AB1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6436
	ctx.r3.s64 = r11.s64 + -6436;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB1F0"))) PPC_WEAK_FUNC(sub_832AB1F0);
PPC_FUNC_IMPL(__imp__sub_832AB1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6432
	ctx.r3.s64 = r11.s64 + -6432;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB200"))) PPC_WEAK_FUNC(sub_832AB200);
PPC_FUNC_IMPL(__imp__sub_832AB200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6428
	ctx.r3.s64 = r11.s64 + -6428;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB210"))) PPC_WEAK_FUNC(sub_832AB210);
PPC_FUNC_IMPL(__imp__sub_832AB210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6424
	ctx.r3.s64 = r11.s64 + -6424;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB220"))) PPC_WEAK_FUNC(sub_832AB220);
PPC_FUNC_IMPL(__imp__sub_832AB220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6420
	ctx.r3.s64 = r11.s64 + -6420;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB230"))) PPC_WEAK_FUNC(sub_832AB230);
PPC_FUNC_IMPL(__imp__sub_832AB230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-6412
	r31.s64 = r11.s64 + -6412;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832ab290
	if (cr6.eq) goto loc_832AB290;
loc_832AB274:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x832ab274
	if (!cr6.eq) goto loc_832AB274;
loc_832AB290:
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_832AB2B8"))) PPC_WEAK_FUNC(sub_832AB2B8);
PPC_FUNC_IMPL(__imp__sub_832AB2B8) {
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
	// addi r31,r11,-6400
	r31.s64 = r11.s64 + -6400;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ab2e0
	if (cr6.eq) goto loc_832AB2E0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB2E0:
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

__attribute__((alias("__imp__sub_832AB310"))) PPC_WEAK_FUNC(sub_832AB310);
PPC_FUNC_IMPL(__imp__sub_832AB310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6384
	ctx.r3.s64 = r11.s64 + -6384;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB320"))) PPC_WEAK_FUNC(sub_832AB320);
PPC_FUNC_IMPL(__imp__sub_832AB320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6380
	ctx.r3.s64 = r11.s64 + -6380;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB330"))) PPC_WEAK_FUNC(sub_832AB330);
PPC_FUNC_IMPL(__imp__sub_832AB330) {
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,-6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -6376);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-6376(r31)
	PPC_STORE_U32(r31.u32 + -6376, r11.u32);
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

__attribute__((alias("__imp__sub_832AB368"))) PPC_WEAK_FUNC(sub_832AB368);
PPC_FUNC_IMPL(__imp__sub_832AB368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6372
	ctx.r3.s64 = r11.s64 + -6372;
	// b 0x823b0aa8
	sub_823B0AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB378"))) PPC_WEAK_FUNC(sub_832AB378);
PPC_FUNC_IMPL(__imp__sub_832AB378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6360
	ctx.r3.s64 = r11.s64 + -6360;
	// b 0x823b0aa8
	sub_823B0AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB388"))) PPC_WEAK_FUNC(sub_832AB388);
PPC_FUNC_IMPL(__imp__sub_832AB388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6348
	ctx.r3.s64 = r11.s64 + -6348;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB398"))) PPC_WEAK_FUNC(sub_832AB398);
PPC_FUNC_IMPL(__imp__sub_832AB398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6344
	ctx.r3.s64 = r11.s64 + -6344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB3A8"))) PPC_WEAK_FUNC(sub_832AB3A8);
PPC_FUNC_IMPL(__imp__sub_832AB3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6320
	ctx.r3.s64 = r11.s64 + -6320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB3B8"))) PPC_WEAK_FUNC(sub_832AB3B8);
PPC_FUNC_IMPL(__imp__sub_832AB3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-6316
	ctx.r3.s64 = r11.s64 + -6316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB3C8"))) PPC_WEAK_FUNC(sub_832AB3C8);
PPC_FUNC_IMPL(__imp__sub_832AB3C8) {
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
	// li r29,14
	r29.s64 = 14;
	// addi r11,r11,-6312
	r11.s64 = r11.s64 + -6312;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,248
	r31.s64 = r11.s64 + 248;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
loc_832AB3F0:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_832AB400:
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
	// bne 0x832ab400
	if (!cr0.eq) goto loc_832AB400;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_832AB42C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x832ab42c
	if (!cr0.eq) goto loc_832AB42C;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_832AB458:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x832ab458
	if (!cr0.eq) goto loc_832AB458;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r28.u32);
	// bge 0x832ab3f0
	if (!cr0.lt) goto loc_832AB3F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AB488"))) PPC_WEAK_FUNC(sub_832AB488);
PPC_FUNC_IMPL(__imp__sub_832AB488) {
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
	// li r29,193
	r29.s64 = 193;
	// addi r11,r11,-6072
	r11.s64 = r11.s64 + -6072;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,3112
	r31.s64 = r11.s64 + 3112;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r30,r11,28344
	r30.s64 = r11.s64 + 28344;
loc_832AB4B0:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_832AB4C0:
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
	// bne 0x832ab4c0
	if (!cr0.eq) goto loc_832AB4C0;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_832AB4EC:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x832ab4ec
	if (!cr0.eq) goto loc_832AB4EC;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_832AB518:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x832ab518
	if (!cr0.eq) goto loc_832AB518;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r28.u32);
	// bge 0x832ab4b0
	if (!cr0.lt) goto loc_832AB4B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AB548"))) PPC_WEAK_FUNC(sub_832AB548);
PPC_FUNC_IMPL(__imp__sub_832AB548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB550"))) PPC_WEAK_FUNC(sub_832AB550);
PPC_FUNC_IMPL(__imp__sub_832AB550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB558"))) PPC_WEAK_FUNC(sub_832AB558);
PPC_FUNC_IMPL(__imp__sub_832AB558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB560"))) PPC_WEAK_FUNC(sub_832AB560);
PPC_FUNC_IMPL(__imp__sub_832AB560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB568"))) PPC_WEAK_FUNC(sub_832AB568);
PPC_FUNC_IMPL(__imp__sub_832AB568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2952
	ctx.r3.s64 = r11.s64 + -2952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB578"))) PPC_WEAK_FUNC(sub_832AB578);
PPC_FUNC_IMPL(__imp__sub_832AB578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2948
	ctx.r3.s64 = r11.s64 + -2948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB588"))) PPC_WEAK_FUNC(sub_832AB588);
PPC_FUNC_IMPL(__imp__sub_832AB588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2944
	ctx.r3.s64 = r11.s64 + -2944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB598"))) PPC_WEAK_FUNC(sub_832AB598);
PPC_FUNC_IMPL(__imp__sub_832AB598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2940
	ctx.r3.s64 = r11.s64 + -2940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB5A8"))) PPC_WEAK_FUNC(sub_832AB5A8);
PPC_FUNC_IMPL(__imp__sub_832AB5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2936
	ctx.r3.s64 = r11.s64 + -2936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB5B8"))) PPC_WEAK_FUNC(sub_832AB5B8);
PPC_FUNC_IMPL(__imp__sub_832AB5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2932
	ctx.r3.s64 = r11.s64 + -2932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB5C8"))) PPC_WEAK_FUNC(sub_832AB5C8);
PPC_FUNC_IMPL(__imp__sub_832AB5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2928
	ctx.r3.s64 = r11.s64 + -2928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB5D8"))) PPC_WEAK_FUNC(sub_832AB5D8);
PPC_FUNC_IMPL(__imp__sub_832AB5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2924
	ctx.r3.s64 = r11.s64 + -2924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB5E8"))) PPC_WEAK_FUNC(sub_832AB5E8);
PPC_FUNC_IMPL(__imp__sub_832AB5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2920
	ctx.r3.s64 = r11.s64 + -2920;
	// b 0x82a49878
	sub_82A49878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB5F8"))) PPC_WEAK_FUNC(sub_832AB5F8);
PPC_FUNC_IMPL(__imp__sub_832AB5F8) {
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
	// addi r31,r11,-2904
	r31.s64 = r11.s64 + -2904;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ab620
	if (cr6.eq) goto loc_832AB620;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB620:
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

__attribute__((alias("__imp__sub_832AB650"))) PPC_WEAK_FUNC(sub_832AB650);
PPC_FUNC_IMPL(__imp__sub_832AB650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2888
	ctx.r3.s64 = r11.s64 + -2888;
	// b 0x82343b10
	sub_82343B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB660"))) PPC_WEAK_FUNC(sub_832AB660);
PPC_FUNC_IMPL(__imp__sub_832AB660) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-2872
	r31.s64 = r11.s64 + -2872;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_832AB6B0"))) PPC_WEAK_FUNC(sub_832AB6B0);
PPC_FUNC_IMPL(__imp__sub_832AB6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,-2856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832AB6D0"))) PPC_WEAK_FUNC(sub_832AB6D0);
PPC_FUNC_IMPL(__imp__sub_832AB6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB6D8"))) PPC_WEAK_FUNC(sub_832AB6D8);
PPC_FUNC_IMPL(__imp__sub_832AB6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2852(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2852);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab70c
	if (cr6.eq) goto loc_832AB70C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275238
	sub_82275238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB70C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2852(r30)
	PPC_STORE_U32(r30.u32 + -2852, r11.u32);
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

__attribute__((alias("__imp__sub_832AB730"))) PPC_WEAK_FUNC(sub_832AB730);
PPC_FUNC_IMPL(__imp__sub_832AB730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2848(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2848);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab764
	if (cr6.eq) goto loc_832AB764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB764:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2848(r30)
	PPC_STORE_U32(r30.u32 + -2848, r11.u32);
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

__attribute__((alias("__imp__sub_832AB788"))) PPC_WEAK_FUNC(sub_832AB788);
PPC_FUNC_IMPL(__imp__sub_832AB788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2844(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2844);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab7bc
	if (cr6.eq) goto loc_832AB7BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB7BC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2844(r30)
	PPC_STORE_U32(r30.u32 + -2844, r11.u32);
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

__attribute__((alias("__imp__sub_832AB7E0"))) PPC_WEAK_FUNC(sub_832AB7E0);
PPC_FUNC_IMPL(__imp__sub_832AB7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2840(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2840);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab814
	if (cr6.eq) goto loc_832AB814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB814:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2840(r30)
	PPC_STORE_U32(r30.u32 + -2840, r11.u32);
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

__attribute__((alias("__imp__sub_832AB838"))) PPC_WEAK_FUNC(sub_832AB838);
PPC_FUNC_IMPL(__imp__sub_832AB838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2836(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2836);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab86c
	if (cr6.eq) goto loc_832AB86C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB86C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2836(r30)
	PPC_STORE_U32(r30.u32 + -2836, r11.u32);
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

__attribute__((alias("__imp__sub_832AB890"))) PPC_WEAK_FUNC(sub_832AB890);
PPC_FUNC_IMPL(__imp__sub_832AB890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2832(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab8c4
	if (cr6.eq) goto loc_832AB8C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB8C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2832(r30)
	PPC_STORE_U32(r30.u32 + -2832, r11.u32);
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

__attribute__((alias("__imp__sub_832AB8E8"))) PPC_WEAK_FUNC(sub_832AB8E8);
PPC_FUNC_IMPL(__imp__sub_832AB8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2828(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2828);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832ab91c
	if (cr6.eq) goto loc_832AB91C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d7d0
	sub_8229D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AB91C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2828(r30)
	PPC_STORE_U32(r30.u32 + -2828, r11.u32);
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

__attribute__((alias("__imp__sub_832AB940"))) PPC_WEAK_FUNC(sub_832AB940);
PPC_FUNC_IMPL(__imp__sub_832AB940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,-2824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -2824);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ab9a0
	if (cr6.eq) goto loc_832AB9A0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AB964:
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
	// bne 0x832ab964
	if (!cr0.eq) goto loc_832AB964;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ab998
	if (!cr6.eq) goto loc_832AB998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AB998:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2824(r31)
	PPC_STORE_U32(r31.u32 + -2824, r11.u32);
loc_832AB9A0:
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

__attribute__((alias("__imp__sub_832AB9B8"))) PPC_WEAK_FUNC(sub_832AB9B8);
PPC_FUNC_IMPL(__imp__sub_832AB9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB9C0"))) PPC_WEAK_FUNC(sub_832AB9C0);
PPC_FUNC_IMPL(__imp__sub_832AB9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2792
	ctx.r3.s64 = r11.s64 + -2792;
	// b 0x82a4a6f8
	sub_82A4A6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB9D0"))) PPC_WEAK_FUNC(sub_832AB9D0);
PPC_FUNC_IMPL(__imp__sub_832AB9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2784
	ctx.r3.s64 = r11.s64 + -2784;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB9E0"))) PPC_WEAK_FUNC(sub_832AB9E0);
PPC_FUNC_IMPL(__imp__sub_832AB9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2776
	ctx.r3.s64 = r11.s64 + -2776;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB9F0"))) PPC_WEAK_FUNC(sub_832AB9F0);
PPC_FUNC_IMPL(__imp__sub_832AB9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2768
	ctx.r3.s64 = r11.s64 + -2768;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABA00"))) PPC_WEAK_FUNC(sub_832ABA00);
PPC_FUNC_IMPL(__imp__sub_832ABA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2760
	ctx.r3.s64 = r11.s64 + -2760;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABA10"))) PPC_WEAK_FUNC(sub_832ABA10);
PPC_FUNC_IMPL(__imp__sub_832ABA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2752
	ctx.r3.s64 = r11.s64 + -2752;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABA20"))) PPC_WEAK_FUNC(sub_832ABA20);
PPC_FUNC_IMPL(__imp__sub_832ABA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2744(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2744);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832aba54
	if (cr6.eq) goto loc_832ABA54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a67950
	sub_82A67950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABA54:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2744(r30)
	PPC_STORE_U32(r30.u32 + -2744, r11.u32);
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

__attribute__((alias("__imp__sub_832ABA78"))) PPC_WEAK_FUNC(sub_832ABA78);
PPC_FUNC_IMPL(__imp__sub_832ABA78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-22472
	r30.s64 = r31.s64 + -22472;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-22472(r31)
	PPC_STORE_U32(r31.u32 + -22472, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-22472(r31)
	PPC_STORE_U32(r31.u32 + -22472, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832ABAD8"))) PPC_WEAK_FUNC(sub_832ABAD8);
PPC_FUNC_IMPL(__imp__sub_832ABAD8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-22464
	r30.s64 = r31.s64 + -22464;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-22464(r31)
	PPC_STORE_U32(r31.u32 + -22464, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-22464(r31)
	PPC_STORE_U32(r31.u32 + -22464, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832ABB38"))) PPC_WEAK_FUNC(sub_832ABB38);
PPC_FUNC_IMPL(__imp__sub_832ABB38) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-22456
	r30.s64 = r31.s64 + -22456;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-22456(r31)
	PPC_STORE_U32(r31.u32 + -22456, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-22456(r31)
	PPC_STORE_U32(r31.u32 + -22456, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832ABB98"))) PPC_WEAK_FUNC(sub_832ABB98);
PPC_FUNC_IMPL(__imp__sub_832ABB98) {
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-22448
	r31.s64 = r11.s64 + -22448;
	// addi r11,r10,7532
	r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abbdc
	if (cr6.eq) goto loc_832ABBDC;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_832ABBDC:
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

__attribute__((alias("__imp__sub_832ABBF0"))) PPC_WEAK_FUNC(sub_832ABBF0);
PPC_FUNC_IMPL(__imp__sub_832ABBF0) {
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-22436
	r31.s64 = r11.s64 + -22436;
	// addi r11,r10,7532
	r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abc34
	if (cr6.eq) goto loc_832ABC34;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_832ABC34:
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

__attribute__((alias("__imp__sub_832ABC48"))) PPC_WEAK_FUNC(sub_832ABC48);
PPC_FUNC_IMPL(__imp__sub_832ABC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22424
	ctx.r3.s64 = r11.s64 + -22424;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABC58"))) PPC_WEAK_FUNC(sub_832ABC58);
PPC_FUNC_IMPL(__imp__sub_832ABC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22388
	ctx.r3.s64 = r11.s64 + -22388;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABC68"))) PPC_WEAK_FUNC(sub_832ABC68);
PPC_FUNC_IMPL(__imp__sub_832ABC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22352
	ctx.r3.s64 = r11.s64 + -22352;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABC78"))) PPC_WEAK_FUNC(sub_832ABC78);
PPC_FUNC_IMPL(__imp__sub_832ABC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22316
	ctx.r3.s64 = r11.s64 + -22316;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABC88"))) PPC_WEAK_FUNC(sub_832ABC88);
PPC_FUNC_IMPL(__imp__sub_832ABC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22280
	ctx.r3.s64 = r11.s64 + -22280;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABC98"))) PPC_WEAK_FUNC(sub_832ABC98);
PPC_FUNC_IMPL(__imp__sub_832ABC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22244
	ctx.r3.s64 = r11.s64 + -22244;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABCA8"))) PPC_WEAK_FUNC(sub_832ABCA8);
PPC_FUNC_IMPL(__imp__sub_832ABCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2736
	ctx.r3.s64 = r11.s64 + -2736;
	// b 0x82a46df8
	sub_82A46DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABCB8"))) PPC_WEAK_FUNC(sub_832ABCB8);
PPC_FUNC_IMPL(__imp__sub_832ABCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2592
	ctx.r3.s64 = r11.s64 + -2592;
	// b 0x82a46df8
	sub_82A46DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABCC8"))) PPC_WEAK_FUNC(sub_832ABCC8);
PPC_FUNC_IMPL(__imp__sub_832ABCC8) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,-2448
	r11.s64 = r11.s64 + -2448;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,68
	r31.s64 = r11.s64 + 68;
loc_832ABCE8:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abcfc
	if (cr6.eq) goto loc_832ABCFC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABCFC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bge 0x832abce8
	if (!cr0.lt) goto loc_832ABCE8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_832ABD18"))) PPC_WEAK_FUNC(sub_832ABD18);
PPC_FUNC_IMPL(__imp__sub_832ABD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,-2740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -2740);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abd4c
	if (cr6.eq) goto loc_832ABD4C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ABD4C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2740(r31)
	PPC_STORE_U32(r31.u32 + -2740, r11.u32);
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

__attribute__((alias("__imp__sub_832ABD68"))) PPC_WEAK_FUNC(sub_832ABD68);
PPC_FUNC_IMPL(__imp__sub_832ABD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// li r29,3
	r29.s64 = 3;
	// addi r11,r11,-2384
	r11.s64 = r11.s64 + -2384;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
loc_832ABD88:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832abdac
	if (cr6.eq) goto loc_832ABDAC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABDAC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// bge 0x832abd88
	if (!cr0.lt) goto loc_832ABD88;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832ABDC0"))) PPC_WEAK_FUNC(sub_832ABDC0);
PPC_FUNC_IMPL(__imp__sub_832ABDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2368(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2368);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832abe1c
	if (cr6.eq) goto loc_832ABE1C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abdf4
	if (cr6.eq) goto loc_832ABDF4;
	// bl 0x82b38478
	sub_82B38478(ctx, base);
loc_832ABDF4:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8264edf8
	sub_8264EDF8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8264edf8
	sub_8264EDF8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82a6c450
	sub_82A6C450(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82a6c450
	sub_82A6C450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABE1C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2368(r30)
	PPC_STORE_U32(r30.u32 + -2368, r11.u32);
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

__attribute__((alias("__imp__sub_832ABE40"))) PPC_WEAK_FUNC(sub_832ABE40);
PPC_FUNC_IMPL(__imp__sub_832ABE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r28,-31926
	r28.s64 = -2092302336;
	// lwz r30,-2364(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + -2364);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x832abeb4
	if (cr6.eq) goto loc_832ABEB4;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r31,r30,36
	r31.s64 = r30.s64 + 36;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832abe80
	if (cr6.eq) goto loc_832ABE80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82a965c0
	sub_82A965C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABE80:
	// li r29,0
	r29.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// bl 0x82a6c450
	sub_82A6C450(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822f6990
	sub_822F6990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// stw r29,-2364(r28)
	PPC_STORE_U32(r28.u32 + -2364, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_832ABEB4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2364(r28)
	PPC_STORE_U32(r28.u32 + -2364, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832ABEC8"))) PPC_WEAK_FUNC(sub_832ABEC8);
PPC_FUNC_IMPL(__imp__sub_832ABEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31926
	r30.s64 = -2092302336;
	// lwz r31,-2360(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -2360);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x832abf24
	if (cr6.eq) goto loc_832ABF24;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abefc
	if (cr6.eq) goto loc_832ABEFC;
	// bl 0x82b38478
	sub_82B38478(ctx, base);
loc_832ABEFC:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8264edf8
	sub_8264EDF8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8264edf8
	sub_8264EDF8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82a6c450
	sub_82A6C450(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82a6c450
	sub_82A6C450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABF24:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2360(r30)
	PPC_STORE_U32(r30.u32 + -2360, r11.u32);
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

__attribute__((alias("__imp__sub_832ABF48"))) PPC_WEAK_FUNC(sub_832ABF48);
PPC_FUNC_IMPL(__imp__sub_832ABF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2352
	ctx.r3.s64 = r11.s64 + -2352;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABF58"))) PPC_WEAK_FUNC(sub_832ABF58);
PPC_FUNC_IMPL(__imp__sub_832ABF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2348
	ctx.r3.s64 = r11.s64 + -2348;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABF68"))) PPC_WEAK_FUNC(sub_832ABF68);
PPC_FUNC_IMPL(__imp__sub_832ABF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2344
	ctx.r3.s64 = r11.s64 + -2344;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABF78"))) PPC_WEAK_FUNC(sub_832ABF78);
PPC_FUNC_IMPL(__imp__sub_832ABF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2340
	ctx.r3.s64 = r11.s64 + -2340;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABF88"))) PPC_WEAK_FUNC(sub_832ABF88);
PPC_FUNC_IMPL(__imp__sub_832ABF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2320
	ctx.r3.s64 = r11.s64 + -2320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABF98"))) PPC_WEAK_FUNC(sub_832ABF98);
PPC_FUNC_IMPL(__imp__sub_832ABF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2316
	ctx.r3.s64 = r11.s64 + -2316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABFA8"))) PPC_WEAK_FUNC(sub_832ABFA8);
PPC_FUNC_IMPL(__imp__sub_832ABFA8) {
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
	// addi r31,r11,-2240
	r31.s64 = r11.s64 + -2240;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abfd0
	if (cr6.eq) goto loc_832ABFD0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832ABFD0:
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

__attribute__((alias("__imp__sub_832AC000"))) PPC_WEAK_FUNC(sub_832AC000);
PPC_FUNC_IMPL(__imp__sub_832AC000) {
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
	// addi r31,r11,-2224
	r31.s64 = r11.s64 + -2224;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac028
	if (cr6.eq) goto loc_832AC028;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC028:
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

__attribute__((alias("__imp__sub_832AC058"))) PPC_WEAK_FUNC(sub_832AC058);
PPC_FUNC_IMPL(__imp__sub_832AC058) {
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
	// addi r31,r11,-2208
	r31.s64 = r11.s64 + -2208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac080
	if (cr6.eq) goto loc_832AC080;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC080:
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

__attribute__((alias("__imp__sub_832AC0B0"))) PPC_WEAK_FUNC(sub_832AC0B0);
PPC_FUNC_IMPL(__imp__sub_832AC0B0) {
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
	// addi r31,r11,-2192
	r31.s64 = r11.s64 + -2192;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac0d8
	if (cr6.eq) goto loc_832AC0D8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC0D8:
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

__attribute__((alias("__imp__sub_832AC108"))) PPC_WEAK_FUNC(sub_832AC108);
PPC_FUNC_IMPL(__imp__sub_832AC108) {
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
	// addi r31,r11,-2312
	r31.s64 = r11.s64 + -2312;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac130
	if (cr6.eq) goto loc_832AC130;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC130:
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

__attribute__((alias("__imp__sub_832AC160"))) PPC_WEAK_FUNC(sub_832AC160);
PPC_FUNC_IMPL(__imp__sub_832AC160) {
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
	// addi r31,r11,-2176
	r31.s64 = r11.s64 + -2176;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac188
	if (cr6.eq) goto loc_832AC188;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC188:
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

__attribute__((alias("__imp__sub_832AC1B8"))) PPC_WEAK_FUNC(sub_832AC1B8);
PPC_FUNC_IMPL(__imp__sub_832AC1B8) {
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
	// addi r31,r11,-2160
	r31.s64 = r11.s64 + -2160;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac1e0
	if (cr6.eq) goto loc_832AC1E0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC1E0:
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

__attribute__((alias("__imp__sub_832AC210"))) PPC_WEAK_FUNC(sub_832AC210);
PPC_FUNC_IMPL(__imp__sub_832AC210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2292
	ctx.r3.s64 = r11.s64 + -2292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC220"))) PPC_WEAK_FUNC(sub_832AC220);
PPC_FUNC_IMPL(__imp__sub_832AC220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2144
	ctx.r3.s64 = r11.s64 + -2144;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC230"))) PPC_WEAK_FUNC(sub_832AC230);
PPC_FUNC_IMPL(__imp__sub_832AC230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2140
	ctx.r3.s64 = r11.s64 + -2140;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC240"))) PPC_WEAK_FUNC(sub_832AC240);
PPC_FUNC_IMPL(__imp__sub_832AC240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2136
	ctx.r3.s64 = r11.s64 + -2136;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC250"))) PPC_WEAK_FUNC(sub_832AC250);
PPC_FUNC_IMPL(__imp__sub_832AC250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2132
	ctx.r3.s64 = r11.s64 + -2132;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC260"))) PPC_WEAK_FUNC(sub_832AC260);
PPC_FUNC_IMPL(__imp__sub_832AC260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,-2128
	r30.s64 = r11.s64 + -2128;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// beq cr6,0x832ac2d0
	if (cr6.eq) goto loc_832AC2D0;
loc_832AC2A0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac2b8
	if (cr6.eq) goto loc_832AC2B8;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_832AC2B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x832ac2a0
	if (!cr6.eq) goto loc_832AC2A0;
loc_832AC2D0:
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AC2E8"))) PPC_WEAK_FUNC(sub_832AC2E8);
PPC_FUNC_IMPL(__imp__sub_832AC2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2116
	ctx.r3.s64 = r11.s64 + -2116;
	// b 0x82a51ac0
	sub_82A51AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC2F8"))) PPC_WEAK_FUNC(sub_832AC2F8);
PPC_FUNC_IMPL(__imp__sub_832AC2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-2104
	r31.s64 = r11.s64 + -2104;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832ac358
	if (cr6.eq) goto loc_832AC358;
loc_832AC33C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x832ac33c
	if (!cr6.eq) goto loc_832AC33C;
loc_832AC358:
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_832AC380"))) PPC_WEAK_FUNC(sub_832AC380);
PPC_FUNC_IMPL(__imp__sub_832AC380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22136
	ctx.r3.s64 = r11.s64 + -22136;
	// b 0x82a1dee8
	sub_82A1DEE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC390"))) PPC_WEAK_FUNC(sub_832AC390);
PPC_FUNC_IMPL(__imp__sub_832AC390) {
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
	// addi r31,r11,-2092
	r31.s64 = r11.s64 + -2092;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac3b8
	if (cr6.eq) goto loc_832AC3B8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC3B8:
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

__attribute__((alias("__imp__sub_832AC3E8"))) PPC_WEAK_FUNC(sub_832AC3E8);
PPC_FUNC_IMPL(__imp__sub_832AC3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,-2076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -2076);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac41c
	if (cr6.eq) goto loc_832AC41C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AC41C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2076(r31)
	PPC_STORE_U32(r31.u32 + -2076, r11.u32);
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

__attribute__((alias("__imp__sub_832AC438"))) PPC_WEAK_FUNC(sub_832AC438);
PPC_FUNC_IMPL(__imp__sub_832AC438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r28,-31926
	r28.s64 = -2092302336;
	// lwz r29,-2072(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + -2072);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x832ac478
	if (cr6.eq) goto loc_832AC478;
	// addi r31,r29,256
	r31.s64 = r29.s64 + 256;
	// li r30,31
	r30.s64 = 31;
loc_832AC45C:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ac45c
	if (!cr0.lt) goto loc_832AC45C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC478:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2072(r28)
	PPC_STORE_U32(r28.u32 + -2072, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AC488"))) PPC_WEAK_FUNC(sub_832AC488);
PPC_FUNC_IMPL(__imp__sub_832AC488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,-2068(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2068);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832AC4A8"))) PPC_WEAK_FUNC(sub_832AC4A8);
PPC_FUNC_IMPL(__imp__sub_832AC4A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC4B0"))) PPC_WEAK_FUNC(sub_832AC4B0);
PPC_FUNC_IMPL(__imp__sub_832AC4B0) {
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
	// addi r31,r11,-2064
	r31.s64 = r11.s64 + -2064;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac4d8
	if (cr6.eq) goto loc_832AC4D8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC4D8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// beq cr6,0x832ac500
	if (cr6.eq) goto loc_832AC500;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC500:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x832ac528
	if (cr6.eq) goto loc_832AC528;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC528:
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

__attribute__((alias("__imp__sub_832AC558"))) PPC_WEAK_FUNC(sub_832AC558);
PPC_FUNC_IMPL(__imp__sub_832AC558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC560"))) PPC_WEAK_FUNC(sub_832AC560);
PPC_FUNC_IMPL(__imp__sub_832AC560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2012
	ctx.r3.s64 = r11.s64 + -2012;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC570"))) PPC_WEAK_FUNC(sub_832AC570);
PPC_FUNC_IMPL(__imp__sub_832AC570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2008
	ctx.r3.s64 = r11.s64 + -2008;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC580"))) PPC_WEAK_FUNC(sub_832AC580);
PPC_FUNC_IMPL(__imp__sub_832AC580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-2004
	ctx.r3.s64 = r11.s64 + -2004;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC590"))) PPC_WEAK_FUNC(sub_832AC590);
PPC_FUNC_IMPL(__imp__sub_832AC590) {
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
	// addi r31,r11,-2000
	r31.s64 = r11.s64 + -2000;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac5b8
	if (cr6.eq) goto loc_832AC5B8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AC5B8:
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

__attribute__((alias("__imp__sub_832AC5E8"))) PPC_WEAK_FUNC(sub_832AC5E8);
PPC_FUNC_IMPL(__imp__sub_832AC5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1984
	ctx.r3.s64 = r11.s64 + -1984;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC5F8"))) PPC_WEAK_FUNC(sub_832AC5F8);
PPC_FUNC_IMPL(__imp__sub_832AC5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1980
	ctx.r3.s64 = r11.s64 + -1980;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC608"))) PPC_WEAK_FUNC(sub_832AC608);
PPC_FUNC_IMPL(__imp__sub_832AC608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1976
	ctx.r3.s64 = r11.s64 + -1976;
	// b 0x82a581d0
	sub_82A581D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC618"))) PPC_WEAK_FUNC(sub_832AC618);
PPC_FUNC_IMPL(__imp__sub_832AC618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-1964
	r31.s64 = r11.s64 + -1964;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x832ac67c
	if (cr6.eq) goto loc_832AC67C;
loc_832AC654:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82518078
	sub_82518078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x832ac654
	if (!cr6.eq) goto loc_832AC654;
loc_832AC67C:
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_832AC690"))) PPC_WEAK_FUNC(sub_832AC690);
PPC_FUNC_IMPL(__imp__sub_832AC690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1952
	ctx.r3.s64 = r11.s64 + -1952;
	// b 0x82a58670
	sub_82A58670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC6A0"))) PPC_WEAK_FUNC(sub_832AC6A0);
PPC_FUNC_IMPL(__imp__sub_832AC6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1936
	ctx.r3.s64 = r11.s64 + -1936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC6B0"))) PPC_WEAK_FUNC(sub_832AC6B0);
PPC_FUNC_IMPL(__imp__sub_832AC6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1932
	ctx.r3.s64 = r11.s64 + -1932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC6C0"))) PPC_WEAK_FUNC(sub_832AC6C0);
PPC_FUNC_IMPL(__imp__sub_832AC6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1928
	ctx.r3.s64 = r11.s64 + -1928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC6D0"))) PPC_WEAK_FUNC(sub_832AC6D0);
PPC_FUNC_IMPL(__imp__sub_832AC6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1924
	ctx.r3.s64 = r11.s64 + -1924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC6E0"))) PPC_WEAK_FUNC(sub_832AC6E0);
PPC_FUNC_IMPL(__imp__sub_832AC6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,-1920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC6F4"))) PPC_WEAK_FUNC(sub_832AC6F4);
PPC_FUNC_IMPL(__imp__sub_832AC6F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC6F8"))) PPC_WEAK_FUNC(sub_832AC6F8);
PPC_FUNC_IMPL(__imp__sub_832AC6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1900
	ctx.r3.s64 = r11.s64 + -1900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC708"))) PPC_WEAK_FUNC(sub_832AC708);
PPC_FUNC_IMPL(__imp__sub_832AC708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-1896
	ctx.r3.s64 = r11.s64 + -1896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC718"))) PPC_WEAK_FUNC(sub_832AC718);
PPC_FUNC_IMPL(__imp__sub_832AC718) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-1892
	r31.s64 = r11.s64 + -1892;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a5e0d8
	sub_82A5E0D8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
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

__attribute__((alias("__imp__sub_832AC760"))) PPC_WEAK_FUNC(sub_832AC760);
PPC_FUNC_IMPL(__imp__sub_832AC760) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,49
	r30.s64 = 49;
	// addi r11,r11,-1840
	r11.s64 = r11.s64 + -1840;
	// addi r31,r11,4800
	r31.s64 = r11.s64 + 4800;
loc_832AC784:
	// addi r31,r31,-96
	r31.s64 = r31.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a5c9e0
	sub_82A5C9E0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ac784
	if (!cr0.lt) goto loc_832AC784;
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

__attribute__((alias("__imp__sub_832AC7B0"))) PPC_WEAK_FUNC(sub_832AC7B0);
PPC_FUNC_IMPL(__imp__sub_832AC7B0) {
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,2960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2960);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac7dc
	if (cr6.eq) goto loc_832AC7DC;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,2960(r31)
	PPC_STORE_U32(r31.u32 + 2960, r11.u32);
loc_832AC7DC:
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

__attribute__((alias("__imp__sub_832AC7F0"))) PPC_WEAK_FUNC(sub_832AC7F0);
PPC_FUNC_IMPL(__imp__sub_832AC7F0) {
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lwz r3,-22072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -22072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac81c
	if (cr6.eq) goto loc_832AC81C;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-22072(r31)
	PPC_STORE_U32(r31.u32 + -22072, r11.u32);
loc_832AC81C:
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

__attribute__((alias("__imp__sub_832AC830"))) PPC_WEAK_FUNC(sub_832AC830);
PPC_FUNC_IMPL(__imp__sub_832AC830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,-1880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1880);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC844"))) PPC_WEAK_FUNC(sub_832AC844);
PPC_FUNC_IMPL(__imp__sub_832AC844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC848"))) PPC_WEAK_FUNC(sub_832AC848);
PPC_FUNC_IMPL(__imp__sub_832AC848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,-1860(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1860);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC85C"))) PPC_WEAK_FUNC(sub_832AC85C);
PPC_FUNC_IMPL(__imp__sub_832AC85C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AC860"))) PPC_WEAK_FUNC(sub_832AC860);
PPC_FUNC_IMPL(__imp__sub_832AC860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,2972
	ctx.r3.s64 = r11.s64 + 2972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC870"))) PPC_WEAK_FUNC(sub_832AC870);
PPC_FUNC_IMPL(__imp__sub_832AC870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,2976
	ctx.r3.s64 = r11.s64 + 2976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC880"))) PPC_WEAK_FUNC(sub_832AC880);
PPC_FUNC_IMPL(__imp__sub_832AC880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,2980
	r11.s64 = r11.s64 + 2980;
	// li r30,2
	r30.s64 = 2;
	// addi r31,r11,24
	r31.s64 = r11.s64 + 24;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r29,r10,7552
	r29.s64 = ctx.r10.s64 + 7552;
	// addi r28,r11,7536
	r28.s64 = r11.s64 + 7536;
loc_832AC8AC:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ac8ac
	if (!cr0.lt) goto loc_832AC8AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AC8D8"))) PPC_WEAK_FUNC(sub_832AC8D8);
PPC_FUNC_IMPL(__imp__sub_832AC8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,3168
	r11.s64 = r11.s64 + 3168;
	// li r30,2
	r30.s64 = 2;
	// addi r31,r11,24
	r31.s64 = r11.s64 + 24;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r29,r10,7552
	r29.s64 = ctx.r10.s64 + 7552;
	// addi r28,r11,7536
	r28.s64 = r11.s64 + 7536;
loc_832AC904:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ac904
	if (!cr0.lt) goto loc_832AC904;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AC930"))) PPC_WEAK_FUNC(sub_832AC930);
PPC_FUNC_IMPL(__imp__sub_832AC930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3192
	ctx.r3.s64 = r11.s64 + 3192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC940"))) PPC_WEAK_FUNC(sub_832AC940);
PPC_FUNC_IMPL(__imp__sub_832AC940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3196
	ctx.r3.s64 = r11.s64 + 3196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC950"))) PPC_WEAK_FUNC(sub_832AC950);
PPC_FUNC_IMPL(__imp__sub_832AC950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3200
	ctx.r3.s64 = r11.s64 + 3200;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC960"))) PPC_WEAK_FUNC(sub_832AC960);
PPC_FUNC_IMPL(__imp__sub_832AC960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3204
	ctx.r3.s64 = r11.s64 + 3204;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC970"))) PPC_WEAK_FUNC(sub_832AC970);
PPC_FUNC_IMPL(__imp__sub_832AC970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3208
	ctx.r3.s64 = r11.s64 + 3208;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC980"))) PPC_WEAK_FUNC(sub_832AC980);
PPC_FUNC_IMPL(__imp__sub_832AC980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3212
	ctx.r3.s64 = r11.s64 + 3212;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC990"))) PPC_WEAK_FUNC(sub_832AC990);
PPC_FUNC_IMPL(__imp__sub_832AC990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3216
	ctx.r3.s64 = r11.s64 + 3216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9A0"))) PPC_WEAK_FUNC(sub_832AC9A0);
PPC_FUNC_IMPL(__imp__sub_832AC9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3220
	ctx.r3.s64 = r11.s64 + 3220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9B0"))) PPC_WEAK_FUNC(sub_832AC9B0);
PPC_FUNC_IMPL(__imp__sub_832AC9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3224
	ctx.r3.s64 = r11.s64 + 3224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9C0"))) PPC_WEAK_FUNC(sub_832AC9C0);
PPC_FUNC_IMPL(__imp__sub_832AC9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3228
	ctx.r3.s64 = r11.s64 + 3228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9D0"))) PPC_WEAK_FUNC(sub_832AC9D0);
PPC_FUNC_IMPL(__imp__sub_832AC9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3232
	ctx.r3.s64 = r11.s64 + 3232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9E0"))) PPC_WEAK_FUNC(sub_832AC9E0);
PPC_FUNC_IMPL(__imp__sub_832AC9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3236
	ctx.r3.s64 = r11.s64 + 3236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC9F0"))) PPC_WEAK_FUNC(sub_832AC9F0);
PPC_FUNC_IMPL(__imp__sub_832AC9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-22040
	ctx.r3.s64 = r11.s64 + -22040;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACA00"))) PPC_WEAK_FUNC(sub_832ACA00);
PPC_FUNC_IMPL(__imp__sub_832ACA00) {
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
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-22004
	r31.s64 = r11.s64 + -22004;
	// addi r11,r10,7532
	r11.s64 = ctx.r10.s64 + 7532;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aca44
	if (cr6.eq) goto loc_832ACA44;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_832ACA44:
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

__attribute__((alias("__imp__sub_832ACA58"))) PPC_WEAK_FUNC(sub_832ACA58);
PPC_FUNC_IMPL(__imp__sub_832ACA58) {
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,3312
	r31.s64 = r11.s64 + 3312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217c870
	sub_8217C870(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
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

__attribute__((alias("__imp__sub_832ACAA0"))) PPC_WEAK_FUNC(sub_832ACAA0);
PPC_FUNC_IMPL(__imp__sub_832ACAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3324
	ctx.r3.s64 = r11.s64 + 3324;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAB0"))) PPC_WEAK_FUNC(sub_832ACAB0);
PPC_FUNC_IMPL(__imp__sub_832ACAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3400
	ctx.r3.s64 = r11.s64 + 3400;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAC0"))) PPC_WEAK_FUNC(sub_832ACAC0);
PPC_FUNC_IMPL(__imp__sub_832ACAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3476
	ctx.r3.s64 = r11.s64 + 3476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAD0"))) PPC_WEAK_FUNC(sub_832ACAD0);
PPC_FUNC_IMPL(__imp__sub_832ACAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3480
	ctx.r3.s64 = r11.s64 + 3480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAE0"))) PPC_WEAK_FUNC(sub_832ACAE0);
PPC_FUNC_IMPL(__imp__sub_832ACAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3484
	ctx.r3.s64 = r11.s64 + 3484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACAF0"))) PPC_WEAK_FUNC(sub_832ACAF0);
PPC_FUNC_IMPL(__imp__sub_832ACAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3488
	ctx.r3.s64 = r11.s64 + 3488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACB00"))) PPC_WEAK_FUNC(sub_832ACB00);
PPC_FUNC_IMPL(__imp__sub_832ACB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-21992
	ctx.r3.s64 = r11.s64 + -21992;
	// b 0x821fbe60
	sub_821FBE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACB10"))) PPC_WEAK_FUNC(sub_832ACB10);
PPC_FUNC_IMPL(__imp__sub_832ACB10) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-21948
	r30.s64 = r31.s64 + -21948;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-21948(r31)
	PPC_STORE_U32(r31.u32 + -21948, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-21948(r31)
	PPC_STORE_U32(r31.u32 + -21948, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832ACB70"))) PPC_WEAK_FUNC(sub_832ACB70);
PPC_FUNC_IMPL(__imp__sub_832ACB70) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-21940
	r30.s64 = r31.s64 + -21940;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-21940(r31)
	PPC_STORE_U32(r31.u32 + -21940, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-21940(r31)
	PPC_STORE_U32(r31.u32 + -21940, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832ACBD0"))) PPC_WEAK_FUNC(sub_832ACBD0);
PPC_FUNC_IMPL(__imp__sub_832ACBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3500
	ctx.r3.s64 = r11.s64 + 3500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACBE0"))) PPC_WEAK_FUNC(sub_832ACBE0);
PPC_FUNC_IMPL(__imp__sub_832ACBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3504
	ctx.r3.s64 = r11.s64 + 3504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACBF0"))) PPC_WEAK_FUNC(sub_832ACBF0);
PPC_FUNC_IMPL(__imp__sub_832ACBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,12860
	ctx.r3.s64 = r11.s64 + 12860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACC00"))) PPC_WEAK_FUNC(sub_832ACC00);
PPC_FUNC_IMPL(__imp__sub_832ACC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3508
	ctx.r3.s64 = r11.s64 + 3508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACC10"))) PPC_WEAK_FUNC(sub_832ACC10);
PPC_FUNC_IMPL(__imp__sub_832ACC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3512
	ctx.r3.s64 = r11.s64 + 3512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACC20"))) PPC_WEAK_FUNC(sub_832ACC20);
PPC_FUNC_IMPL(__imp__sub_832ACC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3516);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832acc80
	if (cr6.eq) goto loc_832ACC80;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACC44:
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
	// bne 0x832acc44
	if (!cr0.eq) goto loc_832ACC44;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832acc78
	if (!cr6.eq) goto loc_832ACC78;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACC78:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3516(r31)
	PPC_STORE_U32(r31.u32 + 3516, r11.u32);
loc_832ACC80:
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

__attribute__((alias("__imp__sub_832ACC98"))) PPC_WEAK_FUNC(sub_832ACC98);
PPC_FUNC_IMPL(__imp__sub_832ACC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3520);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832accf8
	if (cr6.eq) goto loc_832ACCF8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACCBC:
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
	// bne 0x832accbc
	if (!cr0.eq) goto loc_832ACCBC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832accf0
	if (!cr6.eq) goto loc_832ACCF0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACCF0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3520(r31)
	PPC_STORE_U32(r31.u32 + 3520, r11.u32);
loc_832ACCF8:
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

__attribute__((alias("__imp__sub_832ACD10"))) PPC_WEAK_FUNC(sub_832ACD10);
PPC_FUNC_IMPL(__imp__sub_832ACD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3524);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832acd70
	if (cr6.eq) goto loc_832ACD70;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACD34:
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
	// bne 0x832acd34
	if (!cr0.eq) goto loc_832ACD34;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832acd68
	if (!cr6.eq) goto loc_832ACD68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACD68:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3524(r31)
	PPC_STORE_U32(r31.u32 + 3524, r11.u32);
loc_832ACD70:
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

__attribute__((alias("__imp__sub_832ACD88"))) PPC_WEAK_FUNC(sub_832ACD88);
PPC_FUNC_IMPL(__imp__sub_832ACD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3528);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832acde8
	if (cr6.eq) goto loc_832ACDE8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACDAC:
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
	// bne 0x832acdac
	if (!cr0.eq) goto loc_832ACDAC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832acde0
	if (!cr6.eq) goto loc_832ACDE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACDE0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3528(r31)
	PPC_STORE_U32(r31.u32 + 3528, r11.u32);
loc_832ACDE8:
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

__attribute__((alias("__imp__sub_832ACE00"))) PPC_WEAK_FUNC(sub_832ACE00);
PPC_FUNC_IMPL(__imp__sub_832ACE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ace60
	if (cr6.eq) goto loc_832ACE60;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACE24:
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
	// bne 0x832ace24
	if (!cr0.eq) goto loc_832ACE24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ace58
	if (!cr6.eq) goto loc_832ACE58;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACE58:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3532(r31)
	PPC_STORE_U32(r31.u32 + 3532, r11.u32);
loc_832ACE60:
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

__attribute__((alias("__imp__sub_832ACE78"))) PPC_WEAK_FUNC(sub_832ACE78);
PPC_FUNC_IMPL(__imp__sub_832ACE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aced8
	if (cr6.eq) goto loc_832ACED8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACE9C:
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
	// bne 0x832ace9c
	if (!cr0.eq) goto loc_832ACE9C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832aced0
	if (!cr6.eq) goto loc_832ACED0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACED0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3536(r31)
	PPC_STORE_U32(r31.u32 + 3536, r11.u32);
loc_832ACED8:
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

__attribute__((alias("__imp__sub_832ACEF0"))) PPC_WEAK_FUNC(sub_832ACEF0);
PPC_FUNC_IMPL(__imp__sub_832ACEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832acf50
	if (cr6.eq) goto loc_832ACF50;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACF14:
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
	// bne 0x832acf14
	if (!cr0.eq) goto loc_832ACF14;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832acf48
	if (!cr6.eq) goto loc_832ACF48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACF48:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3540(r31)
	PPC_STORE_U32(r31.u32 + 3540, r11.u32);
loc_832ACF50:
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

__attribute__((alias("__imp__sub_832ACF68"))) PPC_WEAK_FUNC(sub_832ACF68);
PPC_FUNC_IMPL(__imp__sub_832ACF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3544);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832acfc8
	if (cr6.eq) goto loc_832ACFC8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832ACF8C:
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
	// bne 0x832acf8c
	if (!cr0.eq) goto loc_832ACF8C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832acfc0
	if (!cr6.eq) goto loc_832ACFC0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832ACFC0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3544(r31)
	PPC_STORE_U32(r31.u32 + 3544, r11.u32);
loc_832ACFC8:
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

__attribute__((alias("__imp__sub_832ACFE0"))) PPC_WEAK_FUNC(sub_832ACFE0);
PPC_FUNC_IMPL(__imp__sub_832ACFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3548);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad040
	if (cr6.eq) goto loc_832AD040;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD004:
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
	// bne 0x832ad004
	if (!cr0.eq) goto loc_832AD004;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ad038
	if (!cr6.eq) goto loc_832AD038;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AD038:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3548(r31)
	PPC_STORE_U32(r31.u32 + 3548, r11.u32);
loc_832AD040:
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

__attribute__((alias("__imp__sub_832AD058"))) PPC_WEAK_FUNC(sub_832AD058);
PPC_FUNC_IMPL(__imp__sub_832AD058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-21932
	ctx.r3.s64 = r11.s64 + -21932;
	// b 0x82be5050
	sub_82BE5050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD068"))) PPC_WEAK_FUNC(sub_832AD068);
PPC_FUNC_IMPL(__imp__sub_832AD068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,3552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3552);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad0c8
	if (cr6.eq) goto loc_832AD0C8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD08C:
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
	// bne 0x832ad08c
	if (!cr0.eq) goto loc_832AD08C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ad0c0
	if (!cr6.eq) goto loc_832AD0C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AD0C0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,3552(r31)
	PPC_STORE_U32(r31.u32 + 3552, r11.u32);
loc_832AD0C8:
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

__attribute__((alias("__imp__sub_832AD0E0"))) PPC_WEAK_FUNC(sub_832AD0E0);
PPC_FUNC_IMPL(__imp__sub_832AD0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3584
	ctx.r3.s64 = r11.s64 + 3584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD0F0"))) PPC_WEAK_FUNC(sub_832AD0F0);
PPC_FUNC_IMPL(__imp__sub_832AD0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3588
	ctx.r3.s64 = r11.s64 + 3588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD100"))) PPC_WEAK_FUNC(sub_832AD100);
PPC_FUNC_IMPL(__imp__sub_832AD100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3592
	ctx.r3.s64 = r11.s64 + 3592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD110"))) PPC_WEAK_FUNC(sub_832AD110);
PPC_FUNC_IMPL(__imp__sub_832AD110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3596
	ctx.r3.s64 = r11.s64 + 3596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD120"))) PPC_WEAK_FUNC(sub_832AD120);
PPC_FUNC_IMPL(__imp__sub_832AD120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3600);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD134"))) PPC_WEAK_FUNC(sub_832AD134);
PPC_FUNC_IMPL(__imp__sub_832AD134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD138"))) PPC_WEAK_FUNC(sub_832AD138);
PPC_FUNC_IMPL(__imp__sub_832AD138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD14C"))) PPC_WEAK_FUNC(sub_832AD14C);
PPC_FUNC_IMPL(__imp__sub_832AD14C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD150"))) PPC_WEAK_FUNC(sub_832AD150);
PPC_FUNC_IMPL(__imp__sub_832AD150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3640);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD164"))) PPC_WEAK_FUNC(sub_832AD164);
PPC_FUNC_IMPL(__imp__sub_832AD164) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD168"))) PPC_WEAK_FUNC(sub_832AD168);
PPC_FUNC_IMPL(__imp__sub_832AD168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3660
	ctx.r3.s64 = r11.s64 + 3660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD178"))) PPC_WEAK_FUNC(sub_832AD178);
PPC_FUNC_IMPL(__imp__sub_832AD178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3664
	ctx.r3.s64 = r11.s64 + 3664;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD188"))) PPC_WEAK_FUNC(sub_832AD188);
PPC_FUNC_IMPL(__imp__sub_832AD188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,3688
	r11.s64 = r11.s64 + 3688;
	// addi r31,r11,80
	r31.s64 = r11.s64 + 80;
loc_832AD1AC:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad1c0
	if (cr6.eq) goto loc_832AD1C0;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
loc_832AD1C0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ad1ac
	if (!cr0.lt) goto loc_832AD1AC;
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

__attribute__((alias("__imp__sub_832AD1E0"))) PPC_WEAK_FUNC(sub_832AD1E0);
PPC_FUNC_IMPL(__imp__sub_832AD1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3668(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3668);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD1F4"))) PPC_WEAK_FUNC(sub_832AD1F4);
PPC_FUNC_IMPL(__imp__sub_832AD1F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD1F8"))) PPC_WEAK_FUNC(sub_832AD1F8);
PPC_FUNC_IMPL(__imp__sub_832AD1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3768);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD20C"))) PPC_WEAK_FUNC(sub_832AD20C);
PPC_FUNC_IMPL(__imp__sub_832AD20C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD210"))) PPC_WEAK_FUNC(sub_832AD210);
PPC_FUNC_IMPL(__imp__sub_832AD210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3828
	ctx.r3.s64 = r11.s64 + 3828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD220"))) PPC_WEAK_FUNC(sub_832AD220);
PPC_FUNC_IMPL(__imp__sub_832AD220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3832
	ctx.r3.s64 = r11.s64 + 3832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD230"))) PPC_WEAK_FUNC(sub_832AD230);
PPC_FUNC_IMPL(__imp__sub_832AD230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,3856
	r11.s64 = r11.s64 + 3856;
	// addi r31,r11,80
	r31.s64 = r11.s64 + 80;
loc_832AD254:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad268
	if (cr6.eq) goto loc_832AD268;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
loc_832AD268:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ad254
	if (!cr0.lt) goto loc_832AD254;
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

__attribute__((alias("__imp__sub_832AD288"))) PPC_WEAK_FUNC(sub_832AD288);
PPC_FUNC_IMPL(__imp__sub_832AD288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3836);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD29C"))) PPC_WEAK_FUNC(sub_832AD29C);
PPC_FUNC_IMPL(__imp__sub_832AD29C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD2A0"))) PPC_WEAK_FUNC(sub_832AD2A0);
PPC_FUNC_IMPL(__imp__sub_832AD2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3936
	ctx.r3.s64 = r11.s64 + 3936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2B0"))) PPC_WEAK_FUNC(sub_832AD2B0);
PPC_FUNC_IMPL(__imp__sub_832AD2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,3940
	ctx.r3.s64 = r11.s64 + 3940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2C0"))) PPC_WEAK_FUNC(sub_832AD2C0);
PPC_FUNC_IMPL(__imp__sub_832AD2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,3944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 3944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2D4"))) PPC_WEAK_FUNC(sub_832AD2D4);
PPC_FUNC_IMPL(__imp__sub_832AD2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD2D8"))) PPC_WEAK_FUNC(sub_832AD2D8);
PPC_FUNC_IMPL(__imp__sub_832AD2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,4072
	ctx.r3.s64 = r11.s64 + 4072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2E8"))) PPC_WEAK_FUNC(sub_832AD2E8);
PPC_FUNC_IMPL(__imp__sub_832AD2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,4076
	ctx.r3.s64 = r11.s64 + 4076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD2F8"))) PPC_WEAK_FUNC(sub_832AD2F8);
PPC_FUNC_IMPL(__imp__sub_832AD2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16368
	ctx.r3.s64 = r11.s64 + 16368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD308"))) PPC_WEAK_FUNC(sub_832AD308);
PPC_FUNC_IMPL(__imp__sub_832AD308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16372
	ctx.r3.s64 = r11.s64 + 16372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD318"))) PPC_WEAK_FUNC(sub_832AD318);
PPC_FUNC_IMPL(__imp__sub_832AD318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,16376
	r11.s64 = r11.s64 + 16376;
	// addi r31,r11,80
	r31.s64 = r11.s64 + 80;
loc_832AD33C:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad350
	if (cr6.eq) goto loc_832AD350;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
loc_832AD350:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ad33c
	if (!cr0.lt) goto loc_832AD33C;
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

__attribute__((alias("__imp__sub_832AD370"))) PPC_WEAK_FUNC(sub_832AD370);
PPC_FUNC_IMPL(__imp__sub_832AD370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16496
	ctx.r3.s64 = r11.s64 + 16496;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD380"))) PPC_WEAK_FUNC(sub_832AD380);
PPC_FUNC_IMPL(__imp__sub_832AD380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16500
	ctx.r3.s64 = r11.s64 + 16500;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD390"))) PPC_WEAK_FUNC(sub_832AD390);
PPC_FUNC_IMPL(__imp__sub_832AD390) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r31,r11,8144
	r31.s64 = r11.s64 + 8144;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad3b8
	if (cr6.eq) goto loc_832AD3B8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AD3B8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// beq cr6,0x832ad3e0
	if (cr6.eq) goto loc_832AD3E0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AD3E0:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832AD410"))) PPC_WEAK_FUNC(sub_832AD410);
PPC_FUNC_IMPL(__imp__sub_832AD410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16504
	ctx.r3.s64 = r11.s64 + 16504;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD420"))) PPC_WEAK_FUNC(sub_832AD420);
PPC_FUNC_IMPL(__imp__sub_832AD420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16508
	ctx.r3.s64 = r11.s64 + 16508;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD430"))) PPC_WEAK_FUNC(sub_832AD430);
PPC_FUNC_IMPL(__imp__sub_832AD430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16528
	ctx.r3.s64 = r11.s64 + 16528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD440"))) PPC_WEAK_FUNC(sub_832AD440);
PPC_FUNC_IMPL(__imp__sub_832AD440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16532
	ctx.r3.s64 = r11.s64 + 16532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD450"))) PPC_WEAK_FUNC(sub_832AD450);
PPC_FUNC_IMPL(__imp__sub_832AD450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16536
	ctx.r3.s64 = r11.s64 + 16536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD460"))) PPC_WEAK_FUNC(sub_832AD460);
PPC_FUNC_IMPL(__imp__sub_832AD460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16540
	ctx.r3.s64 = r11.s64 + 16540;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD470"))) PPC_WEAK_FUNC(sub_832AD470);
PPC_FUNC_IMPL(__imp__sub_832AD470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16544
	ctx.r3.s64 = r11.s64 + 16544;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD480"))) PPC_WEAK_FUNC(sub_832AD480);
PPC_FUNC_IMPL(__imp__sub_832AD480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16548
	ctx.r3.s64 = r11.s64 + 16548;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD490"))) PPC_WEAK_FUNC(sub_832AD490);
PPC_FUNC_IMPL(__imp__sub_832AD490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16552
	ctx.r3.s64 = r11.s64 + 16552;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4A0"))) PPC_WEAK_FUNC(sub_832AD4A0);
PPC_FUNC_IMPL(__imp__sub_832AD4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16556
	ctx.r3.s64 = r11.s64 + 16556;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4B0"))) PPC_WEAK_FUNC(sub_832AD4B0);
PPC_FUNC_IMPL(__imp__sub_832AD4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16560
	ctx.r3.s64 = r11.s64 + 16560;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4C0"))) PPC_WEAK_FUNC(sub_832AD4C0);
PPC_FUNC_IMPL(__imp__sub_832AD4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16564
	ctx.r3.s64 = r11.s64 + 16564;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4D0"))) PPC_WEAK_FUNC(sub_832AD4D0);
PPC_FUNC_IMPL(__imp__sub_832AD4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16568
	ctx.r3.s64 = r11.s64 + 16568;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4E0"))) PPC_WEAK_FUNC(sub_832AD4E0);
PPC_FUNC_IMPL(__imp__sub_832AD4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16572
	ctx.r3.s64 = r11.s64 + 16572;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD4F0"))) PPC_WEAK_FUNC(sub_832AD4F0);
PPC_FUNC_IMPL(__imp__sub_832AD4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16576
	ctx.r3.s64 = r11.s64 + 16576;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD500"))) PPC_WEAK_FUNC(sub_832AD500);
PPC_FUNC_IMPL(__imp__sub_832AD500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16580
	ctx.r3.s64 = r11.s64 + 16580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD510"))) PPC_WEAK_FUNC(sub_832AD510);
PPC_FUNC_IMPL(__imp__sub_832AD510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16584
	ctx.r3.s64 = r11.s64 + 16584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD520"))) PPC_WEAK_FUNC(sub_832AD520);
PPC_FUNC_IMPL(__imp__sub_832AD520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16588
	ctx.r3.s64 = r11.s64 + 16588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD530"))) PPC_WEAK_FUNC(sub_832AD530);
PPC_FUNC_IMPL(__imp__sub_832AD530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16592
	ctx.r3.s64 = r11.s64 + 16592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD540"))) PPC_WEAK_FUNC(sub_832AD540);
PPC_FUNC_IMPL(__imp__sub_832AD540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16596
	ctx.r3.s64 = r11.s64 + 16596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD550"))) PPC_WEAK_FUNC(sub_832AD550);
PPC_FUNC_IMPL(__imp__sub_832AD550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,16600
	r11.s64 = r11.s64 + 16600;
	// addi r31,r11,80
	r31.s64 = r11.s64 + 80;
loc_832AD574:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad588
	if (cr6.eq) goto loc_832AD588;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
loc_832AD588:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832ad574
	if (!cr0.lt) goto loc_832AD574;
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

__attribute__((alias("__imp__sub_832AD5A8"))) PPC_WEAK_FUNC(sub_832AD5A8);
PPC_FUNC_IMPL(__imp__sub_832AD5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,16680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16680);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad608
	if (cr6.eq) goto loc_832AD608;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD5CC:
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
	// bne 0x832ad5cc
	if (!cr0.eq) goto loc_832AD5CC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ad600
	if (!cr6.eq) goto loc_832AD600;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AD600:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16680(r31)
	PPC_STORE_U32(r31.u32 + 16680, r11.u32);
loc_832AD608:
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

__attribute__((alias("__imp__sub_832AD620"))) PPC_WEAK_FUNC(sub_832AD620);
PPC_FUNC_IMPL(__imp__sub_832AD620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16684
	ctx.r3.s64 = r11.s64 + 16684;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD630"))) PPC_WEAK_FUNC(sub_832AD630);
PPC_FUNC_IMPL(__imp__sub_832AD630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16688
	ctx.r3.s64 = r11.s64 + 16688;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD640"))) PPC_WEAK_FUNC(sub_832AD640);
PPC_FUNC_IMPL(__imp__sub_832AD640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,16692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD654"))) PPC_WEAK_FUNC(sub_832AD654);
PPC_FUNC_IMPL(__imp__sub_832AD654) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD658"))) PPC_WEAK_FUNC(sub_832AD658);
PPC_FUNC_IMPL(__imp__sub_832AD658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,16712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16712);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD66C"))) PPC_WEAK_FUNC(sub_832AD66C);
PPC_FUNC_IMPL(__imp__sub_832AD66C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD670"))) PPC_WEAK_FUNC(sub_832AD670);
PPC_FUNC_IMPL(__imp__sub_832AD670) {
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
	// addi r31,r11,16732
	r31.s64 = r11.s64 + 16732;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad698
	if (cr6.eq) goto loc_832AD698;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AD698:
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

__attribute__((alias("__imp__sub_832AD6C8"))) PPC_WEAK_FUNC(sub_832AD6C8);
PPC_FUNC_IMPL(__imp__sub_832AD6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16748
	ctx.r3.s64 = r11.s64 + 16748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD6D8"))) PPC_WEAK_FUNC(sub_832AD6D8);
PPC_FUNC_IMPL(__imp__sub_832AD6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16752
	ctx.r3.s64 = r11.s64 + 16752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD6E8"))) PPC_WEAK_FUNC(sub_832AD6E8);
PPC_FUNC_IMPL(__imp__sub_832AD6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,16756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16756);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD6FC"))) PPC_WEAK_FUNC(sub_832AD6FC);
PPC_FUNC_IMPL(__imp__sub_832AD6FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD700"))) PPC_WEAK_FUNC(sub_832AD700);
PPC_FUNC_IMPL(__imp__sub_832AD700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,16776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16776);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD714"))) PPC_WEAK_FUNC(sub_832AD714);
PPC_FUNC_IMPL(__imp__sub_832AD714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD718"))) PPC_WEAK_FUNC(sub_832AD718);
PPC_FUNC_IMPL(__imp__sub_832AD718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16796
	ctx.r3.s64 = r11.s64 + 16796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD728"))) PPC_WEAK_FUNC(sub_832AD728);
PPC_FUNC_IMPL(__imp__sub_832AD728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16800
	ctx.r3.s64 = r11.s64 + 16800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD738"))) PPC_WEAK_FUNC(sub_832AD738);
PPC_FUNC_IMPL(__imp__sub_832AD738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,16880
	r11.s64 = r11.s64 + 16880;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r30,r11,2208
	r30.s64 = r11.s64 + 2208;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r28,22
	r28.s64 = 22;
	// li r24,0
	r24.s64 = 0;
	// addi r27,r8,7552
	r27.s64 = ctx.r8.s64 + 7552;
	// addi r26,r9,7536
	r26.s64 = ctx.r9.s64 + 7536;
	// addi r25,r10,7532
	r25.s64 = ctx.r10.s64 + 7532;
	// addi r29,r11,-23720
	r29.s64 = r11.s64 + -23720;
loc_832AD778:
	// addi r30,r30,-96
	r30.s64 = r30.s64 + -96;
	// addic. r31,r30,16
	xer.ca = r30.u32 > 4294967279;
	r31.s64 = r30.s64 + 16;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// bne 0x832ad78c
	if (!cr0.eq) goto loc_832AD78C;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_832AD78C:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// beq cr6,0x832ad7ac
	if (cr6.eq) goto loc_832AD7AC;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
loc_832AD7AC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// bne cr6,0x832ad7bc
	if (!cr6.eq) goto loc_832AD7BC;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_832AD7BC:
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x832ad778
	if (!cr0.lt) goto loc_832AD778;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_832AD7E8"))) PPC_WEAK_FUNC(sub_832AD7E8);
PPC_FUNC_IMPL(__imp__sub_832AD7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,16804
	ctx.r3.s64 = r11.s64 + 16804;
	// b 0x8229d7d0
	sub_8229D7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD7F8"))) PPC_WEAK_FUNC(sub_832AD7F8);
PPC_FUNC_IMPL(__imp__sub_832AD7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r31,-31926
	r31.s64 = -2092302336;
	// lwz r3,19088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19088);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ad858
	if (cr6.eq) goto loc_832AD858;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832AD81C:
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
	// bne 0x832ad81c
	if (!cr0.eq) goto loc_832AD81C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x832ad850
	if (!cr6.eq) goto loc_832AD850;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AD850:
	// li r11,0
	r11.s64 = 0;
	// stw r11,19088(r31)
	PPC_STORE_U32(r31.u32 + 19088, r11.u32);
loc_832AD858:
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

__attribute__((alias("__imp__sub_832AD870"))) PPC_WEAK_FUNC(sub_832AD870);
PPC_FUNC_IMPL(__imp__sub_832AD870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r3,r11,-21816
	ctx.r3.s64 = r11.s64 + -21816;
	// b 0x82b18a20
	sub_82B18A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD880"))) PPC_WEAK_FUNC(sub_832AD880);
PPC_FUNC_IMPL(__imp__sub_832AD880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,19168
	ctx.r3.s64 = r11.s64 + 19168;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD890"))) PPC_WEAK_FUNC(sub_832AD890);
PPC_FUNC_IMPL(__imp__sub_832AD890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,19172
	ctx.r3.s64 = r11.s64 + 19172;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD8A0"))) PPC_WEAK_FUNC(sub_832AD8A0);
PPC_FUNC_IMPL(__imp__sub_832AD8A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-21784
	r30.s64 = r31.s64 + -21784;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-21784(r31)
	PPC_STORE_U32(r31.u32 + -21784, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-21784(r31)
	PPC_STORE_U32(r31.u32 + -21784, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832AD900"))) PPC_WEAK_FUNC(sub_832AD900);
PPC_FUNC_IMPL(__imp__sub_832AD900) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31950
	r31.s64 = -2093875200;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r30,r31,-21776
	r30.s64 = r31.s64 + -21776;
	// addi r11,r11,7536
	r11.s64 = r11.s64 + 7536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,-21776(r31)
	PPC_STORE_U32(r31.u32 + -21776, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7552
	r11.s64 = r11.s64 + 7552;
	// stw r11,-21776(r31)
	PPC_STORE_U32(r31.u32 + -21776, r11.u32);
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
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

__attribute__((alias("__imp__sub_832AD960"))) PPC_WEAK_FUNC(sub_832AD960);
PPC_FUNC_IMPL(__imp__sub_832AD960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,19216
	ctx.r3.s64 = r11.s64 + 19216;
	// b 0x82a84538
	sub_82A84538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD970"))) PPC_WEAK_FUNC(sub_832AD970);
PPC_FUNC_IMPL(__imp__sub_832AD970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,19292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD984"))) PPC_WEAK_FUNC(sub_832AD984);
PPC_FUNC_IMPL(__imp__sub_832AD984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD988"))) PPC_WEAK_FUNC(sub_832AD988);
PPC_FUNC_IMPL(__imp__sub_832AD988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,19312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD99C"))) PPC_WEAK_FUNC(sub_832AD99C);
PPC_FUNC_IMPL(__imp__sub_832AD99C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD9A0"))) PPC_WEAK_FUNC(sub_832AD9A0);
PPC_FUNC_IMPL(__imp__sub_832AD9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lwz r3,19332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD9B4"))) PPC_WEAK_FUNC(sub_832AD9B4);
PPC_FUNC_IMPL(__imp__sub_832AD9B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

