#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82F06220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f063a8
	if (cr6.eq) goto loc_82F063A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f063a8
	if (!cr6.eq) goto loc_82F063A8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-128
	r30.s64 = r11.s64 + -128;
	// bne cr6,0x82f06270
	if (!cr6.eq) goto loc_82F06270;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82F06270:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f063a8
	if (cr6.lt) goto loc_82F063A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82f062bc
	if (!cr6.lt) goto loc_82F062BC;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// b 0x82f063a8
	goto loc_82F063A8;
loc_82F062BC:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// bl 0x82f7dfc8
	sub_82F7DFC8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f06368
	if (cr0.eq) goto loc_82F06368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ef79d8
	sub_82EF79D8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f06328
	if (!cr0.eq) goto loc_82F06328;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F06328:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F06338:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f06338
	if (!cr0.eq) goto loc_82F06338;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f063a8
	if (!cr0.eq) goto loc_82F063A8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// b 0x82f063a8
	goto loc_82F063A8;
loc_82F06368:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,3224
	ctx.r5.s64 = ctx.r10.s64 + 3224;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f063a8
	if (!cr0.eq) goto loc_82F063A8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F063A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F06220) {
	__imp__sub_82F06220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F063B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f06468
	if (cr6.eq) goto loc_82F06468;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f06468
	if (!cr6.eq) goto loc_82F06468;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-128
	r30.s64 = r11.s64 + -128;
	// bne cr6,0x82f063fc
	if (!cr6.eq) goto loc_82F063FC;
	// li r30,0
	r30.s64 = 0;
loc_82F063FC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f06468
	if (cr6.lt) goto loc_82F06468;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82f06458
	if (cr6.lt) goto loc_82F06458;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// bl 0x82f740b8
	sub_82F740B8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f06458
	if (cr6.eq) goto loc_82F06458;
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x82f06460
	goto loc_82F06460;
loc_82F06458:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3240);
loc_82F06460:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82F06468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F063B0) {
	__imp__sub_82F063B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f06528
	if (cr6.eq) goto loc_82F06528;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f06528
	if (!cr6.eq) goto loc_82F06528;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-128
	r30.s64 = r11.s64 + -128;
	// bne cr6,0x82f064bc
	if (!cr6.eq) goto loc_82F064BC;
	// li r30,0
	r30.s64 = 0;
loc_82F064BC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f06528
	if (cr6.lt) goto loc_82F06528;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82f06518
	if (cr6.lt) goto loc_82F06518;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// bl 0x82f7ddf8
	sub_82F7DDF8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f06518
	if (cr6.eq) goto loc_82F06518;
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x82f06520
	goto loc_82F06520;
loc_82F06518:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3240);
loc_82F06520:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82F06528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F06470) {
	__imp__sub_82F06470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f06664
	if (cr6.eq) goto loc_82F06664;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f06664
	if (!cr6.eq) goto loc_82F06664;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// bne cr6,0x82f0657c
	if (!cr6.eq) goto loc_82F0657C;
	// li r11,0
	r11.s64 = 0;
loc_82F0657C:
	// lwz r11,180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(180) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f06664
	if (cr6.eq) goto loc_82F06664;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lbz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 96);
	// rlwinm r27,r10,30,31,31
	r27.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f065b0
	if (cr6.lt) goto loc_82F065B0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82F065B0:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r31,r11
	r31.u64 = r11.u64;
	// blt cr6,0x82f065c8
	if (cr6.lt) goto loc_82F065C8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82F065C8:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f065f0
	if (cr6.lt) goto loc_82F065F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F065F0:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f06620
	if (cr6.lt) goto loc_82F06620;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F06620:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82f06650
	if (cr6.lt) goto loc_82F06650;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F06650:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f824d8
	sub_82F824D8(ctx, base);
loc_82F06664:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F06530) {
	__imp__sub_82F06530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f067a4
	if (cr6.eq) goto loc_82F067A4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f067a4
	if (!cr6.eq) goto loc_82F067A4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// bne cr6,0x82f066bc
	if (!cr6.eq) goto loc_82F066BC;
	// li r11,0
	r11.s64 = 0;
loc_82F066BC:
	// lwz r11,180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(180) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f067a4
	if (cr6.eq) goto loc_82F067A4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lbz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 96);
	// rlwinm r27,r10,30,31,31
	r27.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f066f0
	if (cr6.lt) goto loc_82F066F0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82F066F0:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r31,r11
	r31.u64 = r11.u64;
	// blt cr6,0x82f06708
	if (cr6.lt) goto loc_82F06708;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82F06708:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f06730
	if (cr6.lt) goto loc_82F06730;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F06730:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f06760
	if (cr6.lt) goto loc_82F06760;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F06760:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82f06790
	if (cr6.lt) goto loc_82F06790;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F06790:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f82600
	sub_82F82600(ctx, base);
loc_82F067A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F06670) {
	__imp__sub_82F06670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F067B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f068e4
	if (cr6.eq) goto loc_82F068E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f068e4
	if (!cr6.eq) goto loc_82F068E4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// bne cr6,0x82f067fc
	if (!cr6.eq) goto loc_82F067FC;
	// li r11,0
	r11.s64 = 0;
loc_82F067FC:
	// lwz r11,180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(180) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f068e4
	if (cr6.eq) goto loc_82F068E4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lbz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 96);
	// rlwinm r27,r10,30,31,31
	r27.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f06830
	if (cr6.lt) goto loc_82F06830;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82F06830:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r31,r11
	r31.u64 = r11.u64;
	// blt cr6,0x82f06848
	if (cr6.lt) goto loc_82F06848;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82F06848:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f06870
	if (cr6.lt) goto loc_82F06870;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F06870:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f068a0
	if (cr6.lt) goto loc_82F068A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F068A0:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82f068d0
	if (cr6.lt) goto loc_82F068D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F068D0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f82668
	sub_82F82668(ctx, base);
loc_82F068E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F067B0) {
	__imp__sub_82F067B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F068F0) {
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
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	sub_82EF6650(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-7400
	ctx.r9.s64 = ctx.r10.s64 + -7400;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F068F0) {
	__imp__sub_82F068F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06950) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-7400
	r11.s64 = r11.s64 + -7400;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82f04588
	sub_82F04588(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82ef74b0
	sub_82EF74B0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-12000
	r11.s64 = r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06950) {
	__imp__sub_82F06950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F069A8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82f047e8
	sub_82F047E8(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x82f06a04
	if (!cr6.lt) goto loc_82F06A04;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r3,4,0,27
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82f06a08
	if (cr6.eq) goto loc_82F06A08;
loc_82F06A04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F06A08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F069A8) {
	__imp__sub_82F069A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06A10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82f069a8
	sub_82F069A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f06a98
	if (cr0.eq) goto loc_82F06A98;
loc_82F06A34:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x82f06a54
	if (!cr6.eq) goto loc_82F06A54;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82f06a9c
	if (cr6.eq) goto loc_82F06A9C;
loc_82F06A54:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f06a8c
	if (!cr6.lt) goto loc_82F06A8C;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f06a90
	if (cr6.eq) goto loc_82F06A90;
loc_82F06A8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F06A90:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f06a34
	if (!cr6.eq) goto loc_82F06A34;
loc_82F06A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F06A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F06A10) {
	__imp__sub_82F06A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06AA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06adc
	if (cr6.eq) goto loc_82F06ADC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06ADC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r11,-1
	r11.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F06AE8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82f06ae8
	if (!cr0.eq) goto loc_82F06AE8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f06b14
	if (!cr0.eq) goto loc_82F06B14;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F06B14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06AA8) {
	__imp__sub_82F06AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06b64
	if (cr6.eq) goto loc_82F06B64;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06B64:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f06b74
	if (cr0.eq) goto loc_82F06B74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F06B74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06B28) {
	__imp__sub_82F06B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,-1
	r30.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82F06BB4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82f06bb4
	if (!cr0.eq) goto loc_82F06BB4;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f06be0
	if (!cr0.eq) goto loc_82F06BE0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F06BE0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82F06BE8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82f06be8
	if (!cr0.eq) goto loc_82F06BE8;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f06c14
	if (!cr0.eq) goto loc_82F06C14;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F06C14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06c34
	if (cr6.eq) goto loc_82F06C34;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06C34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06B90) {
	__imp__sub_82F06B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06C50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f06c98
	if (cr0.eq) goto loc_82F06C98;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f06c88
	if (cr0.eq) goto loc_82F06C88;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f06cfc
	if (cr6.lt) goto loc_82F06CFC;
loc_82F06C88:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f06c98
	if (cr0.eq) goto loc_82F06C98;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f06cfc
	if (cr6.eq) goto loc_82F06CFC;
loc_82F06C98:
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne cr6,0x82f06cc8
	if (!cr6.eq) goto loc_82F06CC8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06cbc
	if (cr6.eq) goto loc_82F06CBC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F06CBC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82f06cfc
	goto loc_82F06CFC;
loc_82F06CC8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06ce0
	if (cr6.eq) goto loc_82F06CE0;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82f06cfc
	goto loc_82F06CFC;
loc_82F06CE0:
	// rlwinm r30,r4,3,0,28
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82F06CFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06C50) {
	__imp__sub_82F06C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06D18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f06d48
	if (cr6.lt) goto loc_82F06D48;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F06D48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f06d68
	if (!cr0.eq) goto loc_82F06D68;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F06D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06D18) {
	__imp__sub_82F06D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,-16
	r31.s64 = ctx.r3.s64 + -16;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f06dcc
	if (!cr6.eq) goto loc_82F06DCC;
	// li r31,0
	r31.s64 = 0;
loc_82F06DCC:
	// addic. r11,r31,16
	xer.ca = r31.u32 > 4294967279;
	r11.s64 = r31.s64 + 16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne 0x82f06ddc
	if (!cr0.eq) goto loc_82F06DDC;
	// li r11,0
	r11.s64 = 0;
loc_82F06DDC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f06e30
	if (cr0.eq) goto loc_82F06E30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f06e30
	if (cr0.eq) goto loc_82F06E30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06E30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06D80) {
	__imp__sub_82F06D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f06ecc
	if (cr0.eq) goto loc_82F06ECC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f124b8
	sub_82F124B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f06ecc
	if (cr0.eq) goto loc_82F06ECC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06E48) {
	__imp__sub_82F06E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f06f2c
	if (cr6.eq) goto loc_82F06F2C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06F2C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06f4c
	if (cr6.eq) goto loc_82F06F4C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06F4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06EE8) {
	__imp__sub_82F06EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F06F9C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f06f9c
	if (!cr0.eq) goto loc_82F06F9C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f06fd4
	if (cr6.eq) goto loc_82F06FD4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F06FD4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06F70) {
	__imp__sub_82F06F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F06FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82F07024:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f07024
	if (!cr0.eq) goto loc_82F07024;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f07060
	if (cr6.eq) goto loc_82F07060;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F07060:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F06FF8) {
	__imp__sub_82F06FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07088) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0a1e0
	sub_82F0A1E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F07088) {
	__imp__sub_82F07088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F070E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f07114
	if (cr6.eq) goto loc_82F07114;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F07114:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f07124
	if (cr6.eq) goto loc_82F07124;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F07124:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F070E8) {
	__imp__sub_82F070E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07150) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f071c4
	if (!cr6.eq) goto loc_82F071C4;
	// lbz r11,36(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f071b8
	if (cr0.eq) goto loc_82F071B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82f071b8
	if (!cr6.lt) goto loc_82F071B8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82f070e8
	sub_82F070E8(ctx, base);
	// b 0x82f071fc
	goto loc_82F071FC;
loc_82F071B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f8dc00
	sub_82F8DC00(ctx, base);
	// b 0x82f071fc
	goto loc_82F071FC;
loc_82F071C4:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f071d8
	if (!cr6.eq) goto loc_82F071D8;
	// lwz r30,4(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
loc_82F071D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f071f8
	if (cr6.eq) goto loc_82F071F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f071f8
	if (cr6.eq) goto loc_82F071F8;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F071F8:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82F071FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F07150) {
	__imp__sub_82F07150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F07218) {
	__imp__sub_82F07218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07238) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f04fd0
	sub_82F04FD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f07268
	if (cr0.eq) goto loc_82F07268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F07268:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F07238) {
	__imp__sub_82F07238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r27,48
	r31.s64 = r27.s64 + 48;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a020
	sub_82F2A020(ctx, base);
	// lfs f4,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-7048
	ctx.r4.s64 = r11.s64 + -7048;
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,69(r27)
	PPC_STORE_U8(r27.u32 + 69, r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r23,r11,1
	r23.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0732c
	if (cr0.eq) goto loc_82F0732C;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x82f07334
	goto loc_82F07334;
loc_82F0732C:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82F07334:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f07358
	if (cr0.eq) goto loc_82F07358;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// b 0x82f07360
	goto loc_82F07360;
loc_82F07358:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65533
	r11.u64 = r11.u64 & 65533;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F07360:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f07384
	if (cr0.eq) goto loc_82F07384;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// b 0x82f0738c
	goto loc_82F0738C;
loc_82F07384:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65531
	r11.u64 = r11.u64 & 65531;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0738C:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f073b0
	if (cr0.eq) goto loc_82F073B0;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// b 0x82f073b8
	goto loc_82F073B8;
loc_82F073B0:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65527
	r11.u64 = r11.u64 & 65527;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F073B8:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-7112
	ctx.r4.s64 = ctx.r10.s64 + -7112;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r26,r11,1
	r26.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r25,r11,1
	r25.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r28,r11,1
	r28.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f07460
	if (cr0.eq) goto loc_82F07460;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// b 0x82f07468
	goto loc_82F07468;
loc_82F07460:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65519
	r11.u64 = r11.u64 & 65519;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F07468:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// xori r24,r11,1
	r24.u64 = r11.u64 ^ 1;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f074a4
	if (!cr0.eq) goto loc_82F074A4;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82f074ac
	goto loc_82F074AC;
loc_82F074A4:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65503
	r11.u64 = r11.u64 & 65503;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F074AC:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f074d0
	if (cr0.eq) goto loc_82F074D0;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x82f074d8
	goto loc_82F074D8;
loc_82F074D0:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65471
	r11.u64 = r11.u64 & 65471;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F074D8:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f07508
	if (cr0.eq) goto loc_82F07508;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// b 0x82f07510
	goto loc_82F07510;
loc_82F07508:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65407
	r11.u64 = r11.u64 & 65407;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F07510:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f07534
	if (!cr0.eq) goto loc_82F07534;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// b 0x82f0753c
	goto loc_82F0753C;
loc_82F07534:
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// andi. r11,r11,65279
	r11.u64 = r11.u64 & 65279;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0753C:
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r7,r11,26,6,31
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,28,4,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-7192
	ctx.r4.s64 = ctx.r10.s64 + -7192;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f07688
	if (cr0.eq) goto loc_82F07688;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f075a8
	if (!cr6.lt) goto loc_82F075A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F075A8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f075f4
	if (!cr6.lt) goto loc_82F075F4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F075F4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r4,r9,-7224
	ctx.r4.s64 = ctx.r9.s64 + -7224;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lhz r5,26(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 26);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(40) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f2ed98
	sub_82F2ED98(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82ef8c90
	sub_82EF8C90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f07688
	if (!cr6.eq) goto loc_82F07688;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f07688
	if (cr6.eq) goto loc_82F07688;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F07688:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f076ac
	if (cr0.eq) goto loc_82F076AC;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a1b8
	sub_82F2A1B8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7236
	ctx.r4.s64 = r11.s64 + -7236;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F076AC:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f07710
	if (cr0.eq) goto loc_82F07710;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f076d8
	if (!cr6.lt) goto loc_82F076D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F076D8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r4,r9,-7264
	ctx.r4.s64 = ctx.r9.s64 + -7264;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// stw r5,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r5.u32);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F07710:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f07910
	if (cr0.eq) goto loc_82F07910;
	// lhz r11,80(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f07744
	if (!cr6.lt) goto loc_82F07744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29438
	sub_82F29438(ctx, base);
loc_82F07744:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f07784
	if (!cr6.lt) goto loc_82F07784;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F07784:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f077e0
	if (!cr6.lt) goto loc_82F077E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F077E0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,60(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 60, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f0783c
	if (!cr6.lt) goto loc_82F0783C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F0783C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,64(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82f07898
	if (!cr6.lt) goto loc_82F07898;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F07898:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r4,r9,-7352
	ctx.r4.s64 = ctx.r9.s64 + -7352;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lfs f2,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lfs f1,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f3,64(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(f0.f64));
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfs f4,68(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
loc_82F07910:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a4e0
	sub_82F2A4E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r30,76
	r29.s64 = r30.s64 + 76;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0795c
	if (cr0.eq) goto loc_82F0795C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f2a4e0
	sub_82F2A4E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0795C:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-7392
	ctx.r4.s64 = ctx.r9.s64 + -7392;
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// bl 0x82ef9600
	sub_82EF9600(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82F07288) {
	__imp__sub_82F07288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, r11.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, r11.u8);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, r11.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// sth r10,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r10.u16);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// lfs f0,-7000(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7000);
	f0.f64 = double(temp.f32);
	// lhz r11,80(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// ori r11,r11,1320
	r11.u64 = r11.u64 | 1320;
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// sth r11,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F07988) {
	__imp__sub_82F07988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F079D0) {
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
	// lwz r11,-28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-28) );
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r3,-228
	r31.s64 = ctx.r3.s64 + -228;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f07a18
	if (cr6.eq) goto loc_82F07A18;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f73b38
	sub_82F73B38(ctx, base);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(200) );
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82f07a1c
	if (cr6.gt) goto loc_82F07A1C;
loc_82F07A18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F07A1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F079D0) {
	__imp__sub_82F079D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07A38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f07acc
	if (cr6.eq) goto loc_82F07ACC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f07acc
	if (!cr6.eq) goto loc_82F07ACC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-128
	r31.s64 = r11.s64 + -128;
	// bne cr6,0x82f07a88
	if (!cr6.eq) goto loc_82F07A88;
	// li r31,0
	r31.s64 = 0;
loc_82F07A88:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,16384
	cr6.compare<int32_t>(r11.s32, 16384, xer);
	// bge cr6,0x82f07ac8
	if (!cr6.lt) goto loc_82F07AC8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r10,-6972
	ctx.r4.s64 = ctx.r10.s64 + -6972;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f06d80
	sub_82F06D80(ctx, base);
	// b 0x82f07acc
	goto loc_82F07ACC;
loc_82F07AC8:
	// bl 0x82f60890
	sub_82F60890(ctx, base);
loc_82F07ACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F07A38) {
	__imp__sub_82F07A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f07ddc
	if (cr6.eq) goto loc_82F07DDC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r18,r11
	r18.u64 = r11.u64;
	// li r24,0
	r24.s64 = 0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f29,2756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2756);
	f29.f64 = double(temp.f32);
	// mr r23,r24
	r23.u64 = r24.u64;
	// addi r22,r11,-6856
	r22.s64 = r11.s64 + -6856;
	// addi r21,r10,-6920
	r21.s64 = ctx.r10.s64 + -6920;
loc_82F07B44:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// add r30,r23,r11
	r30.u64 = r23.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82f07dc0
	if (cr0.eq) goto loc_82F07DC0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f2f0d8
	sub_82F2F0D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f07bac
	if (!cr0.eq) goto loc_82F07BAC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_82F07B98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// bl 0x82f06e48
	sub_82F06E48(ctx, base);
	// b 0x82f07db8
	goto loc_82F07DB8;
loc_82F07BAC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,0,16,23
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82f07da4
	if (!cr6.eq) goto loc_82F07DA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f8edc0
	sub_82F8EDC0(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x82f07be8
	if (!cr0.eq) goto loc_82F07BE8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x82f07b98
	goto loc_82F07B98;
loc_82F07BE8:
	// li r3,148
	ctx.r3.s64 = 148;
	// lwz r28,48(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + int32_t(48) );
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f07c0c
	if (cr0.eq) goto loc_82F07C0C;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f07c10
	goto loc_82F07C10;
loc_82F07C0C:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82F07C10:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f454d0
	sub_82F454D0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// beq cr6,0x82f07c34
	if (cr6.eq) goto loc_82F07C34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F07C34:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f07c44
	if (cr6.eq) goto loc_82F07C44;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F07C44:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f07c68
	if (cr6.eq) goto loc_82F07C68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f07c6c
	goto loc_82F07C6C;
loc_82F07C68:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82F07C6C:
	// mulli r11,r3,20
	r11.s64 = ctx.r3.s64 * 20;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// fmr f31,f30
	f31.f64 = f30.f64;
	// beq cr6,0x82f07ca8
	if (cr6.eq) goto loc_82F07CA8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f07cac
	goto loc_82F07CAC;
loc_82F07CA8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82F07CAC:
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// beq cr6,0x82f07ce8
	if (cr6.eq) goto loc_82F07CE8;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f31,f12
	f31.f64 = double(float(ctx.f12.f64));
loc_82F07CE8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f07d08
	if (cr6.eq) goto loc_82F07D08;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
loc_82F07D08:
	// lwa r11,20(r30)
	r11.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 20));
	// fctidz f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f9,120(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fdivs f2,f0,f13
	ctx.f2.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// fcfid f0,f9
	f0.f64 = double(ctx.f9.s64);
	// li r9,32
	ctx.r9.s64 = 32;
	// fsubs f12,f13,f29
	ctx.f12.f64 = static_cast<float>(ctx.f13.f64 - f29.f64);
	// li r8,36
	ctx.r8.s64 = 36;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fctidz f11,f31
	ctx.f11.s64 = (f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f31.f64);
	// stfiwx f11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// fdivs f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 / f30.f64));
	// stfiwx f10,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.f10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82f65f08
	sub_82F65F08(ctx, base);
	// lwz r11,180(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(180) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
	// beq cr6,0x82f07d8c
	if (cr6.eq) goto loc_82F07D8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F07D8C:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F07DA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F07DB8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F07DC0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f07dd0
	if (cr6.eq) goto loc_82F07DD0;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F07DD0:
	// addic. r18,r18,-1
	xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// addi r23,r23,36
	r23.s64 = r23.s64 + 36;
	// bne 0x82f07b44
	if (!cr0.eq) goto loc_82F07B44;
loc_82F07DDC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	return;
}

PPC_WEAK_FUNC(sub_82F07AE0) {
	__imp__sub_82F07AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F07DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f295f0
	sub_82F295F0(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(88) );
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(84) );
	// li r28,0
	r28.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stb r28,69(r30)
	PPC_STORE_U8(r30.u32 + 69, r28.u8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82f07e54
	if (!cr6.lt) goto loc_82F07E54;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F07E54:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lbz r8,51(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// rotlwi r8,r8,8
	ctx.r8.u64 = rotl32(ctx.r8.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stb r28,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r28.u8);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bge cr6,0x82f07eb0
	if (!cr6.lt) goto loc_82F07EB0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f29318
	sub_82F29318(ctx, base);
loc_82F07EB0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// rotlwi r9,r9,8
	ctx.r9.u64 = rotl32(ctx.r9.u32, 8);
	// lbz r11,48(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f290e0
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f07f78
	if (cr0.eq) goto loc_82F07F78;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// clrlwi r5,r27,16
	ctx.r5.u64 = r27.u32 & 0xFFFF;
	// addi r4,r11,-6720
	ctx.r4.s64 = r11.s64 + -6720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82f07f28
	if (!cr6.eq) goto loc_82F07F28;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r11,-6728
	ctx.r5.s64 = r11.s64 + -6728;
	// b 0x82f07f30
	goto loc_82F07F30;
loc_82F07F28:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-30724
	ctx.r5.s64 = r11.s64 + -30724;
loc_82F07F30:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-6740
	r11.s64 = r11.s64 + -6740;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-6772
	ctx.r4.s64 = ctx.r9.s64 + -6772;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-6808
	ctx.r4.s64 = r11.s64 + -6808;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
loc_82F07F78:
	// clrlwi r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// bl 0x82f2ed98
	sub_82F2ED98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f08018
	if (cr0.eq) goto loc_82F08018;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f07fb4
	if (cr6.eq) goto loc_82F07FB4;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82F07FB4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f08018
	if (cr6.eq) goto loc_82F08018;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,0,16,23
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,33536
	cr6.compare<uint32_t>(r11.u32, 33536, xer);
	// bne cr6,0x82f07fec
	if (!cr6.eq) goto loc_82F07FEC;
	// lhz r11,80(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// b 0x82f08018
	goto loc_82F08018;
loc_82F07FEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r3,0,16,23
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,33280
	cr6.compare<uint32_t>(r11.u32, 33280, xer);
	// bne cr6,0x82f08018
	if (!cr6.eq) goto loc_82F08018;
	// lbz r11,76(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r11,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r11.u8);
loc_82F08018:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f08034
	if (!cr6.eq) goto loc_82F08034;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f08034
	if (cr6.eq) goto loc_82F08034;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F08034:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F07DF0) {
	__imp__sub_82F07DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08040) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f06950
	sub_82F06950(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f08070
	if (cr0.eq) goto loc_82F08070;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F08070:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F08040) {
	__imp__sub_82F08040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08090) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f08100
	if (!cr6.eq) goto loc_82F08100;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f080dc
	if (cr0.eq) goto loc_82F080DC;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f080d4
	if (cr0.eq) goto loc_82F080D4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f08124
	if (!cr6.eq) goto loc_82F08124;
loc_82F080D4:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f08124
	if (!cr0.eq) goto loc_82F08124;
loc_82F080DC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f080f4
	if (cr6.eq) goto loc_82F080F4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F080F4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82f08124
	goto loc_82F08124;
loc_82F08100:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f08114
	if (cr6.gt) goto loc_82F08114;
	// rlwinm r11,r10,31,1,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82f08124
	if (cr6.gt) goto loc_82F08124;
loc_82F08114:
	// rlwinm r11,r31,30,2,31
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x82f14c68
	sub_82F14C68(ctx, base);
loc_82F08124:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bge cr6,0x82f08154
	if (!cr6.lt) goto loc_82F08154;
	// rlwinm r11,r29,4,0,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r29,r31
	ctx.r9.s64 = r31.s64 - r29.s64;
loc_82F08134:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add. r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f08148
	if (cr0.eq) goto loc_82F08148;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82F08148:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82f08134
	if (!cr0.eq) goto loc_82F08134;
loc_82F08154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F08090) {
	__imp__sub_82F08090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bge cr6,0x82f081a8
	if (!cr6.lt) goto loc_82F081A8;
	// mulli r30,r28,48
	r30.s64 = r28.s64 * 48;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82F0818C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f06b28
	sub_82F06B28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x82f0818c
	if (!cr0.eq) goto loc_82F0818C;
loc_82F081A8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f081fc
	if (!cr6.eq) goto loc_82F081FC;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f081dc
	if (cr0.eq) goto loc_82F081DC;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f081d4
	if (cr0.eq) goto loc_82F081D4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f08224
	if (!cr6.eq) goto loc_82F08224;
loc_82F081D4:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f08224
	if (!cr0.eq) goto loc_82F08224;
loc_82F081DC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f081f4
	if (cr6.eq) goto loc_82F081F4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F081F4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// b 0x82f08224
	goto loc_82F08224;
loc_82F081FC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f08214
	if (cr6.gt) goto loc_82F08214;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f08224
	if (cr6.gt) goto loc_82F08224;
loc_82F08214:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f42c08
	sub_82F42C08(ctx, base);
loc_82F08224:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82f08250
	if (!cr6.lt) goto loc_82F08250;
	// mulli r11,r27,48
	r11.s64 = r27.s64 * 48;
	// subf r9,r27,r28
	ctx.r9.s64 = r28.s64 - r27.s64;
loc_82F08234:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add. r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f08244
	if (cr0.eq) goto loc_82F08244;
	// stw r31,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r31.u32);
loc_82F08244:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bne 0x82f08234
	if (!cr0.eq) goto loc_82F08234;
loc_82F08250:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F08160) {
	__imp__sub_82F08160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mulli r10,r29,12
	ctx.r10.s64 = r29.s64 * 12;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82f08350
	if (cr6.eq) goto loc_82F08350;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r31
	r11.u64 = ctx.r3.u64 & r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82f08350
	if (!cr6.eq) goto loc_82F08350;
loc_82F082B8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r25,4(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r25
	r11.u64 = ctx.r3.u64 & r25.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82f08328
	if (!cr6.eq) goto loc_82F08328;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82F082FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f08320
	if (cr0.eq) goto loc_82F08320;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f082fc
	if (cr6.eq) goto loc_82F082FC;
loc_82F08320:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f08348
	if (cr0.eq) goto loc_82F08348;
loc_82F08328:
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82f08350
	if (cr6.eq) goto loc_82F08350;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mulli r10,r27,12
	ctx.r10.s64 = r27.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// b 0x82f082b8
	goto loc_82F082B8;
loc_82F08348:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82f08354
	goto loc_82F08354;
loc_82F08350:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F08354:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F08258) {
	__imp__sub_82F08258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r30,0
	r30.s64 = 0;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r11,r11,-7468
	r11.s64 = r11.s64 + -7468;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lfs f0,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// li r11,255
	r11.s64 = 255;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stb r30,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r30.u8);
	// stb r30,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r30.u8);
	// stb r30,51(r31)
	PPC_STORE_U8(r31.u32 + 51, r30.u8);
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F08360) {
	__imp__sub_82F08360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08430) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82ef8e98
	sub_82EF8E98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f08468
	if (cr0.eq) goto loc_82F08468;
	// bl 0x82f08360
	sub_82F08360(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f0846c
	goto loc_82F0846C;
loc_82F08468:
	// li r29,0
	r29.s64 = 0;
loc_82F0846C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// clrlwi r30,r30,16
	r30.u64 = r30.u32 & 0xFFFF;
	// addi r4,r11,-6680
	ctx.r4.s64 = r11.s64 + -6680;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82ef9790
	sub_82EF9790(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// bl 0x82f07288
	sub_82F07288(ctx, base);
	// lwz r11,728(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(728) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f084b4
	if (!cr6.eq) goto loc_82F084B4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// bl 0x82f307a0
	sub_82F307A0(ctx, base);
loc_82F084B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f084c4
	if (cr6.eq) goto loc_82F084C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F084C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F08430) {
	__imp__sub_82F08430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F084D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f08640
	if (cr6.eq) goto loc_82F08640;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f08640
	if (!cr6.eq) goto loc_82F08640;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-128
	r31.s64 = r11.s64 + -128;
	// bne cr6,0x82f0851c
	if (!cr6.eq) goto loc_82F0851C;
	// li r31,0
	r31.s64 = 0;
loc_82F0851C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f08640
	if (cr6.lt) goto loc_82F08640;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f7e248
	sub_82F7E248(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0862c
	if (cr0.eq) goto loc_82F0862C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f085b0
	if (cr0.eq) goto loc_82F085B0;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f910a8
	sub_82F910A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f085b4
	goto loc_82F085B4;
loc_82F085B0:
	// li r31,0
	r31.s64 = 0;
loc_82F085B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfd f0,-8776(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8776);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// stfd f12,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * f0.f64;
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// fmul f0,f10,f0
	f0.f64 = ctx.f10.f64 * f0.f64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// bl 0x82f8f198
	sub_82F8F198(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f08640
	if (cr6.eq) goto loc_82F08640;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f08640
	goto loc_82F08640;
loc_82F0862C:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82F08640:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F084D0) {
	__imp__sub_82F084D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f087b8
	if (cr6.eq) goto loc_82F087B8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f087b8
	if (!cr6.eq) goto loc_82F087B8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-128
	r31.s64 = r11.s64 + -128;
	// bne cr6,0x82f08694
	if (!cr6.eq) goto loc_82F08694;
	// li r31,0
	r31.s64 = 0;
loc_82F08694:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f087b8
	if (cr6.lt) goto loc_82F087B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f7e480
	sub_82F7E480(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f087a4
	if (cr0.eq) goto loc_82F087A4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f08728
	if (cr0.eq) goto loc_82F08728;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f910a8
	sub_82F910A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f0872c
	goto loc_82F0872C;
loc_82F08728:
	// li r31,0
	r31.s64 = 0;
loc_82F0872C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfd f0,-8776(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8776);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// stfd f12,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * f0.f64;
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// fmul f0,f10,f0
	f0.f64 = ctx.f10.f64 * f0.f64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// bl 0x82f8f198
	sub_82F8F198(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f087b8
	if (cr6.eq) goto loc_82F087B8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f087b8
	goto loc_82F087B8;
loc_82F087A4:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82F087B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F08648) {
	__imp__sub_82F08648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F087C0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0882c
	if (cr6.eq) goto loc_82F0882C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82F087E8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f08810
	if (cr6.eq) goto loc_82F08810;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82f04738
	sub_82F04738(ctx, base);
	// li r11,-2
	r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F08810:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bne 0x82f087e8
	if (!cr0.eq) goto loc_82F087E8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82F0882C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F087C0) {
	__imp__sub_82F087C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bge cr6,0x82f0887c
	if (!cr6.lt) goto loc_82F0887C;
	// mulli r30,r28,36
	r30.s64 = r28.s64 * 36;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82F08864:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f06b90
	sub_82F06B90(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// bne 0x82f08864
	if (!cr0.eq) goto loc_82F08864;
loc_82F0887C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f088d0
	if (!cr6.eq) goto loc_82F088D0;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f088ac
	if (cr0.eq) goto loc_82F088AC;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f088a4
	if (cr0.eq) goto loc_82F088A4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f088f8
	if (!cr6.eq) goto loc_82F088F8;
loc_82F088A4:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f088f8
	if (!cr0.eq) goto loc_82F088F8;
loc_82F088AC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f088c4
	if (cr6.eq) goto loc_82F088C4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F088C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82f088f8
	goto loc_82F088F8;
loc_82F088D0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f088e8
	if (cr6.gt) goto loc_82F088E8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f088f8
	if (cr6.gt) goto loc_82F088F8;
loc_82F088E8:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f5bdb0
	sub_82F5BDB0(ctx, base);
loc_82F088F8:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82f08924
	if (!cr6.lt) goto loc_82F08924;
	// mulli r31,r27,36
	r31.s64 = r27.s64 * 36;
	// subf r30,r27,r28
	r30.s64 = r28.s64 - r27.s64;
loc_82F08908:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add. r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f08918
	if (cr0.eq) goto loc_82F08918;
	// bl 0x82f04e78
	sub_82F04E78(ctx, base);
loc_82F08918:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// bne 0x82f08908
	if (!cr0.eq) goto loc_82F08908;
loc_82F08924:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F08838) {
	__imp__sub_82F08838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08930) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f08acc
	if (cr6.eq) goto loc_82F08ACC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// and r29,r30,r3
	r29.u64 = r30.u64 & ctx.r3.u64;
	// mulli r10,r29,12
	ctx.r10.s64 = r29.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f08acc
	if (cr6.eq) goto loc_82F08ACC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r30
	r11.u64 = ctx.r3.u64 & r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82f08acc
	if (!cr6.eq) goto loc_82F08ACC;
	// mr r28,r29
	r28.u64 = r29.u64;
	// li r25,-1
	r25.s64 = -1;
loc_82F089B8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r24,4(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r24
	r11.u64 = ctx.r3.u64 & r24.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82f08a24
	if (!cr6.eq) goto loc_82F08A24;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
loc_82F089F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f08a1c
	if (cr0.eq) goto loc_82F08A1C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f089f8
	if (cr6.eq) goto loc_82F089F8;
loc_82F08A1C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f08a48
	if (cr0.eq) goto loc_82F08A48;
loc_82F08A24:
	// mr r25,r29
	r25.u64 = r29.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82f08acc
	if (cr6.eq) goto loc_82F08ACC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mulli r10,r29,12
	ctx.r10.s64 = r29.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// b 0x82f089b8
	goto loc_82F089B8;
loc_82F08A48:
	// li r26,-2
	r26.s64 = -2;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(r28.s32, r29.s32, xer);
	// bne cr6,0x82f08a9c
	if (!cr6.eq) goto loc_82F08A9C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82f08ab0
	if (cr6.eq) goto loc_82F08AB0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// bl 0x82f06aa8
	sub_82F06AA8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// b 0x82f08ab0
	goto loc_82F08AB0;
loc_82F08A9C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mulli r10,r25,12
	ctx.r10.s64 = r25.s64 * 12;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_82F08AB0:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82f06aa8
	sub_82F06AA8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82F08ACC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82F08930) {
	__imp__sub_82F08930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08AD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f08b00
	if (cr6.eq) goto loc_82F08B00;
	// lwz r11,512(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(512) );
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x82f08b0c
	goto loc_82F08B0C;
loc_82F08B00:
	// li r3,520
	ctx.r3.s64 = 520;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82F08B0C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f08b58
	if (cr6.eq) goto loc_82F08B58;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r11,r29,2,0,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,512
	ctx.r9.s64 = r30.s64 + 512;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82f08b64
	goto loc_82F08B64;
loc_82F08B58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82F08B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F08AD8) {
	__imp__sub_82F08AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08B70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,-6656
	r11.s64 = r11.s64 + -6656;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// sth r11,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r11.u16);
	// sth r11,34(r31)
	PPC_STORE_U16(r31.u32 + 34, r11.u16);
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// sth r11,88(r31)
	PPC_STORE_U16(r31.u32 + 88, r11.u16);
	// stb r11,37(r31)
	PPC_STORE_U8(r31.u32 + 37, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F08B70) {
	__imp__sub_82F08B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-6656
	r11.s64 = r11.s64 + -6656;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f08c30
	if (cr6.eq) goto loc_82F08C30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne 0x82f08c30
	if (!cr0.eq) goto loc_82F08C30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f04c78
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F08C30:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f08c50
	if (cr6.eq) goto loc_82F08C50;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F08C50:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// li r11,-1
	r11.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F08C5C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82f08c5c
	if (!cr0.eq) goto loc_82F08C5C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f08c88
	if (!cr0.eq) goto loc_82F08C88;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F08C88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F08BE0) {
	__imp__sub_82F08BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08CA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f08cd8
	if (cr0.eq) goto loc_82F08CD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F08CD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F08CA8) {
	__imp__sub_82F08CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82f76720
	sub_82F76720(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6ecb8
	sub_82F6ECB8(ctx, base);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// li r25,1
	r25.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// lhz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82f08e58
	if (cr0.eq) goto loc_82F08E58;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// lwz r4,184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(184) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f07150
	sub_82F07150(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// beq cr6,0x82f08e58
	if (cr6.eq) goto loc_82F08E58;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82f75d58
	sub_82F75D58(ctx, base);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,25,7,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f08e48
	if (!cr0.eq) goto loc_82F08E48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// bl 0x82f75fb0
	sub_82F75FB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// clrlwi r4,r11,31
	ctx.r4.u64 = r11.u32 & 0x1;
	// bl 0x82f76038
	sub_82F76038(ctx, base);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lbz r11,80(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f08e48
	if (!cr0.eq) goto loc_82F08E48;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f08e10
	if (cr0.eq) goto loc_82F08E10;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r26.u32);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x82f08e14
	goto loc_82F08E14;
loc_82F08E10:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82F08E14:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f75f40
	sub_82F75F40(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f08e48
	if (cr6.eq) goto loc_82F08E48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne 0x82f08e48
	if (!cr0.eq) goto loc_82F08E48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f04c78
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F08E48:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f08e58
	if (cr6.eq) goto loc_82F08E58;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F08E58:
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// ble cr6,0x82f08e80
	if (!cr6.gt) goto loc_82F08E80;
	// li r11,-1
	r11.s64 = -1;
loc_82F08E80:
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,34(r30)
	PPC_STORE_U16(r30.u32 + 34, r11.u16);
	// ori r11,r10,8
	r11.u64 = ctx.r10.u64 | 8;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// sth r11,88(r30)
	PPC_STORE_U16(r30.u32 + 88, r11.u16);
	// rlwimi r11,r25,0,31,15
	r11.u64 = (rotl32(r25.u32, 0) & 0xFFFFFFFFFFFF0001) | (r11.u64 & 0xFFFE);
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(48) );
	// rlwimi r9,r10,0,0,7
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 0) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r9,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r9.u32);
	// sth r11,88(r30)
	PPC_STORE_U16(r30.u32 + 88, r11.u16);
	// bl 0x82f04d70
	sub_82F04D70(ctx, base);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82f08ef0
	if (cr6.lt) goto loc_82F08EF0;
	// beq cr6,0x82f08ee8
	if (cr6.eq) goto loc_82F08EE8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82f08ee0
	if (cr6.lt) goto loc_82F08EE0;
	// bne cr6,0x82f08f00
	if (!cr6.eq) goto loc_82F08F00;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82F08ED8:
	// stw r10,32(r28)
	PPC_STORE_U32(r28.u32 + 32, ctx.r10.u32);
	// b 0x82f08ef4
	goto loc_82F08EF4;
loc_82F08EE0:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82f08ed8
	goto loc_82F08ED8;
loc_82F08EE8:
	// stw r25,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r25.u32);
	// b 0x82f08ef4
	goto loc_82F08EF4;
loc_82F08EF0:
	// stw r26,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r26.u32);
loc_82F08EF4:
	// lbz r11,37(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r11,37(r28)
	PPC_STORE_U8(r28.u32 + 37, r11.u8);
loc_82F08F00:
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,23,9,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f08fb8
	if (cr0.eq) goto loc_82F08FB8;
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,37(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// lfs f13,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,37(r28)
	PPC_STORE_U8(r28.u32 + 37, ctx.r9.u8);
	// lfs f0,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f13.f64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// sth r8,26(r28)
	PPC_STORE_U16(r28.u32 + 26, ctx.r8.u16);
	// lwz r8,176(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,37(r28)
	PPC_STORE_U8(r28.u32 + 37, r11.u8);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f13.f64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// sth r11,28(r28)
	PPC_STORE_U16(r28.u32 + 28, r11.u16);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,37(r28)
	PPC_STORE_U8(r28.u32 + 37, ctx.r10.u8);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// sth r11,22(r28)
	PPC_STORE_U16(r28.u32 + 22, r11.u16);
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,37(r28)
	PPC_STORE_U8(r28.u32 + 37, ctx.r9.u8);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// sth r11,24(r28)
	PPC_STORE_U16(r28.u32 + 24, r11.u16);
loc_82F08FB8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-7472
	r11.s64 = r11.s64 + -7472;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F08CF8) {
	__imp__sub_82F08CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F08FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0901c
	if (cr6.eq) goto loc_82F0901C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0901C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0903c
	if (cr6.eq) goto loc_82F0903C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0903C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0905c
	if (cr6.eq) goto loc_82F0905C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82F0905C:
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f09088
	if (cr6.eq) goto loc_82F09088;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bne 0x82f09088
	if (!cr0.eq) goto loc_82F09088;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f04c78
	sub_82F04C78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F09088:
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r11,r31,37
	r11.s64 = r31.s64 + 37;
	// subf r9,r31,r30
	ctx.r9.s64 = r30.s64 - r31.s64;
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// lhz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// sth r8,32(r31)
	PPC_STORE_U16(r31.u32 + 32, ctx.r8.u16);
	// lhz r8,34(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// sth r8,34(r31)
	PPC_STORE_U16(r31.u32 + 34, ctx.r8.u16);
	// lbz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// stb r8,36(r31)
	PPC_STORE_U8(r31.u32 + 36, ctx.r8.u8);
loc_82F090BC:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82f090bc
	if (!cr0.eq) goto loc_82F090BC;
	// lhz r11,88(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,88(r31)
	PPC_STORE_U16(r31.u32 + 88, r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F08FE0) {
	__imp__sub_82F08FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F090E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f092a4
	if (cr6.eq) goto loc_82F092A4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f092a4
	if (!cr6.eq) goto loc_82F092A4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r28,r11,-128
	r28.s64 = r11.s64 + -128;
	// bne cr6,0x82f09138
	if (!cr6.eq) goto loc_82F09138;
	// li r28,0
	r28.s64 = 0;
loc_82F09138:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// li r29,0
	r29.s64 = 0;
	// li r31,-1
	r31.s64 = -1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// blt cr6,0x82f09180
	if (cr6.lt) goto loc_82F09180;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x82f09180
	if (cr6.lt) goto loc_82F09180;
	// fctidz f0,f1
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F09180:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f091b8
	if (cr6.lt) goto loc_82F091B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x82f091b8
	if (cr6.lt) goto loc_82F091B8;
	// fctidz f0,f1
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F091B8:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bgt cr6,0x82f092a4
	if (cr6.gt) goto loc_82F092A4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08b70
	sub_82F08B70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04d70
	sub_82F04D70(ctx, base);
	// lwz r11,180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(180) );
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f777e8
	sub_82F777E8(ctx, base);
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f09224
	if (cr0.eq) goto loc_82F09224;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f8c538
	sub_82F8C538(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f09228
	goto loc_82F09228;
loc_82F09224:
	// li r31,0
	r31.s64 = 0;
loc_82F09228:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x82f8bf30
	sub_82F8BF30(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x82f8b410
	sub_82F8B410(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0927c
	if (cr6.eq) goto loc_82F0927C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0927C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-7472
	r11.s64 = r11.s64 + -7472;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
	// b 0x82f092b8
	goto loc_82F092B8;
loc_82F092A4:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82F092B8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F090E8) {
	__imp__sub_82F090E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F092C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f093c4
	if (cr6.eq) goto loc_82F093C4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f093c4
	if (!cr6.eq) goto loc_82F093C4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-128
	r30.s64 = r11.s64 + -128;
	// bne cr6,0x82f09314
	if (!cr6.eq) goto loc_82F09314;
	// li r30,0
	r30.s64 = 0;
loc_82F09314:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f093c4
	if (cr6.lt) goto loc_82F093C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f093c4
	if (cr0.eq) goto loc_82F093C4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,28
	cr6.compare<int32_t>(ctx.r3.s32, 28, xer);
	// bne cr6,0x82f093c4
	if (!cr6.eq) goto loc_82F093C4;
	// lwz r11,180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// lwz r28,32(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// bl 0x82f760c0
	sub_82F760C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// bl 0x82f7a7b0
	sub_82F7A7B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
	// addi r5,r31,140
	ctx.r5.s64 = r31.s64 + 140;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,180(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// bl 0x82f72478
	sub_82F72478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82f7a8c0
	sub_82F7A8C0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-7472
	r11.s64 = r11.s64 + -7472;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
loc_82F093C4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F092C8) {
	__imp__sub_82F092C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F093D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82f08090
	sub_82F08090(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f09424
	if (!cr6.lt) goto loc_82F09424;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82F09424:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r30,4,0,27
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f09454
	if (cr0.eq) goto loc_82F09454;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82F09454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F093D0) {
	__imp__sub_82F093D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09460) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82f09510
	if (!cr6.gt) goto loc_82F09510;
	// rotlwi r10,r11,0
	ctx.r10.u64 = rotl32(r11.u32, 0);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// stw r9,512(r11)
	PPC_STORE_U32(r11.u32 + 512, ctx.r9.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r11,r10,512
	r11.s64 = ctx.r10.s64 + 512;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// ble cr6,0x82f09504
	if (!cr6.gt) goto loc_82F09504;
	// addi r11,r9,-2
	r11.s64 = ctx.r9.s64 + -2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r11,r11,496
	r11.s64 = r11.s64 + 496;
	// b 0x82f09508
	goto loc_82F09508;
loc_82F09504:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
loc_82F09508:
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// b 0x82f09528
	goto loc_82F09528;
loc_82F09510:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addic. r11,r11,16
	xer.ca = r11.u32 > 4294967279;
	r11.s64 = r11.s64 + 16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq 0x82f09528
	if (cr0.eq) goto loc_82F09528;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_82F09528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F09460) {
	__imp__sub_82F09460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09540) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f095ac
	if (cr6.eq) goto loc_82F095AC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82F09568:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f09590
	if (cr6.eq) goto loc_82F09590;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82f06aa8
	sub_82F06AA8(ctx, base);
	// li r11,-2
	r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F09590:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x82f09568
	if (!cr0.eq) goto loc_82F09568;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82F095AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F09540) {
	__imp__sub_82F09540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F095B8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f09624
	if (cr6.eq) goto loc_82F09624;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82F095E0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f09608
	if (cr6.eq) goto loc_82F09608;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82f06d18
	sub_82F06D18(ctx, base);
	// li r11,-2
	r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F09608:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bne 0x82f095e0
	if (!cr0.eq) goto loc_82F095E0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82F09624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F095B8) {
	__imp__sub_82F095B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09630) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f09668
	if (cr6.lt) goto loc_82F09668;
	// bl 0x82f08ad8
	sub_82F08AD8(ctx, base);
loc_82F09668:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0967c
	if (cr6.eq) goto loc_82F0967C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
loc_82F0967C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F09630) {
	__imp__sub_82F09630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09698) {
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
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f08b70
	sub_82F08B70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f04d70
	sub_82F04D70(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r28,r11,-7472
	r28.s64 = r11.s64 + -7472;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// lwz r30,36(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// rlwinm r11,r11,21,11,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// lwz r29,32(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0975c
	if (!cr0.eq) goto loc_82F0975C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f08cf8
	sub_82F08CF8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f09720
	if (cr6.eq) goto loc_82F09720;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f760c0
	sub_82F760C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f08fe0
	sub_82F08FE0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
loc_82F09720:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f09814
	if (cr6.eq) goto loc_82F09814;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f72478
	sub_82F72478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ee08
	sub_82F6EE08(ctx, base);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// b 0x82f09814
	goto loc_82F09814;
loc_82F0975C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f09770
	if (cr6.eq) goto loc_82F09770;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f08fe0
	sub_82F08FE0(ctx, base);
loc_82F09770:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f09784
	if (cr6.eq) goto loc_82F09784;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ee08
	sub_82F6EE08(ctx, base);
loc_82F09784:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f08b70
	sub_82F08B70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f04d70
	sub_82F04D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f76720
	sub_82F76720(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6ecb8
	sub_82F6ECB8(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f760c0
	sub_82F760C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f08fe0
	sub_82F08FE0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f72478
	sub_82F72478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ee08
	sub_82F6EE08(ctx, base);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r28.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
loc_82F09814:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f7a7b0
	sub_82F7A7B0(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f7a8c0
	sub_82F7A8C0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6d568
	sub_82F6D568(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F09698) {
	__imp__sub_82F09698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09858) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f098c8
	if (cr6.eq) goto loc_82F098C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// bl 0x82f08930
	sub_82F08930(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F0989C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f0989c
	if (!cr0.eq) goto loc_82F0989C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f098c8
	if (!cr0.eq) goto loc_82F098C8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F098C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F09858) {
	__imp__sub_82F09858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F098E0) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f04790
	sub_82F04790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82f093d0
	sub_82F093D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F098E0) {
	__imp__sub_82F098E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x82ca2bd0
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r30,2
	r30.s64 = 2;
	// li r28,16
	r28.s64 = 16;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// li r29,1
	r29.s64 = 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// li r10,38
	ctx.r10.s64 = 38;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r23,8
	r23.s64 = 8;
	// li r27,33
	r27.s64 = 33;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r24,34
	r24.s64 = 34;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r25,36
	r25.s64 = 36;
	// li r11,10
	r11.s64 = 10;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,11
	r11.s64 = 11;
	// li r26,35
	r26.s64 = 35;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r27,13
	r27.s64 = 13;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,14
	r11.s64 = 14;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,17
	r11.s64 = 17;
	// li r26,46
	r26.s64 = 46;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,18
	r11.s64 = 18;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,67
	r11.s64 = 67;
	// li r28,19
	r28.s64 = 19;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r27,45
	r27.s64 = 45;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,86
	r11.s64 = 86;
	// li r28,20
	r28.s64 = 20;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,88
	r11.s64 = 88;
	// li r28,21
	r28.s64 = 21;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82f098e0
	sub_82F098E0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82F09940) {
	__imp__sub_82F09940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09C90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f09cb8
	if (cr6.lt) goto loc_82F09CB8;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F09CB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f09cd8
	if (!cr6.lt) goto loc_82F09CD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09460
	sub_82F09460(ctx, base);
loc_82F09CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F09C90) {
	__imp__sub_82F09C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f53420
	sub_82F53420(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f09d24
	if (cr0.lt) goto loc_82F09D24;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82f09d28
	goto loc_82F09D28;
loc_82F09D24:
	// li r11,0
	r11.s64 = 0;
loc_82F09D28:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bne cr6,0x82f09d38
	if (!cr6.eq) goto loc_82F09D38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F09D38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F09CF0) {
	__imp__sub_82F09CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82f09d6c
	if (!cr6.eq) goto loc_82F09D6C;
	// b 0x82f09e84
	goto loc_82F09E84;
loc_82F09D6C:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82f09d7c
	if (!cr6.lt) goto loc_82F09D7C;
	// li r31,8
	r31.s64 = 8;
	// b 0x82f09dc4
	goto loc_82F09DC4;
loc_82F09D7C:
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x821f3c80
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16264);
	f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// slw r31,r9,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
loc_82F09DC4:
	// li r27,0
	r27.s64 = 0;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r26,-2
	r26.s64 = -2;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// beq cr6,0x82f09e14
	if (cr6.eq) goto loc_82F09E14;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F09DFC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// bne 0x82f09dfc
	if (!cr0.eq) goto loc_82F09DFC;
loc_82F09E14:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f09e74
	if (cr6.eq) goto loc_82F09E74;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_82F09E2C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f09e60
	if (cr6.eq) goto loc_82F09E60;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f07088
	sub_82F07088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f06aa8
	sub_82F06AA8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
loc_82F09E60:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82f09e2c
	if (!cr0.eq) goto loc_82F09E2C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F09E74:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_82F09E84:
	// bl 0x82f09540
	sub_82F09540(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F09D50) {
	__imp__sub_82F09D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mulli r11,r5,12
	r11.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82f09f48
	if (cr6.eq) goto loc_82F09F48;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r11,4
	r11.s64 = 4;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
	// ori r6,r7,63
	ctx.r6.u64 = ctx.r7.u64 | 63;
loc_82F09ED0:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r7,r10,r6
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bne 0x82f09ed0
	if (!cr0.eq) goto loc_82F09ED0;
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f09f48
	if (!cr6.eq) goto loc_82F09F48;
loc_82F09EF0:
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// li r11,4
	r11.s64 = 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
loc_82F09EFC:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bne 0x82f09efc
	if (!cr0.eq) goto loc_82F09EFC;
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82f09f2c
	if (!cr6.eq) goto loc_82F09F2C;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82f09f4c
	if (cr6.eq) goto loc_82F09F4C;
loc_82F09F2C:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f09f48
	if (cr6.eq) goto loc_82F09F48;
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// b 0x82f09ef0
	goto loc_82F09EF0;
loc_82F09F48:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F09F4C:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F09E90) {
	__imp__sub_82F09E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F09F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(-228) );
	// addi r29,r3,-228
	r29.s64 = ctx.r3.s64 + -228;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ac50
	sub_82F6AC50(ctx, base);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09630
	sub_82F09630(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f09fb0
	if (cr6.lt) goto loc_82F09FB0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F09FB0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r5,r10,-6652
	ctx.r5.s64 = ctx.r10.s64 + -6652;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r10,536
	ctx.r4.s64 = ctx.r10.s64 + 536;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r28,r11,-32
	r28.s64 = r11.s64 + -32;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,128
	ctx.r4.s64 = r29.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f92580
	sub_82F92580(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0a028
	if (!cr6.eq) goto loc_82F0A028;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0A028:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F09F58) {
	__imp__sub_82F09F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A038) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f09f58
	sub_82F09F58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F0A038) {
	__imp__sub_82F0A038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(204) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0a064
	if (cr6.eq) goto loc_82F0A064;
	// bl 0x82f05220
	sub_82F05220(ctx, base);
loc_82F0A064:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ac50
	sub_82F6AC50(ctx, base);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09630
	sub_82F09630(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f0a0ac
	if (cr6.lt) goto loc_82F0A0AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0A0AC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r5,r10,-6640
	ctx.r5.s64 = ctx.r10.s64 + -6640;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r10,536
	ctx.r4.s64 = ctx.r10.s64 + 536;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,128
	ctx.r4.s64 = r28.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f92580
	sub_82F92580(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0a124
	if (!cr6.eq) goto loc_82F0A124;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0A124:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F0A040) {
	__imp__sub_82F0A040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A138) {
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
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	sub_82EF6650(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-6628
	ctx.r10.s64 = ctx.r10.s64 + -6628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A138) {
	__imp__sub_82F0A138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A188) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82f08090
	sub_82F08090(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0a1b8
	if (cr6.eq) goto loc_82F0A1B8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0A1B8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-12000
	r11.s64 = r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A188) {
	__imp__sub_82F0A188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0a20c
	if (!cr6.eq) goto loc_82F0A20C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f0a234
	goto loc_82F0A234;
loc_82F0A20C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f0a23c
	if (!cr6.gt) goto loc_82F0A23C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F0A234:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f09d50
	sub_82F09D50(ctx, base);
loc_82F0A23C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r31,r10,r31
	r31.u64 = ctx.r10.u64 & r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r10,r31,12
	ctx.r10.s64 = r31.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82f0a288
	if (!cr6.eq) goto loc_82F0A288;
	// li r11,-1
	r11.s64 = -1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
	// b 0x82f0a38c
	goto loc_82F0A38C;
loc_82F0A288:
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82F0A290:
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// and r26,r10,r29
	r26.u64 = ctx.r10.u64 & r29.u64;
	// mulli r10,r26,12
	ctx.r10.s64 = r26.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82f0a290
	if (!cr6.eq) goto loc_82F0A290;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mulli r9,r26,12
	ctx.r9.s64 = r26.s64 * 12;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// clrlwi r4,r8,1
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// addi r25,r11,8
	r25.s64 = r11.s64 + 8;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r29
	r11.u64 = ctx.r3.u64 & r29.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82f0a310
	if (!cr6.eq) goto loc_82F0A310;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f0a2fc
	if (cr6.eq) goto loc_82F0A2FC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
loc_82F0A2FC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04840
	sub_82F04840(ctx, base);
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// b 0x82f0a38c
	goto loc_82F0A38C;
loc_82F0A310:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// and r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 & r29.u64;
	// b 0x82f0a340
	goto loc_82F0A340;
loc_82F0A33C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82F0A340:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bne cr6,0x82f0a33c
	if (!cr6.eq) goto loc_82F0A33C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f0a374
	if (cr6.eq) goto loc_82F0A374;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
loc_82F0A374:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04840
	sub_82F04840(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82F0A38C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82F0A1E0) {
	__imp__sub_82F0A1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-228
	ctx.r3.s64 = ctx.r3.s64 + -228;
	// b 0x82f0a040
	sub_82F0A040(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F0A398) {
	__imp__sub_82F0A398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A3A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f0a188
	sub_82F0A188(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0a3d0
	if (cr0.eq) goto loc_82F0A3D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0A3D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A3A0) {
	__imp__sub_82F0A3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A3F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f168d8
	sub_82F168D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0a424
	if (cr6.eq) goto loc_82F0A424;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0A424:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0a434
	if (cr0.eq) goto loc_82F0A434;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0A434:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A3F0) {
	__imp__sub_82F0A3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0a4b4
	if (cr6.eq) goto loc_82F0A4B4;
	// li r11,4
	r11.s64 = 4;
	// li r10,5381
	ctx.r10.s64 = 5381;
loc_82F0A474:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r9,r9,63
	ctx.r9.u64 = ctx.r9.u64 | 63;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne 0x82f0a474
	if (!cr0.eq) goto loc_82F0A474;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// and r5,r11,r10
	ctx.r5.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x82f09e90
	sub_82F09E90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f0a4b4
	if (cr0.lt) goto loc_82F0A4B4;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// b 0x82f0a4b8
	goto loc_82F0A4B8;
loc_82F0A4B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0A4B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A450) {
	__imp__sub_82F0A450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0a4fc
	if (!cr6.eq) goto loc_82F0A4FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f0a524
	goto loc_82F0A524;
loc_82F0A4FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f0a52c
	if (!cr6.gt) goto loc_82F0A52C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F0A524:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f09d50
	sub_82F09D50(ctx, base);
loc_82F0A52C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r31,r10,r31
	r31.u64 = ctx.r10.u64 & r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r10,r31,12
	ctx.r10.s64 = r31.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82f0a58c
	if (!cr6.eq) goto loc_82F0A58C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f06ff8
	sub_82F06FF8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f06aa8
	sub_82F06AA8(ctx, base);
	// b 0x82f0a690
	goto loc_82F0A690;
loc_82F0A58C:
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82F0A594:
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// and r26,r10,r29
	r26.u64 = ctx.r10.u64 & r29.u64;
	// mulli r10,r26,12
	ctx.r10.s64 = r26.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82f0a594
	if (!cr6.eq) goto loc_82F0A594;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mulli r9,r26,12
	ctx.r9.s64 = r26.s64 * 12;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// clrlwi r4,r8,1
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// addi r25,r11,8
	r25.s64 = r11.s64 + 8;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r29
	r11.u64 = ctx.r3.u64 & r29.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82f0a614
	if (!cr6.eq) goto loc_82F0A614;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f0a600
	if (cr6.eq) goto loc_82F0A600;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
loc_82F0A600:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f06ee8
	sub_82F06EE8(ctx, base);
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// b 0x82f0a690
	goto loc_82F0A690;
loc_82F0A614:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// and r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 & r29.u64;
	// b 0x82f0a644
	goto loc_82F0A644;
loc_82F0A640:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
loc_82F0A644:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bne cr6,0x82f0a640
	if (!cr6.eq) goto loc_82F0A640;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f0a678
	if (cr6.eq) goto loc_82F0A678;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x82f06f70
	sub_82F06F70(ctx, base);
loc_82F0A678:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f06ee8
	sub_82F06EE8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82F0A690:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82F0A4D0) {
	__imp__sub_82F0A4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0a6e8
	if (!cr6.eq) goto loc_82F0A6E8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0a6e0
	if (cr0.eq) goto loc_82F0A6E0;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x82f0a6e4
	goto loc_82F0A6E4;
loc_82F0A6E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F0A6E4:
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82F0A6E8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A698) {
	__imp__sub_82F0A698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A700) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f08160
	sub_82F08160(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0a734
	if (cr6.eq) goto loc_82F0A734;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0A734:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0a744
	if (cr0.eq) goto loc_82F0A744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0A744:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0A700) {
	__imp__sub_82F0A700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0A760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
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
	// bl 0x82ca2bd4
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r25,-1
	r25.s64 = -1;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// mr r23,r30
	r23.u64 = r30.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// rlwinm r11,r11,29,3,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0a9cc
	if (!cr0.eq) goto loc_82F0A9CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f0a9cc
	if (cr0.eq) goto loc_82F0A9CC;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r8,r1,1192
	ctx.r8.s64 = ctx.r1.s64 + 1192;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r8,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r11,512
	r11.s64 = 512;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r8,r1,1192
	ctx.r8.s64 = ctx.r1.s64 + 1192;
	// addi r7,r1,1192
	ctx.r7.s64 = ctx.r1.s64 + 1192;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, r11.u32);
	// clrlwi. r9,r24,24
	ctx.r9.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r27,r10,2804
	r27.s64 = ctx.r10.s64 + 2804;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// beq 0x82f0a8d4
	if (cr0.eq) goto loc_82F0A8D4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0a8d4
	if (!cr0.eq) goto loc_82F0A8D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09698
	sub_82F09698(ctx, base);
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// bl 0x82f84df8
	sub_82F84DF8(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f73c70
	sub_82F73C70(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r11,r3,30,31,31
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0a8a8
	if (cr0.eq) goto loc_82F0A8A8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6d6a8
	sub_82F6D6A8(ctx, base);
loc_82F0A8A8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ef70
	sub_82F6EF70(ctx, base);
	// b 0x82f0a92c
	goto loc_82F0A92C;
loc_82F0A8D4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82efe680
	sub_82EFE680(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82ef74d8
	sub_82EF74D8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// bl 0x82efe5e0
	sub_82EFE5E0(ctx, base);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82f0a910
	if (!cr6.eq) goto loc_82F0A910;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_82F0A910:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82F0A92C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0a9a4
	if (cr0.eq) goto loc_82F0A9A4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r11,r3,31,31,31
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0a984
	if (cr0.eq) goto loc_82F0A984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09698
	sub_82F09698(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82f0a968
	if (!cr6.eq) goto loc_82F0A968;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82F0A968:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// bl 0x82f84ea0
	sub_82F84EA0(ctx, base);
	// b 0x82f0a9a0
	goto loc_82F0A9A0;
loc_82F0A984:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82f0a994
	if (!cr6.eq) goto loc_82F0A994;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82F0A994:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f81ef8
	sub_82F81EF8(ctx, base);
loc_82F0A9A0:
	// li r23,1
	r23.s64 = 1;
loc_82F0A9A4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ef74b0
	sub_82EF74B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef74b0
	sub_82EF74B0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0A9CC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0aa54
	if (!cr0.eq) goto loc_82F0AA54;
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0aa44
	if (cr0.eq) goto loc_82F0AA44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09698
	sub_82F09698(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// bl 0x82f84df8
	sub_82F84DF8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0aa24
	if (cr6.eq) goto loc_82F0AA24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f07ae0
	sub_82F07AE0(ctx, base);
loc_82F0AA24:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f08838
	sub_82F08838(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0aa54
	if (cr6.eq) goto loc_82F0AA54;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// b 0x82f0aa54
	goto loc_82F0AA54;
loc_82F0AA44:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82f81eb0
	sub_82F81EB0(ctx, base);
loc_82F0AA54:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0aa9c
	if (cr6.eq) goto loc_82F0AA9C;
	// lbz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f0aa9c
	if (!cr0.eq) goto loc_82F0AA9C;
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f0aa94
	if (!cr0.eq) goto loc_82F0AA94;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f73b38
	sub_82F73B38(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// b 0x82f0aa98
	goto loc_82F0AA98;
loc_82F0AA94:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F0AA98:
	// bl 0x82f81230
	sub_82F81230(ctx, base);
loc_82F0AA9C:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0aaac
	if (cr0.eq) goto loc_82F0AAAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0a040
	sub_82F0A040(ctx, base);
loc_82F0AAAC:
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82F0A760) {
	__imp__sub_82F0A760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0AAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0ad04
	if (cr6.eq) goto loc_82F0AD04;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f0ad04
	if (!cr6.eq) goto loc_82F0AD04;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-128
	r31.s64 = r11.s64 + -128;
	// bne cr6,0x82f0ab20
	if (!cr6.eq) goto loc_82F0AB20;
	// li r31,0
	r31.s64 = 0;
loc_82F0AB20:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f0ad04
	if (cr6.lt) goto loc_82F0AD04;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0acdc
	if (cr6.eq) goto loc_82F0ACDC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// bl 0x82f09cf0
	sub_82F09CF0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F0AB8C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82f0ab8c
	if (!cr0.eq) goto loc_82F0AB8C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0abb8
	if (!cr0.eq) goto loc_82F0ABB8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0ABB8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f0acdc
	if (cr6.eq) goto loc_82F0ACDC;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f0acdc
	if (cr6.lt) goto loc_82F0ACDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82f0aca4
	if (cr6.eq) goto loc_82F0ACA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f0aca4
	if (cr0.eq) goto loc_82F0ACA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f0acdc
	if (cr0.eq) goto loc_82F0ACDC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bne cr6,0x82f0acdc
	if (!cr6.eq) goto loc_82F0ACDC;
	// li r3,148
	ctx.r3.s64 = 148;
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0ac58
	if (cr0.eq) goto loc_82F0AC58;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f0ac5c
	goto loc_82F0AC5C;
loc_82F0AC58:
	// li r31,0
	r31.s64 = 0;
loc_82F0AC5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f454d0
	sub_82F454D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0ac7c
	if (cr6.eq) goto loc_82F0AC7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
loc_82F0AC7C:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0ac8c
	if (cr6.eq) goto loc_82F0AC8C;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F0AC8C:
	// stw r31,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0acdc
	if (cr6.eq) goto loc_82F0ACDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// b 0x82f0acdc
	goto loc_82F0ACDC;
loc_82F0ACA4:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f0a698
	sub_82F0A698(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0acdc
	if (cr0.eq) goto loc_82F0ACDC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f786d0
	sub_82F786D0(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f09858
	sub_82F09858(ctx, base);
loc_82F0ACDC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0ad04
	if (!cr6.eq) goto loc_82F0AD04;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0AD04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F0AAB8) {
	__imp__sub_82F0AAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0AD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82f0a450
	sub_82F0A450(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f0ad88
	if (cr0.eq) goto loc_82F0AD88;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0ad80
	if (cr6.eq) goto loc_82F0AD80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0ad58
	if (cr6.eq) goto loc_82F0AD58;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0AD58:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0ad78
	if (cr6.eq) goto loc_82F0AD78;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0AD78:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82F0AD80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f0ad8c
	goto loc_82F0AD8C;
loc_82F0AD88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0AD8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0AD10) {
	__imp__sub_82F0AD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0ADA8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0ae20
	if (cr6.eq) goto loc_82F0AE20;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r5,r11,r29
	ctx.r5.u64 = r11.u64 & r29.u64;
	// bl 0x82f08258
	sub_82F08258(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f0ae20
	if (cr0.lt) goto loc_82F0AE20;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f06ee8
	sub_82F06EE8(ctx, base);
	// b 0x82f0ae30
	goto loc_82F0AE30;
loc_82F0AE20:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0a4d0
	sub_82F0A4D0(ctx, base);
loc_82F0AE30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F0ADA8) {
	__imp__sub_82F0ADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0AE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r31,204
	r29.s64 = r31.s64 + 204;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0af30
	if (cr6.eq) goto loc_82F0AF30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f0af64
	if (cr0.eq) goto loc_82F0AF64;
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f16048
	sub_82F16048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0af3c
	if (cr0.eq) goto loc_82F0AF3C;
	// addi r29,r31,208
	r29.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6c610
	sub_82F6C610(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0af50
	if (!cr0.eq) goto loc_82F0AF50;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0a760
	sub_82F0A760(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0af1c
	if (!cr6.eq) goto loc_82F0AF1C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0AF1C:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f0af30
	if (cr6.lt) goto loc_82F0AF30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0AF30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F0AF34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
loc_82F0AF3C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0a760
	sub_82F0A760(ctx, base);
loc_82F0AF50:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f0af64
	if (cr6.lt) goto loc_82F0AF64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0AF64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f0af34
	goto loc_82F0AF34;
}

PPC_WEAK_FUNC(sub_82F0AE38) {
	__imp__sub_82F0AE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0AF70) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,252(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(252) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0afa4
	if (cr6.eq) goto loc_82F0AFA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09540
	sub_82F09540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0AFA4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0AF70) {
	__imp__sub_82F0AF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0AFC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,23760
	r11.s64 = r11.s64 + 23760;
	// addi r10,r10,-6624
	ctx.r10.s64 = ctx.r10.s64 + -6624;
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f0b010
	if (cr6.eq) goto loc_82F0B010;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f095b8
	sub_82F095B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0B010:
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82f087c0
	sub_82F087C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f86020
	sub_82F86020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F0AFC8) {
	__imp__sub_82F0AFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B038) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B038) {
	__imp__sub_82F0B038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// subf r11,r3,r5
	r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B040) {
	__imp__sub_82F0B040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B050) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,7464
	ctx.r9.s64 = r11.s64 + 7464;
	// addi r10,r10,-6544
	ctx.r10.s64 = ctx.r10.s64 + -6544;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B050) {
	__imp__sub_82F0B050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B0A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B0A8) {
	__imp__sub_82F0B0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B0B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0b11c
	if (cr6.eq) goto loc_82F0B11C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0B11C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B0B0) {
	__imp__sub_82F0B0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,7464
	r11.s64 = r11.s64 + 7464;
	// addi r10,r10,-6544
	ctx.r10.s64 = ctx.r10.s64 + -6544;
	// li r28,0
	r28.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// beq cr6,0x82f0b1c0
	if (cr6.eq) goto loc_82F0B1C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7138
	sub_82EF7138(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0b1b8
	if (cr6.eq) goto loc_82F0B1B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f0b1b8
	if (!cr0.eq) goto loc_82F0B1B8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0B1B8:
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// b 0x82f0b1c4
	goto loc_82F0B1C4;
loc_82F0B1C0:
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
loc_82F0B1C4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r26,588
	ctx.r3.s64 = r26.s64 + 588;
	// addi r30,r11,120
	r30.s64 = r11.s64 + 120;
	// bl 0x82f0ad10
	sub_82F0AD10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82f04b00
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f0b230
	if (cr6.eq) goto loc_82F0B230;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0B230:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F0B138) {
	__imp__sub_82F0B138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x82ca2bd0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f04298
	sub_82F04298(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r28,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r28.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-6376
	r11.s64 = r11.s64 + -6376;
	// addi r10,r10,-6384
	ctx.r10.s64 = ctx.r10.s64 + -6384;
	// addi r9,r9,-6464
	ctx.r9.s64 = ctx.r9.s64 + -6464;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// stw r24,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r22,r31,204
	r22.s64 = r31.s64 + 204;
	// addi r5,r28,76
	ctx.r5.s64 = r28.s64 + 76;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// stb r24,208(r31)
	PPC_STORE_U8(r31.u32 + 208, r24.u8);
	// addi r23,r31,228
	r23.s64 = r31.s64 + 228;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-6996
	r11.s64 = r11.s64 + -6996;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r24,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r24.u32);
	// stw r24,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r24.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// sth r24,224(r31)
	PPC_STORE_U16(r31.u32 + 224, r24.u16);
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(84) );
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// lhz r11,80(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// rlwinm r11,r11,0,29,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// sth r11,224(r31)
	PPC_STORE_U16(r31.u32 + 224, r11.u16);
	// lhz r11,80(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// rlwinm r11,r11,25,7,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b344
	if (cr0.eq) goto loc_82F0B344;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// b 0x82f0b34c
	goto loc_82F0B34C;
loc_82F0B344:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// andi. r11,r11,65533
	r11.u64 = r11.u64 & 65533;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0B34C:
	// sth r11,224(r31)
	PPC_STORE_U16(r31.u32 + 224, r11.u16);
	// li r11,255
	r11.s64 = 255;
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r24.u8);
	// stb r24,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r24.u8);
	// stb r24,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r24.u8);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lhz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// sth r9,224(r31)
	PPC_STORE_U16(r31.u32 + 224, ctx.r9.u16);
	// stw r24,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r24.u32);
	// stw r8,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r8.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// lhz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0b3ac
	if (cr0.eq) goto loc_82F0B3AC;
	// stb r11,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r11.u8);
	// stb r11,196(r31)
	PPC_STORE_U8(r31.u32 + 196, r11.u8);
loc_82F0B3AC:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ori r25,r11,7817
	r25.u64 = r11.u64 | 7817;
	// ori r26,r10,9034
	r26.u64 = ctx.r10.u64 | 9034;
	// beq 0x82f0b3f4
	if (cr0.eq) goto loc_82F0B3F4;
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// bl 0x82f60da8
	sub_82F60DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82f0b138
	sub_82F0B138(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f0b3f8
	goto loc_82F0B3F8;
loc_82F0B3F4:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82F0B3F8:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(248) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0b418
	if (cr6.eq) goto loc_82F0B418;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0B418:
	// rotlwi r11,r29,0
	r11.u64 = rotl32(r29.u32, 0);
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
	// lwz r29,20(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f0b440
	if (cr6.eq) goto loc_82F0B440;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0B440:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0b460
	if (cr6.eq) goto loc_82F0B460;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0B460:
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// bl 0x82f921d0
	sub_82F921D0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82f922b8
	sub_82F922B8(ctx, base);
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f0b4e4
	if (cr0.eq) goto loc_82F0B4E4;
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f84c60
	sub_82F84C60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f0b4e8
	goto loc_82F0B4E8;
loc_82F0B4E4:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82F0B4E8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0b508
	if (cr6.eq) goto loc_82F0B508;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0B508:
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rotlwi r3,r30,0
	ctx.r3.u64 = rotl32(r30.u32, 0);
	// bl 0x82f04ee0
	sub_82F04EE0(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// bl 0x82f09698
	sub_82F09698(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f73ee0
	sub_82F73EE0(ctx, base);
	// lbz r11,80(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b570
	if (cr0.eq) goto loc_82F0B570;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
loc_82F0B570:
	// lhz r11,80(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// beq 0x82f0b590
	if (cr0.eq) goto loc_82F0B590;
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82f0b598
	goto loc_82F0B598;
loc_82F0B590:
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82F0B598:
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
	// lhz r11,80(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// rlwinm r10,r11,28,24,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFF;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f0b5c8
	if (cr0.eq) goto loc_82F0B5C8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f0b5c0
	if (cr0.eq) goto loc_82F0B5C0;
	// rlwinm r11,r11,31,17,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0b5c8
	if (!cr0.eq) goto loc_82F0B5C8;
loc_82F0B5C0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82f0b5cc
	goto loc_82F0B5CC;
loc_82F0B5C8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82F0B5CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	// beq 0x82f0b5e0
	if (cr0.eq) goto loc_82F0B5E0;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f6d968
	sub_82F6D968(ctx, base);
loc_82F0B5E0:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b5f0
	if (cr0.eq) goto loc_82F0B5F0;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f6d990
	sub_82F6D990(ctx, base);
loc_82F0B5F0:
	// lhz r11,80(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b604
	if (cr0.eq) goto loc_82F0B604;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f6d9b8
	sub_82F6D9B8(ctx, base);
loc_82F0B604:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// rlwinm r11,r11,30,2,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b624
	if (cr0.eq) goto loc_82F0B624;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
loc_82F0B624:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,22,10,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b648
	if (cr0.eq) goto loc_82F0B648;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
loc_82F0B648:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0b664
	if (cr6.eq) goto loc_82F0B664;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82f0b670
	goto loc_82F0B670;
loc_82F0B664:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82F0B670:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b68c
	if (cr0.eq) goto loc_82F0B68C;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,5,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b694
	if (cr0.eq) goto loc_82F0B694;
loc_82F0B68C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f050b0
	sub_82F050B0(ctx, base);
loc_82F0B694:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x82ef7210
	sub_82EF7210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0b734
	if (cr0.eq) goto loc_82F0B734;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0b704
	if (cr6.eq) goto loc_82F0B704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60358
	sub_82F60358(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0b704
	if (cr0.eq) goto loc_82F0B704;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82f16048
	sub_82F16048(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f0b704
	if (cr6.lt) goto loc_82F0B704;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0B704:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0b74c
	if (!cr0.eq) goto loc_82F0B74C;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// rlwinm r5,r10,31,31,31
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82f0a760
	sub_82F0A760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f05220
	sub_82F05220(ctx, base);
	// b 0x82f0b74c
	goto loc_82F0B74C;
loc_82F0B734:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// rlwinm r5,r11,31,31,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// bl 0x82f0a760
	sub_82F0A760(ctx, base);
loc_82F0B74C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0ae38
	sub_82F0AE38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f61930
	sub_82F61930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f7c868
	sub_82F7C868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82F0B240) {
	__imp__sub_82F0B240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B778) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0b7b8
	if (!cr0.eq) goto loc_82F0B7B8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0B7B8:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B778) {
	__imp__sub_82F0B778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B7D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0b80c
	if (cr0.eq) goto loc_82F0B80C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// b 0x82f0b848
	goto loc_82F0B848;
loc_82F0B80C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0b820
	if (!cr6.eq) goto loc_82F0B820;
	// bl 0x82f67818
	sub_82F67818(ctx, base);
loc_82F0B820:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0b834
	if (!cr6.eq) goto loc_82F0B834;
	// bl 0x82f67818
	sub_82F67818(ctx, base);
loc_82F0B834:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82F0B848:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B7D8) {
	__imp__sub_82F0B7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lha r11,24(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 24));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,-6096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6096);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// lha r11,26(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 26));
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r11.u16);
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// lha r11,26(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 26));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,30(r31)
	PPC_STORE_U16(r31.u32 + 30, r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B868) {
	__imp__sub_82F0B868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lfd f13,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lfd f0,31192(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 31192);
	// stfd f13,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.f13.u64);
	// stfd f0,16(r31)
	PPC_STORE_U64(r31.u32 + 16, f0.u64);
	// stfd f0,8(r31)
	PPC_STORE_U64(r31.u32 + 8, f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B920) {
	__imp__sub_82F0B920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B980) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B980) {
	__imp__sub_82F0B980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r11,31
	r30.u64 = r11.u32 & 0x1;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f0b7d8
	sub_82F0B7D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bne 0x82f0ba38
	if (!cr0.eq) goto loc_82F0BA38;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0BA38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0B9D0) {
	__imp__sub_82F0B9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfd f2,-6088(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -6088);
	// bl 0x82200800
	sub_82200800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// lfs f0,27524(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27524);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,356(r31)
	PPC_STORE_U16(r31.u32 + 356, r11.u16);
	// bl 0x82f0b868
	sub_82F0B868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BA58) {
	__imp__sub_82F0BA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BAB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BAB8) {
	__imp__sub_82F0BAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3224
	ctx.r3.s64 = r11.s64 + 3224;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BAC0) {
	__imp__sub_82F0BAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BAD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BAD0) {
	__imp__sub_82F0BAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,25213
	ctx.r3.s64 = 1652359168;
	// ori r3,r3,45007
	ctx.r3.u64 = ctx.r3.u64 | 45007;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BAD8) {
	__imp__sub_82F0BAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(156) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82F0BAE8) {
	__imp__sub_82F0BAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BAF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x82f10110
	sub_82F10110(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F0BAF8) {
	__imp__sub_82F0BAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BB00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x82f0bad0
	sub_82F0BAD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F0BB00) {
	__imp__sub_82F0BB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BB08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f10110
	sub_82F10110(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F0BB08) {
	__imp__sub_82F0BB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(248) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BB10) {
	__imp__sub_82F0BB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BB18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// clrlwi. r30,r11,31
	r30.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f0bb5c
	if (cr0.eq) goto loc_82F0BB5C;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0bb54
	if (cr0.eq) goto loc_82F0BB54;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0bb5c
	if (!cr0.eq) goto loc_82F0BB5C;
loc_82F0BB54:
	// li r11,1
	r11.s64 = 1;
	// b 0x82f0bb60
	goto loc_82F0BB60;
loc_82F0BB5C:
	// li r11,0
	r11.s64 = 0;
loc_82F0BB60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0bb74
	if (cr0.eq) goto loc_82F0BB74;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f6d968
	sub_82F6D968(ctx, base);
	// b 0x82f0bb84
	goto loc_82F0BB84;
loc_82F0BB74:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
loc_82F0BB84:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0bb98
	if (cr0.eq) goto loc_82F0BB98;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f6d990
	sub_82F6D990(ctx, base);
	// b 0x82f0bba8
	goto loc_82F0BBA8;
loc_82F0BB98:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,253
	ctx.r10.u64 = ctx.r10.u64 & 253;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
loc_82F0BBA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0BB18) {
	__imp__sub_82F0BB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r29,r30,-128
	r29.s64 = r30.s64 + -128;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82f64a38
	sub_82F64A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,98
	cr6.compare<uint32_t>(ctx.r4.u32, 98, xer);
	// bgt cr6,0x82f0c91c
	if (cr6.gt) goto loc_82F0C91C;
	// lis r12,-32252
	r12.s64 = -2113667072;
	// addi r12,r12,-8080
	r12.s64 = r12.s64 + -8080;
	// rlwinm r0,r4,1,0,30
	r0.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32015
	r12.s64 = -2098135040;
	// addi r12,r12,-17368
	r12.s64 = r12.s64 + -17368;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82F0BC28;
	case 1:
		goto loc_82F0BC88;
	case 2:
		goto loc_82F0C91C;
	case 3:
		goto loc_82F0C91C;
	case 4:
		goto loc_82F0C91C;
	case 5:
		goto loc_82F0C91C;
	case 6:
		goto loc_82F0C91C;
	case 7:
		goto loc_82F0C91C;
	case 8:
		goto loc_82F0C91C;
	case 9:
		goto loc_82F0C91C;
	case 10:
		goto loc_82F0C91C;
	case 11:
		goto loc_82F0C91C;
	case 12:
		goto loc_82F0C91C;
	case 13:
		goto loc_82F0C91C;
	case 14:
		goto loc_82F0C91C;
	case 15:
		goto loc_82F0C91C;
	case 16:
		goto loc_82F0C91C;
	case 17:
		goto loc_82F0C91C;
	case 18:
		goto loc_82F0C91C;
	case 19:
		goto loc_82F0C91C;
	case 20:
		goto loc_82F0C91C;
	case 21:
		goto loc_82F0C91C;
	case 22:
		goto loc_82F0C91C;
	case 23:
		goto loc_82F0C91C;
	case 24:
		goto loc_82F0C91C;
	case 25:
		goto loc_82F0C91C;
	case 26:
		goto loc_82F0C91C;
	case 27:
		goto loc_82F0C91C;
	case 28:
		goto loc_82F0C91C;
	case 29:
		goto loc_82F0C91C;
	case 30:
		goto loc_82F0C91C;
	case 31:
		goto loc_82F0C91C;
	case 32:
		goto loc_82F0C91C;
	case 33:
		goto loc_82F0C91C;
	case 34:
		goto loc_82F0C91C;
	case 35:
		goto loc_82F0C91C;
	case 36:
		goto loc_82F0C91C;
	case 37:
		goto loc_82F0BDF8;
	case 38:
		goto loc_82F0BEB0;
	case 39:
		goto loc_82F0BEDC;
	case 40:
		goto loc_82F0BE6C;
	case 41:
		goto loc_82F0BF08;
	case 42:
		goto loc_82F0BCD0;
	case 43:
		goto loc_82F0BCF4;
	case 44:
		goto loc_82F0BF24;
	case 45:
		goto loc_82F0BFC4;
	case 46:
		goto loc_82F0BFD4;
	case 47:
		goto loc_82F0BFE4;
	case 48:
		goto loc_82F0C014;
	case 49:
		goto loc_82F0C044;
	case 50:
		goto loc_82F0C070;
	case 51:
		goto loc_82F0C26C;
	case 52:
		goto loc_82F0C0E4;
	case 53:
		goto loc_82F0C104;
	case 54:
		goto loc_82F0C120;
	case 55:
		goto loc_82F0C13C;
	case 56:
		goto loc_82F0C160;
	case 57:
		goto loc_82F0C168;
	case 58:
		goto loc_82F0C17C;
	case 59:
		goto loc_82F0C190;
	case 60:
		goto loc_82F0C1A8;
	case 61:
		goto loc_82F0C240;
	case 62:
		goto loc_82F0C260;
	case 63:
		goto loc_82F0C2E0;
	case 64:
		goto loc_82F0C084;
	case 65:
		goto loc_82F0C090;
	case 66:
		goto loc_82F0C0BC;
	case 67:
		goto loc_82F0C2EC;
	case 68:
		goto loc_82F0C318;
	case 69:
		goto loc_82F0C348;
	case 70:
		goto loc_82F0C680;
	case 71:
		goto loc_82F0C6A8;
	case 72:
		goto loc_82F0C6F8;
	case 73:
		goto loc_82F0C73C;
	case 74:
		goto loc_82F0C774;
	case 75:
		goto loc_82F0C7F4;
	case 76:
		goto loc_82F0C824;
	case 77:
		goto loc_82F0C38C;
	case 78:
		goto loc_82F0C400;
	case 79:
		goto loc_82F0C870;
	case 80:
		goto loc_82F0C840;
	case 81:
		goto loc_82F0C8D0;
	case 82:
		goto loc_82F0C8A0;
	case 83:
		goto loc_82F0C900;
	case 84:
		goto loc_82F0C474;
	case 85:
		goto loc_82F0C494;
	case 86:
		goto loc_82F0C4CC;
	case 87:
		goto loc_82F0C4F0;
	case 88:
		goto loc_82F0C940;
	case 89:
		goto loc_82F0C514;
	case 90:
		goto loc_82F0C540;
	case 91:
		goto loc_82F0C56C;
	case 92:
		goto loc_82F0C590;
	case 93:
		goto loc_82F0C5B4;
	case 94:
		goto loc_82F0C5E0;
	case 95:
		goto loc_82F0C600;
	case 96:
		goto loc_82F0C620;
	case 97:
		goto loc_82F0C65C;
	case 98:
		goto loc_82F0C940;
	default:
		__builtin_unreachable();
	}
loc_82F0BC28:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f0b920
	sub_82F0B920(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f60dd8
	sub_82F60DD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwa r11,0(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f31,f0
	f31.f64 = double(f0.s64);
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfd f0,-8776(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8776);
loc_82F0BC74:
	// fmadd f1,f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 * f0.f64 + ctx.f13.f64;
loc_82F0BC78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82F0BC7C:
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82F0BC80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f0c9cc
	goto loc_82F0C9CC;
loc_82F0BC88:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f0b920
	sub_82F0B920(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f60dd8
	sub_82F60DD8(ctx, base);
	// lwa r11,4(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// fcfid f31,f0
	f31.f64 = double(f0.s64);
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfd f0,-8776(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8776);
	// b 0x82f0bc74
	goto loc_82F0BC74;
loc_82F0BCD0:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r30,r11,31,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
loc_82F0BCD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82f0c9cc
	goto loc_82F0C9CC;
loc_82F0BCF4:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0bd78
	if (cr0.eq) goto loc_82F0BD78;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f73ea8
	sub_82F73EA8(ctx, base);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0bd48
	if (!cr0.eq) goto loc_82F0BD48;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0BD48:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F0BD58:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f0bd58
	if (!cr0.eq) goto loc_82F0BD58;
	// b 0x82f0bde4
	goto loc_82F0BDE4;
loc_82F0BD78:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f73e70
	sub_82F73E70(ctx, base);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0bdb8
	if (!cr0.eq) goto loc_82F0BDB8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0BDB8:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F0BDC8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f0bdc8
	if (!cr0.eq) goto loc_82F0BDC8;
loc_82F0BDE4:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0bc80
	if (!cr0.eq) goto loc_82F0BC80;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// b 0x82f0bc80
	goto loc_82F0BC80;
loc_82F0BDF8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f73e70
	sub_82F73E70(ctx, base);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0be3c
	if (!cr0.eq) goto loc_82F0BE3C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0BE3C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F0BE4C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f0be4c
	if (!cr0.eq) goto loc_82F0BE4C;
	// b 0x82f0bde4
	goto loc_82F0BDE4;
loc_82F0BE6C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r11,83(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r11,r10,8,0,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F0BEA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82F0BEA8:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(f0.s64);
	// b 0x82f0bc7c
	goto loc_82F0BC7C;
loc_82F0BEB0:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f6d8f0
	sub_82F6D8F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwa r11,84(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0BEDC:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f7d5d0
	sub_82F7D5D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwa r11,84(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0BF08:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f73b38
	sub_82F73B38(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0BF24:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0bf3c
	if (!cr0.eq) goto loc_82F0BF3C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r10,-11840
	ctx.r5.s64 = ctx.r10.s64 + -11840;
	// b 0x82f0bf8c
	goto loc_82F0BF8C;
loc_82F0BF3C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,328(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82f0bf84
	if (cr6.lt) goto loc_82F0BF84;
	// beq cr6,0x82f0bf78
	if (cr6.eq) goto loc_82F0BF78;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82f0bf6c
	if (cr6.lt) goto loc_82F0BF6C;
loc_82F0BF5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// b 0x82f0bc80
	goto loc_82F0BC80;
loc_82F0BF6C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6012
	ctx.r5.s64 = ctx.r10.s64 + -6012;
	// b 0x82f0bf8c
	goto loc_82F0BF8C;
loc_82F0BF78:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6020
	ctx.r5.s64 = ctx.r10.s64 + -6020;
	// b 0x82f0bf8c
	goto loc_82F0BF8C;
loc_82F0BF84:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6028
	ctx.r5.s64 = ctx.r10.s64 + -6028;
loc_82F0BF8C:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
loc_82F0BF90:
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
loc_82F0BFA8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0bc80
	if (!cr0.eq) goto loc_82F0BC80;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f0bc80
	goto loc_82F0BC80;
loc_82F0BFC4:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm r30,r11,29,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0BFD4:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm r30,r11,30,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0BFE4:
	// lbz r30,68(r30)
	r30.u64 = PPC_LOAD_U8(r30.u32 + 68);
loc_82F0BFE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// b 0x82f0c9cc
	goto loc_82F0C9CC;
loc_82F0C014:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0c034
	if (cr6.eq) goto loc_82F0C034;
loc_82F0C02C:
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// b 0x82f0bc80
	goto loc_82F0BC80;
loc_82F0C034:
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82f0bc80
	goto loc_82F0BC80;
loc_82F0C044:
	// lwz r11,180(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c060
	if (cr6.eq) goto loc_82F0C060;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r30,r11,31,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C060:
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C070:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C084:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r30,r11,30,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C090:
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bne cr6,0x82f0c0b4
	if (!cr6.eq) goto loc_82F0C0B4;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
loc_82F0C0B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f0c02c
	goto loc_82F0C02C;
loc_82F0C0BC:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,364(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(364) );
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C0E4:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C104:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C120:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f6f5e8
	sub_82F6F5E8(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C13C:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f6f538
	sub_82F6F538(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C160:
	// lbz r30,64(r30)
	r30.u64 = PPC_LOAD_U8(r30.u32 + 64);
	// b 0x82f0bfe8
	goto loc_82F0BFE8;
loc_82F0C168:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C17C:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C190:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f7e748
	sub_82F7E748(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C1A8:
	// lwz r11,180(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c1c4
	if (cr6.eq) goto loc_82F0C1C4;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82f0c1d0
	goto loc_82F0C1D0;
loc_82F0C1C4:
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82F0C1D0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// beq 0x82f0c1f4
	if (cr0.eq) goto loc_82F0C1F4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,1
	r30.s64 = 1;
	// addi r5,r10,-6036
	ctx.r5.s64 = ctx.r10.s64 + -6036;
	// b 0x82f0c200
	goto loc_82F0C200;
loc_82F0C1F4:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r30,2
	r30.s64 = 2;
	// addi r5,r10,-4592
	ctx.r5.s64 = ctx.r10.s64 + -4592;
loc_82F0C200:
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// rlwinm. r11,r30,0,30,30
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0c234
	if (cr0.eq) goto loc_82F0C234;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r30,r30,0,31,29
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0c234
	if (!cr0.eq) goto loc_82F0C234;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0C234:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0C238:
	// beq 0x82f0bc80
	if (cr0.eq) goto loc_82F0BC80;
	// b 0x82f0bfa8
	goto loc_82F0BFA8;
loc_82F0C240:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f0c034
	if (!cr6.gt) goto loc_82F0C034;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea8
	goto loc_82F0BEA8;
loc_82F0C260:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r30,r11,28,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C26C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// beq 0x82f0c298
	if (cr0.eq) goto loc_82F0C298;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r30,4
	r30.s64 = 4;
	// addi r5,r10,-6048
	ctx.r5.s64 = ctx.r10.s64 + -6048;
	// b 0x82f0c2a4
	goto loc_82F0C2A4;
loc_82F0C298:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r30,8
	r30.s64 = 8;
	// addi r5,r10,8236
	ctx.r5.s64 = ctx.r10.s64 + 8236;
loc_82F0C2A4:
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0c2d8
	if (cr0.eq) goto loc_82F0C2D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm r30,r30,0,29,27
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0c2d8
	if (!cr0.eq) goto loc_82F0C2D8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0C2D8:
	// rlwinm. r11,r30,0,29,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82f0c238
	goto loc_82F0C238;
loc_82F0C2E0:
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r30,r11,25,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C2EC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lbz r30,30(r30)
	r30.u64 = PPC_LOAD_U8(r30.u32 + 30);
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C318:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r30,r11,29,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C348:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0c380
	if (cr6.eq) goto loc_82F0C380;
	// bl 0x82f6da08
	sub_82F6DA08(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F0C378:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(f0.s64);
	// b 0x82f0bc78
	goto loc_82F0BC78;
loc_82F0C380:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3240);
	// b 0x82f0bc78
	goto loc_82F0BC78;
loc_82F0C38C:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,180(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c3b8
	if (cr6.eq) goto loc_82F0C3B8;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0c3c4
	goto loc_82F0C3C4;
loc_82F0C3B8:
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0C3C4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0c380
	if (cr0.eq) goto loc_82F0C380;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c380
	if (cr6.eq) goto loc_82F0C380;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(272) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c378
	goto loc_82F0C378;
loc_82F0C400:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,180(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c42c
	if (cr6.eq) goto loc_82F0C42C;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0c438
	goto loc_82F0C438;
loc_82F0C42C:
	// lwz r11,176(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0C438:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0c380
	if (cr0.eq) goto loc_82F0C380;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c380
	if (cr6.eq) goto loc_82F0C380;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(276) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c378
	goto loc_82F0C378;
loc_82F0C474:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm r30,r11,25,7,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C494:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,348(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 348);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82F0C4B4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3216(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	f0.f64 = double(temp.f32);
loc_82F0C4BC:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82f0bc78
	goto loc_82F0BC78;
loc_82F0C4CC:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,349(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 349);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4b4
	goto loc_82F0C4B4;
loc_82F0C4F0:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,350(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 350);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4b4
	goto loc_82F0C4B4;
loc_82F0C514:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,355(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 355);
	// lfs f0,2960(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2960);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4bc
	goto loc_82F0C4BC;
loc_82F0C540:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r11,356(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 356));
	// lfs f0,3052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3052);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4bc
	goto loc_82F0C4BC;
loc_82F0C56C:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,352(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 352);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4b4
	goto loc_82F0C4B4;
loc_82F0C590:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,353(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 353);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4b4
	goto loc_82F0C4B4;
loc_82F0C5B4:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r11,358(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 358));
	// lfs f0,2736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4bc
	goto loc_82F0C4BC;
loc_82F0C5E0:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,351(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r30,r11,26,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C600:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,351(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C620:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,351(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r11,r11,0,0,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C65C:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r11,354(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 354);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0c4b4
	goto loc_82F0C4B4;
loc_82F0C680:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// bl 0x82f7d648
	sub_82F7D648(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C6A8:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lbz r9,329(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 329);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0c750
	if (!cr0.eq) goto loc_82F0C750;
loc_82F0C6C8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r10,-11840
	ctx.r5.s64 = ctx.r10.s64 + -11840;
	// b 0x82f0bf90
	goto loc_82F0BF90;
loc_82F0C6D4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6012
	ctx.r5.s64 = ctx.r10.s64 + -6012;
	// b 0x82f0bf90
	goto loc_82F0BF90;
loc_82F0C6E0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6056
	ctx.r5.s64 = ctx.r10.s64 + -6056;
	// b 0x82f0bf90
	goto loc_82F0BF90;
loc_82F0C6EC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6060
	ctx.r5.s64 = ctx.r10.s64 + -6060;
	// b 0x82f0bf90
	goto loc_82F0BF90;
loc_82F0C6F8:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r11,326(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 326);
	// lfs f0,2736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	f0.f64 = double(temp.f32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// b 0x82f0c940
	goto loc_82F0C940;
loc_82F0C73C:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
loc_82F0C750:
	// lbz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 328);
	// rlwinm r10,r10,30,30,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82f0c6c8
	if (cr6.lt) goto loc_82F0C6C8;
	// beq cr6,0x82f0c6ec
	if (cr6.eq) goto loc_82F0C6EC;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x82f0c6e0
	if (cr6.lt) goto loc_82F0C6E0;
	// beq cr6,0x82f0c6d4
	if (cr6.eq) goto loc_82F0C6D4;
	// b 0x82f0bf5c
	goto loc_82F0BF5C;
loc_82F0C774:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 328);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82f0c7c0
	if (cr6.eq) goto loc_82F0C7C0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82f0c7b4
	if (cr6.eq) goto loc_82F0C7B4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r10,-11840
	ctx.r5.s64 = ctx.r10.s64 + -11840;
	// b 0x82f0c7c8
	goto loc_82F0C7C8;
loc_82F0C7B4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6064
	ctx.r5.s64 = ctx.r10.s64 + -6064;
	// b 0x82f0c7c8
	goto loc_82F0C7C8;
loc_82F0C7C0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6072
	ctx.r5.s64 = ctx.r10.s64 + -6072;
loc_82F0C7C8:
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0c940
	if (!cr0.eq) goto loc_82F0C940;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f0c940
	goto loc_82F0C940;
loc_82F0C7F4:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lbz r11,96(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// clrlwi r29,r11,31
	r29.u64 = r11.u32 & 0x1;
loc_82F0C80C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82f0c940
	goto loc_82F0C940;
loc_82F0C824:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r29,r11,23,31,31
	r29.u64 = rotl64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	// b 0x82f0c80c
	goto loc_82F0C80C;
loc_82F0C840:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c940
	if (cr6.eq) goto loc_82F0C940;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(84) );
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C870:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c940
	if (cr6.eq) goto loc_82F0C940;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C8A0:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c940
	if (cr6.eq) goto loc_82F0C940;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(92) );
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C8D0:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c940
	if (cr6.eq) goto loc_82F0C940;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(88) );
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82f0bea4
	goto loc_82F0BEA4;
loc_82F0C900:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0c940
	if (!cr6.eq) goto loc_82F0C940;
	// lhz r11,96(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 96);
	// rlwinm r30,r11,22,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// b 0x82f0bcd8
	goto loc_82F0BCD8;
loc_82F0C91C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(220) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0bc80
	if (!cr0.eq) goto loc_82F0BC80;
loc_82F0C940:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0c970
	if (cr6.eq) goto loc_82F0C970;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f0c9cc
	goto loc_82F0C9CC;
loc_82F0C970:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-6080
	ctx.r10.s64 = r11.s64 + -6080;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
loc_82F0C980:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f0c9a4
	if (cr0.eq) goto loc_82F0C9A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0c980
	if (cr6.eq) goto loc_82F0C980;
loc_82F0C9A4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0c9c8
	if (!cr0.eq) goto loc_82F0C9C8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f0c9c8
	if (cr6.eq) goto loc_82F0C9C8;
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(596) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// b 0x82f0bc80
	goto loc_82F0BC80;
loc_82F0C9C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0C9CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F0BBC0) {
	__imp__sub_82F0BBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,158(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f0cb24
	if (!cr0.eq) goto loc_82F0CB24;
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f0cb24
	if (cr0.eq) goto loc_82F0CB24;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f0cb24
	if (!cr0.eq) goto loc_82F0CB24;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cb24
	if (cr0.eq) goto loc_82F0CB24;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0cae8
	if (!cr0.eq) goto loc_82F0CAE8;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0ca78
	if (cr6.eq) goto loc_82F0CA78;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x82f0ca84
	goto loc_82F0CA84;
loc_82F0CA78:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82F0CA84:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f0cae8
	if (!cr0.eq) goto loc_82F0CAE8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0caa0
	if (cr6.eq) goto loc_82F0CAA0;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0caac
	goto loc_82F0CAAC;
loc_82F0CAA0:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0CAAC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0cb18
	if (!cr0.eq) goto loc_82F0CB18;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cb18
	if (cr0.eq) goto loc_82F0CB18;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cb18
	if (cr0.eq) goto loc_82F0CB18;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f7db58
	sub_82F7DB58(ctx, base);
loc_82F0CAE0:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cb18
	if (cr0.eq) goto loc_82F0CB18;
loc_82F0CAE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f0cb28
	goto loc_82F0CB28;
loc_82F0CAF0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82f0cb24
	if (!cr6.eq) goto loc_82F0CB24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f4ff28
	sub_82F4FF28(ctx, base);
	// b 0x82f0cae0
	goto loc_82F0CAE0;
loc_82F0CB18:
	// lwz r31,40(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82f0caf0
	if (!cr6.eq) goto loc_82F0CAF0;
loc_82F0CB24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0CB28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F0C9D8) {
	__imp__sub_82F0C9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,120(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f0cb7c
	if (cr0.eq) goto loc_82F0CB7C;
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cb58
	if (cr6.eq) goto loc_82F0CB58;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82f0cb64
	goto loc_82F0CB64;
loc_82F0CB58:
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82F0CB64:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0cb7c
	if (!cr0.eq) goto loc_82F0CB7C;
	// lbz r11,148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f0cb80
	if (!cr6.eq) goto loc_82F0CB80;
loc_82F0CB7C:
	// li r11,0
	r11.s64 = 0;
loc_82F0CB80:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CB30) {
	__imp__sub_82F0CB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cba4
	if (cr6.eq) goto loc_82F0CBA4;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82f0cbb0
	goto loc_82F0CBB0;
loc_82F0CBA4:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82F0CBB0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0cbe4
	if (cr0.eq) goto loc_82F0CBE4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cbcc
	if (cr6.eq) goto loc_82F0CBCC;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0cbd8
	goto loc_82F0CBD8;
loc_82F0CBCC:
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0CBD8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82f0cbe8
	if (cr0.eq) goto loc_82F0CBE8;
loc_82F0CBE4:
	// li r11,1
	r11.s64 = 1;
loc_82F0CBE8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CB88) {
	__imp__sub_82F0CB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lhz r11,224(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 224);
	// rlwinm r11,r11,27,5,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cc08
	if (cr0.eq) goto loc_82F0CC08;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F0CC08:
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cc24
	if (cr6.eq) goto loc_82F0CC24;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0cc30
	goto loc_82F0CC30;
loc_82F0CC24:
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0CC30:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CBF0) {
	__imp__sub_82F0CBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82f0cc70
	if (!cr6.eq) goto loc_82F0CC70;
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cc70
	if (cr6.eq) goto loc_82F0CC70;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_82F0CC70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CC48) {
	__imp__sub_82F0CC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lbz r11,158(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 158);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f0cca0
	if (cr0.eq) goto loc_82F0CCA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f0ccec
	goto loc_82F0CCEC;
loc_82F0CCA0:
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f0cce4
	if (cr6.gt) goto loc_82F0CCE4;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82f0cce4
	if (cr6.lt) goto loc_82F0CCE4;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82f0cce4
	if (cr6.gt) goto loc_82F0CCE4;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f0cce8
	if (!cr6.lt) goto loc_82F0CCE8;
loc_82F0CCE4:
	// li r11,0
	r11.s64 = 0;
loc_82F0CCE8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_82F0CCEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CC78) {
	__imp__sub_82F0CC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CD00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82f0cd24
	if (cr6.eq) goto loc_82F0CD24;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82f0cd24
	if (cr6.eq) goto loc_82F0CD24;
	// b 0x82f816e0
	sub_82F816E0(ctx, base);
	return;
loc_82F0CD24:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f7aac8
	sub_82F7AAC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F0CD00) {
	__imp__sub_82F0CD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CD34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CD34) {
	__imp__sub_82F0CD34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f0cd54
	if (cr6.eq) goto loc_82F0CD54;
	// lbz r11,96(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82f0cd60
	goto loc_82F0CD60;
loc_82F0CD54:
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82F0CD60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cd90
	if (cr0.eq) goto loc_82F0CD90;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f0cd7c
	if (cr6.eq) goto loc_82F0CD7C;
	// lbz r11,96(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0cd88
	goto loc_82F0CD88;
loc_82F0CD7C:
	// lwz r11,176(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0CD88:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cda0
	if (cr0.eq) goto loc_82F0CDA0;
loc_82F0CD90:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f0cda0
	if (cr6.eq) goto loc_82F0CDA0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82f6da08
	sub_82F6DA08(ctx, base);
	return;
loc_82F0CDA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CD38) {
	__imp__sub_82F0CD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cdc4
	if (cr6.eq) goto loc_82F0CDC4;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82f0cdd0
	goto loc_82F0CDD0;
loc_82F0CDC4:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82F0CDD0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0ce00
	if (cr0.eq) goto loc_82F0CE00;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cdec
	if (cr6.eq) goto loc_82F0CDEC;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x82f0cdf8
	goto loc_82F0CDF8;
loc_82F0CDEC:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82F0CDF8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0ce28
	if (cr0.eq) goto loc_82F0CE28;
loc_82F0CE00:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0ce28
	if (cr6.eq) goto loc_82F0CE28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82f0ce20
	if (!cr6.lt) goto loc_82F0CE20;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82F0CE20:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_82F0CE28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CDA8) {
	__imp__sub_82F0CDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0ce4c
	if (cr6.eq) goto loc_82F0CE4C;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82f0ce58
	goto loc_82F0CE58;
loc_82F0CE4C:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82F0CE58:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0ce88
	if (cr0.eq) goto loc_82F0CE88;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0ce74
	if (cr6.eq) goto loc_82F0CE74;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x82f0ce80
	goto loc_82F0CE80;
loc_82F0CE74:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82F0CE80:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0ceb0
	if (cr0.eq) goto loc_82F0CEB0;
loc_82F0CE88:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0ceb0
	if (cr6.eq) goto loc_82F0CEB0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(36) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f0cea8
	if (!cr6.lt) goto loc_82F0CEA8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82F0CEA8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_82F0CEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CE30) {
	__imp__sub_82F0CE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cee0
	if (cr6.eq) goto loc_82F0CEE0;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82f0ceec
	goto loc_82F0CEEC;
loc_82F0CEE0:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82F0CEEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0cf1c
	if (cr0.eq) goto loc_82F0CF1C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cf08
	if (cr6.eq) goto loc_82F0CF08;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x82f0cf14
	goto loc_82F0CF14;
loc_82F0CF08:
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(176) );
	// lhz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82F0CF14:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0cf2c
	if (cr0.eq) goto loc_82F0CF2C;
loc_82F0CF1C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cf2c
	if (cr6.eq) goto loc_82F0CF2C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82f82368
	sub_82F82368(ctx, base);
loc_82F0CF2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CEB8) {
	__imp__sub_82F0CEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CF40) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,224(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 224);
	// rlwinm r11,r11,25,7,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cfd4
	if (cr0.eq) goto loc_82F0CFD4;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0cf84
	if (cr6.eq) goto loc_82F0CF84;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0cf90
	goto loc_82F0CF90;
loc_82F0CF84:
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0CF90:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0cfd4
	if (cr0.eq) goto loc_82F0CFD4;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(80) );
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82f0cfa8
	if (!cr0.lt) goto loc_82F0CFA8;
	// li r31,0
	r31.s64 = 0;
loc_82F0CFA8:
	// bl 0x82f6f5e8
	sub_82F6F5E8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// ble cr6,0x82f0cfc0
	if (!cr6.gt) goto loc_82F0CFC0;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// bl 0x82f6f5e8
	sub_82F6F5E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82F0CFC0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(180) );
	// bl 0x82f710f8
	sub_82F710F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f0cfd8
	goto loc_82F0CFD8;
loc_82F0CFD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0CFD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CF40) {
	__imp__sub_82F0CF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// beq 0x82f0d020
	if (cr0.eq) goto loc_82F0D020;
	// bl 0x82f050b0
	sub_82F050B0(ctx, base);
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, r11.u8);
	// b 0x82f0d034
	goto loc_82F0D034;
loc_82F0D020:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0d034
	if (cr6.eq) goto loc_82F0D034;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// andi. r10,r10,253
	ctx.r10.u64 = ctx.r10.u64 & 253;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,96(r11)
	PPC_STORE_U8(r11.u32 + 96, ctx.r10.u8);
loc_82F0D034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0CFF0) {
	__imp__sub_82F0CFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r10,348(r11)
	PPC_STORE_U8(r11.u32 + 348, ctx.r10.u8);
	// lbz r10,17(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// stb r10,349(r11)
	PPC_STORE_U8(r11.u32 + 349, ctx.r10.u8);
	// lbz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r10,350(r11)
	PPC_STORE_U8(r11.u32 + 350, ctx.r10.u8);
	// lbz r10,19(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lbz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r10,352(r11)
	PPC_STORE_U8(r11.u32 + 352, ctx.r10.u8);
	// lbz r10,21(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r10,353(r11)
	PPC_STORE_U8(r11.u32 + 353, ctx.r10.u8);
	// lbz r10,22(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// stb r10,354(r11)
	PPC_STORE_U8(r11.u32 + 354, ctx.r10.u8);
	// lbz r10,23(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 23);
	// stb r10,355(r11)
	PPC_STORE_U8(r11.u32 + 355, ctx.r10.u8);
	// lhz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// sth r10,356(r11)
	PPC_STORE_U16(r11.u32 + 356, ctx.r10.u16);
	// lhz r10,26(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// sth r10,358(r11)
	PPC_STORE_U16(r11.u32 + 358, ctx.r10.u16);
	// lhz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// sth r10,360(r11)
	PPC_STORE_U16(r11.u32 + 360, ctx.r10.u16);
	// lhz r10,30(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// sth r10,362(r11)
	PPC_STORE_U16(r11.u32 + 362, ctx.r10.u16);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// stw r10,364(r11)
	PPC_STORE_U32(r11.u32 + 364, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0D048) {
	__imp__sub_82F0D048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82f0d280
	if (cr6.lt) goto loc_82F0D280;
	// beq cr6,0x82f0d1e8
	if (cr6.eq) goto loc_82F0D1E8;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// beq cr6,0x82f0d178
	if (cr6.eq) goto loc_82F0D178;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// beq cr6,0x82f0d114
	if (cr6.eq) goto loc_82F0D114;
	// bl 0x82f61960
	sub_82F61960(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82f0d328
	goto loc_82F0D328;
loc_82F0D114:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfd f0,1312(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 1312);
	// fmul f0,f31,f0
	f0.f64 = f31.f64 * f0.f64;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// b 0x82f0d1d8
	goto loc_82F0D1D8;
loc_82F0D178:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfd f0,1312(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 1312);
	// fmul f13,f31,f0
	ctx.f13.f64 = f31.f64 * f0.f64;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82F0D1D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f73ee0
	sub_82F73EE0(ctx, base);
	// b 0x82f0d310
	goto loc_82F0D310;
loc_82F0D1E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f0b920
	sub_82F0B920(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f0,1312(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1312);
	// fmsub f13,f31,f0,f13
	ctx.f13.f64 = f31.f64 * f0.f64 - ctx.f13.f64;
	// lfd f0,-8776(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8776);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f61960
	sub_82F61960(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq 0x82f0d274
	if (cr0.eq) goto loc_82F0D274;
	// blt cr6,0x82f0d310
	if (cr6.lt) goto loc_82F0D310;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82f0d30c
	goto loc_82F0D30C;
loc_82F0D274:
	// blt cr6,0x82f0d324
	if (cr6.lt) goto loc_82F0D324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82f0d320
	goto loc_82F0D320;
loc_82F0D280:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f0b920
	sub_82F0B920(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// lfd f0,1312(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1312);
	// fmsub f13,f31,f0,f13
	ctx.f13.f64 = f31.f64 * f0.f64 - ctx.f13.f64;
	// lfd f0,-8776(r8)
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -8776);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f61960
	sub_82F61960(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq 0x82f0d318
	if (cr0.eq) goto loc_82F0D318;
	// blt cr6,0x82f0d310
	if (cr6.lt) goto loc_82F0D310;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F0D30C:
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0D310:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f0d328
	goto loc_82F0D328;
loc_82F0D318:
	// blt cr6,0x82f0d324
	if (cr6.lt) goto loc_82F0D324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F0D320:
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0D324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0D328:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0D0C0) {
	__imp__sub_82F0D0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82f325a8
	sub_82F325A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwa r11,80(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f0d400
	if (cr6.eq) goto loc_82F0D400;
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
loc_82F0D400:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f7db58
	sub_82F7DB58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0D348) {
	__imp__sub_82F0D348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// bne cr6,0x82f0d5bc
	if (!cr6.eq) goto loc_82F0D5BC;
	// lhz r11,224(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 224);
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0d5b4
	if (cr0.eq) goto loc_82F0D5B4;
	// lwz r11,180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(180) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0d5b4
	if (cr0.eq) goto loc_82F0D5B4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82f0d348
	sub_82F0D348(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0d5b4
	if (cr0.eq) goto loc_82F0D5B4;
	// lwz r3,180(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(180) );
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f7d720
	sub_82F7D720(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82f0d5b4
	if (cr6.eq) goto loc_82F0D5B4;
	// lwz r11,180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(180) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f779c8
	sub_82F779C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0d5b4
	if (cr0.eq) goto loc_82F0D5B4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 88);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0d5b4
	if (cr0.eq) goto loc_82F0D5B4;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// addi r4,r10,-6004
	ctx.r4.s64 = ctx.r10.s64 + -6004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef7358
	sub_82EF7358(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82f0d5b4
	if (!cr0.eq) goto loc_82F0D5B4;
	// addi r31,r31,11
	r31.s64 = r31.s64 + 11;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82f0d534
	if (cr6.eq) goto loc_82F0D534;
	// subf r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ef7ae8
	sub_82EF7AE8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// li r29,1
	r29.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82f0d53c
	goto loc_82F0D53C;
loc_82F0D534:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
loc_82F0D53C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F0D588:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f0d588
	if (!cr0.eq) goto loc_82F0D588;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0d5b4
	if (!cr0.eq) goto loc_82F0D5B4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0D5B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f0d5c0
	goto loc_82F0D5C0;
loc_82F0D5BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0D5C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F0D420) {
	__imp__sub_82F0D420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0d600
	if (cr6.eq) goto loc_82F0D600;
	// lbz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm r9,r9,31,31,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// b 0x82f0d60c
	goto loc_82F0D60C;
loc_82F0D600:
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82F0D60C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f0d6ac
	if (cr0.eq) goto loc_82F0D6AC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x82f0d670
	if (!cr6.eq) goto loc_82F0D670;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// rlwinm r11,r11,22,10,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0d658
	if (!cr0.eq) goto loc_82F0D658;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// beq cr6,0x82f0d658
	if (cr6.eq) goto loc_82F0D658;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// bl 0x82f73b38
	sub_82F73B38(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(264) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0D658:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0d6ac
	if (cr6.eq) goto loc_82F0D6AC;
	// bl 0x82f7acc0
	sub_82F7ACC0(ctx, base);
	// b 0x82f0d6ac
	goto loc_82F0D6AC;
loc_82F0D670:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82f0d6ac
	if (!cr6.eq) goto loc_82F0D6AC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0d6ac
	if (cr6.eq) goto loc_82F0D6AC;
	// lhz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// rlwinm r10,r10,23,9,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f0d6a0
	if (!cr0.eq) goto loc_82F0D6A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7aac8
	sub_82F7AAC8(ctx, base);
loc_82F0D6A0:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// bl 0x82f7ad00
	sub_82F7AD00(ctx, base);
loc_82F0D6AC:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0d6c8
	if (cr6.eq) goto loc_82F0D6C8;
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82f0d6d4
	goto loc_82F0D6D4;
loc_82F0D6C8:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82F0D6D4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0d704
	if (cr0.eq) goto loc_82F0D704;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0d6f0
	if (cr6.eq) goto loc_82F0D6F0;
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0d6fc
	goto loc_82F0D6FC;
loc_82F0D6F0:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0D6FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0d734
	if (cr0.eq) goto loc_82F0D734;
loc_82F0D704:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x82f0d720
	if (!cr6.eq) goto loc_82F0D720;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0d720
	if (cr6.eq) goto loc_82F0D720;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f6da10
	sub_82F6DA10(ctx, base);
loc_82F0D720:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f64380
	sub_82F64380(ctx, base);
loc_82F0D734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F0D5C8) {
	__imp__sub_82F0D5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D740) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,180(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(180) );
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f66618
	sub_82F66618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0D740) {
	__imp__sub_82F0D740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r3,516
	ctx.r4.s64 = ctx.r3.s64 + 516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f0d7ec
	if (cr6.eq) goto loc_82F0D7EC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0D7EC:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82f0d818
	if (cr6.eq) goto loc_82F0D818;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0D818:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0D790) {
	__imp__sub_82F0D790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0D838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r29,280
	r30.s64 = r29.s64 + 280;
	// lwz r11,284(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(284) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0d8a8
	if (cr6.eq) goto loc_82F0D8A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f0d8a8
	if (!cr0.eq) goto loc_82F0D8A8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0d89c
	if (cr6.eq) goto loc_82F0D89C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f0d89c
	if (!cr0.eq) goto loc_82F0D89C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0D89C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82F0D8A8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82f0d8d0
	if (cr6.eq) goto loc_82F0D8D0;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0dbc0
	if (cr6.eq) goto loc_82F0DBC0;
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0dbc0
	if (cr0.eq) goto loc_82F0DBC0;
loc_82F0D8D0:
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f0dbd8
	if (cr0.eq) goto loc_82F0DBD8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82f0da78
	if (cr6.eq) goto loc_82F0DA78;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// beq cr6,0x82f0d9b8
	if (cr6.eq) goto loc_82F0D9B8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x82f0dbc0
	if (!cr6.eq) goto loc_82F0DBC0;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0dbc0
	if (cr6.eq) goto loc_82F0DBC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r1,84
	r30.s64 = ctx.r1.s64 + 84;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82f325a8
	sub_82F325A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwa r11,96(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 96));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lfs f2,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// bl 0x82f6da58
	sub_82F6DA58(ctx, base);
	// b 0x82f0dbc0
	goto loc_82F0DBC0;
loc_82F0D9B8:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0dbc0
	if (cr6.eq) goto loc_82F0DBC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,84
	r27.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82f325a8
	sub_82F325A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwa r11,84(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// bl 0x82f814e8
	sub_82F814E8(ctx, base);
	// b 0x82f0dbc0
	goto loc_82F0DBC0;
loc_82F0DA78:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0db30
	if (cr6.eq) goto loc_82F0DB30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// addi r26,r1,84
	r26.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82f325a8
	sub_82F325A8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f65fe0
	sub_82F65FE0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60228
	sub_82F60228(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwa r11,84(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82f66438
	sub_82F66438(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// bl 0x82f815a8
	sub_82F815A8(ctx, base);
loc_82F0DB30:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0db8c
	if (cr0.eq) goto loc_82F0DB8C;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0db8c
	if (cr0.eq) goto loc_82F0DB8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0d348
	sub_82F0D348(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0db74
	if (cr0.eq) goto loc_82F0DB74;
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82f0db7c
	goto loc_82F0DB7C;
loc_82F0DB74:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// andi. r11,r11,65503
	r11.u64 = r11.u64 & 65503;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0DB7C:
	// sth r11,224(r31)
	PPC_STORE_U16(r31.u32 + 224, r11.u16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,260(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(260) );
	// b 0x82f0dba8
	goto loc_82F0DBA8;
loc_82F0DB8C:
	// rlwinm r10,r11,27,21,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FF;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0dbc0
	if (cr0.eq) goto loc_82F0DBC0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// andi. r11,r11,65503
	r11.u64 = r11.u64 & 65503;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,224(r31)
	PPC_STORE_U16(r31.u32 + 224, r11.u16);
	// lwz r11,260(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(260) );
loc_82F0DBA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f93320
	sub_82F93320(ctx, base);
loc_82F0DBC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(92) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0DBD8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F0D838) {
	__imp__sub_82F0D838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f0e278
	if (cr6.eq) goto loc_82F0E278;
	// li r11,16
	r11.s64 = 16;
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// vspltw128 v62,v63,0
	simd::store_i32(v62.u32, simd::broadcast_lane_i32(simd::load_i32(v63.u32), 3));
	// vspltw128 v12,v63,1
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(v63.u32), 2));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v11,v63,2
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(v63.u32), 1));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r9,r9,5312
	ctx.r9.s64 = ctx.r9.s64 + 5312;
	// lvx128 v63,r29,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// vspltw128 v61,v63,0
	simd::store_i32(v61.u32, simd::broadcast_lane_i32(simd::load_i32(v63.u32), 3));
	// lvx128 v60,r0,r10
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v62,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(v62.f32), simd::load_f32_aligned(v60.f32)));
	// vspltw128 v9,v63,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(v63.u32), 2));
	// lvx128 v0,r10,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v8,v63,2
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(v63.u32), 1));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vmulfp128 v7,v61,v60
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(v61.f32), simd::load_f32_aligned(v60.f32)));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vmaddfp v12,v12,v0,v10
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v0,v9,v0,v7
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v7.f32)));
	// vmaddfp v12,v11,v13,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v8,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r11,24(r7)
	r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// ld r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r8,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f97e08
	sub_82F97E08(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f66618
	sub_82F66618(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,136
	r11.s64 = ctx.r3.s64 + 136;
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f0dd28
	if (cr6.lt) goto loc_82F0DD28;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f0dd28
	if (cr6.lt) goto loc_82F0DD28;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f0dd28
	if (cr6.lt) goto loc_82F0DD28;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82f0dd2c
	if (!cr6.lt) goto loc_82F0DD2C;
loc_82F0DD28:
	// li r11,0
	r11.s64 = 0;
loc_82F0DD2C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0dd44
	if (!cr0.eq) goto loc_82F0DD44;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// rlwinm. r11,r11,0,23,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e278
	if (cr0.eq) goto loc_82F0E278;
loc_82F0DD44:
	// lfs f0,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,-16936(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f0dd74
	if (!cr6.lt) goto loc_82F0DD74;
	// lfs f0,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82f0e278
	if (cr6.lt) goto loc_82F0E278;
loc_82F0DD74:
	// lbz r11,196(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 196);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f0dd8c
	if (!cr0.eq) goto loc_82F0DD8C;
	// lbz r11,192(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f0dfcc
	if (cr0.eq) goto loc_82F0DFCC;
loc_82F0DD8C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r29,r1,208
	r29.s64 = ctx.r1.s64 + 208;
	// bl 0x82f7d6f0
	sub_82F7D6F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82f94fb8
	sub_82F94FB8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(ctx.f13.f64)));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// lfs f0,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	f0.f64 = double(temp.f32);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	f0.f64 = double(temp.f32);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// sth r6,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r6.u16);
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// sth r7,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// sth r9,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// sth r10,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
	// sth r7,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r7.u16);
	// sth r6,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r6.u16);
	// sth r9,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r9.u16);
	// sth r6,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r6.u16);
	// sth r9,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r9.u16);
	// sth r10,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r10.u16);
	// sth r7,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r7.u16);
	// sth r10,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r10.u16);
	// sth r7,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r7.u16);
	// sth r6,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r6.u16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-5992
	ctx.r4.s64 = r11.s64 + -5992;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0DFCC:
	// lhz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// andi. r9,r10,65471
	ctx.r9.u64 = ctx.r10.u64 & 65471;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r28,r10,26,31,31
	r28.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// sth r9,224(r31)
	PPC_STORE_U16(r31.u32 + 224, ctx.r9.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0e1e4
	if (cr6.eq) goto loc_82F0E1E4;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f0e124
	if (!cr6.gt) goto loc_82F0E124;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
loc_82F0E004:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// lfs f0,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lfs f10,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// lfs f9,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// lwz r26,180(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// lbz r11,1(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lbz r11,2(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lbz r11,3(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	f0.f64 = double(float(f0.f64 * ctx.f8.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f0,f12,f7,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f7.f64), float(f0.f64)));
	// fmadds f13,f11,f8,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f8.f64), float(ctx.f13.f64)));
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f0,264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,248(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f81108
	sub_82F81108(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f0e004
	if (cr6.lt) goto loc_82F0E004;
loc_82F0E124:
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0e1e4
	if (cr6.eq) goto loc_82F0E1E4;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82F0E13C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f65e60
	sub_82F65E60(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(124) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r26,180(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	f0.f64 = double(float(f0.f64 * ctx.f8.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f0,f12,f7,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f7.f64), float(f0.f64)));
	// fmadds f13,f11,f8,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f8.f64), float(ctx.f13.f64)));
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f0,f13,f9
	f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f81108
	sub_82F81108(ctx, base);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f0e13c
	if (cr6.lt) goto loc_82F0E13C;
	// b 0x82f0e218
	goto loc_82F0E218;
loc_82F0E1E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f81108
	sub_82F81108(ctx, base);
loc_82F0E218:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0e264
	if (cr6.eq) goto loc_82F0E264;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f0d790
	sub_82F0D790(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e264
	if (cr0.eq) goto loc_82F0E264;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// bl 0x82f7f4a8
	sub_82F7F4A8(ctx, base);
loc_82F0E264:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(208) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0E278:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F0DBE0) {
	__imp__sub_82F0DBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0E288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0e3a8
	if (!cr0.eq) goto loc_82F0E3A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f0d790
	sub_82F0D790(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e3a8
	if (cr0.eq) goto loc_82F0E3A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bne cr6,0x82f0e358
	if (!cr6.eq) goto loc_82F0E358;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0e2f4
	if (cr6.eq) goto loc_82F0E2F4;
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x82f0e300
	goto loc_82F0E300;
loc_82F0E2F4:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,29,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
loc_82F0E300:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e330
	if (cr0.eq) goto loc_82F0E330;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0e31c
	if (cr6.eq) goto loc_82F0E31C;
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0e328
	goto loc_82F0E328;
loc_82F0E31C:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0E328:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e344
	if (cr0.eq) goto loc_82F0E344;
loc_82F0E330:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0e344
	if (cr6.eq) goto loc_82F0E344;
	// addi r5,r30,11
	ctx.r5.s64 = r30.s64 + 11;
	// lha r4,8(r30)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// bl 0x82f84fb0
	sub_82F84FB0(ctx, base);
loc_82F0E344:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82f0e3ac
	goto loc_82F0E3AC;
loc_82F0E358:
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x82f0e3a8
	if (!cr6.eq) goto loc_82F0E3A8;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0e37c
	if (cr6.eq) goto loc_82F0E37C;
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// rlwinm r11,r11,31,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// b 0x82f0e388
	goto loc_82F0E388;
loc_82F0E37C:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(176) );
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82F0E388:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e344
	if (cr0.eq) goto loc_82F0E344;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0e344
	if (cr6.eq) goto loc_82F0E344;
	// addi r5,r30,11
	ctx.r5.s64 = r30.s64 + 11;
	// lha r4,8(r30)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// bl 0x82f6f910
	sub_82F6F910(ctx, base);
	// b 0x82f0e344
	goto loc_82F0E344;
loc_82F0E3A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0E3AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F0E288) {
	__imp__sub_82F0E288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82f57820
	sub_82F57820(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0e3e8
	if (cr6.eq) goto loc_82F0E3E8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0E3E8:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57820
	sub_82F57820(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0e404
	if (cr6.eq) goto loc_82F0E404;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0E404:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0e41c
	if (!cr0.eq) goto loc_82F0E41C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0E41C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0E3B8) {
	__imp__sub_82F0E3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0E430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e460
	if (cr0.eq) goto loc_82F0E460;
	// bl 0x82f0ae38
	sub_82F0AE38(ctx, base);
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x82f0e468
	goto loc_82F0E468;
loc_82F0E460:
	// lhz r11,224(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 224);
	// andi. r11,r11,65471
	r11.u64 = r11.u64 & 65471;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0E468:
	// sth r11,224(r31)
	PPC_STORE_U16(r31.u32 + 224, r11.u16);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0e4c8
	if (cr6.eq) goto loc_82F0E4C8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f0d790
	sub_82F0D790(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0e4b8
	if (!cr0.eq) goto loc_82F0E4B8;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// lbz r11,96(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e4c8
	if (cr0.eq) goto loc_82F0E4C8;
loc_82F0E4B8:
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lfs f1,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// bl 0x82f813a8
	sub_82F813A8(ctx, base);
loc_82F0E4C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0E430) {
	__imp__sub_82F0E430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r29,r25,-128
	r29.s64 = r25.s64 + -128;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82f64a38
	sub_82F64A38(ctx, base);
	// lwz r11,-128(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(-128) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(216) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e550
	if (cr0.eq) goto loc_82F0E550;
loc_82F0E548:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0E550:
	// addi r11,r28,-37
	r11.s64 = r28.s64 + -37;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bgt cr6,0x82f0f9ec
	if (cr6.gt) goto loc_82F0F9EC;
	// lis r12,-32252
	r12.s64 = -2113667072;
	// addi r12,r12,-7880
	r12.s64 = r12.s64 + -7880;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32015
	r12.s64 = -2098135040;
	// addi r12,r12,-6780
	r12.s64 = r12.s64 + -6780;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82F0E614;
	case 1:
		goto loc_82F0F9EC;
	case 2:
		goto loc_82F0F9EC;
	case 3:
		goto loc_82F0E668;
	case 4:
		goto loc_82F0F9EC;
	case 5:
		goto loc_82F0E584;
	case 6:
		goto loc_82F0E5B4;
	case 7:
		goto loc_82F0E708;
	case 8:
		goto loc_82F0E958;
	case 9:
		goto loc_82F0E9A0;
	case 10:
		goto loc_82F0E9EC;
	case 11:
		goto loc_82F0EA10;
	case 12:
		goto loc_82F0EA68;
	case 13:
		goto loc_82F0EA84;
	case 14:
		goto loc_82F0EDB0;
	case 15:
		goto loc_82F0EB30;
	case 16:
		goto loc_82F0EB64;
	case 17:
		goto loc_82F0F9EC;
	case 18:
		goto loc_82F0F9EC;
	case 19:
		goto loc_82F0EB98;
	case 20:
		goto loc_82F0EBBC;
	case 21:
		goto loc_82F0EC2C;
	case 22:
		goto loc_82F0F9EC;
	case 23:
		goto loc_82F0EC9C;
	case 24:
		goto loc_82F0ED28;
	case 25:
		goto loc_82F0ED84;
	case 26:
		goto loc_82F0EE28;
	case 27:
		goto loc_82F0EAB8;
	case 28:
		goto loc_82F0EE54;
	case 29:
		goto loc_82F0F220;
	case 30:
		goto loc_82F0F290;
	case 31:
		goto loc_82F0F2C8;
	case 32:
		goto loc_82F0F9EC;
	case 33:
		goto loc_82F0F9EC;
	case 34:
		goto loc_82F0F7D8;
	case 35:
		goto loc_82F0F9A4;
	case 36:
		goto loc_82F0FA18;
	case 37:
		goto loc_82F0FBC8;
	case 38:
		goto loc_82F0FD30;
	case 39:
		goto loc_82F0FDB8;
	case 40:
		goto loc_82F0F9EC;
	case 41:
		goto loc_82F0F9EC;
	case 42:
		goto loc_82F0FE48;
	case 43:
		goto loc_82F0FE08;
	case 44:
		goto loc_82F0FEB0;
	case 45:
		goto loc_82F0FE7C;
	case 46:
		goto loc_82F0FEE4;
	case 47:
		goto loc_82F0F330;
	case 48:
		goto loc_82F0F370;
	case 49:
		goto loc_82F0F3CC;
	case 50:
		goto loc_82F0F428;
	case 51:
		goto loc_82F0F9EC;
	case 52:
		goto loc_82F0F484;
	case 53:
		goto loc_82F0F4F8;
	case 54:
		goto loc_82F0F538;
	case 55:
		goto loc_82F0F5A4;
	case 56:
		goto loc_82F0F610;
	case 57:
		goto loc_82F0F66C;
	case 58:
		goto loc_82F0F6C0;
	case 59:
		goto loc_82F0F710;
	case 60:
		goto loc_82F0F76C;
	default:
		__builtin_unreachable();
	}
loc_82F0E584:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e5a4
	if (cr0.eq) goto loc_82F0E5A4;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0E5A4:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,65533
	r11.u64 = r11.u64 & 65533;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0E5AC:
	// sth r11,224(r29)
	PPC_STORE_U16(r29.u32 + 224, r11.u16);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0E5B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82f6b400
	sub_82F6B400(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lhz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r10,31,31,31
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0a760
	sub_82F0A760(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
loc_82F0E5EC:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0e548
	if (!cr6.eq) goto loc_82F0E548;
loc_82F0E60C:
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0E614:
	// lwz r11,180(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(180) );
	// lwz r3,320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f0e630
	if (cr6.eq) goto loc_82F0E630;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f6da10
	sub_82F6DA10(ctx, base);
loc_82F0E630:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6b400
	sub_82F6B400(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0a760
	sub_82F0A760(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0E668:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82f08b70
	sub_82F08B70(ctx, base);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// lhz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 312);
	// clrlwi r31,r31,8
	r31.u64 = r31.u32 & 0xFFFFFF;
	// rlwinm r11,r11,0,0,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// sth r10,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r10.u16);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82f7a9d8
	sub_82F7A9D8(ctx, base);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// bl 0x82f08fe0
	sub_82F08FE0(ctx, base);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lhz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 312);
	// rlwinm r11,r11,0,0,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// lwz r9,52(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// sth r10,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r10.u16);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// bl 0x82f7a7b0
	sub_82F7A7B0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f08be0
	sub_82F08BE0(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0E708:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r11,-11840
	r28.s64 = r11.s64 + -11840;
	// addi r27,r10,-6028
	r27.s64 = ctx.r10.s64 + -6028;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82f0e75c
	if (!cr6.eq) goto loc_82F0E75C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0e754
	if (cr0.eq) goto loc_82F0E754;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x82f0e764
	goto loc_82F0E764;
loc_82F0E754:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82f0e764
	goto loc_82F0E764;
loc_82F0E75C:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82F0E764:
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lhz r8,96(r25)
	ctx.r8.u64 = PPC_LOAD_U16(r25.u32 + 96);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lbz r8,328(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
loc_82F0E790:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82f0e7b4
	if (cr0.eq) goto loc_82F0E7B4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82f0e790
	if (cr6.eq) goto loc_82F0E790;
loc_82F0E7B4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82f0e7e4
	if (!cr0.eq) goto loc_82F0E7E4;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r11,224(r29)
	PPC_STORE_U16(r29.u32 + 224, r11.u16);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// lbz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r9,328(r11)
	PPC_STORE_U8(r11.u32 + 328, ctx.r9.u8);
	// b 0x82f0e8e4
	goto loc_82F0E8E4;
loc_82F0E7E4:
	// lhz r8,224(r29)
	ctx.r8.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// sth r8,224(r29)
	PPC_STORE_U16(r29.u32 + 224, ctx.r8.u16);
loc_82F0E7F8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82f0e81c
	if (cr0.eq) goto loc_82F0E81C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82f0e7f8
	if (cr6.eq) goto loc_82F0E7F8;
loc_82F0E81C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82f0e844
	if (!cr0.eq) goto loc_82F0E844;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// lbz r9,330(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r10,328(r11)
	PPC_STORE_U8(r11.u32 + 328, ctx.r10.u8);
	// stb r9,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r9.u8);
	// b 0x82f0e8e8
	goto loc_82F0E8E8;
loc_82F0E844:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r10,r10,-6020
	ctx.r10.s64 = ctx.r10.s64 + -6020;
loc_82F0E850:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x82f0e874
	if (cr0.eq) goto loc_82F0E874;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82f0e850
	if (cr6.eq) goto loc_82F0E850;
loc_82F0E874:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82f0e890
	if (!cr0.eq) goto loc_82F0E890;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// rlwimi r9,r10,0,30,23
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF03) | (ctx.r9.u64 & 0xFC);
	// b 0x82f0e8d8
	goto loc_82F0E8D8;
loc_82F0E890:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r10,r10,-6012
	ctx.r10.s64 = ctx.r10.s64 + -6012;
loc_82F0E89C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f0e8c0
	if (cr0.eq) goto loc_82F0E8C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0e89c
	if (cr6.eq) goto loc_82F0E89C;
loc_82F0E8C0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0e8e8
	if (!cr0.eq) goto loc_82F0E8E8;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// rlwimi r9,r10,1,30,23
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 1) & 0xFFFFFFFFFFFFFF03) | (ctx.r9.u64 & 0xFC);
loc_82F0E8D8:
	// lbz r8,330(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// stb r9,328(r11)
	PPC_STORE_U8(r11.u32 + 328, ctx.r9.u8);
	// ori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 | 1;
loc_82F0E8E4:
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
loc_82F0E8E8:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r11,328(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// bne cr6,0x82f0e910
	if (!cr6.eq) goto loc_82F0E910;
	// lhz r11,96(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 96);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82f0e918
	if (cr6.eq) goto loc_82F0E918;
loc_82F0E910:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f0bb18
	sub_82F0BB18(ctx, base);
loc_82F0E918:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F0E924:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82f0e924
	if (!cr0.eq) goto loc_82F0E924;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0e950
	if (!cr0.eq) goto loc_82F0E950;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0E950:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0E958:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm r31,r11,29,31,31
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82f0e548
	if (cr6.eq) goto loc_82F0E548;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0e990
	if (cr6.eq) goto loc_82F0E990;
	// bl 0x82f6d9b8
	sub_82F6D9B8(ctx, base);
	// b 0x82f0e994
	goto loc_82F0E994;
loc_82F0E990:
	// bl 0x82f6d9e0
	sub_82F6D9E0(ctx, base);
loc_82F0E994:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f0bb18
	sub_82F0BB18(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0E9A0:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,329(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// rlwinm r31,r11,30,31,31
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82f0e548
	if (cr6.eq) goto loc_82F0E548;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// beq cr6,0x82f0e9dc
	if (cr6.eq) goto loc_82F0E9DC;
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82f0e9e4
	goto loc_82F0E9E4;
loc_82F0E9DC:
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82F0E9E4:
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
	// b 0x82f0e994
	goto loc_82F0E994;
loc_82F0E9EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,255
	r11.s64 = 255;
	// bne 0x82f0ea08
	if (!cr0.eq) goto loc_82F0EA08;
	// li r11,0
	r11.s64 = 0;
loc_82F0EA08:
	// stb r11,68(r25)
	PPC_STORE_U8(r25.u32 + 68, r11.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EA10:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r25,76
	ctx.r3.s64 = r25.s64 + 76;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0ea5c
	if (!cr6.eq) goto loc_82F0EA5C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0EA5C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f0ae38
	sub_82F0AE38(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EA68:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f0cff0
	sub_82F0CFF0(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EA84:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// beq 0x82f0eaa8
	if (cr0.eq) goto loc_82F0EAA8;
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82f0eab0
	goto loc_82F0EAB0;
loc_82F0EAA8:
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
loc_82F0EAB0:
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EAB8:
	// lhz r11,96(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r31,r11,30,31,31
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82f0e548
	if (cr6.eq) goto loc_82F0E548;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0eaec
	if (cr6.eq) goto loc_82F0EAEC;
	// lhz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82f0eaf4
	goto loc_82F0EAF4;
loc_82F0EAEC:
	// lhz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r10,r10,65531
	ctx.r10.u64 = ctx.r10.u64 & 65531;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82F0EAF4:
	// sth r10,224(r29)
	PPC_STORE_U16(r29.u32 + 224, ctx.r10.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// beq cr6,0x82f0eb10
	if (cr6.eq) goto loc_82F0EB10;
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82f0eb18
	goto loc_82F0EB18;
loc_82F0EB10:
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82F0EB18:
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EB30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82f0eb54
	if (!cr6.lt) goto loc_82F0EB54;
	// li r11,0
	r11.s64 = 0;
loc_82F0EB54:
	// mulli r4,r11,20
	ctx.r4.s64 = r11.s64 * 20;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f71078
	sub_82F71078(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EB64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f0eb88
	if (!cr6.lt) goto loc_82F0EB88;
	// li r11,1
	r11.s64 = 1;
loc_82F0EB88:
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f710f8
	sub_82F710F8(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EB98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,255
	r11.s64 = 255;
	// bne 0x82f0ebb4
	if (!cr0.eq) goto loc_82F0EBB4;
	// li r11,0
	r11.s64 = 0;
loc_82F0EBB4:
	// stb r11,64(r25)
	PPC_STORE_U8(r25.u32 + 64, r11.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EBBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r11,2047
	r11.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = rotl64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = rotl64(r11.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x82f0ebfc
	if (!cr6.eq) goto loc_82F0EBFC;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f0ec00
	if (!cr6.eq) goto loc_82F0EC00;
loc_82F0EBFC:
	// li r11,0
	r11.s64 = 0;
loc_82F0EC00:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0e548
	if (!cr0.eq) goto loc_82F0E548;
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(64) );
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// rlwinm r11,r11,0,0,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r11.u32);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EC2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r11,2047
	r11.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = rotl64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = rotl64(r11.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x82f0ec6c
	if (!cr6.eq) goto loc_82F0EC6C;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f0ec70
	if (!cr6.eq) goto loc_82F0EC70;
loc_82F0EC6C:
	// li r11,0
	r11.s64 = 0;
loc_82F0EC70:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0e548
	if (!cr0.eq) goto loc_82F0E548;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,68(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(68) );
	// rlwinm r11,r11,0,0,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r11.u32);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0EC9C:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r31,r31,120
	r31.s64 = r31.s64 + 120;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r5,r11,-6036
	ctx.r5.s64 = r11.s64 + -6036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0b9d0
	sub_82F0B9D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0ecf0
	if (cr0.eq) goto loc_82F0ECF0;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0ed20
	if (cr6.eq) goto loc_82F0ED20;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,96(r11)
	PPC_STORE_U8(r11.u32 + 96, ctx.r10.u8);
	// b 0x82f0ed20
	goto loc_82F0ED20;
loc_82F0ECF0:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r5,r11,-4592
	ctx.r5.s64 = r11.s64 + -4592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0b9d0
	sub_82F0B9D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0ed20
	if (cr0.eq) goto loc_82F0ED20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f050b0
	sub_82F050B0(ctx, base);
	// lbz r11,96(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, r11.u8);
loc_82F0ED20:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0ED28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r11,2047
	r11.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = rotl64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = rotl64(r11.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x82f0ed68
	if (!cr6.eq) goto loc_82F0ED68;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f0ed6c
	if (!cr6.eq) goto loc_82F0ED6C;
loc_82F0ED68:
	// li r11,0
	r11.s64 = 0;
loc_82F0ED6C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0e548
	if (!cr0.eq) goto loc_82F0E548;
	// li r11,72
	r11.s64 = 72;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfiwx f0,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, f0.u32);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0ED84:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0eda4
	if (cr0.eq) goto loc_82F0EDA4;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0EDA4:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,65519
	r11.u64 = r11.u64 & 65519;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0EDB0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r31,120
	r31.s64 = r31.s64 + 120;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,8236
	ctx.r5.s64 = r11.s64 + 8236;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0b9d0
	sub_82F0B9D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0edf4
	if (cr0.eq) goto loc_82F0EDF4;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82f0ee1c
	goto loc_82F0EE1C;
loc_82F0EDF4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-6048
	ctx.r5.s64 = r11.s64 + -6048;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0b9d0
	sub_82F0B9D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0ee20
	if (cr0.eq) goto loc_82F0EE20;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82F0EE1C:
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
loc_82F0EE20:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0EE28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0ee48
	if (cr0.eq) goto loc_82F0EE48;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0EE48:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,65407
	r11.u64 = r11.u64 & 65407;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0EE54:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bne cr6,0x82f0ef2c
	if (!cr6.eq) goto loc_82F0EF2C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f0eef4
	if (cr0.eq) goto loc_82F0EEF4;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r28.u8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r28.u8);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r28.u8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82f0eef8
	goto loc_82F0EEF8;
loc_82F0EEF4:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82F0EEF8:
	// stw r11,116(r25)
	PPC_STORE_U32(r25.u32 + 116, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0ef2c
	if (!cr6.eq) goto loc_82F0EF2C;
loc_82F0EF04:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f0e548
	if (!cr6.eq) goto loc_82F0E548;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82f0e60c
	goto loc_82F0E60C;
loc_82F0EF2C:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// li r26,4
	r26.s64 = 4;
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// lwz r11,364(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(364) );
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r11.u8);
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// rlwinm r11,r11,16,24,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 16) & 0xFF;
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfd f30,1312(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + 1312);
loc_82F0EF74:
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82f57820
	sub_82F57820(ctx, base);
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82f57820
	sub_82F57820(ctx, base);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82F0EF9C:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0f1c8
	if (cr0.eq) goto loc_82F0F1C8;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// beq cr6,0x82f0f1a8
	if (cr6.eq) goto loc_82F0F1A8;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// beq cr6,0x82f0f1a8
	if (cr6.eq) goto loc_82F0F1A8;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// beq cr6,0x82f0f198
	if (cr6.eq) goto loc_82F0F198;
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// beq cr6,0x82f0f198
	if (cr6.eq) goto loc_82F0F198;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// bne cr6,0x82f0f1b8
	if (!cr6.eq) goto loc_82F0F1B8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f0f1b8
	if (cr6.eq) goto loc_82F0F1B8;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// b 0x82f0eff8
	goto loc_82F0EFF8;
loc_82F0EFE8:
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x82f0f000
	if (cr6.eq) goto loc_82F0F000;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
loc_82F0EFF8:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0efe8
	if (!cr0.eq) goto loc_82F0EFE8;
loc_82F0F000:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0f1b8
	if (cr6.eq) goto loc_82F0F1B8;
	// subf r30,r4,r29
	r30.s64 = r29.s64 - ctx.r4.s64;
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(r30.s32, 23, xer);
	// bgt cr6,0x82f0f1b8
	if (cr6.gt) goto loc_82F0F1B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// stbx r28,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r28.u8);
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r26.u8);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64;
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// frsp f29,f0
	f29.f64 = double(float(f0.f64));
	// blt cr6,0x82f0f088
	if (cr6.lt) goto loc_82F0F088;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0F088:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82f0f0a0
	if (!cr0.eq) goto loc_82F0F0A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0F0A0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82f0f0b8
	goto loc_82F0F0B8;
loc_82F0F0AC:
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// beq cr6,0x82f0f0c4
	if (cr6.eq) goto loc_82F0F0C4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82F0F0B8:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0f0ac
	if (!cr0.eq) goto loc_82F0F0AC;
loc_82F0F0C4:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0f1b8
	if (cr6.eq) goto loc_82F0F1B8;
	// subf r30,r4,r29
	r30.s64 = r29.s64 - ctx.r4.s64;
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(r30.s32, 23, xer);
	// bgt cr6,0x82f0f1b8
	if (cr6.gt) goto loc_82F0F1B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// stbx r28,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r28.u8);
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r26.u8);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64;
	// lbz r11,176(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// blt cr6,0x82f0f14c
	if (cr6.lt) goto loc_82F0F14C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0F14C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82f0f164
	if (!cr0.eq) goto loc_82F0F164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0F164:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f57820
	sub_82F57820(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// stfs f29,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f31,-4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// b 0x82f0ef9c
	goto loc_82F0EF9C;
loc_82F0F198:
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r11,20
	r27.s64 = r11.s64 + 20;
	// b 0x82f0ef9c
	goto loc_82F0EF9C;
loc_82F0F1A8:
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// b 0x82f0ef9c
	goto loc_82F0EF9C;
loc_82F0F1B8:
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// b 0x82f0ef74
	goto loc_82F0EF74;
loc_82F0F1C8:
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0ef04
	if (cr6.eq) goto loc_82F0EF04;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82f0ef04
	if (!cr0.eq) goto loc_82F0EF04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f0ef04
	goto loc_82F0EF04;
loc_82F0F220:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lbz r11,355(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 355);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (rotl32(r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,364(r31)
	PPC_STORE_U32(r31.u32 + 364, ctx.r10.u32);
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f0e548
	if (cr6.eq) goto loc_82F0E548;
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r10,364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(364) );
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r11,r10,16,24,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(116) );
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0F290:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// stb r3,30(r25)
	PPC_STORE_U8(r25.u32 + 30, ctx.r3.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0F2C8:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0f30c
	if (cr0.eq) goto loc_82F0F30C;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// b 0x82f0f314
	goto loc_82F0F314;
loc_82F0F30C:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,65527
	r11.u64 = r11.u64 & 65527;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0F314:
	// sth r11,224(r29)
	PPC_STORE_U16(r29.u32 + 224, r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F330:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// beq 0x82f0f364
	if (cr0.eq) goto loc_82F0F364;
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x82f0eab0
	goto loc_82F0EAB0;
loc_82F0F364:
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// b 0x82f0eab0
	goto loc_82F0EAB0;
loc_82F0F370:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2908);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x82f0f3c0
	if (cr6.lt) goto loc_82F0F3C0;
	// li r11,255
	r11.s64 = 255;
loc_82F0F3C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,348(r31)
	PPC_STORE_U8(r31.u32 + 348, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F3CC:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2908);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x82f0f41c
	if (cr6.lt) goto loc_82F0F41C;
	// li r11,255
	r11.s64 = 255;
loc_82F0F41C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,349(r31)
	PPC_STORE_U8(r31.u32 + 349, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F428:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2908);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x82f0f478
	if (cr6.lt) goto loc_82F0F478;
	// li r11,255
	r11.s64 = 255;
loc_82F0F478:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,350(r31)
	PPC_STORE_U8(r31.u32 + 350, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F484:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2784(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2784);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f0f4d0
	if (!cr6.lt) goto loc_82F0F4D0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82F0F4D0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f13
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lbz r11,95(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r11,355(r31)
	PPC_STORE_U8(r31.u32 + 355, r11.u8);
	// stb r11,364(r31)
	PPC_STORE_U8(r31.u32 + 364, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F4F8:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82f0ba58
	sub_82F0BA58(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0F538:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2908);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x82f0f598
	if (cr6.lt) goto loc_82F0F598;
	// li r11,255
	r11.s64 = 255;
loc_82F0F598:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,352(r31)
	PPC_STORE_U8(r31.u32 + 352, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F5A4:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2908);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x82f0f604
	if (cr6.lt) goto loc_82F0F604;
	// li r11,255
	r11.s64 = 255;
loc_82F0F604:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,353(r31)
	PPC_STORE_U8(r31.u32 + 353, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F610:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,358(r31)
	PPC_STORE_U16(r31.u32 + 358, r11.u16);
	// bl 0x82f0b868
	sub_82F0B868(ctx, base);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0F66C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0f6b0
	if (cr0.eq) goto loc_82F0F6B0;
	// lbz r11,351(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 351);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x82f0f6b8
	goto loc_82F0F6B8;
loc_82F0F6B0:
	// lbz r11,351(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 351);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0F6B8:
	// stb r11,351(r31)
	PPC_STORE_U8(r31.u32 + 351, r11.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0F6C0:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0f704
	if (cr0.eq) goto loc_82F0F704;
	// lbz r11,351(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 351);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82f0f6b8
	goto loc_82F0F6B8;
loc_82F0F704:
	// lbz r11,351(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 351);
	// andi. r11,r11,223
	r11.u64 = r11.u64 & 223;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82f0f6b8
	goto loc_82F0F6B8;
loc_82F0F710:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82f0f760
	if (!cr6.gt) goto loc_82F0F760;
	// lbz r11,351(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 351);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// b 0x82f0f6b8
	goto loc_82F0F6B8;
loc_82F0F760:
	// lbz r11,351(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 351);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// b 0x82f0f6b8
	goto loc_82F0F6B8;
loc_82F0F76C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,351(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 351);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,351(r11)
	PPC_STORE_U8(r11.u32 + 351, ctx.r10.u8);
	// lwz r31,52(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2908);
	f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// blt cr6,0x82f0f7cc
	if (cr6.lt) goto loc_82F0F7CC;
	// li r11,255
	r11.s64 = 255;
loc_82F0F7CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,354(r31)
	PPC_STORE_U8(r31.u32 + 354, r11.u8);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0F7D8:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r11,-11840
	ctx.r10.s64 = r11.s64 + -11840;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_82F0F81C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f0f840
	if (cr0.eq) goto loc_82F0F840;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0f81c
	if (cr6.eq) goto loc_82F0F81C;
loc_82F0F840:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0f868
	if (!cr0.eq) goto loc_82F0F868;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,329(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 329);
	// andi. r10,r10,253
	ctx.r10.u64 = ctx.r10.u64 & 253;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,329(r11)
	PPC_STORE_U8(r11.u32 + 329, ctx.r10.u8);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82f0f954
	goto loc_82F0F954;
loc_82F0F868:
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// bl 0x82f6d990
	sub_82F6D990(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-6060
	ctx.r10.s64 = r11.s64 + -6060;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F0F884:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0f8a8
	if (cr0.eq) goto loc_82F0F8A8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0f884
	if (cr6.eq) goto loc_82F0F884;
loc_82F0F8A8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0f8c4
	if (!cr0.eq) goto loc_82F0F8C4;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82f0f954
	goto loc_82F0F954;
loc_82F0F8C4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6056
	ctx.r10.s64 = ctx.r10.s64 + -6056;
loc_82F0F8D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0f8f4
	if (cr0.eq) goto loc_82F0F8F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0f8d0
	if (cr6.eq) goto loc_82F0F8D0;
loc_82F0F8F4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0f910
	if (!cr0.eq) goto loc_82F0F910;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// b 0x82f0f954
	goto loc_82F0F954;
loc_82F0F910:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6012
	ctx.r10.s64 = ctx.r10.s64 + -6012;
loc_82F0F91C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f0f940
	if (cr0.eq) goto loc_82F0F940;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0f91c
	if (cr6.eq) goto loc_82F0F91C;
loc_82F0F940:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0f964
	if (!cr0.eq) goto loc_82F0F964;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
loc_82F0F954:
	// lbz r9,330(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r9,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r9.u8);
	// stb r10,328(r11)
	PPC_STORE_U8(r11.u32 + 328, ctx.r10.u8);
loc_82F0F964:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F0F970:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82f0f970
	if (!cr0.eq) goto loc_82F0F970;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0f99c
	if (!cr0.eq) goto loc_82F0F99C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0F99C:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0F9A4:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82f0f9ec
	if (!cr6.gt) goto loc_82F0F9EC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3528(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3528);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82f0f9ec
	if (!cr6.lt) goto loc_82F0F9EC;
	// lwz r3,52(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82f6f790
	sub_82F6F790(ctx, base);
loc_82F0F9EC:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f64cf0
	sub_82F64CF0(ctx, base);
loc_82F0FA04:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
loc_82F0FA18:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r11,-11840
	ctx.r10.s64 = r11.s64 + -11840;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F0FA60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0fa84
	if (cr0.eq) goto loc_82F0FA84;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0fa60
	if (cr6.eq) goto loc_82F0FA60;
loc_82F0FA84:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fa9c
	if (!cr0.eq) goto loc_82F0FA9C;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82f0fb78
	goto loc_82F0FB78;
loc_82F0FA9C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6060
	ctx.r10.s64 = ctx.r10.s64 + -6060;
loc_82F0FAA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0facc
	if (cr0.eq) goto loc_82F0FACC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0faa8
	if (cr6.eq) goto loc_82F0FAA8;
loc_82F0FACC:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fae8
	if (!cr0.eq) goto loc_82F0FAE8;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82f0fb78
	goto loc_82F0FB78;
loc_82F0FAE8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6056
	ctx.r10.s64 = ctx.r10.s64 + -6056;
loc_82F0FAF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0fb18
	if (cr0.eq) goto loc_82F0FB18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0faf4
	if (cr6.eq) goto loc_82F0FAF4;
loc_82F0FB18:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fb34
	if (!cr0.eq) goto loc_82F0FB34;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,243
	ctx.r10.u64 = ctx.r10.u64 & 243;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// b 0x82f0fb78
	goto loc_82F0FB78;
loc_82F0FB34:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6012
	ctx.r10.s64 = ctx.r10.s64 + -6012;
loc_82F0FB40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f0fb64
	if (cr0.eq) goto loc_82F0FB64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0fb40
	if (cr6.eq) goto loc_82F0FB40;
loc_82F0FB64:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fb88
	if (!cr0.eq) goto loc_82F0FB88;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
loc_82F0FB78:
	// lbz r9,330(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r9,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r9.u8);
	// stb r10,328(r11)
	PPC_STORE_U8(r11.u32 + 328, ctx.r10.u8);
loc_82F0FB88:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F0FB94:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82f0fb94
	if (!cr0.eq) goto loc_82F0FB94;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0fbc0
	if (!cr0.eq) goto loc_82F0FBC0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0FBC0:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0FBC8:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r11,-11840
	ctx.r10.s64 = r11.s64 + -11840;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82F0FC10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0fc34
	if (cr0.eq) goto loc_82F0FC34;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0fc10
	if (cr6.eq) goto loc_82F0FC10;
loc_82F0FC34:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fc4c
	if (!cr0.eq) goto loc_82F0FC4C;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,207
	ctx.r10.u64 = ctx.r10.u64 & 207;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82f0fce0
	goto loc_82F0FCE0;
loc_82F0FC4C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6072
	ctx.r10.s64 = ctx.r10.s64 + -6072;
loc_82F0FC58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f0fc7c
	if (cr0.eq) goto loc_82F0FC7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0fc58
	if (cr6.eq) goto loc_82F0FC58;
loc_82F0FC7C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fc98
	if (!cr0.eq) goto loc_82F0FC98;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,207
	ctx.r10.u64 = ctx.r10.u64 & 207;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82f0fce0
	goto loc_82F0FCE0;
loc_82F0FC98:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6064
	ctx.r10.s64 = ctx.r10.s64 + -6064;
loc_82F0FCA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f0fcc8
	if (cr0.eq) goto loc_82F0FCC8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f0fca4
	if (cr6.eq) goto loc_82F0FCA4;
loc_82F0FCC8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f0fcf0
	if (!cr0.eq) goto loc_82F0FCF0;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lbz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 328);
	// andi. r10,r10,207
	ctx.r10.u64 = ctx.r10.u64 & 207;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
loc_82F0FCE0:
	// lbz r9,330(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// stb r10,328(r11)
	PPC_STORE_U8(r11.u32 + 328, ctx.r10.u8);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r9,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r9.u8);
loc_82F0FCF0:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F0FCFC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82f0fcfc
	if (!cr0.eq) goto loc_82F0FCFC;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f0fd28
	if (!cr0.eq) goto loc_82F0FD28;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0FD28:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// b 0x82f0e5ec
	goto loc_82F0E5EC;
loc_82F0FD30:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0fd74
	if (cr0.eq) goto loc_82F0FD74;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// b 0x82f0fd7c
	goto loc_82F0FD7C;
loc_82F0FD74:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,65279
	r11.u64 = r11.u64 & 65279;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82F0FD7C:
	// sth r11,224(r29)
	PPC_STORE_U16(r29.u32 + 224, r11.u16);
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r11,320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f0e548
	if (cr6.eq) goto loc_82F0E548;
	// lbz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 96);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f0fda8
	if (cr0.eq) goto loc_82F0FDA8;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82f0fdb0
	goto loc_82F0FDB0;
loc_82F0FDA8:
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 96);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82F0FDB0:
	// stb r10,96(r11)
	PPC_STORE_U8(r11.u32 + 96, ctx.r10.u8);
	// b 0x82f0e548
	goto loc_82F0E548;
loc_82F0FDB8:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0fdfc
	if (cr0.eq) goto loc_82F0FDFC;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0FDFC:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,65023
	r11.u64 = r11.u64 & 65023;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0FE08:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f0f9ec
	if (cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r11,84
	r11.s64 = 84;
loc_82F0FE38:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfiwx f0,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, f0.u32);
	// b 0x82f0fa04
	goto loc_82F0FA04;
loc_82F0FE48:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f0f9ec
	if (cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r11,80
	r11.s64 = 80;
	// b 0x82f0fe38
	goto loc_82F0FE38;
loc_82F0FE7C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f0f9ec
	if (cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r11,92
	r11.s64 = 92;
	// b 0x82f0fe38
	goto loc_82F0FE38;
loc_82F0FEB0:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// lwz r29,320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(320) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f0f9ec
	if (cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r11,88
	r11.s64 = 88;
	// b 0x82f0fe38
	goto loc_82F0FE38;
loc_82F0FEE4:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lbz r11,600(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 600);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f0f9ec
	if (!cr6.eq) goto loc_82F0F9EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6b840
	sub_82F6B840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f0ff14
	if (cr0.eq) goto loc_82F0FF14;
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
loc_82F0FF14:
	// lhz r11,224(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 224);
	// andi. r11,r11,64511
	r11.u64 = r11.u64 & 64511;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82f0e5ac
	goto loc_82F0E5AC;
}

PPC_WEAK_FUNC(sub_82F0E4E0) {
	__imp__sub_82F0E4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F0FF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-6376
	r11.s64 = r11.s64 + -6376;
	// addi r10,r10,-6384
	ctx.r10.s64 = ctx.r10.s64 + -6384;
	// addi r9,r9,-6464
	ctx.r9.s64 = ctx.r9.s64 + -6464;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// bl 0x82f0af70
	sub_82F0AF70(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82f6f248
	sub_82F6F248(ctx, base);
	// lwz r30,244(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(244) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f0ff84
	if (cr6.eq) goto loc_82F0FF84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f0e3b8
	sub_82F0E3B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F0FF84:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(248) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0ffa4
	if (cr6.eq) goto loc_82F0FFA4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0FFA4:
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x82ef70b0
	sub_82EF70B0(ctx, base);
	// lbz r11,208(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 208);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f0ffc0
	if (cr6.lt) goto loc_82F0FFC0;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F0FFC0:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f0ffd8
	if (!cr0.eq) goto loc_82F0FFD8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F0FFD8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0fff8
	if (cr6.eq) goto loc_82F0FFF8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F0FFF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f65848
	sub_82F65848(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F0FF20) {
	__imp__sub_82F0FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f10064
	if (!cr6.eq) goto loc_82F10064;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f1005c
	if (cr0.eq) goto loc_82F1005C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82f10060
	goto loc_82F10060;
loc_82F1005C:
	// li r11,0
	r11.s64 = 0;
loc_82F10060:
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
loc_82F10064:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f10080
	if (cr6.eq) goto loc_82F10080;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10080:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(252) );
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82f0ada8
	sub_82F0ADA8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F100BC:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f100bc
	if (!cr0.eq) goto loc_82F100BC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f100e8
	if (!cr0.eq) goto loc_82F100E8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F100E8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f10108
	if (cr6.eq) goto loc_82F10108;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F10018) {
	__imp__sub_82F10018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10110) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f0ff20
	sub_82F0FF20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10140
	if (cr0.eq) goto loc_82F10140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F10140:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F10110) {
	__imp__sub_82F10110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10160) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f101c4
	if (cr0.eq) goto loc_82F101C4;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f0b240
	sub_82F0B240(ctx, base);
	// b 0x82f101c8
	goto loc_82F101C8;
loc_82F101C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F101C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F10160) {
	__imp__sub_82F10160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F101D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7500
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f10744
	if (cr6.eq) goto loc_82F10744;
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82f10744
	if (!cr6.eq) goto loc_82F10744;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,180(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(180) );
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// bl 0x82f0a698
	sub_82F0A698(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x82f10730
	if (cr0.eq) goto loc_82F10730;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r24.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r10,-5668
	ctx.r5.s64 = ctx.r10.s64 + -5668;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f106dc
	if (cr0.eq) goto loc_82F106DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,39
	cr6.compare<uint32_t>(r31.u32, 39, xer);
	// blt cr6,0x82f10280
	if (cr6.lt) goto loc_82F10280;
	// li r31,39
	r31.s64 = 39;
loc_82F10280:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82efe5e0
	sub_82EFE5E0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r31,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, r31.u8);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f102c0
	if (!cr6.eq) goto loc_82F102C0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F102C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r9,-5676
	ctx.r5.s64 = ctx.r9.s64 + -5676;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10438
	if (cr0.eq) goto loc_82F10438;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f10438
	if (cr0.eq) goto loc_82F10438;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bne cr6,0x82f10438
	if (!cr6.eq) goto loc_82F10438;
	// li r3,148
	ctx.r3.s64 = 148;
	// lwz r31,48(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f10344
	if (cr0.eq) goto loc_82F10344;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	sub_82F45330(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82f10348
	goto loc_82F10348;
loc_82F10344:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82F10348:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f454d0
	sub_82F454D0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f10378
	if (cr6.eq) goto loc_82F10378;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f1037c
	goto loc_82F1037C;
loc_82F10378:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82F1037C:
	// mulli r11,r3,20
	r11.s64 = ctx.r3.s64 * 20;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f26,f0
	f26.f64 = double(float(f0.f64));
	// fmr f28,f26
	f28.f64 = f26.f64;
	// beq cr6,0x82f103b8
	if (cr6.eq) goto loc_82F103B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f103bc
	goto loc_82F103BC;
loc_82F103B8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82F103BC:
	// mulli r11,r3,20
	r11.s64 = ctx.r3.s64 * 20;
	// fcmpu cr6,f26,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f26.f64, f31.f64);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// fmr f29,f30
	f29.f64 = f30.f64;
	// beq cr6,0x82f103e8
	if (cr6.eq) goto loc_82F103E8;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x82f10430
	if (!cr6.eq) goto loc_82F10430;
loc_82F103E8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r10,-5760
	ctx.r4.s64 = ctx.r10.s64 + -5760;
	// addi r3,r25,16
	ctx.r3.s64 = r25.s64 + 16;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f06d80
	sub_82F06D80(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f10710
	if (cr6.eq) goto loc_82F10710;
loc_82F10424:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
	// b 0x82f10710
	goto loc_82F10710;
loc_82F10430:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82f10458
	if (!cr6.eq) goto loc_82F10458;
loc_82F10438:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-5864
	ctx.r4.s64 = ctx.r10.s64 + -5864;
	// b 0x82f106f8
	goto loc_82F106F8;
loc_82F10458:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfd f31,1312(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 1312);
	// beq 0x82f10498
	if (cr0.eq) goto loc_82F10498;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f31.f64;
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
loc_82F10498:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r10,-7432
	ctx.r5.s64 = ctx.r10.s64 + -7432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f104d0
	if (cr0.eq) goto loc_82F104D0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f31.f64;
	// frsp f29,f0
	f29.f64 = double(float(f0.f64));
loc_82F104D0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r10,-5880
	ctx.r5.s64 = ctx.r10.s64 + -5880;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10508
	if (cr0.eq) goto loc_82F10508;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f31.f64;
	// frsp f27,f0
	f27.f64 = double(float(f0.f64));
loc_82F10508:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r10,-5892
	ctx.r5.s64 = ctx.r10.s64 + -5892;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10544
	if (cr0.eq) goto loc_82F10544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// b 0x82f10550
	goto loc_82F10550;
loc_82F10544:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2756);
	f0.f64 = double(temp.f32);
	// fsubs f31,f30,f0
	f31.f64 = static_cast<float>(f30.f64 - f0.f64);
loc_82F10550:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r10,31232
	ctx.r5.s64 = ctx.r10.s64 + 31232;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f049e8
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f105b8
	if (cr0.eq) goto loc_82F105B8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// lwz r26,0(r8)
	r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f105b8
	if (!cr6.eq) goto loc_82F105B8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F105B8:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f105ec
	if (cr0.eq) goto loc_82F105EC;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f04d10
	sub_82F04D10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f105f0
	goto loc_82F105F0;
loc_82F105EC:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82F105F0:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f10610
	if (cr6.eq) goto loc_82F10610;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10610:
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef1710
	sub_82EF1710(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f1062c
	if (cr6.eq) goto loc_82F1062C;
	// bl 0x82ef1bf0
	sub_82EF1BF0(ctx, base);
loc_82F1062C:
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// li r11,24
	r11.s64 = 24;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// fctiwz f0,f27
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(f27.f64)));
	// stfiwx f0,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, f0.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// fctiwz f13,f31
	ctx.f13.u64 = uint64_t(int32_t(std::trunc(f31.f64)));
	// stfiwx f13,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.f13.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// fctidz f12,f28
	ctx.f12.s64 = (f28.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f28.f64);
	// stfiwx f12,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.f12.u32);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// fctidz f11,f29
	ctx.f11.s64 = (f29.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f29.f64);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stfiwx f11,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.f11.u32);
	// beq cr6,0x82f10688
	if (cr6.eq) goto loc_82F10688;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f10018
	sub_82F10018(ctx, base);
loc_82F10688:
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// fdivs f2,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f29.f64 / f30.f64));
	// fdivs f1,f28,f26
	ctx.f1.f64 = double(float(f28.f64 / f26.f64));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	f0.f64 = static_cast<float>(f0.f64 - f27.f64);
	// fsubs f13,f13,f31
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f31.f64);
	// stfs f0,56(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f13,72(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82f65f08
	sub_82F65F08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82f77a88
	sub_82F77A88(ctx, base);
	// lwz r11,180(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(180) );
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
	// b 0x82f10424
	goto loc_82F10424;
loc_82F106DC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-5976
	ctx.r4.s64 = ctx.r10.s64 + -5976;
loc_82F106F8:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r3,r25,16
	ctx.r3.s64 = r25.s64 + 16;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f06d80
	sub_82F06D80(ctx, base);
loc_82F10710:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(152) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f10730
	if (cr6.eq) goto loc_82F10730;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10730:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10744
	if (cr6.lt) goto loc_82F10744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10744:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca754c
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82F101D0) {
	__imp__sub_82F101D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// li r31,0
	r31.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// stb r31,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r31.u8);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f108e0
	if (cr6.eq) goto loc_82F108E0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82f108e0
	if (!cr6.eq) goto loc_82F108E0;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r27,r11,-128
	r27.s64 = r11.s64 + -128;
	// bne cr6,0x82f107c0
	if (!cr6.eq) goto loc_82F107C0;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82F107C0:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f108e0
	if (cr6.lt) goto loc_82F108E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82f1081c
	if (!cr6.eq) goto loc_82F1081C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f0af70
	sub_82F0AF70(ctx, base);
	// lwz r29,180(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(180) );
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f10804
	if (cr6.eq) goto loc_82F10804;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a700
	sub_82F0A700(ctx, base);
loc_82F10804:
	// stw r31,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r31.u32);
	// lwz r11,180(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(180) );
	// lbz r10,330(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 330);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,330(r11)
	PPC_STORE_U8(r11.u32 + 330, ctx.r10.u8);
	// b 0x82f108e0
	goto loc_82F108E0;
loc_82F1081C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f108b0
	if (cr0.eq) goto loc_82F108B0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f1088c
	if (!cr6.eq) goto loc_82F1088C;
	// lwz r28,56(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + int32_t(56) );
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82f108e0
	if (!cr6.gt) goto loc_82F108E0;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82F10860:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(52) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82f101d0
	sub_82F101D0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82f10860
	if (cr6.lt) goto loc_82F10860;
	// b 0x82f108e0
	goto loc_82F108E0;
loc_82F1088C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f101d0
	sub_82F101D0(ctx, base);
	// b 0x82f108e0
	goto loc_82F108E0;
loc_82F108B0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r27,16
	ctx.r3.s64 = r27.s64 + 16;
	// addi r4,r10,-5656
	ctx.r4.s64 = ctx.r10.s64 + -5656;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f06d80
	sub_82F06D80(ctx, base);
loc_82F108E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F10758) {
	__imp__sub_82F10758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F108E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f10938
	if (cr0.eq) goto loc_82F10938;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f0b050
	sub_82F0B050(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f1093c
	goto loc_82F1093C;
loc_82F10938:
	// li r31,0
	r31.s64 = 0;
loc_82F1093C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f10968
	if (cr6.eq) goto loc_82F10968;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F108E8) {
	__imp__sub_82F108E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82f0b050
	sub_82F0B050(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5568
	r11.s64 = r11.s64 + -5568;
	// addi r10,r10,-5416
	ctx.r10.s64 = ctx.r10.s64 + -5416;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f67fa0
	sub_82F67FA0(ctx, base);
	// addi r28,r31,68
	r28.s64 = r31.s64 + 68;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f67fa0
	sub_82F67FA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82faf230
	sub_82FAF230(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10a34
	if (cr6.lt) goto loc_82F10A34;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10A34:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	r29.s64 = r11.s64 + 16;
	// addi r28,r10,260
	r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(40) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10a94
	if (cr6.lt) goto loc_82F10A94;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10A94:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f04b00
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82F10980) {
	__imp__sub_82F10980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10AB0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10ae4
	if (cr0.eq) goto loc_82F10AE4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// b 0x82f10b0c
	goto loc_82F10B0C;
loc_82F10AE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f10af8
	if (!cr6.eq) goto loc_82F10AF8;
	// bl 0x82f67818
	sub_82F67818(ctx, base);
loc_82F10AF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82F10B0C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F10AB0) {
	__imp__sub_82F10AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(64) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f10b94
	if (!cr6.eq) goto loc_82F10B94;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f10b94
	if (!cr6.eq) goto loc_82F10B94;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f10b88
	if (cr0.eq) goto loc_82F10B88;
	// li r29,0
	r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x82f168d8
	sub_82F168D8(ctx, base);
	// b 0x82f10b8c
	goto loc_82F10B8C;
loc_82F10B88:
	// li r31,0
	r31.s64 = 0;
loc_82F10B8C:
	// stw r31,64(r27)
	PPC_STORE_U32(r27.u32 + 64, r31.u32);
	// b 0x82f10c8c
	goto loc_82F10C8C;
loc_82F10B94:
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(16) );
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,260
	ctx.r5.s64 = r11.s64 + 260;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10c78
	if (cr0.eq) goto loc_82F10C78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f10be8
	if (cr0.eq) goto loc_82F10BE8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10BE8:
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(64) );
	// rlwinm r11,r28,3,0,28
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// beq cr6,0x82f10c34
	if (cr6.eq) goto loc_82F10C34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7138
	sub_82EF7138(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f10c54
	if (cr6.eq) goto loc_82F10C54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f10c54
	if (!cr0.eq) goto loc_82F10C54;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82f10c50
	goto loc_82F10C50;
loc_82F10C34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f10c54
	if (cr6.eq) goto loc_82F10C54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f10c54
	if (!cr0.eq) goto loc_82F10C54;
loc_82F10C50:
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F10C54:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f10c78
	if (cr6.eq) goto loc_82F10C78;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F10C78:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10c8c
	if (cr6.lt) goto loc_82F10C8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10C8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F10B30) {
	__imp__sub_82F10B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10C98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5568
	r11.s64 = r11.s64 + -5568;
	// addi r10,r10,-5416
	ctx.r10.s64 = ctx.r10.s64 + -5416;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f10cd8
	if (cr6.eq) goto loc_82F10CD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82F10CD8:
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f56128
	sub_82F56128(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F10C98) {
	__imp__sub_82F10C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f10980
	sub_82F10980(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5568
	r11.s64 = r11.s64 + -5568;
	// addi r10,r10,-5416
	ctx.r10.s64 = ctx.r10.s64 + -5416;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f92120
	sub_82F92120(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r26,r11,-8296
	r26.s64 = r11.s64 + -8296;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// li r28,2
	r28.s64 = 2;
	// li r29,9
	r29.s64 = 9;
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// addi r7,r1,89
	ctx.r7.s64 = ctx.r1.s64 + 89;
	// addi r5,r11,-5428
	ctx.r5.s64 = r11.s64 + -5428;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10da8
	if (cr6.lt) goto loc_82F10DA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10DA8:
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r11,-5436
	ctx.r5.s64 = r11.s64 + -5436;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10de0
	if (cr6.lt) goto loc_82F10DE0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10DE0:
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r29.u8);
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r5,r11,-5448
	ctx.r5.s64 = r11.s64 + -5448;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,192(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10e18
	if (cr6.lt) goto loc_82F10E18;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10E18:
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-5460
	ctx.r5.s64 = r11.s64 + -5460;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10e50
	if (cr6.lt) goto loc_82F10E50;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10E50:
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r29.u8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-5472
	ctx.r5.s64 = r11.s64 + -5472;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,224(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10e88
	if (cr6.lt) goto loc_82F10E88;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10E88:
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r5,r11,-5488
	ctx.r5.s64 = r11.s64 + -5488;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10ec0
	if (cr6.lt) goto loc_82F10EC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10EC0:
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r5,r11,-5496
	ctx.r5.s64 = r11.s64 + -5496;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10ef8
	if (cr6.lt) goto loc_82F10EF8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10EF8:
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r29.u8);
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r5,r11,-5508
	ctx.r5.s64 = r11.s64 + -5508;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,176(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10f30
	if (cr6.lt) goto loc_82F10F30;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10F30:
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r29.u8);
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// addi r5,r11,-5524
	ctx.r5.s64 = r11.s64 + -5524;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,208(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10f68
	if (cr6.lt) goto loc_82F10F68;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10F68:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, r29.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-5544
	ctx.r5.s64 = r11.s64 + -5544;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,240(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f10fa0
	if (cr6.lt) goto loc_82F10FA0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F10FA0:
	// addi r5,r26,72
	ctx.r5.s64 = r26.s64 + 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F10D08) {
	__imp__sub_82F10D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f10fc8
	sub_82F10FC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F10FC0) {
	__imp__sub_82F10FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F10FC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f10c98
	sub_82F10C98(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f10ff8
	if (cr0.eq) goto loc_82F10FF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F10FF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F10FC8) {
	__imp__sub_82F10FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
loc_82F11028:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f1104c
	if (cr0.eq) goto loc_82F1104C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f11028
	if (cr6.eq) goto loc_82F11028;
loc_82F1104C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x82f1105c
	if (cr0.gt) goto loc_82F1105C;
	// li r11,0
	r11.s64 = 0;
loc_82F1105C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11018) {
	__imp__sub_82F11018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11068) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f11098
	if (!cr6.eq) goto loc_82F11098;
	// bl 0x82f67818
	sub_82F67818(ctx, base);
loc_82F11098:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11068) {
	__imp__sub_82F11068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F110D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsub f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 - ctx.f1.f64;
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F110D0) {
	__imp__sub_82F110D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmul f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 * ctx.f1.f64;
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11118) {
	__imp__sub_82F11118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// and r11,r29,r3
	r11.u64 = r29.u64 & ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F11178) {
	__imp__sub_82F11178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F111C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// or r11,r29,r3
	r11.u64 = r29.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F111C8) {
	__imp__sub_82F111C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// xor r11,r29,r3
	r11.u64 = r29.u64 ^ ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F11218) {
	__imp__sub_82F11218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// slw r11,r3,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F11268) {
	__imp__sub_82F11268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F112B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// sraw r11,r3,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	r11.s64 = ctx.r3.s32 >> temp.u32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F112B8) {
	__imp__sub_82F112B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b768
	sub_82F6B768(ctx, base);
	// srw r11,r3,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r29.u8 & 0x3F));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F11308) {
	__imp__sub_82F11308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11358) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f6a220
	sub_82F6A220(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5328
	r11.s64 = r11.s64 + -5328;
	// addi r10,r10,11640
	ctx.r10.s64 = ctx.r10.s64 + 11640;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11358) {
	__imp__sub_82F11358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F113A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F113A0) {
	__imp__sub_82F113A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F113A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f113e8
	if (cr0.eq) goto loc_82F113E8;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// b 0x82f113ec
	goto loc_82F113EC;
loc_82F113E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F113EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F113A8) {
	__imp__sub_82F113A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11400) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67340
	sub_82F67340(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11400) {
	__imp__sub_82F11400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11450) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67220
	sub_82F67220(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11450) {
	__imp__sub_82F11450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F114A8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r3,r11,520
	ctx.r3.s64 = r11.s64 + 520;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F114A8) {
	__imp__sub_82F114A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11500) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,520
	ctx.r3.s64 = r11.s64 + 520;
	// bl 0x82f67220
	sub_82F67220(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11500) {
	__imp__sub_82F11500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11560) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11560) {
	__imp__sub_82F11560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F115B0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x82260900
	sub_82260900(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F115B0) {
	__imp__sub_82F115B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11600) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x8227efe8
	sub_8227EFE8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11600) {
	__imp__sub_82F11600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11650) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11650) {
	__imp__sub_82F11650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F116A0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x822955c0
	sub_822955C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F116A0) {
	__imp__sub_82F116A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F116F0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x82239e88
	sub_82239E88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F116F0) {
	__imp__sub_82F116F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11740) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x821fde30
	sub_821FDE30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11740) {
	__imp__sub_82F11740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11790) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11790) {
	__imp__sub_82F11790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F117E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x821f3c80
	sub_821F3C80(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F117E0) {
	__imp__sub_82F117E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11830) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x82239f68
	sub_82239F68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11830) {
	__imp__sub_82F11830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11880) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// fsqrt f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = simd::sqrt_f64(ctx.f1.f64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11880) {
	__imp__sub_82F11880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F118D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// bl 0x82293cd0
	sub_82293CD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F118D0) {
	__imp__sub_82F118D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8219ec50
	sub_8219EC50(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11920) {
	__imp__sub_82F11920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F119A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x82f119f8
	if (!cr6.gt) goto loc_82F119F8;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_82F119F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F119A0) {
	__imp__sub_82F119A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11A20) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x82f11a78
	if (!cr6.lt) goto loc_82F11A78;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_82F11A78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11A20) {
	__imp__sub_82F11A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821fe378
	sub_821FE378(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11AA0) {
	__imp__sub_82F11AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f983d0
	sub_82F983D0(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-8808(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8808);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11B20) {
	__imp__sub_82F11B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3368);
	// fadd f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 + f0.f64;
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11B70) {
	__imp__sub_82F11B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f11bf0
	if (!cr6.eq) goto loc_82F11BF0;
	// li r11,0
	r11.s64 = 0;
loc_82F11BF0:
	// lbz r11,76(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 76);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11BD0) {
	__imp__sub_82F11BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f11c38
	if (!cr6.eq) goto loc_82F11C38;
	// li r11,0
	r11.s64 = 0;
loc_82F11C38:
	// lwa r11,72(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 72));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11C18) {
	__imp__sub_82F11C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f11dac
	if (cr6.lt) goto loc_82F11DAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// li r31,10
	r31.s64 = 10;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// blt cr6,0x82f11cec
	if (cr6.lt) goto loc_82F11CEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// blt cr6,0x82f11ce4
	if (cr6.lt) goto loc_82F11CE4;
	// cmpwi cr6,r31,36
	cr6.compare<int32_t>(r31.s32, 36, xer);
	// ble cr6,0x82f11d30
	if (!cr6.gt) goto loc_82F11D30;
loc_82F11CE4:
	// bl 0x82f98458
	sub_82F98458(ctx, base);
	// b 0x82f11d7c
	goto loc_82F11D7C;
loc_82F11CEC:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82f11d34
	if (!cr6.gt) goto loc_82F11D34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,48
	cr6.compare<uint32_t>(ctx.r9.u32, 48, xer);
	// bne cr6,0x82f11d34
	if (!cr6.eq) goto loc_82F11D34;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// li r30,1
	r30.s64 = 1;
	// li r31,8
	r31.s64 = 8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// beq cr6,0x82f11d24
	if (cr6.eq) goto loc_82F11D24;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// bne cr6,0x82f11d34
	if (!cr6.eq) goto loc_82F11D34;
loc_82F11D24:
	// li r31,16
	r31.s64 = 16;
	// li r30,2
	r30.s64 = 2;
	// b 0x82f11d34
	goto loc_82F11D34;
loc_82F11D30:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82F11D34:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82ca62e0
	sub_82CA62E0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82f11d6c
	if (!cr6.eq) goto loc_82F11D6C;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bne cr6,0x82f11ce4
	if (!cr6.eq) goto loc_82F11CE4;
loc_82F11D6C:
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
loc_82F11D7C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f11dac
	if (!cr6.eq) goto loc_82F11DAC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F11DAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F11C60) {
	__imp__sub_82F11C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11DB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f11e58
	if (cr6.lt) goto loc_82F11E58;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ca99c0
	sub_82CA99C0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82f11e28
	if (!cr6.eq) goto loc_82F11E28;
	// bl 0x82f98458
	sub_82F98458(ctx, base);
loc_82F11E28:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f11e58
	if (!cr6.eq) goto loc_82F11E58;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F11E58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11DB8) {
	__imp__sub_82F11DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f11f34
	if (cr6.lt) goto loc_82F11F34;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r29,2
	r29.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// stb r29,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r29.u8);
	// stb r30,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r30.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f11ec0
	if (!cr6.eq) goto loc_82F11EC0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r30,116(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// b 0x82f11ee8
	goto loc_82F11EE8;
loc_82F11EC0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82f11f34
	if (!cr6.eq) goto loc_82F11F34;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f11ee8
	if (cr6.eq) goto loc_82F11EE8;
	// addi r30,r11,-128
	r30.s64 = r11.s64 + -128;
loc_82F11EE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f11f34
	if (cr6.eq) goto loc_82F11F34;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b688
	sub_82F6B688(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f4d158
	sub_82F4D158(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// bge cr6,0x82f11f34
	if (!cr6.lt) goto loc_82F11F34;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82F11F34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F11E70) {
	__imp__sub_82F11E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F11F40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f11f7c
	if (!cr6.lt) goto loc_82F11F7C;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// b 0x82f11fdc
	goto loc_82F11FDC;
loc_82F11F7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = rotl64(r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r10,r10,52,11
	ctx.r10.u64 = rotl64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x82f11fc8
	if (!cr6.eq) goto loc_82F11FC8;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// li r30,1
	r30.s64 = 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x82f11fcc
	if (!cr6.eq) goto loc_82F11FCC;
loc_82F11FC8:
	// li r30,0
	r30.s64 = 0;
loc_82F11FCC:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
loc_82F11FDC:
	// li r11,2
	r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F11F40) {
	__imp__sub_82F11F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12000) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f120d4
	if (cr6.lt) goto loc_82F120D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = rotl64(r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r10,r10,52,11
	ctx.r10.u64 = rotl64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x82f1206c
	if (!cr6.eq) goto loc_82F1206C;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f12070
	if (!cr6.eq) goto loc_82F12070;
loc_82F1206C:
	// li r11,0
	r11.s64 = 0;
loc_82F12070:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f120d4
	if (!cr0.eq) goto loc_82F120D4;
	// li r11,4095
	r11.s64 = 4095;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r11,r11,52,11
	r11.u64 = rotl64(r11.u64, 52) & 0xFFF0000000000000;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, r11.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f12098
	if (cr6.eq) goto loc_82F12098;
	// li r11,0
	r11.s64 = 0;
loc_82F12098:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f120d4
	if (!cr0.eq) goto loc_82F120D4;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f120b8
	if (cr6.eq) goto loc_82F120B8;
	// li r11,0
	r11.s64 = 0;
loc_82F120B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f120d4
	if (!cr0.eq) goto loc_82F120D4;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f120e4
	goto loc_82F120E4;
loc_82F120D4:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F120E4:
	// li r11,2
	r11.s64 = 2;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12000) {
	__imp__sub_82F12000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// or r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82F12108) {
	__imp__sub_82F12108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f12244
	if (cr6.eq) goto loc_82F12244;
loc_82F12170:
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbzx r31,r30,r27
	r31.u64 = PPC_LOAD_U8(r30.u32 + r27.u32);
	// addi r9,r1,179
	ctx.r9.s64 = ctx.r1.s64 + 179;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f12198
	if (cr6.lt) goto loc_82F12198;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82F12198:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bge cr6,0x82f121dc
	if (!cr6.lt) goto loc_82F121DC;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r8.s64 = r31.s32 >> 5;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r8,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r26.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f121dc
	if (cr0.eq) goto loc_82F121DC;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82f12238
	goto loc_82F12238;
loc_82F121DC:
	// srawi r10,r31,4
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	ctx.r10.s64 = r31.s32 >> 4;
	// li r8,37
	ctx.r8.s64 = 37;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// li r10,48
	ctx.r10.s64 = 48;
	// ble cr6,0x82f12200
	if (!cr6.gt) goto loc_82F12200;
	// li r10,55
	ctx.r10.s64 = 55;
loc_82F12200:
	// srawi r8,r31,4
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	ctx.r8.s64 = r31.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r9,r31
	r11.s64 = r31.s64 - ctx.r9.s64;
	// li r9,48
	ctx.r9.s64 = 48;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x82f1222c
	if (!cr6.gt) goto loc_82F1222C;
	// li r9,55
	ctx.r9.s64 = 55;
loc_82F1222C:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82F12238:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82f12170
	if (cr6.lt) goto loc_82F12170;
loc_82F12244:
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F12140) {
	__imp__sub_82F12140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r11,-5272
	ctx.r6.s64 = r11.s64 + -5272;
	// b 0x82f12140
	sub_82F12140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F12260) {
	__imp__sub_82F12260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r11,-5256
	ctx.r6.s64 = r11.s64 + -5256;
	// b 0x82f12140
	sub_82F12140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F12270) {
	__imp__sub_82F12270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// add r28,r31,r4
	r28.u64 = r31.u64 + ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// b 0x82f1233c
	goto loc_82F1233C;
loc_82F122A4:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// lbz r29,0(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,179
	ctx.r10.s64 = ctx.r1.s64 + 179;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f122d0
	if (cr6.lt) goto loc_82F122D0;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_82F122D0:
	// cmpwi cr6,r29,37
	cr6.compare<int32_t>(r29.s32, 37, xer);
	// bne cr6,0x82f12334
	if (!cr6.eq) goto loc_82F12334;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x821eeb10
	sub_821EEB10(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x821eeb10
	sub_821EEB10(ctx, base);
	// addi r11,r29,-48
	r11.s64 = r29.s64 + -48;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x82f12304
	if (!cr6.gt) goto loc_82F12304;
	// addi r11,r29,-55
	r11.s64 = r29.s64 + -55;
loc_82F12304:
	// addi r10,r3,-48
	ctx.r10.s64 = ctx.r3.s64 + -48;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x82f12314
	if (!cr6.gt) goto loc_82F12314;
	// addi r10,r3,-55
	ctx.r10.s64 = ctx.r3.s64 + -55;
loc_82F12314:
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bge cr6,0x82f1233c
	if (!cr6.lt) goto loc_82F1233C;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bge cr6,0x82f1233c
	if (!cr6.lt) goto loc_82F1233C;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// b 0x82f12338
	goto loc_82F12338;
loc_82F12334:
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
loc_82F12338:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82F1233C:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82f122a4
	if (cr6.lt) goto loc_82F122A4;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F12280) {
	__imp__sub_82F12280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12360) {
	__imp__sub_82F12360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F123C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F123C8) {
	__imp__sub_82F123C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F123D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// stb r3,124(r31)
	PPC_STORE_U8(r31.u32 + 124, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F123D0) {
	__imp__sub_82F123D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12410) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// stb r3,124(r31)
	PPC_STORE_U8(r31.u32 + 124, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12410) {
	__imp__sub_82F12410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
	// bl 0x82f60318
	sub_82F60318(ctx, base);
	// stb r3,124(r31)
	PPC_STORE_U8(r31.u32 + 124, ctx.r3.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(144) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12450) {
	__imp__sub_82F12450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F124B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82F124B8) {
	__imp__sub_82F124B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F124D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F124D0) {
	__imp__sub_82F124D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,217(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 217);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12508) {
	__imp__sub_82F12508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82F12548) {
	__imp__sub_82F12548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12560) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f125ec
	if (!cr0.eq) goto loc_82F125EC;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f125dc
	if (!cr0.eq) goto loc_82F125DC;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f125dc
	if (!cr0.eq) goto loc_82F125DC;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f125dc
	if (!cr0.eq) goto loc_82F125DC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// oris r10,r10,3072
	ctx.r10.u64 = ctx.r10.u64 | 201326592;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// b 0x82f125f0
	goto loc_82F125F0;
loc_82F125DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_82F125EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F125F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12560) {
	__imp__sub_82F12560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f12800
	if (cr6.gt) goto loc_82F12800;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bge cr6,0x82f126f8
	if (!cr6.lt) goto loc_82F126F8;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82f12690
	if (!cr6.lt) goto loc_82F12690;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x82f12660
	if (!cr6.lt) goto loc_82F12660;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x82f1264c
	if (!cr6.lt) goto loc_82F1264C;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F1264C:
	// li r10,4
	ctx.r10.s64 = 4;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F12660:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bge cr6,0x82f1267c
	if (!cr6.lt) goto loc_82F1267C;
	// li r10,16
	ctx.r10.s64 = 16;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F1267C:
	// li r10,64
	ctx.r10.s64 = 64;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F12690:
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(r11.u32, 2048, xer);
	// bge cr6,0x82f126c8
	if (!cr6.lt) goto loc_82F126C8;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bge cr6,0x82f126b4
	if (!cr6.lt) goto loc_82F126B4;
	// li r10,256
	ctx.r10.s64 = 256;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F126B4:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F126C8:
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bge cr6,0x82f126e4
	if (!cr6.lt) goto loc_82F126E4;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,13
	r11.s64 = r11.s64 + 13;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F126E4:
	// li r10,16384
	ctx.r10.s64 = 16384;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F126F8:
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f12774
	if (!cr6.lt) goto loc_82F12774;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f12740
	if (!cr6.lt) goto loc_82F12740;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f12730
	if (!cr6.lt) goto loc_82F12730;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F12730:
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F12740:
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f12760
	if (!cr6.lt) goto loc_82F12760;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,21
	r11.s64 = r11.s64 + 21;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F12760:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,23
	r11.s64 = r11.s64 + 23;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F12774:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f127b4
	if (!cr6.lt) goto loc_82F127B4;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f127a0
	if (!cr6.lt) goto loc_82F127A0;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F127A0:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,27
	r11.s64 = r11.s64 + 27;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F127B4:
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f127d4
	if (!cr6.lt) goto loc_82F127D4;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,29
	r11.s64 = r11.s64 + 29;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F127D4:
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f127e8
	if (!cr6.lt) goto loc_82F127E8;
	// li r11,30
	r11.s64 = 30;
	// b 0x82f127f8
	goto loc_82F127F8;
loc_82F127E8:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82F127F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// b 0x82f12808
	goto loc_82F12808;
loc_82F12800:
	// addis r11,r11,-8
	r11.s64 = r11.s64 + -524288;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
loc_82F12808:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f1282c
	if (cr6.eq) goto loc_82F1282C;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// bge cr6,0x82f1282c
	if (!cr6.lt) goto loc_82F1282C;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -6688;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82F1282C:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12608) {
	__imp__sub_82F12608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12838) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f12608
	sub_82F12608(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12838) {
	__imp__sub_82F12838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// bgt cr6,0x82f12914
	if (cr6.gt) goto loc_82F12914;
	// beq cr6,0x82f1290c
	if (cr6.eq) goto loc_82F1290C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82f12904
	if (cr6.eq) goto loc_82F12904;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82f128fc
	if (cr6.eq) goto loc_82F128FC;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82f128f4
	if (cr6.eq) goto loc_82F128F4;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// beq cr6,0x82f128ec
	if (cr6.eq) goto loc_82F128EC;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// beq cr6,0x82f128e4
	if (cr6.eq) goto loc_82F128E4;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// beq cr6,0x82f128dc
	if (cr6.eq) goto loc_82F128DC;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// bne cr6,0x82f12944
	if (!cr6.eq) goto loc_82F12944;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F128DC:
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F128E4:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F128EC:
	// li r10,19
	ctx.r10.s64 = 19;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F128F4:
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F128FC:
	// li r10,18
	ctx.r10.s64 = 18;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12904:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F1290C:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12914:
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(r11.s32, 37, xer);
	// beq cr6,0x82f12980
	if (cr6.eq) goto loc_82F12980;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// beq cr6,0x82f12978
	if (cr6.eq) goto loc_82F12978;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(r11.s32, 39, xer);
	// beq cr6,0x82f12970
	if (cr6.eq) goto loc_82F12970;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// beq cr6,0x82f12968
	if (cr6.eq) goto loc_82F12968;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x82f12960
	if (cr6.eq) goto loc_82F12960;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x82f12958
	if (cr6.eq) goto loc_82F12958;
loc_82F12944:
	// lbz r11,10(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// blt cr6,0x82f12984
	if (cr6.lt) goto loc_82F12984;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12958:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12960:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12968:
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12970:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12978:
	// li r10,14
	ctx.r10.s64 = 14;
	// b 0x82f12984
	goto loc_82F12984;
loc_82F12980:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F12984:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F12888) {
	__imp__sub_82F12888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F12990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-6568
	r11.s64 = r11.s64 + -6568;
	// lbz r28,0(r24)
	r28.u64 = PPC_LOAD_U8(r24.u32 + 0);
loc_82F129B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// bne cr6,0x82f129c4
	if (!cr6.eq) goto loc_82F129C4;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82F129C4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f129d4
	if (cr6.eq) goto loc_82F129D4;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x82f129b4
	goto loc_82F129B4;
loc_82F129D4:
	// li r31,2
	r31.s64 = 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82f129f8
	if (!cr6.eq) goto loc_82F129F8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,-4768
	ctx.r4.s64 = r11.s64 + -4768;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12a0c
	goto loc_82F12A0C;
loc_82F129F8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r4,r11,-4776
	ctx.r4.s64 = r11.s64 + -4776;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
loc_82F12A0C:
	// rlwinm. r11,r28,0,24,24
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f12a64
	if (cr0.eq) goto loc_82F12A64;
	// lbz r11,2(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 2);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// lbz r10,1(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 1);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// or r22,r11,r10
	r22.u64 = r11.u64 | ctx.r10.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// bne cr6,0x82f12a7c
	if (!cr6.eq) goto loc_82F12A7C;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x82f12a64
	if (!cr6.gt) goto loc_82F12A64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r28,r24,3
	r28.s64 = r24.s64 + 3;
	// addi r29,r11,-4784
	r29.s64 = r11.s64 + -4784;
loc_82F12A48:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(r31.s32, r22.s32, xer);
	// blt cr6,0x82f12a48
	if (cr6.lt) goto loc_82F12A48;
loc_82F12A64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,3200
	ctx.r4.s64 = r11.s64 + 3200;
loc_82F12A6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
loc_82F12A74:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c00
	return;
loc_82F12A7C:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x82f12ad4
	if (!cr6.eq) goto loc_82F12AD4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-4788
	ctx.r4.s64 = r11.s64 + -4788;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x82f12ac8
	if (!cr6.gt) goto loc_82F12AC8;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r28,r24,3
	r28.s64 = r24.s64 + 3;
	// addi r29,r11,12872
	r29.s64 = r11.s64 + 12872;
loc_82F12AAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(r31.s32, r22.s32, xer);
	// blt cr6,0x82f12aac
	if (cr6.lt) goto loc_82F12AAC;
loc_82F12AC8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,-9436
	ctx.r4.s64 = r11.s64 + -9436;
	// b 0x82f12a6c
	goto loc_82F12A6C;
loc_82F12AD4:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bne cr6,0x82f12aec
	if (!cr6.eq) goto loc_82F12AEC;
	// lbz r5,3(r24)
	ctx.r5.u64 = PPC_LOAD_U8(r24.u32 + 3);
loc_82F12AE0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,-4796
	ctx.r4.s64 = r11.s64 + -4796;
	// b 0x82f130f0
	goto loc_82F130F0;
loc_82F12AEC:
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// bne cr6,0x82f12b10
	if (!cr6.eq) goto loc_82F12B10;
	// lbz r11,4(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 4);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lbz r9,3(r24)
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// addi r4,r10,-4796
	ctx.r4.s64 = ctx.r10.s64 + -4796;
	// or r5,r11,r9
	ctx.r5.u64 = r11.u64 | ctx.r9.u64;
	// b 0x82f130f0
	goto loc_82F130F0;
loc_82F12B10:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(r31.s32, 5, xer);
	// bne cr6,0x82f12b3c
	if (!cr6.eq) goto loc_82F12B3C;
	// lbz r11,4(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 4);
	// lbz r10,3(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// or r5,r11,r10
	ctx.r5.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm. r11,r5,0,16,16
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f12ae0
	if (cr0.eq) goto loc_82F12AE0;
	// li r11,-32768
	r11.s64 = -32768;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | r11.u64;
	// b 0x82f12ae0
	goto loc_82F12AE0;
loc_82F12B3C:
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// bne cr6,0x82f12dfc
	if (!cr6.eq) goto loc_82F12DFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3200
	ctx.r4.s64 = r11.s64 + 3200;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x82f12a74
	if (!cr6.gt) goto loc_82F12A74;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r27,-32252
	r27.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r29,-32246
	r29.s64 = -2113273856;
	// lis r28,-32252
	r28.s64 = -2113667072;
	// lis r26,-32241
	r26.s64 = -2112946176;
	// addi r4,r4,-4804
	ctx.r4.s64 = ctx.r4.s64 + -4804;
	// addi r15,r27,-9436
	r15.s64 = r27.s64 + -9436;
	// addi r25,r24,3
	r25.s64 = r24.s64 + 3;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r22,r11,-4824
	r22.s64 = r11.s64 + -4824;
	// addi r19,r10,-4840
	r19.s64 = ctx.r10.s64 + -4840;
	// addi r21,r9,-4852
	r21.s64 = ctx.r9.s64 + -4852;
	// addi r23,r8,-4868
	r23.s64 = ctx.r8.s64 + -4868;
	// addi r18,r7,-4880
	r18.s64 = ctx.r7.s64 + -4880;
	// addi r17,r6,-4892
	r17.s64 = ctx.r6.s64 + -4892;
	// addi r14,r5,-4900
	r14.s64 = ctx.r5.s64 + -4900;
	// addi r16,r3,-4912
	r16.s64 = ctx.r3.s64 + -4912;
	// addi r20,r29,25328
	r20.s64 = r29.s64 + 25328;
	// addi r28,r28,-4916
	r28.s64 = r28.s64 + -4916;
	// addi r27,r26,12872
	r27.s64 = r26.s64 + 12872;
loc_82F12BD0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r29,r25,r31
	r29.u64 = PPC_LOAD_U8(r25.u32 + r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82f12c24
	if (!cr6.eq) goto loc_82F12C24;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12c08
	goto loc_82F12C08;
loc_82F12BFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82F12C08:
	// lbzx r5,r25,r31
	ctx.r5.u64 = PPC_LOAD_U8(r25.u32 + r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x82f12bfc
	if (!cr0.eq) goto loc_82F12BFC;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82f12c90
	goto loc_82F12C90;
loc_82F12C24:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x82f12c70
	if (!cr6.eq) goto loc_82F12C70;
	// lwzx r11,r25,r31
	r11.u64 = PPC_LOAD_U32(r25.u32 + r31.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (rotl32(r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (rotl32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12dec
	goto loc_82F12DEC;
loc_82F12C70:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x82f12c80
	if (!cr6.eq) goto loc_82F12C80;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// b 0x82f12c8c
	goto loc_82F12C8C;
loc_82F12C80:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bne cr6,0x82f12c98
	if (!cr6.eq) goto loc_82F12C98;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
loc_82F12C8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82F12C90:
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12dec
	goto loc_82F12DEC;
loc_82F12C98:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x82f12cb0
	if (!cr6.eq) goto loc_82F12CB0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
loc_82F12CA4:
	// lbzx r5,r25,r31
	ctx.r5.u64 = PPC_LOAD_U8(r25.u32 + r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82f12de4
	goto loc_82F12DE4;
loc_82F12CB0:
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// bne cr6,0x82f12cc0
	if (!cr6.eq) goto loc_82F12CC0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// b 0x82f12ca4
	goto loc_82F12CA4;
loc_82F12CC0:
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// bne cr6,0x82f12d6c
	if (!cr6.eq) goto loc_82F12D6C;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lwzx r10,r25,r31
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r31.u32);
	// li r12,255
	r12.s64 = 255;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rldicr r12,r12,48,15
	r12.u64 = rotl64(r12.u64, 48) & 0xFFFF000000000000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,7(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(7) );
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// ld r11,128(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// li r12,255
	r12.s64 = 255;
	// rldicl r9,r11,48,16
	ctx.r9.u64 = rotl64(r11.u64, 48) & 0xFFFFFFFFFFFF;
	// rlwinm r8,r11,0,16,23
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// rldicr r12,r12,40,23
	r12.u64 = rotl64(r12.u64, 40) & 0xFFFFFF0000000000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldimi r8,r11,16,0
	ctx.r8.u64 = (rotl64(r11.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r8.u64 & 0xFFFF);
	// and r9,r11,r12
	ctx.r9.u64 = r11.u64 & r12.u64;
	// rldicl r10,r10,48,16
	ctx.r10.u64 = rotl64(ctx.r10.u64, 48) & 0xFFFFFFFFFFFF;
	// li r12,255
	r12.s64 = 255;
	// rlwinm r7,r11,0,8,15
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF0000;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = rotl64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r12,r12,32,31
	r12.u64 = rotl64(r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r8,r11,r12
	ctx.r8.u64 = r11.u64 & r12.u64;
	// rlwinm r11,r11,0,0,7
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// rldicl r10,r10,48,16
	ctx.r10.u64 = rotl64(ctx.r10.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicr r9,r9,16,47
	ctx.r9.u64 = rotl64(ctx.r9.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rldicl r10,r10,56,8
	ctx.r10.u64 = rotl64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r11,r11,8,55
	r11.u64 = rotl64(r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f1,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12dec
	goto loc_82F12DEC;
loc_82F12D6C:
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(r29.s32, 7, xer);
	// bne cr6,0x82f12db0
	if (!cr6.eq) goto loc_82F12DB0;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lbzx r10,r25,r31
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + r31.u32);
	// add r9,r31,r24
	ctx.r9.u64 = r31.u64 + r24.u64;
	// add r8,r31,r24
	ctx.r8.u64 = r31.u64 + r24.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lbz r11,6(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// lbz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x82f12de0
	goto loc_82F12DE0;
loc_82F12DB0:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x82f12dc0
	if (!cr6.eq) goto loc_82F12DC0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// b 0x82f12ca4
	goto loc_82F12CA4;
loc_82F12DC0:
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(r29.s32, 9, xer);
	// bne cr6,0x82f12dec
	if (!cr6.eq) goto loc_82F12DEC;
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lbzx r10,r25,r31
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
loc_82F12DE0:
	// or r5,r11,r10
	ctx.r5.u64 = r11.u64 | ctx.r10.u64;
loc_82F12DE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
loc_82F12DEC:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f12bd0
	if (cr6.lt) goto loc_82F12BD0;
	// b 0x82f12a74
	goto loc_82F12A74;
loc_82F12DFC:
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// bne cr6,0x82f12ec8
	if (!cr6.eq) goto loc_82F12EC8;
	// lbz r11,4(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 4);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lbz r9,3(r24)
	ctx.r9.u64 = PPC_LOAD_U8(r24.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// addi r4,r10,-4924
	ctx.r4.s64 = ctx.r10.s64 + -4924;
	// or r29,r11,r9
	r29.u64 = r11.u64 | ctx.r9.u64;
	// addi r26,r24,3
	r26.s64 = r24.s64 + 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r31,2
	r31.s64 = 2;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82f12a74
	if (!cr6.gt) goto loc_82F12A74;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r23,r11,-4960
	r23.s64 = r11.s64 + -4960;
	// addi r28,r10,25328
	r28.s64 = ctx.r10.s64 + 25328;
	// addi r27,r9,-4916
	r27.s64 = ctx.r9.s64 + -4916;
	// addi r24,r8,-9436
	r24.s64 = ctx.r8.s64 + -9436;
	// addi r25,r7,12872
	r25.s64 = ctx.r7.s64 + 12872;
loc_82F12E60:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12e94
	goto loc_82F12E94;
loc_82F12E7C:
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(r31.s32, r22.s32, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bge cr6,0x82f12ea4
	if (!cr6.lt) goto loc_82F12EA4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82F12E94:
	// lbzx r5,r26,r31
	ctx.r5.u64 = PPC_LOAD_U8(r26.u32 + r31.u32);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x82f12e7c
	if (!cr0.eq) goto loc_82F12E7C;
	// b 0x82f12eac
	goto loc_82F12EAC;
loc_82F12EA4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
loc_82F12EAC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82f12e60
	if (!cr0.eq) goto loc_82F12E60;
	// b 0x82f12a74
	goto loc_82F12A74;
loc_82F12EC8:
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(r31.s32, 9, xer);
	// bne cr6,0x82f13018
	if (!cr6.eq) goto loc_82F13018;
	// addi r27,r24,3
	r27.s64 = r24.s64 + 3;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F12ED8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f12ed8
	if (!cr6.eq) goto loc_82F12ED8;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r10,-5008
	ctx.r4.s64 = ctx.r10.s64 + -5008;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// add r9,r11,r24
	ctx.r9.u64 = r11.u64 + r24.u64;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// lbz r7,3(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// or r29,r11,r10
	r29.u64 = r11.u64 | ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// add r11,r31,r24
	r11.u64 = r31.u64 + r24.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r28,r31,2
	r28.s64 = r31.s64 + 2;
	// addi r4,r10,-5120
	ctx.r4.s64 = ctx.r10.s64 + -5120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = rotl32(ctx.r10.u32, 8);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r11,31,17,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFF;
	// rlwinm r9,r11,30,18,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFF;
	// rlwinm r8,r11,29,19,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFF;
	// rlwinm r7,r11,28,20,31
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFF;
	// rlwinm r6,r11,27,21,31
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FF;
	// rlwinm r5,r11,26,22,31
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0x3FF;
	// rlwinm r31,r11,25,23,31
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1FF;
	// rlwinm r26,r11,24,24,31
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// clrlwi r25,r10,31
	r25.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r23,r9,31
	r23.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// clrlwi r8,r6,31
	ctx.r8.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r7,r5,31
	ctx.r7.u64 = ctx.r5.u32 & 0x1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// clrlwi r6,r31,31
	ctx.r6.u64 = r31.u32 & 0x1;
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82f130d4
	if (!cr6.gt) goto loc_82F130D4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r26,r11,-5148
	r26.s64 = r11.s64 + -5148;
loc_82F12FC4:
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// lbzx r6,r27,r28
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + r28.u32);
	// add r7,r27,r10
	ctx.r7.u64 = r27.u64 + ctx.r10.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_82F12FD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f12fd4
	if (!cr6.eq) goto loc_82F12FD4;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82f12fc4
	if (cr6.lt) goto loc_82F12FC4;
	// b 0x82f130d4
	goto loc_82F130D4;
loc_82F13018:
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bne cr6,0x82f12a74
	if (!cr6.eq) goto loc_82F12A74;
	// addi r27,r24,3
	r27.s64 = r24.s64 + 3;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82F13028:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f13028
	if (!cr6.eq) goto loc_82F13028;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r10,-5180
	ctx.r4.s64 = ctx.r10.s64 + -5180;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// addi r28,r11,2
	r28.s64 = r11.s64 + 2;
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r11,r11,8
	r11.u64 = rotl32(r11.u32, 8);
	// or r29,r11,r10
	r29.u64 = r11.u64 | ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82f130d4
	if (!cr6.gt) goto loc_82F130D4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r26,r11,-5200
	r26.s64 = r11.s64 + -5200;
loc_82F1308C:
	// add r6,r27,r28
	ctx.r6.u64 = r27.u64 + r28.u64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82F13094:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f13094
	if (!cr6.eq) goto loc_82F13094;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82f1308c
	if (cr6.lt) goto loc_82F1308C;
loc_82F130D4:
	// add r11,r28,r24
	r11.u64 = r28.u64 + r24.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-5224
	ctx.r4.s64 = ctx.r10.s64 + -5224;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = rotl32(ctx.r10.u32, 8);
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | r11.u64;
loc_82F130F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f12360
	sub_82F12360(ctx, base);
	// b 0x82f12a74
	goto loc_82F12A74;
}

PPC_WEAK_FUNC(sub_82F12990) {
	__imp__sub_82F12990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13100) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13100) {
	__imp__sub_82F13100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13150) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13150) {
	__imp__sub_82F13150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F131A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f131e4
	if (cr6.eq) goto loc_82F131E4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F131E4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F131A0) {
	__imp__sub_82F131A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13208) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13208) {
	__imp__sub_82F13208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13260) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13260) {
	__imp__sub_82F13260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F132B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-3936
	r11.s64 = r11.s64 + -3936;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F132B8) {
	__imp__sub_82F132B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3936
	r11.s64 = r11.s64 + -3936;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82f1339c
	if (!cr6.eq) goto loc_82F1339C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F1339C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F13310) {
	__imp__sub_82F13310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F133A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-3936
	r11.s64 = r11.s64 + -3936;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F133A8) {
	__imp__sub_82F133A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F133F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-3936
	r11.s64 = r11.s64 + -3936;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82f1343c
	if (cr0.eq) goto loc_82F1343C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F1343C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F133F0) {
	__imp__sub_82F133F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r31,r11,272
	r31.s64 = r11.s64 + 272;
	// bl 0x82f6ad40
	sub_82F6AD40(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f134c4
	if (cr6.lt) goto loc_82F134C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F134C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F13458) {
	__imp__sub_82F13458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F134D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r5,r11,268
	ctx.r5.s64 = r11.s64 + 268;
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82f13530
	if (cr0.eq) goto loc_82F13530;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// b 0x82f1353c
	goto loc_82F1353C;
loc_82F13530:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
loc_82F1353C:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13550
	if (cr6.lt) goto loc_82F13550;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13550:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F134D0) {
	__imp__sub_82F134D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f135b0
	if (cr0.eq) goto loc_82F135B0;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82f135b4
	goto loc_82F135B4;
loc_82F135B0:
	// li r28,0
	r28.s64 = 0;
loc_82F135B4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,3
	r29.s64 = 3;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// addi r31,r28,16
	r31.s64 = r28.s64 + 16;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfd f0,-3824(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3824);
	// addi r5,r10,-12732
	ctx.r5.s64 = ctx.r10.s64 + -12732;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f135f8
	if (cr6.lt) goto loc_82F135F8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F135F8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r10,-3840
	ctx.r5.s64 = ctx.r10.s64 + -3840;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,-3832(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13634
	if (cr6.lt) goto loc_82F13634;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13634:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r10,-3848
	ctx.r5.s64 = ctx.r10.s64 + -3848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,384(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 384);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,176(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13670
	if (cr6.lt) goto loc_82F13670;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13670:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-3864
	ctx.r5.s64 = ctx.r10.s64 + -3864;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,-3856(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3856);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f136ac
	if (cr6.lt) goto loc_82F136AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F136AC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,-3884
	ctx.r5.s64 = ctx.r10.s64 + -3884;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,-3872(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3872);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f136e8
	if (cr6.lt) goto loc_82F136E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F136E8:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r10,-3888
	ctx.r5.s64 = ctx.r10.s64 + -3888;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,1368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 1368);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13724
	if (cr6.lt) goto loc_82F13724;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13724:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r10,-3904
	ctx.r5.s64 = ctx.r10.s64 + -3904;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,-3896(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3896);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13760
	if (cr6.lt) goto loc_82F13760;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13760:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r10,-3920
	ctx.r5.s64 = ctx.r10.s64 + -3920;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfd f0,-3912(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3912);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,192(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f1379c
	if (cr6.lt) goto loc_82F1379C;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F1379C:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,5472
	ctx.r4.s64 = r11.s64 + 5472;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r5,r11,10264
	ctx.r5.s64 = r11.s64 + 10264;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,432(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 432);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f137d8
	if (cr6.lt) goto loc_82F137D8;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F137D8:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,5552
	ctx.r4.s64 = r11.s64 + 5552;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r11,10256
	ctx.r5.s64 = r11.s64 + 10256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,240(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13814
	if (cr6.lt) goto loc_82F13814;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13814:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,5632
	ctx.r4.s64 = r11.s64 + 5632;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r11,10248
	ctx.r5.s64 = r11.s64 + 10248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,368(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13850
	if (cr6.lt) goto loc_82F13850;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13850:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,5712
	ctx.r4.s64 = r11.s64 + 5712;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r11,10232
	ctx.r5.s64 = r11.s64 + 10232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,272(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f1388c
	if (cr6.lt) goto loc_82F1388C;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F1388C:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,5792
	ctx.r4.s64 = r11.s64 + 5792;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,10224
	ctx.r5.s64 = r11.s64 + 10224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,208(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f138c8
	if (cr6.lt) goto loc_82F138C8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F138C8:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,5872
	ctx.r4.s64 = r11.s64 + 5872;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r11,10212
	ctx.r5.s64 = r11.s64 + 10212;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,304(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13904
	if (cr6.lt) goto loc_82F13904;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13904:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,5952
	ctx.r4.s64 = r11.s64 + 5952;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r11,10204
	ctx.r5.s64 = r11.s64 + 10204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,400(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 400);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13940
	if (cr6.lt) goto loc_82F13940;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13940:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,6032
	ctx.r4.s64 = r11.s64 + 6032;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r11,10196
	ctx.r5.s64 = r11.s64 + 10196;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,336(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f1397c
	if (cr6.lt) goto loc_82F1397C;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F1397C:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,6112
	ctx.r4.s64 = r11.s64 + 6112;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r11,10160
	ctx.r5.s64 = r11.s64 + 10160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,464(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 464);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f139b8
	if (cr6.lt) goto loc_82F139B8;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F139B8:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,6944
	ctx.r4.s64 = r11.s64 + 6944;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r11,10128
	ctx.r5.s64 = r11.s64 + 10128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,224(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f139f4
	if (cr6.lt) goto loc_82F139F4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F139F4:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,7024
	ctx.r4.s64 = r11.s64 + 7024;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r11,-3928
	ctx.r5.s64 = r11.s64 + -3928;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,256(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13a30
	if (cr6.lt) goto loc_82F13A30;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13A30:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,6192
	ctx.r4.s64 = r11.s64 + 6192;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r11,10104
	ctx.r5.s64 = r11.s64 + 10104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,288(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13a6c
	if (cr6.lt) goto loc_82F13A6C;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13A6C:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,6272
	ctx.r4.s64 = r11.s64 + 6272;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r11,10096
	ctx.r5.s64 = r11.s64 + 10096;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,320(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13aa8
	if (cr6.lt) goto loc_82F13AA8;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13AA8:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,6352
	ctx.r4.s64 = r11.s64 + 6352;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r11,10084
	ctx.r5.s64 = r11.s64 + 10084;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,352(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13ae4
	if (cr6.lt) goto loc_82F13AE4;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13AE4:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,6432
	ctx.r4.s64 = r11.s64 + 6432;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r11,10240
	ctx.r5.s64 = r11.s64 + 10240;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,384(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 384);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13b20
	if (cr6.lt) goto loc_82F13B20;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13B20:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,6560
	ctx.r4.s64 = r11.s64 + 6560;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r11,10156
	ctx.r5.s64 = r11.s64 + 10156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,416(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 416);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13b5c
	if (cr6.lt) goto loc_82F13B5C;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13B5C:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,6688
	ctx.r4.s64 = r11.s64 + 6688;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r11,10152
	ctx.r5.s64 = r11.s64 + 10152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,448(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 448);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13b98
	if (cr6.lt) goto loc_82F13B98;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13B98:
	// lis r11,-32015
	r11.s64 = -2098135040;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,6816
	ctx.r4.s64 = r11.s64 + 6816;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r11,10140
	ctx.r5.s64 = r11.s64 + 10140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,480(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 480);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f13bd4
	if (cr6.lt) goto loc_82F13BD4;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F13BD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F13568) {
	__imp__sub_82F13568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-5336
	r11.s64 = r11.s64 + -5336;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82f13c0c
	if (cr0.eq) goto loc_82F13C0C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F13C0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13BE0) {
	__imp__sub_82F13BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f13cac
	if (cr6.lt) goto loc_82F13CAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b768
	sub_82F6B768(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(244) );
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82F13CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13C28) {
	__imp__sub_82F13C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// stb r31,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r31.u8);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f13db8
	if (cr6.lt) goto loc_82F13DB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6b768
	sub_82F6B768(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f6b768
	sub_82F6B768(ctx, base);
	// cmplwi cr6,r29,800
	cr6.compare<uint32_t>(r29.u32, 800, xer);
	// bne cr6,0x82f13db8
	if (!cr6.eq) goto loc_82F13DB8;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82f13db8
	if (!cr6.eq) goto loc_82F13DB8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f13d74
	if (cr0.eq) goto loc_82F13D74;
	// lis r11,22087
	r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	r11.u64 = r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r11,-32015
	r11.s64 = -2098135040;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r4,r11,15400
	ctx.r4.s64 = r11.s64 + 15400;
	// bl 0x82f6a308
	sub_82F6A308(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82F13D74:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6bea0
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f13db8
	if (cr6.eq) goto loc_82F13DB8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F13DB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F13CC8) {
	__imp__sub_82F13CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f13ee0
	if (!cr6.eq) goto loc_82F13EE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,-5272
	ctx.r6.s64 = ctx.r10.s64 + -5272;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f12140
	sub_82F12140(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f13e7c
	if (!cr0.eq) goto loc_82F13E7C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F13E7C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F13E8C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f13e8c
	if (!cr0.eq) goto loc_82F13E8C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f13eb8
	if (!cr0.eq) goto loc_82F13EB8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F13EB8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f13ee0
	if (!cr6.eq) goto loc_82F13EE0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F13EE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13DC0) {
	__imp__sub_82F13DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F13EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f14010
	if (!cr6.eq) goto loc_82F14010;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f12280
	sub_82F12280(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f13fac
	if (!cr0.eq) goto loc_82F13FAC;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F13FAC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F13FBC:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f13fbc
	if (!cr0.eq) goto loc_82F13FBC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f13fe8
	if (!cr0.eq) goto loc_82F13FE8;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F13FE8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f14010
	if (!cr6.eq) goto loc_82F14010;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14010:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F13EF8) {
	__imp__sub_82F13EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f14148
	if (!cr6.eq) goto loc_82F14148;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82ef8918
	sub_82EF8918(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f140e4
	if (!cr0.eq) goto loc_82F140E4;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F140E4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F140F4:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f140f4
	if (!cr0.eq) goto loc_82F140F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f14120
	if (!cr0.eq) goto loc_82F14120;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F14120:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f14148
	if (!cr6.eq) goto loc_82F14148;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F14028) {
	__imp__sub_82F14028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f14270
	if (!cr6.eq) goto loc_82F14270;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82ef89f0
	sub_82EF89F0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f1420c
	if (!cr0.eq) goto loc_82F1420C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F1420C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F1421C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82f1421c
	if (!cr0.eq) goto loc_82F1421C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f14248
	if (!cr0.eq) goto loc_82F14248;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F14248:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f14270
	if (!cr6.eq) goto loc_82F14270;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F14150) {
	__imp__sub_82F14150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3808
	r11.s64 = r11.s64 + -3808;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82f142b8
	if (cr6.eq) goto loc_82F142B8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F142B8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F14278) {
	__imp__sub_82F14278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F142D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// rlwimi r6,r10,0,31,23
	ctx.r6.u64 = (rotl32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r6.u64 & 0xFE);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82F142D0) {
	__imp__sub_82F142D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F142F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f1432c
	if (cr6.eq) goto loc_82F1432C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F1432C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-5336
	r11.s64 = r11.s64 + -5336;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F142F8) {
	__imp__sub_82F142F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14350) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82f142f8
	sub_82F142F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14380
	if (cr0.eq) goto loc_82F14380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F14380:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14350) {
	__imp__sub_82F14350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F143A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f143d4
	if (cr6.eq) goto loc_82F143D4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F143D4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-11780
	r11.s64 = r11.s64 + -11780;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F143A0) {
	__imp__sub_82F143A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F143F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82f14424
	if (cr0.eq) goto loc_82F14424;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F14424:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F143F8) {
	__imp__sub_82F143F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82f1449c
	if (cr6.eq) goto loc_82F1449C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f1449c
	if (cr6.eq) goto loc_82F1449C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F1449C:
	// li r11,1
	r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F14440) {
	__imp__sub_82F14440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F144B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// beq cr6,0x82f14514
	if (cr6.eq) goto loc_82F14514;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f14514
	if (cr6.eq) goto loc_82F14514;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F14514:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F144B8) {
	__imp__sub_82F144B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f146bc
	if (cr6.eq) goto loc_82F146BC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f145dc
	if (cr6.eq) goto loc_82F145DC;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82f145dc
	if (cr0.lt) goto loc_82F145DC;
	// mulli r29,r28,12
	r29.s64 = r28.s64 * 12;
loc_82F1456C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f14594
	if (cr0.eq) goto loc_82F14594;
	// beq cr6,0x82f1459c
	if (cr6.eq) goto loc_82F1459C;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// b 0x82f145a0
	goto loc_82F145A0;
loc_82F14594:
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// bne cr6,0x82f145a0
	if (!cr6.eq) goto loc_82F145A0;
loc_82F1459C:
	// li r31,0
	r31.s64 = 0;
loc_82F145A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f145d0
	if (cr6.eq) goto loc_82F145D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r30,120
	ctx.r4.s64 = r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f14624
	if (!cr0.eq) goto loc_82F14624;
loc_82F145D0:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,-12
	r29.s64 = r29.s64 + -12;
	// bge 0x82f1456c
	if (!cr0.lt) goto loc_82F1456C;
loc_82F145DC:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(116) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f146bc
	if (cr6.eq) goto loc_82F146BC;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(128) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14678
	if (cr0.eq) goto loc_82F14678;
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(116) );
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x82f14660
	goto loc_82F14660;
loc_82F14624:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82f1464c
	if (cr6.lt) goto loc_82F1464C;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82f14650
	if (!cr6.gt) goto loc_82F14650;
loc_82F1464C:
	// li r11,0
	r11.s64 = 0;
loc_82F14650:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq 0x82f14668
	if (cr0.eq) goto loc_82F14668;
	// addi r4,r31,-128
	ctx.r4.s64 = r31.s64 + -128;
loc_82F14660:
	// bl 0x82f6be50
	sub_82F6BE50(ctx, base);
	// b 0x82f14670
	goto loc_82F14670;
loc_82F14668:
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
loc_82F1466C:
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
loc_82F14670:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f146c0
	goto loc_82F146C0;
loc_82F14678:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r30,596(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(596) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f146bc
	if (cr6.eq) goto loc_82F146BC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f146bc
	if (cr0.eq) goto loc_82F146BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x82f1466c
	goto loc_82F1466C;
loc_82F146BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F146C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F14530) {
	__imp__sub_82F14530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F146C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r31,-1
	r31.s64 = -1;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f14718
	if (!cr0.eq) goto loc_82F14718;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca70c0
	sub_82CA70C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f1477c
	if (cr0.eq) goto loc_82F1477C;
loc_82F14718:
	// subf r31,r30,r3
	r31.s64 = ctx.r3.s64 - r30.s64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82f14790
	if (cr6.lt) goto loc_82F14790;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82f114a8
	sub_82F114A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f147a0
	if (!cr6.eq) goto loc_82F147A0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f147a0
	goto loc_82F147A0;
loc_82F1477C:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca70c0
	sub_82CA70C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f14830
	if (cr0.eq) goto loc_82F14830;
loc_82F14790:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
loc_82F147A0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82f147c8
	if (!cr6.gt) goto loc_82F147C8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x82f147c4
	if (!cr6.eq) goto loc_82F147C4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82F147C4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
loc_82F147C8:
	// blt cr6,0x82f14820
	if (cr6.lt) goto loc_82F14820;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f11500
	sub_82F11500(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	r11.u64 = rotl32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f1482c
	if (!cr6.eq) goto loc_82F1482C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82f1482c
	goto loc_82F1482C;
loc_82F14820:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
loc_82F1482C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F14830:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F146C8) {
	__imp__sub_82F146C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14838) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82f14864
	if (cr6.lt) goto loc_82F14864;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f14934
	goto loc_82F14934;
loc_82F14864:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// bl 0x82ca3980
	sub_82CA3980(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f1489c
	if (!cr0.eq) goto loc_82F1489C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f14864
	if (cr6.lt) goto loc_82F14864;
loc_82F1489C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82f148e8
	if (cr6.eq) goto loc_82F148E8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f148e8
	if (cr6.gt) goto loc_82F148E8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r5,r31,r11
	ctx.r5.s64 = r11.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// bl 0x82f67220
	sub_82F67220(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// b 0x82f148fc
	goto loc_82F148FC;
loc_82F148E8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
loc_82F148FC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82f14924
	if (!cr0.eq) goto loc_82F14924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14924:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82F14934:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F14838) {
	__imp__sub_82F14838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,120
	ctx.r4.s64 = ctx.r4.s64 + 120;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(596) );
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f149b0
	if (cr0.eq) goto loc_82F149B0;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82f149b0
	if (!cr6.eq) goto loc_82F149B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// b 0x82f149c0
	goto loc_82F149C0;
loc_82F149B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
loc_82F149C0:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f149d4
	if (cr6.lt) goto loc_82F149D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F149D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14940) {
	__imp__sub_82F14940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F149F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82F14A20:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f14a20
	if (!cr6.gt) goto loc_82F14A20;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F149F0) {
	__imp__sub_82F149F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14A60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f14a9c
	if (cr6.eq) goto loc_82F14A9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f14a9c
	if (!cr0.eq) goto loc_82F14A9C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F14A9C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14aac
	if (cr0.eq) goto loc_82F14AAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F14AAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14A60) {
	__imp__sub_82F14A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14AC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f14afc
	if (!cr0.eq) goto loc_82F14AFC;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14AFC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14b0c
	if (cr0.eq) goto loc_82F14B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F14B0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14AC8) {
	__imp__sub_82F14AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14B28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f14b70
	if (cr0.eq) goto loc_82F14B70;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f14b60
	if (cr0.eq) goto loc_82F14B60;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f14bd4
	if (cr6.lt) goto loc_82F14BD4;
loc_82F14B60:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f14b70
	if (cr0.eq) goto loc_82F14B70;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f14bd4
	if (cr6.eq) goto loc_82F14BD4;
loc_82F14B70:
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne cr6,0x82f14ba0
	if (!cr6.eq) goto loc_82F14BA0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f14b94
	if (cr6.eq) goto loc_82F14B94;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F14B94:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82f14bd4
	goto loc_82F14BD4;
loc_82F14BA0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f14bb8
	if (cr6.eq) goto loc_82F14BB8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82f14bd4
	goto loc_82F14BD4;
loc_82F14BB8:
	// rlwinm r30,r4,2,0,29
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82F14BD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14B28) {
	__imp__sub_82F14B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f14c54
	if (cr6.eq) goto loc_82F14C54;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
loc_82F14C1C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// beq cr6,0x82f14c38
	if (cr6.eq) goto loc_82F14C38;
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82F14C38:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x82f14c1c
	if (!cr0.eq) goto loc_82F14C1C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82F14C54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14BF0) {
	__imp__sub_82F14BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14C68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f14cb0
	if (cr0.eq) goto loc_82F14CB0;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f14ca0
	if (cr0.eq) goto loc_82F14CA0;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f14d14
	if (cr6.lt) goto loc_82F14D14;
loc_82F14CA0:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82f14cb0
	if (cr0.eq) goto loc_82F14CB0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f14d14
	if (cr6.eq) goto loc_82F14D14;
loc_82F14CB0:
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne cr6,0x82f14ce0
	if (!cr6.eq) goto loc_82F14CE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f14cd4
	if (cr6.eq) goto loc_82F14CD4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F14CD4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82f14d14
	goto loc_82F14D14;
loc_82F14CE0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f14cf8
	if (cr6.eq) goto loc_82F14CF8;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ef6f18
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82f14d14
	goto loc_82F14D14;
loc_82F14CF8:
	// rlwinm r30,r4,4,0,27
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82F14D14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14C68) {
	__imp__sub_82F14C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14D30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f14d6c
	if (!cr0.eq) goto loc_82F14D6C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14D6C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14d7c
	if (cr0.eq) goto loc_82F14D7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F14D7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14D30) {
	__imp__sub_82F14D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14D98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f14dcc
	if (!cr0.eq) goto loc_82F14DCC;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F14DCC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14ddc
	if (cr0.eq) goto loc_82F14DDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82F14DDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14D98) {
	__imp__sub_82F14D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,-20
	r31.s64 = ctx.r3.s64 + -20;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f14e44
	if (!cr6.eq) goto loc_82F14E44;
	// li r31,0
	r31.s64 = 0;
loc_82F14E44:
	// addic. r11,r31,20
	xer.ca = r31.u32 > 4294967275;
	r11.s64 = r31.s64 + 20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x82f14e54
	if (!cr0.eq) goto loc_82F14E54;
	// li r11,0
	r11.s64 = 0;
loc_82F14E54:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14e90
	if (cr0.eq) goto loc_82F14E90;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F14E90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14DF8) {
	__imp__sub_82F14DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f14f2c
	if (cr0.eq) goto loc_82F14F2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f14f2c
	if (cr0.eq) goto loc_82F14F2C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F14F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14EA8) {
	__imp__sub_82F14EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f14fa8
	if (cr0.eq) goto loc_82F14FA8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F14FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14F48) {
	__imp__sub_82F14F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F14FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,124(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(124) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f15030
	if (cr0.eq) goto loc_82F15030;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F15030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F14FC0) {
	__imp__sub_82F14FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F15048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,216(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f150e0
	if (cr0.eq) goto loc_82F150E0;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f150e0
	if (cr0.eq) goto loc_82F150E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F150E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F15048) {
	__imp__sub_82F15048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F150F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f15188
	if (cr0.eq) goto loc_82F15188;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(124) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f15188
	if (cr0.eq) goto loc_82F15188;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F15188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F150F8) {
	__imp__sub_82F150F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F151A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82f29100
	sub_82F29100(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f15218
	if (cr0.eq) goto loc_82F15218;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f290d8
	sub_82F290D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f15218
	if (cr0.eq) goto loc_82F15218;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F15218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F151A0) {
	__imp__sub_82F151A0(ctx, base);
}

