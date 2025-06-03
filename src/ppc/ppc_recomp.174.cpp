#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82F98498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfd f1,16588(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 16588);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F98498) {
	__imp__sub_82F98498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F984A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// addi r11,r1,16
	r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r10,16604
	ctx.r10.s64 = ctx.r10.s64 + 16604;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
loc_82F984BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f984dc
	if (!cr0.eq) goto loc_82F984DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82f984bc
	if (!cr6.eq) goto loc_82F984BC;
loc_82F984DC:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F984A8) {
	__imp__sub_82F984A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F984E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// addi r11,r1,16
	r11.s64 = ctx.r1.s64 + 16;
	// addi r10,r10,16596
	ctx.r10.s64 = ctx.r10.s64 + 16596;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
loc_82F984FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82f9851c
	if (!cr0.eq) goto loc_82F9851C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82f984fc
	if (!cr6.eq) goto loc_82F984FC;
loc_82F9851C:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F984E8) {
	__imp__sub_82F984E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82f98564
	if (!cr6.gt) goto loc_82F98564;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r11,3920
	ctx.r5.s64 = r11.s64 + 3920;
	// b 0x82f98590
	goto loc_82F98590;
loc_82F98564:
	// cmpwi cr6,r8,-14
	cr6.compare<int32_t>(ctx.r8.s32, -14, xer);
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// bge cr6,0x82f98574
	if (!cr6.lt) goto loc_82F98574;
	// li r6,14
	ctx.r6.s64 = 14;
loc_82F98574:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r5,r11,16716
	ctx.r5.s64 = r11.s64 + 16716;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef0a78
	sub_82EF0A78(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r8,10
	ctx.r8.s64 = 10;
loc_82F98590:
	// li r12,2047
	r12.s64 = 2047;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	r12.u64 = rotl64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r10,52,11
	ctx.r10.u64 = rotl64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r7,r11,r12
	ctx.r7.u64 = r11.u64 & r12.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpld cr6,r7,r10
	cr6.compare<uint64_t>(ctx.r7.u64, ctx.r10.u64, xer);
	// bne cr6,0x82f985c8
	if (!cr6.eq) goto loc_82F985C8;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f985cc
	if (!cr6.eq) goto loc_82F985CC;
loc_82F985C8:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F985CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f985e0
	if (cr0.eq) goto loc_82F985E0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,16528
	ctx.r4.s64 = r11.s64 + 16528;
	// b 0x82f9871c
	goto loc_82F9871C;
loc_82F985E0:
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f985f8
	if (cr6.eq) goto loc_82F985F8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F985F8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9860c
	if (cr0.eq) goto loc_82F9860C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,16704
	ctx.r4.s64 = r11.s64 + 16704;
	// b 0x82f9871c
	goto loc_82F9871C;
loc_82F9860C:
	// li r11,4095
	r11.s64 = 4095;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r11,r11,52,11
	r11.u64 = rotl64(r11.u64, 52) & 0xFFF0000000000000;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82f9862c
	if (cr6.eq) goto loc_82F9862C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82F9862C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f98640
	if (cr0.eq) goto loc_82F98640;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,16692
	ctx.r4.s64 = r11.s64 + 16692;
	// b 0x82f9871c
	goto loc_82F9871C;
loc_82F98640:
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x82f986b8
	if (cr6.eq) goto loc_82F986B8;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// beq cr6,0x82f986a0
	if (cr6.eq) goto loc_82F986A0;
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// beq cr6,0x82f98684
	if (cr6.eq) goto loc_82F98684;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bne cr6,0x82f98718
	if (!cr6.eq) goto loc_82F98718;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(f31.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r5,r11,16688
	ctx.r5.s64 = r11.s64 + 16688;
loc_82F98674:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r4,129
	ctx.r4.s64 = 129;
	// bl 0x82ef0a78
	sub_82EF0A78(ctx, base);
	// b 0x82f98718
	goto loc_82F98718;
loc_82F98684:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,129
	ctx.r4.s64 = 129;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ef0a78
	sub_82EF0A78(ctx, base);
	// b 0x82f98718
	goto loc_82F98718;
loc_82F986A0:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(f31.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r5,r11,16684
	ctx.r5.s64 = r11.s64 + 16684;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// b 0x82f98674
	goto loc_82F98674;
loc_82F986B8:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f31.f64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// stb r9,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F986D4:
	// and. r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// beq 0x82f986ec
	if (cr0.eq) goto loc_82F986EC;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// b 0x82f986f0
	goto loc_82F986F0;
loc_82F986EC:
	// li r6,48
	ctx.r6.s64 = 48;
loc_82F986F0:
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// rlwinm. r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f98700
	if (!cr0.eq) goto loc_82F98700;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82F98700:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82f986d4
	if (!cr0.eq) goto loc_82F986D4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r31,r1,255
	r31.s64 = ctx.r1.s64 + 255;
	// beq cr6,0x82f98718
	if (cr6.eq) goto loc_82F98718;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_82F98718:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82F9871C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

PPC_WEAK_FUNC(sub_82F98528) {
	__imp__sub_82F98528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98748) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// stfd f1,48(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 48, ctx.f1.u64);
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

PPC_WEAK_FUNC(sub_82F98748) {
	__imp__sub_82F98748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// li r11,3
	r11.s64 = 3;
	// lfd f0,48(r4)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, f0.u64);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F98780) {
	__imp__sub_82F98780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98798) {
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
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bne cr6,0x82f987c4
	if (!cr6.eq) goto loc_82F987C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F987C4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98800
	if (cr6.lt) goto loc_82F98800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98800:
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

PPC_WEAK_FUNC(sub_82F98798) {
	__imp__sub_82F98798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98818) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f98848
	if (!cr6.eq) goto loc_82F98848;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// b 0x82f98860
	goto loc_82F98860;
loc_82F98848:
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
loc_82F98860:
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

PPC_WEAK_FUNC(sub_82F98818) {
	__imp__sub_82F98818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98880) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,268
	ctx.r5.s64 = r11.s64 + 268;
	// bl 0x82f88220
	sub_82F88220(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f988fc
	if (cr6.lt) goto loc_82F988FC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F988FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_82F98880) {
	__imp__sub_82F98880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98918) {
	PPC_FUNC_PROLOGUE();
	// lfd f1,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// b 0x82f98528
	sub_82F98528(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F98918) {
	__imp__sub_82F98918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
	// bne cr6,0x82f9894c
	if (!cr6.eq) goto loc_82F9894C;
	// li r29,0
	r29.s64 = 0;
loc_82F9894C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,10
	r31.s64 = 10;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f98988
	if (!cr6.gt) goto loc_82F98988;
	// li r4,0
	ctx.r4.s64 = 0;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82F98988:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfd f1,48(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r29.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f98528
	sub_82F98528(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82f989e4
	if (!cr0.eq) goto loc_82F989E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F989E4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F989F4:
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
	// bne 0x82f989f4
	if (!cr0.eq) goto loc_82F989F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f98a20
	if (!cr0.eq) goto loc_82F98A20;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F98A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F98928) {
	__imp__sub_82F98928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32006
	r11.s64 = -2097545216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,-30696
	ctx.r4.s64 = r11.s64 + -30696;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r10,16724
	ctx.r10.s64 = ctx.r10.s64 + 16724;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,16636
	r31.s64 = r11.s64 + 16636;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,16636(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16636) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f98aec
	if (cr6.eq) goto loc_82F98AEC;
	// mr r29,r31
	r29.u64 = r31.u64;
	// li r11,0
	r11.s64 = 0;
loc_82F98A84:
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// stfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f1.u64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98ad4
	if (cr6.lt) goto loc_82F98AD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98AD4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f98a84
	if (!cr6.eq) goto loc_82F98A84;
loc_82F98AEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F98A28) {
	__imp__sub_82F98A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98AF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F98AF8) {
	__imp__sub_82F98AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98B00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f99000
	sub_82F99000(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F98B00) {
	__imp__sub_82F98B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98B08) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,16864
	ctx.r10.s64 = ctx.r10.s64 + 16864;
	// addi r9,r9,16784
	ctx.r9.s64 = ctx.r9.s64 + 16784;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfd f0,48(r31)
	PPC_STORE_U64(r31.u32 + 48, f0.u64);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
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

PPC_WEAK_FUNC(sub_82F98B08) {
	__imp__sub_82F98B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F98B88:
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
	// bne 0x82f98b88
	if (!cr0.eq) goto loc_82F98B88;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f98bb4
	if (!cr0.eq) goto loc_82F98BB4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F98BB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82F98B68) {
	__imp__sub_82F98B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98BD0) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f98c0c
	if (cr0.eq) goto loc_82F98C0C;
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
	// bl 0x82f98b08
	sub_82F98B08(ctx, base);
	// b 0x82f98c10
	goto loc_82F98C10;
loc_82F98C0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F98C10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F98BD0) {
	__imp__sub_82F98BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98C20) {
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
	// bl 0x82f98b08
	sub_82F98B08(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16968
	r11.s64 = r11.s64 + 16968;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
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
	// addi r28,r31,76
	r28.s64 = r31.s64 + 76;
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
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
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
	// bl 0x82f98880
	sub_82F98880(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98cd4
	if (cr6.lt) goto loc_82F98CD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98CD4:
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
	// blt cr6,0x82f98d34
	if (cr6.lt) goto loc_82F98D34;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98D34:
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

PPC_WEAK_FUNC(sub_82F98C20) {
	__imp__sub_82F98C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f98fb0
	sub_82F98FB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F98D50) {
	__imp__sub_82F98D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98D58) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	r28.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82f98ddc
	if (!cr0.eq) goto loc_82F98DDC;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f98ddc
	if (!cr0.eq) goto loc_82F98DDC;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f87920
	sub_82F87920(ctx, base);
	// b 0x82f98f38
	goto loc_82F98F38;
loc_82F98DDC:
	// li r11,0
	r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f884e8
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f98e18
	if (cr0.eq) goto loc_82F98E18;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
loc_82F98E18:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82f98e34
	if (cr6.eq) goto loc_82F98E34;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// b 0x82f98f0c
	goto loc_82F98F0C;
loc_82F98E34:
	// addi r27,r29,48
	r27.s64 = r29.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f98e60
	if (cr6.eq) goto loc_82F98E60;
	// addi r4,r29,60
	ctx.r4.s64 = r29.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// b 0x82f98e84
	goto loc_82F98E84;
loc_82F98E60:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F98E84:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f98ef8
	if (!cr6.eq) goto loc_82F98EF8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f98ef8
	if (cr6.eq) goto loc_82F98EF8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98edc
	if (cr6.lt) goto loc_82F98EDC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98EDC:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98ef0
	if (cr6.lt) goto loc_82F98EF0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98EF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f98f38
	goto loc_82F98F38;
loc_82F98EF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6bea0
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F98F0C:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98f20
	if (cr6.lt) goto loc_82F98F20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98F20:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f98f34
	if (cr6.lt) goto loc_82F98F34;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F98F34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F98F38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F98D58) {
	__imp__sub_82F98D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98F40) {
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
	// addi r11,r11,16968
	r11.s64 = r11.s64 + 16968;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f98f80
	if (cr6.eq) goto loc_82F98F80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82F98F80:
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f98b68
	sub_82F98B68(ctx, base);
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

PPC_WEAK_FUNC(sub_82F98F40) {
	__imp__sub_82F98F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F98FB0) {
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
	// bl 0x82f98f40
	sub_82F98F40(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f98fe0
	if (cr0.eq) goto loc_82F98FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F98FE0:
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

PPC_WEAK_FUNC(sub_82F98FB0) {
	__imp__sub_82F98FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99000) {
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
	// bl 0x82f98b68
	sub_82F98B68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f99030
	if (cr0.eq) goto loc_82F99030;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F99030:
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

PPC_WEAK_FUNC(sub_82F99000) {
	__imp__sub_82F99000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99050) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82f98c20
	sub_82F98C20(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16968
	r11.s64 = r11.s64 + 16968;
	// addi r10,r10,16888
	ctx.r10.s64 = ctx.r10.s64 + 16888;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,16612
	ctx.r5.s64 = r11.s64 + 16612;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F99050) {
	__imp__sub_82F99050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F990A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F990A8) {
	__imp__sub_82F990A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F990B8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,532
	ctx.r3.s64 = r11.s64 + 532;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82f99150
	if (cr0.eq) goto loc_82F99150;
	// bl 0x82f87920
	sub_82F87920(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f99124
	if (cr0.eq) goto loc_82F99124;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bne cr6,0x82f99148
	if (!cr6.eq) goto loc_82F99148;
loc_82F99124:
	// addi r3,r28,32
	ctx.r3.s64 = r28.s64 + 32;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
loc_82F99148:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f99164
	goto loc_82F99164;
loc_82F99150:
	// bl 0x82f87920
	sub_82F87920(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82F99164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F990B8) {
	__imp__sub_82F990B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99170) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f67758
	sub_82F67758(ctx, base);
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
	// bne cr6,0x82f991d4
	if (!cr6.eq) goto loc_82F991D4;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F991D4:
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

PPC_WEAK_FUNC(sub_82F99170) {
	__imp__sub_82F99170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F991E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(48) );
	// li r11,4
	r11.s64 = 4;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F991E8) {
	__imp__sub_82F991E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f9922c
	if (!cr6.eq) goto loc_82F9922C;
	// li r11,0
	r11.s64 = 0;
loc_82F9922C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r29,r11,48
	r29.s64 = r11.s64 + 48;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x82f99298
	if (cr6.lt) goto loc_82F99298;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82f99298
	if (cr6.lt) goto loc_82F99298;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x82f99298
	if (!cr6.lt) goto loc_82F99298;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f66868
	sub_82F66868(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x82f9929c
	goto loc_82F9929C;
loc_82F99298:
	// bl 0x82f98458
	sub_82F98458(ctx, base);
loc_82F9929C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F99208) {
	__imp__sub_82F99208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F992B0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x82f992d4
	if (!cr6.eq) goto loc_82F992D4;
	// li r30,0
	r30.s64 = 0;
loc_82F992D4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82f992f4
	if (!cr6.lt) goto loc_82F992F4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3240);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// b 0x82f99440
	goto loc_82F99440;
loc_82F992F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f99334
	if (!cr0.eq) goto loc_82F99334;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// b 0x82f99410
	goto loc_82F99410;
loc_82F99334:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r27,0
	r27.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(48) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ble cr6,0x82f99380
	if (!cr6.gt) goto loc_82F99380;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r27,100(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82F99380:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// b 0x82f993f8
	goto loc_82F993F8;
loc_82F99394:
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// blt cr6,0x82f993f4
	if (cr6.lt) goto loc_82F993F4;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// bne cr6,0x82f993f4
	if (!cr6.eq) goto loc_82F993F4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82f993c8
	goto loc_82F993C8;
loc_82F993B8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f99448
	if (cr6.eq) goto loc_82F99448;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82f993e4
	if (!cr6.eq) goto loc_82F993E4;
loc_82F993C8:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82f993b8
	if (!cr6.eq) goto loc_82F993B8;
loc_82F993E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f99448
	if (cr6.eq) goto loc_82F99448;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f99408
	if (cr6.eq) goto loc_82F99408;
loc_82F993F4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82F993F8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f99394
	if (!cr0.eq) goto loc_82F99394;
loc_82F99408:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3240);
loc_82F99410:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	// bne cr6,0x82f99440
	if (!cr6.eq) goto loc_82F99440;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99440:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
loc_82F99448:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x82f99410
	goto loc_82F99410;
}

PPC_WEAK_FUNC(sub_82F992B0) {
	__imp__sub_82F992B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99460) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
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
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f99484
	if (!cr6.eq) goto loc_82F99484;
	// li r11,0
	r11.s64 = 0;
loc_82F99484:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bge cr6,0x82f994a4
	if (!cr6.lt) goto loc_82F994A4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3240);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// b 0x82f9964c
	goto loc_82F9964C;
loc_82F994A4:
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f99504
	if (!cr0.eq) goto loc_82F99504;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82f995f0
	goto loc_82F995F0;
loc_82F99504:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lis r26,2047
	r26.s64 = 134152192;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// ori r26,r26,65535
	r26.u64 = r26.u64 | 65535;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ble cr6,0x82f99554
	if (!cr6.gt) goto loc_82F99554;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lwz r26,108(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
loc_82F99554:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,-1
	r28.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// b 0x82f995d4
	goto loc_82F995D4;
loc_82F9956C:
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(r29.s32, r26.s32, xer);
	// bgt cr6,0x82f995d0
	if (cr6.gt) goto loc_82F995D0;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// bne cr6,0x82f995d0
	if (!cr6.eq) goto loc_82F995D0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82f995a0
	goto loc_82F995A0;
loc_82F99590:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f995c4
	if (cr6.eq) goto loc_82F995C4;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x82f995bc
	if (!cr6.eq) goto loc_82F995BC;
loc_82F995A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82f99590
	if (!cr6.eq) goto loc_82F99590;
loc_82F995BC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f995c8
	if (!cr6.eq) goto loc_82F995C8;
loc_82F995C4:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82F995C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f995e4
	if (cr6.eq) goto loc_82F995E4;
loc_82F995D0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82F995D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82f9956c
	if (!cr0.eq) goto loc_82F9956C;
loc_82F995E4:
	// extsw r11,r28
	r11.s64 = r28.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82F995F0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(f0.s64);
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
	// bne cr6,0x82f99624
	if (!cr6.eq) goto loc_82F99624;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99624:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
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
	// bne cr6,0x82f9964c
	if (!cr6.eq) goto loc_82F9964C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9964C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F99460) {
	__imp__sub_82F99460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99658) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82f9969c
	if (!cr6.eq) goto loc_82F9969C;
loc_82F9967C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82f996e4
	goto loc_82F996E4;
loc_82F9969C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82f996a8
	if (!cr6.lt) goto loc_82F996A8;
	// li r31,0
	r31.s64 = 0;
loc_82F996A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x82f9967c
	if (!cr6.lt) goto loc_82F9967C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82f996cc
	if (cr6.lt) goto loc_82F996CC;
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// ble cr6,0x82f996d0
	if (!cr6.gt) goto loc_82F996D0;
loc_82F996CC:
	// subf r29,r31,r3
	r29.s64 = ctx.r3.s64 - r31.s64;
loc_82F996D0:
	// add r6,r31,r29
	ctx.r6.u64 = r31.u64 + r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f675a0
	sub_82F675A0(ctx, base);
loc_82F996E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F99658) {
	__imp__sub_82F99658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F996F0) {
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
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f99730
	if (!cr6.eq) goto loc_82F99730;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82F99710:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f99710
	if (!cr6.eq) goto loc_82F99710;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = rotl32(r11.u32, 0);
	// b 0x82f99734
	goto loc_82F99734;
loc_82F99730:
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82F99734:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x82f99744
	if (!cr6.lt) goto loc_82F99744;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
loc_82F99744:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble cr6,0x82f99758
	if (!cr6.gt) goto loc_82F99758;
	// bl 0x82f11500
	sub_82F11500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f99770
	goto loc_82F99770;
loc_82F99758:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
loc_82F99770:
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

PPC_WEAK_FUNC(sub_82F996F0) {
	__imp__sub_82F996F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99788) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r28,r11,-16
	r28.s64 = r11.s64 + -16;
	// bne cr6,0x82f997ac
	if (!cr6.eq) goto loc_82F997AC;
	// li r28,0
	r28.s64 = 0;
loc_82F997AC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f997f8
	if (cr6.lt) goto loc_82F997F8;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82f997f8
	if (!cr6.lt) goto loc_82F997F8;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82F997F8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f99834
	if (cr6.lt) goto loc_82F99834;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x82f99834
	if (!cr6.lt) goto loc_82F99834;
	// li r29,0
	r29.s64 = 0;
loc_82F99834:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99658
	sub_82F99658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f9987c
	if (!cr6.eq) goto loc_82F9987C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9987C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F99788) {
	__imp__sub_82F99788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99888) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f998b0
	if (!cr6.eq) goto loc_82F998B0;
	// li r11,0
	r11.s64 = 0;
loc_82F998B0:
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67bc8
	sub_82F67BC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f998f0
	if (!cr6.eq) goto loc_82F998F0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F998F0:
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

PPC_WEAK_FUNC(sub_82F99888) {
	__imp__sub_82F99888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f9991c
	if (!cr6.eq) goto loc_82F9991C;
	// li r11,0
	r11.s64 = 0;
loc_82F9991C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// b 0x82f041a0
	sub_82F041A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F99908) {
	__imp__sub_82F99908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99928) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f99950
	if (!cr6.eq) goto loc_82F99950;
	// li r11,0
	r11.s64 = 0;
loc_82F99950:
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67678
	sub_82F67678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f99990
	if (!cr6.eq) goto loc_82F99990;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99990:
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

PPC_WEAK_FUNC(sub_82F99928) {
	__imp__sub_82F99928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F999A8) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f999e4
	if (!cr6.eq) goto loc_82F999E4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// b 0x82f99a3c
	goto loc_82F99A3C;
loc_82F999E4:
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f99a3c
	if (!cr6.eq) goto loc_82F99A3C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99A3C:
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

PPC_WEAK_FUNC(sub_82F999A8) {
	__imp__sub_82F999A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99A58) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f99a7c
	if (!cr6.eq) goto loc_82F99A7C;
	// li r11,0
	r11.s64 = 0;
loc_82F99A7C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r29,r11,48
	r29.s64 = r11.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(120) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82f99b2c
	if (cr6.lt) goto loc_82F99B2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x82f99b2c
	if (!cr6.lt) goto loc_82F99B2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f66868
	sub_82F66868(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f67520
	sub_82F67520(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// bne cr6,0x82f99b2c
	if (!cr6.eq) goto loc_82F99B2C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99B2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f99b60
	if (!cr6.eq) goto loc_82F99B60;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99B60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F99A58) {
	__imp__sub_82F99A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99B68) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82f99b8c
	if (!cr6.eq) goto loc_82F99B8C;
	// li r11,0
	r11.s64 = 0;
loc_82F99B8C:
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7700
	sub_82EF7700(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f99c1c
	if (!cr6.gt) goto loc_82F99C1C;
loc_82F99BB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
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
	// bne cr6,0x82f99c0c
	if (!cr6.eq) goto loc_82F99C0C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99C0C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82f99bb0
	if (cr6.lt) goto loc_82F99BB0;
loc_82F99C1C:
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
	// bne 0x82f99c58
	if (!cr0.eq) goto loc_82F99C58;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99C58:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F99C68:
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
	// bne 0x82f99c68
	if (!cr0.eq) goto loc_82F99C68;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f99c94
	if (!cr0.eq) goto loc_82F99C94;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F99C94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F99B68) {
	__imp__sub_82F99B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99CA0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r28,r11,-16
	r28.s64 = r11.s64 + -16;
	// bne cr6,0x82f99cc4
	if (!cr6.eq) goto loc_82F99CC4;
	// li r28,0
	r28.s64 = 0;
loc_82F99CC4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f99cfc
	if (cr6.lt) goto loc_82F99CFC;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82F99CFC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f99d50
	if (cr6.lt) goto loc_82F99D50;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82f99d4c
	if (!cr6.lt) goto loc_82F99D4C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// b 0x82f99d98
	goto loc_82F99D98;
loc_82F99D4C:
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
loc_82F99D50:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99658
	sub_82F99658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f99d98
	if (!cr6.eq) goto loc_82F99D98;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99D98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F99CA0) {
	__imp__sub_82F99CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F99DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r4,120
	r24.s64 = ctx.r4.s64 + 120;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// bl 0x82f1c070
	sub_82F1C070(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f99df8
	if (cr6.eq) goto loc_82F99DF8;
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
loc_82F99DF8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f99e1c
	if (cr6.eq) goto loc_82F99E1C;
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
loc_82F99E1C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bge cr6,0x82f99e34
	if (!cr6.lt) goto loc_82F99E34;
	// li r22,0
	r22.s64 = 0;
loc_82F99E34:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x82f99e7c
	if (!cr6.eq) goto loc_82F99E7C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a0f0
	if (cr6.lt) goto loc_82F9A0F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// b 0x82f9a0f0
	goto loc_82F9A0F0;
loc_82F99E7C:
	// lbz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U8(r21.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f99f70
	if (!cr6.eq) goto loc_82F99F70;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f99f30
	if (cr0.eq) goto loc_82F99F30;
	// li r26,4
	r26.s64 = 4;
loc_82F99EA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef85e0
	sub_82EF85E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef78a0
	sub_82EF78A0(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,520
	ctx.r4.s64 = r11.s64 + 520;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f99f08
	if (cr6.lt) goto loc_82F99F08;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F99F08:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82f99f20
	if (!cr0.eq) goto loc_82F99F20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F99F20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82f99ea4
	if (!cr0.eq) goto loc_82F99EA4;
loc_82F99F30:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F99F40:
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
	// bne 0x82f99f40
	if (!cr0.eq) goto loc_82F99F40;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9a0f0
	if (!cr0.eq) goto loc_82F9A0F0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// b 0x82f9a0f0
	goto loc_82F9A0F0;
loc_82F99F70:
	// li r25,0
	r25.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r26,4
	r26.s64 = 4;
loc_82F99F7C:
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r31,0
	r31.s64 = 0;
loc_82F99F88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r11
	r28.u64 = r11.u64;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82efdfa8
	sub_82EFDFA8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82f99fb0
	if (!cr6.eq) goto loc_82F99FB0;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82F99FB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f99fd0
	if (cr6.eq) goto loc_82F99FD0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f99fd8
	if (cr6.eq) goto loc_82F99FD8;
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// beq cr6,0x82f99f88
	if (cr6.eq) goto loc_82F99F88;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82F99FD0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f9a068
	if (!cr6.eq) goto loc_82F9A068;
loc_82F99FD8:
	// cmpw cr6,r25,r22
	cr6.compare<int32_t>(r25.s32, r22.s32, xer);
	// bge cr6,0x82f9a0f0
	if (!cr6.lt) goto loc_82F9A0F0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f996f0
	sub_82F996F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r26.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a030
	if (cr6.lt) goto loc_82F9A030;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A030:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
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
	// bne cr6,0x82f9a058
	if (!cr6.eq) goto loc_82F9A058;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9A058:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82F9A068:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82f99f7c
	if (!cr6.eq) goto loc_82F99F7C;
	// cmpw cr6,r25,r22
	cr6.compare<int32_t>(r25.s32, r22.s32, xer);
	// bge cr6,0x82f9a0f0
	if (!cr6.lt) goto loc_82F9A0F0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82f996f0
	sub_82F996F0(ctx, base);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r26.u8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a0c8
	if (cr6.lt) goto loc_82F9A0C8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A0C8:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
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
	// bne cr6,0x82f9a0f0
	if (!cr6.eq) goto loc_82F9A0F0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9A0F0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82F99DA0) {
	__imp__sub_82F99DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A100) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r28,r11,-16
	r28.s64 = r11.s64 + -16;
	// bne cr6,0x82f9a124
	if (!cr6.eq) goto loc_82F9A124;
	// li r28,0
	r28.s64 = 0;
loc_82F9A124:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// li r31,0
	r31.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f9a15c
	if (cr6.lt) goto loc_82F9A15C;
	// li r4,0
	ctx.r4.s64 = 0;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82F9A15C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9a1d8
	if (cr6.lt) goto loc_82F9A1D8;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(r29.s32, r31.s32, xer);
	// bge cr6,0x82f9a1c8
	if (!cr6.lt) goto loc_82F9A1C8;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82f9a1bc
	if (cr6.lt) goto loc_82F9A1BC;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// b 0x82f9a220
	goto loc_82F9A220;
loc_82F9A1BC:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82F9A1C8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82f9a1d4
	if (!cr6.lt) goto loc_82F9A1D4;
	// li r31,0
	r31.s64 = 0;
loc_82F9A1D4:
	// subf r29,r31,r29
	r29.s64 = r29.s64 - r31.s64;
loc_82F9A1D8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99658
	sub_82F99658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
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
	// bne cr6,0x82f9a220
	if (!cr6.eq) goto loc_82F9A220;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9A220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9A100) {
	__imp__sub_82F9A100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32006
	r11.s64 = -2097545216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,-26200
	ctx.r4.s64 = r11.s64 + -26200;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r10,17080
	ctx.r10.s64 = ctx.r10.s64 + 17080;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,17064
	r31.s64 = r11.s64 + 17064;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,17064(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(17064) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9a2e4
	if (cr6.eq) goto loc_82F9A2E4;
	// mr r29,r31
	r29.u64 = r31.u64;
	// li r11,0
	r11.s64 = 0;
loc_82F9A284:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a2cc
	if (cr6.lt) goto loc_82F9A2CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A2CC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9a284
	if (!cr6.eq) goto loc_82F9A284;
loc_82F9A2E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F9A228) {
	__imp__sub_82F9A228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9a354
	if (!cr6.gt) goto loc_82F9A354;
loc_82F9A318:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f1.f64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82ef78a0
	sub_82EF78A0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82f9a318
	if (cr6.lt) goto loc_82F9A318;
loc_82F9A354:
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
	// bne 0x82f9a390
	if (!cr0.eq) goto loc_82F9A390;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9A390:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82F9A3A0:
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
	// bne 0x82f9a3a0
	if (!cr0.eq) goto loc_82F9A3A0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9a3cc
	if (!cr0.eq) goto loc_82F9A3CC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9A3CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9A2F0) {
	__imp__sub_82F9A2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A3D8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
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
	// addi r28,r11,-16
	r28.s64 = r11.s64 + -16;
	// bne cr6,0x82f9a3fc
	if (!cr6.eq) goto loc_82F9A3FC;
	// li r28,0
	r28.s64 = 0;
loc_82F9A3FC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r29,0
	r29.s64 = 0;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f9a48c
	if (cr6.lt) goto loc_82F9A48C;
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
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
	// bne cr6,0x82f9a484
	if (!cr6.eq) goto loc_82F9A484;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9A484:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
loc_82F9A48C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9a4d0
	if (cr6.lt) goto loc_82F9A4D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,24(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x82f9a4d0
	if (!cr6.lt) goto loc_82F9A4D0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82F9A4D0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r28,48
	ctx.r5.s64 = r28.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f99da0
	sub_82F99DA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9a514
	if (cr6.eq) goto loc_82F9A514;
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
loc_82F9A514:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82f9a52c
	if (!cr0.eq) goto loc_82F9A52C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9A52C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9A3D8) {
	__imp__sub_82F9A3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A538) {
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
	// addi r11,r11,17216
	r11.s64 = r11.s64 + 17216;
	// addi r10,r10,17136
	ctx.r10.s64 = ctx.r10.s64 + 17136;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
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

PPC_WEAK_FUNC(sub_82F9A538) {
	__imp__sub_82F9A538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A5A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9A5A8) {
	__imp__sub_82F9A5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A5B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f9acd0
	sub_82F9ACD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9A5B0) {
	__imp__sub_82F9A5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A5B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9a608
	if (cr0.eq) goto loc_82F9A608;
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f9a538
	sub_82F9A538(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f9a60c
	goto loc_82F9A60C;
loc_82F9A608:
	// li r31,0
	r31.s64 = 0;
loc_82F9A60C:
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r5,r11,532
	ctx.r5.s64 = r11.s64 + 532;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a658
	if (cr6.lt) goto loc_82F9A658;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A658:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82F9A5B8) {
	__imp__sub_82F9A5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A678) {
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
	// bl 0x82f9a538
	sub_82F9A538(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,17320
	r11.s64 = r11.s64 + 17320;
	// addi r10,r10,17240
	ctx.r10.s64 = ctx.r10.s64 + 17240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
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
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
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
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
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
	// bl 0x82faf9d0
	sub_82FAF9D0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a72c
	if (cr6.lt) goto loc_82F9A72C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A72C:
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
	// blt cr6,0x82f9a78c
	if (cr6.lt) goto loc_82F9A78C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A78C:
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

PPC_WEAK_FUNC(sub_82F9A678) {
	__imp__sub_82F9A678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A7A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f9ac80
	sub_82F9AC80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9A7A8) {
	__imp__sub_82F9A7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A7B0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	r28.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82f9a834
	if (!cr0.eq) goto loc_82F9A834;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9a834
	if (!cr0.eq) goto loc_82F9A834;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f990b8
	sub_82F990B8(ctx, base);
	// b 0x82f9a990
	goto loc_82F9A990;
loc_82F9A834:
	// li r11,0
	r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f884e8
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9a870
	if (cr0.eq) goto loc_82F9A870;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
loc_82F9A870:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82f9a88c
	if (cr6.eq) goto loc_82F9A88C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// b 0x82f9a964
	goto loc_82F9A964;
loc_82F9A88C:
	// addi r27,r29,36
	r27.s64 = r29.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f9a8b8
	if (cr6.eq) goto loc_82F9A8B8;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// b 0x82f9a8dc
	goto loc_82F9A8DC;
loc_82F9A8B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9A8DC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9a950
	if (!cr6.eq) goto loc_82F9A950;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f9a950
	if (cr6.eq) goto loc_82F9A950;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a934
	if (cr6.lt) goto loc_82F9A934;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A934:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a948
	if (cr6.lt) goto loc_82F9A948;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A948:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f9a990
	goto loc_82F9A990;
loc_82F9A950:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6bea0
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9A964:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a978
	if (cr6.lt) goto loc_82F9A978;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A978:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9a98c
	if (cr6.lt) goto loc_82F9A98C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9A98C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F9A990:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9A7B0) {
	__imp__sub_82F9A7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9A998) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bne cr6,0x82f9a9c0
	if (!cr6.eq) goto loc_82F9A9C0;
loc_82F9A9B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9aa80
	goto loc_82F9AA80;
loc_82F9A9C0:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(76) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9aa7c
	if (cr6.eq) goto loc_82F9AA7C;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f9aa7c
	if (cr6.eq) goto loc_82F9AA7C;
	// li r30,0
	r30.s64 = 0;
loc_82F9A9E0:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(76) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9aa6c
	if (cr6.eq) goto loc_82F9AA6C;
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
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
	// bne 0x82f9aa88
	if (!cr0.eq) goto loc_82F9AA88;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9AA6C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82f9a9e0
	if (cr6.lt) goto loc_82F9A9E0;
loc_82F9AA7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9AA80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82F9AA88:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f9a9b8
	goto loc_82F9A9B8;
}

PPC_WEAK_FUNC(sub_82F9A998) {
	__imp__sub_82F9A998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AA90) {
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
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9aaf4
	if (!cr6.eq) goto loc_82F9AAF4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f9aaf4
	if (!cr6.eq) goto loc_82F9AAF4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f9aae8
	if (cr0.eq) goto loc_82F9AAE8;
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
	// b 0x82f9aaec
	goto loc_82F9AAEC;
loc_82F9AAE8:
	// li r31,0
	r31.s64 = 0;
loc_82F9AAEC:
	// stw r31,60(r27)
	PPC_STORE_U32(r27.u32 + 60, r31.u32);
	// b 0x82f9abec
	goto loc_82F9ABEC;
loc_82F9AAF4:
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
	// beq 0x82f9abd8
	if (cr0.eq) goto loc_82F9ABD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f9ab48
	if (cr0.eq) goto loc_82F9AB48;
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
loc_82F9AB48:
	// lwz r10,60(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(60) );
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
	// beq cr6,0x82f9ab94
	if (cr6.eq) goto loc_82F9AB94;
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
	// beq cr6,0x82f9abb4
	if (cr6.eq) goto loc_82F9ABB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f9abb4
	if (!cr0.eq) goto loc_82F9ABB4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82f9abb0
	goto loc_82F9ABB0;
loc_82F9AB94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9abb4
	if (cr6.eq) goto loc_82F9ABB4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f9abb4
	if (!cr0.eq) goto loc_82F9ABB4;
loc_82F9ABB0:
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9ABB4:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9abd8
	if (cr6.eq) goto loc_82F9ABD8;
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
loc_82F9ABD8:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9abec
	if (cr6.lt) goto loc_82F9ABEC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9ABEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9AA90) {
	__imp__sub_82F9AA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9ABF8) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,17320
	r11.s64 = r11.s64 + 17320;
	// addi r10,r10,17240
	ctx.r10.s64 = ctx.r10.s64 + 17240;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f9ac38
	if (cr6.eq) goto loc_82F9AC38;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82F9AC38:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f9ac60
	if (!cr0.eq) goto loc_82F9AC60;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9AC60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9ABF8) {
	__imp__sub_82F9ABF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AC80) {
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
	// bl 0x82f9abf8
	sub_82F9ABF8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9acb0
	if (cr0.eq) goto loc_82F9ACB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9ACB0:
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

PPC_WEAK_FUNC(sub_82F9AC80) {
	__imp__sub_82F9AC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9ACD0) {
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bne 0x82f9ad04
	if (!cr0.eq) goto loc_82F9AD04;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9AD04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9ad1c
	if (cr0.eq) goto loc_82F9AD1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9AD1C:
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

PPC_WEAK_FUNC(sub_82F9ACD0) {
	__imp__sub_82F9ACD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AD38) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82f9a678
	sub_82F9A678(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,17320
	r11.s64 = r11.s64 + 17320;
	// addi r10,r10,17240
	ctx.r10.s64 = ctx.r10.s64 + 17240;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,-4240
	ctx.r5.s64 = r11.s64 + -4240;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9AD38) {
	__imp__sub_82F9AD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1608(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1608) );
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,1600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1600) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// sth r4,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r4.u16);
	// lwz r11,1600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1600) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stb r5,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r5.u8);
	// lwz r11,1600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1600) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r6,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwz r11,1600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1600) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r11,1600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1600) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stb r8,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r8.u8);
	// lwz r11,1600(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1600) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, r11.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// blt cr6,0x82f9ae04
	if (cr6.lt) goto loc_82F9AE04;
	// li r11,0
	r11.s64 = 0;
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, r11.u32);
loc_82F9AE04:
	// lwz r11,1608(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1608) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9AD90) {
	__imp__sub_82F9AD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,1608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1608) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82f9aec0
	if (!cr6.gt) goto loc_82F9AEC0;
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1604) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1604) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1604) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1604) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82f9ae90
	if (cr6.eq) goto loc_82F9AE90;
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1604) );
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,13(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
loc_82F9AE90:
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1604) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1604(r11)
	PPC_STORE_U32(r11.u32 + 1604, ctx.r10.u32);
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// blt cr6,0x82f9aeac
	if (cr6.lt) goto loc_82F9AEAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1604(r11)
	PPC_STORE_U32(r11.u32 + 1604, ctx.r10.u32);
loc_82F9AEAC:
	// lwz r10,1608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(1608) );
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,1608(r11)
	PPC_STORE_U32(r11.u32 + 1608, ctx.r10.u32);
	// blr 
	return;
loc_82F9AEC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9AE18) {
	__imp__sub_82F9AE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AEC8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,1600
	ctx.r5.s64 = 1600;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, r30.u32);
	// stw r30,1620(r31)
	PPC_STORE_U32(r31.u32 + 1620, r30.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(r31.u32 + 1624, r30.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1628
	ctx.r3.s64 = r31.s64 + 1628;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// sth r30,1656(r31)
	PPC_STORE_U16(r31.u32 + 1656, r30.u16);
	// stb r30,1658(r31)
	PPC_STORE_U8(r31.u32 + 1658, r30.u8);
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

PPC_WEAK_FUNC(sub_82F9AEC8) {
	__imp__sub_82F9AEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82f9af70
	if (cr6.lt) goto loc_82F9AF70;
	// cmpwi cr6,r4,223
	cr6.compare<int32_t>(ctx.r4.s32, 223, xer);
	// bge cr6,0x82f9af70
	if (!cr6.lt) goto loc_82F9AF70;
	// srawi r11,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	r11.s64 = ctx.r4.s32 >> 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lbz r9,1628(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1628);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
loc_82F9AF70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9AF30) {
	__imp__sub_82F9AF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// beq cr6,0x82f9afa8
	if (cr6.eq) goto loc_82F9AFA8;
	// cmpwi cr6,r4,144
	cr6.compare<int32_t>(ctx.r4.s32, 144, xer);
	// beq cr6,0x82f9afa0
	if (cr6.eq) goto loc_82F9AFA0;
	// cmpwi cr6,r4,145
	cr6.compare<int32_t>(ctx.r4.s32, 145, xer);
	// beq cr6,0x82f9af98
	if (cr6.eq) goto loc_82F9AF98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F9AF98:
	// lbz r3,1658(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1658);
	// blr 
	return;
loc_82F9AFA0:
	// lbz r3,1656(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1656);
	// blr 
	return;
loc_82F9AFA8:
	// lbz r3,1657(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1657);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9AF78) {
	__imp__sub_82F9AF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// beq cr6,0x82f9afd8
	if (cr6.eq) goto loc_82F9AFD8;
	// cmpwi cr6,r4,144
	cr6.compare<int32_t>(ctx.r4.s32, 144, xer);
	// beq cr6,0x82f9afd0
	if (cr6.eq) goto loc_82F9AFD0;
	// cmpwi cr6,r4,145
	cr6.compare<int32_t>(ctx.r4.s32, 145, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r5,1658(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1658, ctx.r5.u8);
	// blr 
	return;
loc_82F9AFD0:
	// stb r5,1656(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1656, ctx.r5.u8);
	// blr 
	return;
loc_82F9AFD8:
	// stb r5,1657(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1657, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9AFB0) {
	__imp__sub_82F9AFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9AFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,223
	cr6.compare<int32_t>(ctx.r4.s32, 223, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// srawi r10,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,5
	ctx.r7.s64 = 5;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r6,1628(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 1628);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,1628(r11)
	PPC_STORE_U8(r11.u32 + 1628, ctx.r10.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,1628
	r11.s64 = r11.s64 + 1628;
	// b 0x82f9ad90
	sub_82F9AD90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9AFE0) {
	__imp__sub_82F9AFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9B030) {
	__imp__sub_82F9B030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,223
	cr6.compare<int32_t>(ctx.r4.s32, 223, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// srawi r10,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,6
	ctx.r7.s64 = 6;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r6,1628(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 1628);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,1628(r11)
	PPC_STORE_U8(r11.u32 + 1628, ctx.r10.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,1628
	r11.s64 = r11.s64 + 1628;
	// b 0x82f9ad90
	sub_82F9AD90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9B038) {
	__imp__sub_82F9B038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9B088) {
	__imp__sub_82F9B088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B090) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82f9ad90
	sub_82F9AD90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9B090) {
	__imp__sub_82F9B090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B0D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82f9ae18
	sub_82F9AE18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9B0D8) {
	__imp__sub_82F9B0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B0E0) {
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
	// li r11,99
	r11.s64 = 99;
	// addi r10,r31,13
	ctx.r10.s64 = r31.s64 + 13;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F9B100:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f9b100
	if (!cr0.lt) goto loc_82F9B100;
	// li r5,1600
	ctx.r5.s64 = 1600;
	// stw r9,1600(r31)
	PPC_STORE_U32(r31.u32 + 1600, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,1604(r31)
	PPC_STORE_U32(r31.u32 + 1604, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,1608(r31)
	PPC_STORE_U32(r31.u32 + 1608, ctx.r9.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9B0E0) {
	__imp__sub_82F9B0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B148) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f9b17c
	if (cr6.eq) goto loc_82F9B17C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82F9B17C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9b19c
	if (cr6.eq) goto loc_82F9B19C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f9b19c
	if (!cr0.eq) goto loc_82F9B19C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9B19C:
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

PPC_WEAK_FUNC(sub_82F9B148) {
	__imp__sub_82F9B148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B1C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,1664(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(1664) );
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9b2ac
	if (cr6.eq) goto loc_82F9B2AC;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82F9B200:
	// lwz r11,1660(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(1660) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r25,r11
	ctx.r4.u64 = r25.u64 + r11.u64;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9b2a0
	if (cr6.eq) goto loc_82F9B2A0;
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
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// bne cr6,0x82f9b25c
	if (!cr6.eq) goto loc_82F9B25C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82f9b26c
	goto loc_82F9B26C;
loc_82F9B25C:
	// cmpwi cr6,r23,6
	cr6.compare<int32_t>(r23.s32, 6, xer);
	// bne cr6,0x82f9b288
	if (!cr6.eq) goto loc_82F9B288;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82F9B26C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsh r5,r29
	ctx.r5.s64 = r29.s16;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9B288:
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
loc_82F9B2A0:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bne 0x82f9b200
	if (!cr0.eq) goto loc_82F9B200;
loc_82F9B2AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82F9B1C8) {
	__imp__sub_82F9B1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B2B8) {
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
	// lwz r11,1664(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(1664) );
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82f9b348
	if (cr0.lt) goto loc_82F9B348;
	// addi r28,r3,1660
	r28.s64 = ctx.r3.s64 + 1660;
	// rlwinm r29,r30,3,0,28
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r27,0
	r27.s64 = 0;
loc_82F9B2DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9b324
	if (cr6.eq) goto loc_82F9B324;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f9b324
	if (!cr0.eq) goto loc_82F9B324;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9b31c
	if (cr6.eq) goto loc_82F9B31C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f9b31c
	if (!cr0.eq) goto loc_82F9B31C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9B31C:
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
loc_82F9B324:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9b33c
	if (!cr6.eq) goto loc_82F9B33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f198d8
	sub_82F198D8(ctx, base);
loc_82F9B33C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x82f9b2dc
	if (!cr0.lt) goto loc_82F9B2DC;
loc_82F9B348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9B2B8) {
	__imp__sub_82F9B2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B350) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x82f9b2b8
	sub_82F9B2B8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwz r26,1664(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1664) );
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f9b3e4
	if (cr6.eq) goto loc_82F9B3E4;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82F9B380:
	// lwz r11,1660(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1660) );
	// add r31,r28,r11
	r31.u64 = r28.u64 + r11.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9b3c8
	if (cr6.eq) goto loc_82F9B3C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f9b3c8
	if (!cr0.eq) goto loc_82F9B3C8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9b3c0
	if (cr6.eq) goto loc_82F9B3C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f9b3c0
	if (!cr0.eq) goto loc_82F9B3C0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9B3C0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_82F9B3C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x82f9b44c
	if (cr6.eq) goto loc_82F9B44C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x82f9b380
	if (cr6.lt) goto loc_82F9B380;
loc_82F9B3E4:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f9b3fc
	if (cr6.eq) goto loc_82F9B3FC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ef7138
	sub_82EF7138(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82F9B3FC:
	// lwz r11,1664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1664) );
	// addi r3,r30,1660
	ctx.r3.s64 = r30.s64 + 1660;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f168d8
	sub_82F168D8(ctx, base);
	// lwz r10,1660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(1660) );
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// bl 0x82f9b148
	sub_82F9B148(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f9b44c
	if (cr6.eq) goto loc_82F9B44C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bne 0x82f9b44c
	if (!cr0.eq) goto loc_82F9B44C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9B44C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F9B350) {
	__imp__sub_82F9B350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B458) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ef6fe0
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,17380
	r11.s64 = r11.s64 + 17380;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82f9b0e0
	sub_82F9B0E0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,1628
	ctx.r3.s64 = r31.s64 + 1628;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,1660(r31)
	PPC_STORE_U32(r31.u32 + 1660, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1664(r31)
	PPC_STORE_U32(r31.u32 + 1664, r30.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(r31.u32 + 1668, r30.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// sth r30,1656(r31)
	PPC_STORE_U16(r31.u32 + 1656, r30.u16);
	// stb r30,1658(r31)
	PPC_STORE_U8(r31.u32 + 1658, r30.u8);
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

PPC_WEAK_FUNC(sub_82F9B458) {
	__imp__sub_82F9B458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r3,r31,1660
	ctx.r3.s64 = r31.s64 + 1660;
	// bl 0x82f168d8
	sub_82F168D8(ctx, base);
	// lwz r3,1660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(1660) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9b500
	if (cr6.eq) goto loc_82F9B500;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9B500:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

PPC_WEAK_FUNC(sub_82F9B4D0) {
	__imp__sub_82F9B4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B520) {
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
	// bl 0x82f9b4d0
	sub_82F9B4D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9b550
	if (cr0.eq) goto loc_82F9B550;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9B550:
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

PPC_WEAK_FUNC(sub_82F9B520) {
	__imp__sub_82F9B520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31952
	r11.s64 = -2094006272;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4128
	r11.s64 = r11.s64 + -4128;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9B570) {
	__imp__sub_82F9B570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B588) {
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
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r29,r3,520
	r29.s64 = ctx.r3.s64 + 520;
	// addi r11,r11,-4128
	r11.s64 = r11.s64 + -4128;
	// li r27,130
	r27.s64 = 130;
	// mr r30,r11
	r30.u64 = r11.u64;
	// subf r28,r11,r3
	r28.s64 = ctx.r3.s64 - r11.s64;
loc_82F9B5AC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82F9B5B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9b5b4
	if (!cr6.eq) goto loc_82F9B5B4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// bl 0x82f67160
	sub_82F67160(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stwx r31,r28,r30
	PPC_STORE_U32(r28.u32 + r30.u32, r31.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82f67818
	sub_82F67818(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82f9b618
	if (!cr0.eq) goto loc_82F9B618;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9B618:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82f9b5ac
	if (!cr0.eq) goto loc_82F9B5AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9B588) {
	__imp__sub_82F9B588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B630) {
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
	// li r30,130
	r30.s64 = 130;
loc_82F9B64C:
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
	// bne 0x82f9b664
	if (!cr0.eq) goto loc_82F9B664;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9B664:
	// li r11,0
	r11.s64 = 0;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82f9b64c
	if (!cr0.eq) goto loc_82F9B64C;
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

PPC_WEAK_FUNC(sub_82F9B630) {
	__imp__sub_82F9B630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B690) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,520
	ctx.r3.s64 = r31.s64 + 520;
	// bl 0x82f67938
	sub_82F67938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9b588
	sub_82F9B588(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9B690) {
	__imp__sub_82F9B690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B6D0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82f9b630
	sub_82F9B630(ctx, base);
	// addi r3,r31,520
	ctx.r3.s64 = r31.s64 + 520;
	// bl 0x82f679d0
	sub_82F679D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9B6D0) {
	__imp__sub_82F9B6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B708) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9b784
	if (cr6.eq) goto loc_82F9B784;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9b784
	if (cr0.eq) goto loc_82F9B784;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x82f9b740
	if (cr6.lt) goto loc_82F9B740;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x82f9b758
	if (!cr6.gt) goto loc_82F9B758;
loc_82F9B740:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82f9b758
	if (cr6.eq) goto loc_82F9B758;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x82f9b758
	if (cr6.eq) goto loc_82F9B758;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// bne cr6,0x82f9b784
	if (!cr6.eq) goto loc_82F9B784;
loc_82F9B758:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca99c0
	sub_82CA99C0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9b77c
	if (cr6.eq) goto loc_82F9B77C;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9b784
	if (!cr6.eq) goto loc_82F9B784;
loc_82F9B77C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9b788
	goto loc_82F9B788;
loc_82F9B784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9B788:
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

PPC_WEAK_FUNC(sub_82F9B708) {
	__imp__sub_82F9B708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B7A0) {
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
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

PPC_WEAK_FUNC(sub_82F9B7A0) {
	__imp__sub_82F9B7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x82f9b834
	goto loc_82F9B834;
loc_82F9B81C:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x82f9b83c
	if (cr6.lt) goto loc_82F9B83C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82f9b83c
	if (cr6.gt) goto loc_82F9B83C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82F9B834:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9b81c
	if (!cr0.eq) goto loc_82F9B81C;
loc_82F9B83C:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9b850
	if (cr6.eq) goto loc_82F9B850;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82F9B850:
	// b 0x82ca3b30
	sub_82CA3B30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9B808) {
	__imp__sub_82F9B808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r27.u8);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9b924
	if (!cr6.gt) goto loc_82F9B924;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
loc_82F9B884:
	// extsw r11,r30
	r11.s64 = r30.s32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// bne cr6,0x82f9b914
	if (!cr6.eq) goto loc_82F9B914;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9B914:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82f9b884
	if (cr6.lt) goto loc_82F9B884;
loc_82F9B924:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9b938
	if (cr6.lt) goto loc_82F9B938;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9B938:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F9B858) {
	__imp__sub_82F9B858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B940) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,268
	ctx.r5.s64 = r11.s64 + 268;
	// bl 0x82f88220
	sub_82F88220(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9b9bc
	if (cr6.lt) goto loc_82F9B9BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9B9BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_82F9B940) {
	__imp__sub_82F9B940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9B9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9ba0c
	if (cr6.eq) goto loc_82F9BA0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f9ba10
	goto loc_82F9BA10;
loc_82F9BA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9BA10:
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

PPC_WEAK_FUNC(sub_82F9B9D8) {
	__imp__sub_82F9B9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BA28) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

PPC_WEAK_FUNC(sub_82F9BA28) {
	__imp__sub_82F9BA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BA90) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f9bb04
	if (!cr6.gt) goto loc_82F9BB04;
	// li r31,0
	r31.s64 = 0;
loc_82F9BAB4:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9baf0
	if (cr6.eq) goto loc_82F9BAF0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9bae4
	if (cr0.eq) goto loc_82F9BAE4;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
	// b 0x82f9bae8
	goto loc_82F9BAE8;
loc_82F9BAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9BAE8:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
loc_82F9BAF0:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f9bab4
	if (cr6.lt) goto loc_82F9BAB4;
loc_82F9BB04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9BA90) {
	__imp__sub_82F9BA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BB10) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r28,64
	r31.s64 = r28.s64 + 64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3224
	ctx.r4.s64 = r11.s64 + 3224;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(56) );
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r27.u8);
	// ble cr6,0x82f9bbfc
	if (!cr6.gt) goto loc_82F9BBFC;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82F9BB54:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f9bb68
	if (cr6.eq) goto loc_82F9BB68;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
loc_82F9BB68:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f9bba4
	if (cr6.eq) goto loc_82F9BBA4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = rotl32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82f9bbc4
	goto loc_82F9BBC4;
loc_82F9BBA4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F9BBC4:
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
	// bne cr6,0x82f9bbe8
	if (!cr6.eq) goto loc_82F9BBE8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9BBE8:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(56) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82f9bb54
	if (cr6.lt) goto loc_82F9BB54;
loc_82F9BBFC:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// blt cr6,0x82f9bc18
	if (cr6.lt) goto loc_82F9BC18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9BC18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9BB10) {
	__imp__sub_82F9BB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BC28) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82f9bc9c
	if (cr6.lt) goto loc_82F9BC9C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x82f9bc9c
	if (!cr6.lt) goto loc_82F9BC9C;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r30,r4,2,0,29
	r30.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9bc8c
	if (!cr6.eq) goto loc_82F9BC8C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9bc80
	if (cr0.eq) goto loc_82F9BC80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82f9bc84
	goto loc_82F9BC84;
loc_82F9BC80:
	// li r11,0
	r11.s64 = 0;
loc_82F9BC84:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
loc_82F9BC8C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
loc_82F9BC9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9BC28) {
	__imp__sub_82F9BC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F9BCC0:
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// stwx r6,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// blt cr6,0x82f9bcc0
	if (cr6.lt) goto loc_82F9BCC0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9BCA8) {
	__imp__sub_82F9BCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BCF0) {
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
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x82f9bd14
	if (!cr6.eq) goto loc_82F9BD14;
	// li r30,0
	r30.s64 = 0;
loc_82F9BD14:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f9bd3c
	if (!cr6.eq) goto loc_82F9BD3C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,3180
	ctx.r5.s64 = r11.s64 + 3180;
	// bl 0x82f9bb10
	sub_82F9BB10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f9bda0
	goto loc_82F9BDA0;
loc_82F9BD3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f9bb10
	sub_82F9BB10(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9bda0
	if (!cr6.eq) goto loc_82F9BDA0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9BDA0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82f9bdec
	if (!cr0.eq) goto loc_82F9BDEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9BDEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9BCF0) {
	__imp__sub_82F9BCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BDF8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bne cr6,0x82f9be20
	if (!cr6.eq) goto loc_82F9BE20;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F9BE20:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82f9bca8
	sub_82F9BCA8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9BDF8) {
	__imp__sub_82F9BDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BE48) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82f9b808
	sub_82F9B808(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9bec0
	if (cr0.lt) goto loc_82F9BEC0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x82f9bea8
	if (!cr6.lt) goto loc_82F9BEA8;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f9bea8
	if (cr6.eq) goto loc_82F9BEA8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r9,0
	ctx.r4.u64 = rotl32(ctx.r9.u32, 0);
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
loc_82F9BEA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9bf4c
	goto loc_82F9BF4C;
loc_82F9BEA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// b 0x82f9bf4c
	goto loc_82F9BF4C;
loc_82F9BEC0:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,532
	ctx.r3.s64 = r11.s64 + 532;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9bf38
	if (cr0.eq) goto loc_82F9BF38;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x82f9bf1c
	if (cr6.gt) goto loc_82F9BF1C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// bne 0x82f9bf38
	if (!cr0.eq) goto loc_82F9BF38;
loc_82F9BF1C:
	// lwa r11,40(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 40));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// b 0x82f9bea0
	goto loc_82F9BEA0;
loc_82F9BF38:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f87920
	sub_82F87920(ctx, base);
loc_82F9BF4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9BE48) {
	__imp__sub_82F9BE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BF58) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82f9bfe0
	if (!cr6.gt) goto loc_82F9BFE0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f9bfe0
	if (cr0.eq) goto loc_82F9BFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9b808
	sub_82F9B808(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82f9bfd8
	if (cr0.lt) goto loc_82F9BFD8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x82f9bc28
	sub_82F9BC28(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9bfd0
	if (cr6.lt) goto loc_82F9BFD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9BFD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9bff0
	goto loc_82F9BFF0;
loc_82F9BFD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f9bff0
	goto loc_82F9BFF0;
loc_82F9BFE0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f88108
	sub_82F88108(ctx, base);
loc_82F9BFF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9BF58) {
	__imp__sub_82F9BF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9BFF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82f86be0
	sub_82F86BE0(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// lwz r24,40(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + int32_t(40) );
	// cmplwi cr6,r24,7
	cr6.compare<uint32_t>(r24.u32, 7, xer);
	// bgt cr6,0x82f9c028
	if (cr6.gt) goto loc_82F9C028;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82F9C028:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9c084
	if (cr6.eq) goto loc_82F9C084;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82F9C040:
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(36) );
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f9c078
	if (cr6.eq) goto loc_82F9C078;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r4,r11,500
	ctx.r4.s64 = r11.s64 + 500;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9C078:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82f9c040
	if (!cr0.eq) goto loc_82F9C040;
loc_82F9C084:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// bge cr6,0x82f9c12c
	if (!cr6.lt) goto loc_82F9C12C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// rlwinm r30,r29,2,0,29
	r30.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,2864
	r27.s64 = r11.s64 + 2864;
loc_82F9C098:
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(36) );
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9c11c
	if (cr6.eq) goto loc_82F9C11C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef0a78
	sub_82EF0A78(ctx, base);
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(36) );
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwzx r23,r11,r30
	r23.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82f114a8
	sub_82F114A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// bne cr6,0x82f9c11c
	if (!cr6.eq) goto loc_82F9C11C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9C11C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// blt cr6,0x82f9c098
	if (cr6.lt) goto loc_82F9C098;
loc_82F9C12C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82F9BFF8) {
	__imp__sub_82F9BFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// blt cr6,0x82f9c16c
	if (cr6.lt) goto loc_82F9C16C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,18592
	ctx.r4.s64 = ctx.r10.s64 + 18592;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9c170
	goto loc_82F9C170;
loc_82F9C16C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9C170:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9C138) {
	__imp__sub_82F9C138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C180) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
	// bne cr6,0x82f9c1a4
	if (!cr6.eq) goto loc_82F9C1A4;
	// li r29,0
	r29.s64 = 0;
loc_82F9C1A4:
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(68) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r11.u32);
	// bl 0x82f9c138
	sub_82F9C138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9c1d8
	if (cr0.eq) goto loc_82F9C1D8;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// b 0x82f9c238
	goto loc_82F9C238;
loc_82F9C1D8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,3180
	ctx.r5.s64 = r11.s64 + 3180;
	// bl 0x82f9bb10
	sub_82F9BB10(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// addi r3,r11,536
	ctx.r3.s64 = r11.s64 + 536;
	// bl 0x82f67308
	sub_82F67308(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f041a0
	sub_82F041A0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x82f9c238
	if (!cr0.eq) goto loc_82F9C238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9C238:
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(68) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9C180) {
	__imp__sub_82F9C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C250) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f9c180
	sub_82F9C180(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9C250) {
	__imp__sub_82F9C250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C258) {
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
	// addi r31,r3,-16
	r31.s64 = ctx.r3.s64 + -16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x82f9c138
	sub_82F9C138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9c2bc
	if (cr0.eq) goto loc_82F9C2BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,3224
	ctx.r3.s64 = r11.s64 + 3224;
loc_82F9C298:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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
loc_82F9C2BC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,3180
	ctx.r5.s64 = r11.s64 + 3180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9bb10
	sub_82F9BB10(ctx, base);
	// b 0x82f9c298
	goto loc_82F9C298;
}

PPC_WEAK_FUNC(sub_82F9C258) {
	__imp__sub_82F9C258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C2D8) {
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
	// bge cr6,0x82f9c320
	if (!cr6.lt) goto loc_82F9C320;
	// mulli r30,r28,28
	r30.s64 = r28.s64 * 28;
	// subf r31,r28,r27
	r31.s64 = r27.s64 - r28.s64;
loc_82F9C304:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// bne 0x82f9c304
	if (!cr0.eq) goto loc_82F9C304;
loc_82F9C320:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82f9c374
	if (!cr6.eq) goto loc_82F9C374;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82f9c350
	if (cr0.eq) goto loc_82F9C350;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f9c348
	if (cr0.eq) goto loc_82F9C348;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9c39c
	if (!cr6.eq) goto loc_82F9C39C;
loc_82F9C348:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82f9c39c
	if (!cr0.eq) goto loc_82F9C39C;
loc_82F9C350:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9c368
	if (cr6.eq) goto loc_82F9C368;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9C368:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82f9c39c
	goto loc_82F9C39C;
loc_82F9C374:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f9c38c
	if (cr6.gt) goto loc_82F9C38C;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82f9c39c
	if (cr6.gt) goto loc_82F9C39C;
loc_82F9C38C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82f5b9c8
	sub_82F5B9C8(ctx, base);
loc_82F9C39C:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82f9c3c4
	if (!cr6.lt) goto loc_82F9C3C4;
	// mulli r30,r27,28
	r30.s64 = r27.s64 * 28;
	// subf r31,r27,r28
	r31.s64 = r28.s64 - r27.s64;
loc_82F9C3AC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82f9b9d8
	sub_82F9B9D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// bne 0x82f9c3ac
	if (!cr0.eq) goto loc_82F9C3AC;
loc_82F9C3C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9C2D8) {
	__imp__sub_82F9C2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C3D0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x82f9c2d8
	sub_82F9C2D8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f9c428
	if (!cr6.gt) goto loc_82F9C428;
	// li r31,0
	r31.s64 = 0;
loc_82F9C400:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// bl 0x82f9b7a0
	sub_82F9B7A0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f9c400
	if (cr6.lt) goto loc_82F9C400;
loc_82F9C428:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9C3D0) {
	__imp__sub_82F9C3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C430) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82f9c450
	if (!cr6.lt) goto loc_82F9C450;
	// li r31,0
	r31.s64 = 0;
loc_82F9C450:
	// lwz r30,56(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + int32_t(56) );
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x82f9c49c
	if (!cr6.lt) goto loc_82F9C49C;
	// rlwinm r28,r31,2,0,29
	r28.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r31,r30
	r27.s64 = r30.s64 - r31.s64;
loc_82F9C464:
	// lwz r11,52(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(52) );
	// lwzx r29,r11,r28
	r29.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f9c490
	if (cr6.eq) goto loc_82F9C490;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9c488
	if (cr6.lt) goto loc_82F9C488;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9C488:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9C490:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82f9c464
	if (!cr0.eq) goto loc_82F9C464;
loc_82F9C49C:
	// addi r29,r26,52
	r29.s64 = r26.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x82f9c4d4
	if (!cr6.lt) goto loc_82F9C4D4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
loc_82F9C4BC:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82f9c4bc
	if (!cr0.eq) goto loc_82F9C4BC;
loc_82F9C4D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9C430) {
	__imp__sub_82F9C430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C4E0) {
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
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f9c530
	if (cr6.eq) goto loc_82F9C530;
	// li r11,0
	r11.s64 = 0;
loc_82F9C514:
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82f9c514
	if (!cr0.eq) goto loc_82F9C514;
loc_82F9C530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9C4E0) {
	__imp__sub_82F9C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C538) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9c600
	if (cr6.eq) goto loc_82F9C600;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82f9c5a4
	if (!cr6.gt) goto loc_82F9C5A4;
	// rlwinm r29,r26,2,0,29
	r29.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82F9C56C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9c598
	if (cr6.eq) goto loc_82F9C598;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9c590
	if (cr6.lt) goto loc_82F9C590;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9C590:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9C598:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82f9c56c
	if (!cr0.eq) goto loc_82F9C56C;
loc_82F9C5A4:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// add r11,r26,r28
	r11.u64 = r26.u64 + r28.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82f9c5f0
	if (!cr6.lt) goto loc_82F9C5F0;
	// subf r9,r28,r11
	ctx.r9.s64 = r11.s64 - r28.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F9C5C0:
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82f9c5c0
	if (cr6.lt) goto loc_82F9C5C0;
loc_82F9C5F0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
loc_82F9C600:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9C538) {
	__imp__sub_82F9C538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C608) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,56(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82f9c680
	if (cr6.eq) goto loc_82F9C680;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// add r10,r28,r31
	ctx.r10.u64 = r28.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82f9c680
	if (cr6.lt) goto loc_82F9C680;
	// subf r7,r31,r11
	ctx.r7.s64 = r11.s64 - r31.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
loc_82F9C664:
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bne 0x82f9c664
	if (!cr0.eq) goto loc_82F9C664;
loc_82F9C680:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82f9c6a4
	if (!cr6.gt) goto loc_82F9C6A4;
	// rlwinm r11,r28,2,0,29
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F9C68C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82f9c68c
	if (!cr0.eq) goto loc_82F9C68C;
loc_82F9C6A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9C608) {
	__imp__sub_82F9C608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C6B0) {
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
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9c75c
	if (cr6.eq) goto loc_82F9C75C;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f9c6fc
	if (cr6.eq) goto loc_82F9C6FC;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9c6f4
	if (cr6.lt) goto loc_82F9C6F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9C6F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9C6FC:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82f9c734
	if (!cr6.gt) goto loc_82F9C734;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82F9C710:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r8,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f9c710
	if (cr6.lt) goto loc_82F9C710;
loc_82F9C734:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
loc_82F9C75C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9C6B0) {
	__imp__sub_82F9C6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C768) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// bne cr6,0x82f9c78c
	if (!cr6.eq) goto loc_82F9C78C;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82F9C78C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f9c7e8
	if (cr6.eq) goto loc_82F9C7E8;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f9c7bc
	if (cr6.eq) goto loc_82F9C7BC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// b 0x82f9c7cc
	goto loc_82F9C7CC;
loc_82F9C7BC:
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
loc_82F9C7CC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9c7f8
	if (cr6.eq) goto loc_82F9C7F8;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9c430
	sub_82F9C430(ctx, base);
	// b 0x82f9c7f8
	goto loc_82F9C7F8;
loc_82F9C7E8:
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
loc_82F9C7F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9C768) {
	__imp__sub_82F9C768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C800) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// bne cr6,0x82f9c824
	if (!cr6.eq) goto loc_82F9C824;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82F9C824:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9c844
	if (!cr6.eq) goto loc_82F9C844;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// b 0x82f9c878
	goto loc_82F9C878;
loc_82F9C844:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f9c860
	if (cr6.eq) goto loc_82F9C860;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// b 0x82f9c870
	goto loc_82F9C870;
loc_82F9C860:
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
loc_82F9C870:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9c6b0
	sub_82F9C6B0(ctx, base);
loc_82F9C878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9C800) {
	__imp__sub_82F9C800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C880) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
	// bne cr6,0x82f9c8a4
	if (!cr6.eq) goto loc_82F9C8A4;
	// li r29,0
	r29.s64 = 0;
loc_82F9C8A4:
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82f9c8f8
	if (!cr6.gt) goto loc_82F9C8F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f9c608
	sub_82F9C608(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9c8f8
	if (!cr6.gt) goto loc_82F9C8F8;
loc_82F9C8CC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f9bc28
	sub_82F9BC28(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f9c8cc
	if (cr6.lt) goto loc_82F9C8CC;
loc_82F9C8F8:
	// lwa r11,56(r29)
	r11.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 56));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9C880) {
	__imp__sub_82F9C880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9C918) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,532
	ctx.r3.s64 = r11.s64 + 532;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9c9ac
	if (cr0.eq) goto loc_82F9C9AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// bge cr6,0x82f9c984
	if (!cr6.lt) goto loc_82F9C984;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F9C984:
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x82f9c430
	sub_82F9C430(ctx, base);
loc_82F9C98C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f88a68
	sub_82F88A68(ctx, base);
loc_82F9C9A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82F9C9AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f9b808
	sub_82F9B808(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82f9c98c
	if (cr0.lt) goto loc_82F9C98C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82f9c9d4
	if (cr6.lt) goto loc_82F9C9D4;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x82f9c430
	sub_82F9C430(ctx, base);
loc_82F9C9D4:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// rlwinm r30,r28,2,0,29
	r30.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9ca10
	if (!cr6.eq) goto loc_82F9CA10;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9ca04
	if (cr0.eq) goto loc_82F9CA04;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82f9ca08
	goto loc_82F9CA08;
loc_82F9CA04:
	// li r11,0
	r11.s64 = 0;
loc_82F9CA08:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
loc_82F9CA10:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f9c9a4
	goto loc_82F9C9A4;
}

PPC_WEAK_FUNC(sub_82F9C918) {
	__imp__sub_82F9C918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CA28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x82f9c138
	sub_82F9C138(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9cb44
	if (!cr0.eq) goto loc_82F9CB44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f9cafc
	if (cr0.eq) goto loc_82F9CAFC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f9cafc
	if (!cr6.eq) goto loc_82F9CAFC;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9cb44
	if (cr6.eq) goto loc_82F9CB44;
	// lwz r28,56(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82f9c430
	sub_82F9C430(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f9cb44
	if (!cr6.gt) goto loc_82F9CB44;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r28,r28,2,0,29
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82F9CAB4:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9cad4
	if (cr0.eq) goto loc_82F9CAD4;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
	// b 0x82f9cad8
	goto loc_82F9CAD8;
loc_82F9CAD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9CAD8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwx r3,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r3.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82f9cab4
	if (cr6.lt) goto loc_82F9CAB4;
	// b 0x82f9cb44
	goto loc_82F9CB44;
loc_82F9CAFC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9cb1c
	if (cr0.eq) goto loc_82F9CB1C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f9cb20
	goto loc_82F9CB20;
loc_82F9CB1C:
	// li r29,0
	r29.s64 = 0;
loc_82F9CB20:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
loc_82F9CB44:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9CA28) {
	__imp__sub_82F9CA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9cb8c
	if (cr0.eq) goto loc_82F9CB8C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6aa30
	sub_82F6AA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f9cb90
	goto loc_82F9CB90;
loc_82F9CB8C:
	// li r29,0
	r29.s64 = 0;
loc_82F9CB90:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// rlwinm r11,r31,2,0,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9CB58) {
	__imp__sub_82F9CB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CBC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82F9CBC0) {
	__imp__sub_82F9CBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CC18) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// bne cr6,0x82f9cc3c
	if (!cr6.eq) goto loc_82F9CC3C;
	// li r31,0
	r31.s64 = 0;
loc_82F9CC3C:
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// bl 0x82f1c070
	sub_82F1C070(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9cc78
	if (cr6.eq) goto loc_82F9CC78;
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
loc_82F9CC78:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9cc98
	if (cr6.eq) goto loc_82F9CC98;
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
loc_82F9CC98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6aba0
	sub_82F6ABA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f9ca28
	sub_82F9CA28(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9ccc4
	if (cr6.lt) goto loc_82F9CCC4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9CCC4:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9ccfc
	if (!cr6.gt) goto loc_82F9CCFC;
loc_82F9CCD4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f9ca28
	sub_82F9CA28(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f9ccd4
	if (cr6.lt) goto loc_82F9CCD4;
loc_82F9CCFC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9cd28
	if (cr6.eq) goto loc_82F9CD28;
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
loc_82F9CD28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9CC18) {
	__imp__sub_82F9CC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CD30) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
	// bne cr6,0x82f9cd54
	if (!cr6.eq) goto loc_82F9CD54;
	// li r29,0
	r29.s64 = 0;
loc_82F9CD54:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9cd8c
	if (!cr6.gt) goto loc_82F9CD8C;
loc_82F9CD64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f9cd64
	if (cr6.lt) goto loc_82F9CD64;
loc_82F9CD8C:
	// lwa r11,56(r29)
	r11.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 56));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9CD30) {
	__imp__sub_82F9CD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CDB0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r27,r11,-16
	r27.s64 = r11.s64 + -16;
	// bne cr6,0x82f9cdd4
	if (!cr6.eq) goto loc_82F9CDD4;
	// li r27,0
	r27.s64 = 0;
loc_82F9CDD4:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// li r31,0
	r31.s64 = 0;
	// lwz r30,56(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f9ce34
	if (cr6.lt) goto loc_82F9CE34;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82f9ce24
	if (!cr6.lt) goto loc_82F9CE24;
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// add. r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82f9ce24
	if (!cr0.lt) goto loc_82F9CE24;
	// li r31,0
	r31.s64 = 0;
loc_82F9CE24:
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x82f9ce34
	if (!cr6.gt) goto loc_82F9CE34;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82F9CE34:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9ce8c
	if (cr6.lt) goto loc_82F9CE8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82f9ce7c
	if (!cr6.lt) goto loc_82F9CE7C;
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// add. r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82f9ce7c
	if (!cr0.lt) goto loc_82F9CE7C;
	// li r30,0
	r30.s64 = 0;
loc_82F9CE7C:
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82f9ce8c
	if (!cr6.gt) goto loc_82F9CE8C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82F9CE8C:
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// bl 0x82f1c070
	sub_82F1C070(ctx, base);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f9cec8
	if (cr6.eq) goto loc_82F9CEC8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9CEC8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9cee8
	if (cr6.eq) goto loc_82F9CEE8;
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
loc_82F9CEE8:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bge cr6,0x82f9cf24
	if (!cr6.lt) goto loc_82F9CF24;
	// rlwinm r29,r31,2,0,29
	r29.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r31,r30
	r31.s64 = r30.s64 - r31.s64;
loc_82F9CEF8:
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(52) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82f9cf14
	if (cr6.eq) goto loc_82F9CF14;
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// b 0x82f9cf18
	goto loc_82F9CF18;
loc_82F9CF14:
	// bl 0x82f9cbc0
	sub_82F9CBC0(ctx, base);
loc_82F9CF18:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82f9cef8
	if (!cr0.eq) goto loc_82F9CEF8;
loc_82F9CF24:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f9cf50
	if (cr6.eq) goto loc_82F9CF50;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9CF50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9CDB0) {
	__imp__sub_82F9CDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9CF58) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r25,r11,-16
	r25.s64 = r11.s64 + -16;
	// bne cr6,0x82f9cf7c
	if (!cr6.eq) goto loc_82F9CF7C;
	// li r25,0
	r25.s64 = 0;
loc_82F9CF7C:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f9cfa0
	if (!cr6.eq) goto loc_82F9CFA0;
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82f9d178
	goto loc_82F9D178;
loc_82F9CFA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82f9cfdc
	if (!cr6.lt) goto loc_82F9CFDC;
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(56) );
	// add. r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82f9cfdc
	if (!cr0.lt) goto loc_82F9CFDC;
	// li r30,0
	r30.s64 = 0;
loc_82F9CFDC:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(56) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82f9cfec
	if (!cr6.gt) goto loc_82F9CFEC;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82F9CFEC:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// subf r31,r30,r11
	r31.s64 = r11.s64 - r30.s64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x82f9d040
	if (cr6.lt) goto loc_82F9D040;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82f9d02c
	if (!cr6.lt) goto loc_82F9D02C;
	// li r31,0
	r31.s64 = 0;
loc_82F9D02C:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(56) );
	// add r10,r31,r30
	ctx.r10.u64 = r31.u64 + r30.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82f9d040
	if (cr6.lt) goto loc_82F9D040;
	// subf r31,r30,r11
	r31.s64 = r11.s64 - r30.s64;
loc_82F9D040:
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// bl 0x82f1c070
	sub_82F1C070(ctx, base);
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f9d07c
	if (cr6.eq) goto loc_82F9D07C;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9D07C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9d09c
	if (cr6.eq) goto loc_82F9D09C;
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
loc_82F9D09C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82f9d0d8
	if (!cr6.gt) goto loc_82F9D0D8;
	// rlwinm r29,r30,2,0,29
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82F9D0AC:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(52) );
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82f9d0c8
	if (cr6.eq) goto loc_82F9D0C8;
	// bl 0x82f9cb58
	sub_82F9CB58(ctx, base);
	// b 0x82f9d0cc
	goto loc_82F9D0CC;
loc_82F9D0C8:
	// bl 0x82f9cbc0
	sub_82F9CBC0(ctx, base);
loc_82F9D0CC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82f9d0ac
	if (!cr0.eq) goto loc_82F9D0AC;
loc_82F9D0D8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82f9d0fc
	if (cr6.eq) goto loc_82F9D0FC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f9c538
	sub_82F9C538(ctx, base);
loc_82F9D0FC:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x82f9d158
	if (cr6.lt) goto loc_82F9D158;
	// addi r5,r11,-2
	ctx.r5.s64 = r11.s64 + -2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f9c608
	sub_82F9C608(ctx, base);
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// li r31,2
	r31.s64 = 2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82f9d158
	if (!cr6.gt) goto loc_82F9D158;
	// addi r30,r30,-2
	r30.s64 = r30.s64 + -2;
loc_82F9D12C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f9bc28
	sub_82F9BC28(ctx, base);
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f9d12c
	if (cr6.lt) goto loc_82F9D12C;
loc_82F9D158:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82f9d178
	if (cr6.eq) goto loc_82F9D178;
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
loc_82F9D178:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F9CF58) {
	__imp__sub_82F9CF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9D180) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82f9d1b0
	if (!cr6.eq) goto loc_82F9D1B0;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
loc_82F9D1B0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82f9d1bc
	if (!cr6.eq) goto loc_82F9D1BC;
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
loc_82F9D1BC:
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// bl 0x82f68150
	sub_82F68150(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9d330
	if (cr0.eq) goto loc_82F9D330;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82f09630
	sub_82F09630(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82f09630
	sub_82F09630(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r29,r11,-3936
	r29.s64 = r11.s64 + -3936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r27,20(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// lwz r7,28(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// rlwinm r11,r7,5,0,26
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r11,-32
	r30.s64 = r11.s64 + -32;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r30.u32);
	// bl 0x82f680d8
	sub_82F680D8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r30,2
	r30.s64 = 2;
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
loc_82F9D274:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f9d274
	if (!cr0.eq) goto loc_82F9D274;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9d2e8
	if (cr6.eq) goto loc_82F9D2E8;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// neg r31,r11
	r31.s64 = -r11.s64;
	// bne 0x82f9d2b8
	if (!cr0.eq) goto loc_82F9D2B8;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82F9D2B8:
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d56c
	if (cr6.lt) goto loc_82F9D56C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// b 0x82f9d56c
	goto loc_82F9D56C;
loc_82F9D2E8:
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d314
	if (cr6.lt) goto loc_82F9D314;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D314:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d328
	if (cr6.lt) goto loc_82F9D328;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D328:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f9d584
	goto loc_82F9D584;
loc_82F9D330:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r28,r30
	r28.u64 = r30.u64;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fmr f31,f0
	f31.f64 = f0.f64;
	// stfd f31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f31.u64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// beq 0x82f9d444
	if (cr0.eq) goto loc_82F9D444;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82f9d378
	if (!cr6.eq) goto loc_82F9D378;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r28,1
	r28.s64 = 1;
	// b 0x82f9d3cc
	goto loc_82F9D3CC;
loc_82F9D378:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f9b708
	sub_82F9B708(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9d3c8
	if (!cr6.eq) goto loc_82F9D3C8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9D3C8:
	// lfd f31,96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82F9D3CC:
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82f9d3f0
	if (!cr6.eq) goto loc_82F9D3F0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// li r30,1
	r30.s64 = 1;
	// b 0x82f9d444
	goto loc_82F9D444;
loc_82F9D3F0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f9b708
	sub_82F9B708(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9d440
	if (!cr6.eq) goto loc_82F9D440;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9D440:
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82F9D444:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9d484
	if (cr0.eq) goto loc_82F9D484;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9d484
	if (cr0.eq) goto loc_82F9D484;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82f9d460
	if (!cr6.lt) goto loc_82F9D460;
	// li r26,-1
	r26.s64 = -1;
loc_82F9D460:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82f9d46c
	if (!cr6.lt) goto loc_82F9D46C;
	// li r26,1
	r26.s64 = 1;
loc_82F9D46C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// neg r31,r26
	r31.s64 = -r26.s64;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9d56c
	if (!cr0.eq) goto loc_82F9D56C;
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82f9d56c
	goto loc_82F9D56C;
loc_82F9D484:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9d4d8
	if (cr0.eq) goto loc_82F9D4D8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// bl 0x82ef7350
	sub_82EF7350(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82f9d50c
	goto loc_82F9D50C;
loc_82F9D4D8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
loc_82F9D4E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f9d50c
	if (cr0.eq) goto loc_82F9D50C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f9d4e8
	if (cr6.eq) goto loc_82F9D4E8;
loc_82F9D50C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// neg r31,r9
	r31.s64 = -ctx.r9.s64;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9d520
	if (!cr0.eq) goto loc_82F9D520;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_82F9D520:
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// addi r11,r8,12
	r11.s64 = ctx.r8.s64 + 12;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f9d544
	if (!cr6.eq) goto loc_82F9D544;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9D544:
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
	// bne cr6,0x82f9d56c
	if (!cr6.eq) goto loc_82F9D56C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9D56C:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d580
	if (cr6.lt) goto loc_82F9D580;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D580:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82F9D584:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9D180) {
	__imp__sub_82F9D180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9D590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r23.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// bl 0x82f9c2d8
	sub_82F9C2D8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82f9d664
	if (!cr6.gt) goto loc_82F9D664;
	// mr r27,r29
	r27.u64 = r29.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82F9D5F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x82f9b7a0
	sub_82F9B7A0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82f9d5f4
	if (cr6.lt) goto loc_82F9D5F4;
loc_82F9D664:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82F9D590) {
	__imp__sub_82F9D590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9D670) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r24.u8);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82f9d69c
	if (!cr6.eq) goto loc_82F9D69C;
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
loc_82F9D69C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x82f9d6a8
	if (!cr6.eq) goto loc_82F9D6A8;
	// addi r22,r1,112
	r22.s64 = ctx.r1.s64 + 112;
loc_82F9D6A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r25,r24
	r25.u64 = r24.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r26,r11,120
	r26.s64 = r11.s64 + 120;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82f9d7b8
	if (!cr6.gt) goto loc_82F9D7B8;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82F9D6C8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82f6ae18
	sub_82F6AE18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9d7a0
	if (cr6.eq) goto loc_82F9D7A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f9d7a0
	if (cr6.eq) goto loc_82F9D7A0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r30,r11,r28
	r30.u64 = r11.u64 + r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9d778
	if (cr0.eq) goto loc_82F9D778;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9d778
	if (cr0.eq) goto loc_82F9D778;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f9d7d8
	if (!cr0.eq) goto loc_82F9D7D8;
loc_82F9D778:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d78c
	if (cr6.lt) goto loc_82F9D78C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D78C:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d7a0
	if (cr6.lt) goto loc_82F9D7A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D7A0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82f9d6c8
	if (cr6.lt) goto loc_82F9D6C8;
loc_82F9D7B8:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d7cc
	if (cr6.lt) goto loc_82F9D7CC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D7CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9D7D0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	return;
loc_82F9D7D8:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d7ec
	if (cr6.lt) goto loc_82F9D7EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D7EC:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d800
	if (cr6.lt) goto loc_82F9D800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D800:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9d814
	if (cr6.lt) goto loc_82F9D814;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9D814:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82f9d7d0
	goto loc_82F9D7D0;
}

PPC_WEAK_FUNC(sub_82F9D670) {
	__imp__sub_82F9D670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9D820) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bl 0x82f9c3d0
	sub_82F9C3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9D820) {
	__imp__sub_82F9D820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9D890) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82f9d8b4
	if (!cr6.eq) goto loc_82F9D8B4;
	// lwz r24,4(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
loc_82F9D8B4:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// blt cr6,0x82f9dad0
	if (cr6.lt) goto loc_82F9DAD0;
	// addi r22,r1,80
	r22.s64 = ctx.r1.s64 + 80;
	// li r25,0
	r25.s64 = 0;
loc_82F9D8C4:
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x82f9da50
	if (!cr6.gt) goto loc_82F9DA50;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r31,r25,2,0,29
	r31.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r26,r25,1
	r26.s64 = r25.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r27,r24,-1
	r27.s64 = r24.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// rlwinm r30,r26,2,0,29
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r27,2,0,29
	r28.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r8,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r8.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82f9d938
	if (!cr0.lt) goto loc_82F9D938;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r10,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r9.u32);
loc_82F9D938:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82f9d968
	if (!cr0.lt) goto loc_82F9D968;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r9.u32);
loc_82F9D968:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82f9d998
	if (!cr0.lt) goto loc_82F9D998;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r10,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r9.u32);
loc_82F9D998:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9d998
	if (cr0.lt) goto loc_82F9D998;
loc_82F9D9BC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9d9bc
	if (cr0.lt) goto loc_82F9D9BC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// bgt cr6,0x82f9da08
	if (cr6.gt) goto loc_82F9DA08;
	// rlwinm r28,r27,2,0,29
	r28.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r26,2,0,29
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r9.u32);
	// b 0x82f9d998
	goto loc_82F9D998;
loc_82F9DA08:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r25,r27
	ctx.r9.s64 = r27.s64 - r25.s64;
	// subf r8,r26,r24
	ctx.r8.s64 = r24.s64 - r26.s64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r9.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// ble cr6,0x82f9da3c
	if (!cr6.gt) goto loc_82F9DA3C;
	// stw r25,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r25.u32);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r27,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r27.u32);
	// b 0x82f9da48
	goto loc_82F9DA48;
loc_82F9DA3C:
	// stw r24,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r24.u32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// stw r26,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r26.u32);
loc_82F9DA48:
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// b 0x82f9d8c4
	goto loc_82F9D8C4;
loc_82F9DA50:
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82f9daac
	goto loc_82F9DAAC;
loc_82F9DA5C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82f9daa4
	if (cr6.eq) goto loc_82F9DAA4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82F9DA80:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r30,r31,2,0,29
	r30.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9da5c
	if (cr0.lt) goto loc_82F9DA5C;
loc_82F9DAA4:
	// mr r31,r28
	r31.u64 = r28.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82F9DAAC:
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// blt cr6,0x82f9da80
	if (cr6.lt) goto loc_82F9DA80;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// ble cr6,0x82f9dad0
	if (!cr6.gt) goto loc_82F9DAD0;
	// addi r22,r22,-8
	r22.s64 = r22.s64 + -8;
	// lwz r25,0(r22)
	r25.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// lwz r24,4(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// b 0x82f9d8c4
	goto loc_82F9D8C4;
loc_82F9DAD0:
	// addi r3,r23,8
	ctx.r3.s64 = r23.s64 + 8;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82F9D890) {
	__imp__sub_82F9D890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9DAE0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82f9db04
	if (!cr6.eq) goto loc_82F9DB04;
	// lwz r23,4(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
loc_82F9DB04:
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// blt cr6,0x82f9dd20
	if (cr6.lt) goto loc_82F9DD20;
	// addi r22,r1,80
	r22.s64 = ctx.r1.s64 + 80;
	// li r25,0
	r25.s64 = 0;
loc_82F9DB14:
	// subf r11,r25,r23
	r11.s64 = r23.s64 - r25.s64;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x82f9dca0
	if (!cr6.gt) goto loc_82F9DCA0;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r31,r25,2,0,29
	r31.u64 = rotl64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r26,r25,1
	r26.s64 = r25.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r27,r23,-1
	r27.s64 = r23.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// rlwinm r30,r26,2,0,29
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r27,2,0,29
	r28.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r8,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r8.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82f9db88
	if (!cr0.lt) goto loc_82F9DB88;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r10,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r9.u32);
loc_82F9DB88:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82f9dbb8
	if (!cr0.lt) goto loc_82F9DBB8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r9.u32);
loc_82F9DBB8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82f9dbe8
	if (!cr0.lt) goto loc_82F9DBE8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// stwx r10,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r9.u32);
loc_82F9DBE8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9dbe8
	if (cr0.lt) goto loc_82F9DBE8;
loc_82F9DC0C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9dc0c
	if (cr0.lt) goto loc_82F9DC0C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// bgt cr6,0x82f9dc58
	if (cr6.gt) goto loc_82F9DC58;
	// rlwinm r28,r27,2,0,29
	r28.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r26,2,0,29
	r30.u64 = rotl64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
	// stwx r9,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, ctx.r9.u32);
	// b 0x82f9dbe8
	goto loc_82F9DBE8;
loc_82F9DC58:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r25,r27
	ctx.r9.s64 = r27.s64 - r25.s64;
	// subf r8,r26,r23
	ctx.r8.s64 = r23.s64 - r26.s64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r9,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r9.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// ble cr6,0x82f9dc8c
	if (!cr6.gt) goto loc_82F9DC8C;
	// stw r25,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r25.u32);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r27,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r27.u32);
	// b 0x82f9dc98
	goto loc_82F9DC98;
loc_82F9DC8C:
	// stw r23,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r23.u32);
	// mr r23,r27
	r23.u64 = r27.u64;
	// stw r26,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r26.u32);
loc_82F9DC98:
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// b 0x82f9db14
	goto loc_82F9DB14;
loc_82F9DCA0:
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82f9dcfc
	goto loc_82F9DCFC;
loc_82F9DCAC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(r31.s32, r25.s32, xer);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82f9dcf4
	if (cr6.eq) goto loc_82F9DCF4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82F9DCD0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r30,r31,2,0,29
	r30.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82f9dcac
	if (cr0.lt) goto loc_82F9DCAC;
loc_82F9DCF4:
	// mr r31,r28
	r31.u64 = r28.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82F9DCFC:
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// blt cr6,0x82f9dcd0
	if (cr6.lt) goto loc_82F9DCD0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// ble cr6,0x82f9dd20
	if (!cr6.gt) goto loc_82F9DD20;
	// addi r22,r22,-8
	r22.s64 = r22.s64 + -8;
	// lwz r25,0(r22)
	r25.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// lwz r23,4(r22)
	r23.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// b 0x82f9db14
	goto loc_82F9DB14;
loc_82F9DD20:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r24,16
	ctx.r3.s64 = r24.s64 + 16;
	// bl 0x82f9c2d8
	sub_82F9C2D8(ctx, base);
	// lwz r3,16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9dd3c
	if (cr6.eq) goto loc_82F9DD3C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9DD3C:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82F9DAE0) {
	__imp__sub_82F9DAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9DD48) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r25,r11,-16
	r25.s64 = r11.s64 + -16;
	// bne cr6,0x82f9dd6c
	if (!cr6.eq) goto loc_82F9DD6C;
	// li r25,0
	r25.s64 = 0;
loc_82F9DD6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f9ddf4
	if (cr6.lt) goto loc_82F9DDF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82f9ddd4
	if (!cr6.eq) goto loc_82F9DDD4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// b 0x82f9ddf4
	goto loc_82F9DDF4;
loc_82F9DDD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r31,24(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82F9DDF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f68150
	sub_82F68150(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9de38
	if (cr0.eq) goto loc_82F9DE38;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9de38
	if (cr6.lt) goto loc_82F9DE38;
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
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82F9DE38:
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// bl 0x82f1c070
	sub_82F1C070(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9de74
	if (cr6.eq) goto loc_82F9DE74;
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
loc_82F9DE74:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9de94
	if (cr6.eq) goto loc_82F9DE94;
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
loc_82F9DE94:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9c4e0
	sub_82F9C4E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// bne cr6,0x82f9deb0
	if (!cr6.eq) goto loc_82F9DEB0;
	// li r11,0
	r11.s64 = 0;
loc_82F9DEB0:
	// lwz r30,48(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + int32_t(48) );
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r29,24(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9df0c
	if (cr6.eq) goto loc_82F9DF0C;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82f9ba28
	sub_82F9BA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82f9d890
	sub_82F9D890(ctx, base);
loc_82F9DF0C:
	// rlwinm. r11,r26,0,29,29
	r11.u64 = rotl64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x82f9df68
	if (cr0.eq) goto loc_82F9DF68;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f9df68
	if (!cr6.gt) goto loc_82F9DF68;
	// li r30,4
	r30.s64 = 4;
loc_82F9DF2C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x82f9d180
	sub_82F9D180(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f9df64
	if (cr0.eq) goto loc_82F9DF64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82f9df2c
	if (cr6.lt) goto loc_82F9DF2C;
	// b 0x82f9df68
	goto loc_82F9DF68;
loc_82F9DF64:
	// li r27,1
	r27.s64 = 1;
loc_82F9DF68:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9df90
	if (cr0.eq) goto loc_82F9DF90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// b 0x82f9dfcc
	goto loc_82F9DFCC;
loc_82F9DF90:
	// rlwinm. r11,r26,0,28,28
	r11.u64 = rotl64(r26.u32 | (r26.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9dfa8
	if (cr0.eq) goto loc_82F9DFA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9ba90
	sub_82F9BA90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82f9dfc4
	goto loc_82F9DFC4;
loc_82F9DFA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82f9c4e0
	sub_82F9C4E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82F9DFC4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
loc_82F9DFCC:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82F9DD48) {
	__imp__sub_82F9DD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r21,r11,-16
	r21.s64 = r11.s64 + -16;
	// bne cr6,0x82f9e030
	if (!cr6.eq) goto loc_82F9E030;
	// mr r21,r24
	r21.u64 = r24.u64;
loc_82F9E030:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// mr r23,r24
	r23.u64 = r24.u64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f9e08c
	if (!cr6.eq) goto loc_82F9E08C;
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x82f9e510
	goto loc_82F9E510;
loc_82F9E08C:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// lwz r20,152(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + int32_t(152) );
	// lwz r11,12(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(12) );
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f9e220
	if (cr6.lt) goto loc_82F9E220;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82f9e1a4
	if (cr0.eq) goto loc_82F9E1A4;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f9e1a4
	if (!cr6.eq) goto loc_82F9E1A4;
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(56) );
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9e220
	if (!cr6.gt) goto loc_82F9E220;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82F9E0FC:
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(52) );
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f9e128
	if (cr6.eq) goto loc_82F9E128;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82f9e12c
	goto loc_82F9E12C;
loc_82F9E128:
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_82F9E12C:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f16470
	sub_82F16470(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9e18c
	if (cr0.eq) goto loc_82F9E18C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r29,r29,0,0,30
	r29.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// bne cr6,0x82f9e18c
	if (!cr6.eq) goto loc_82F9E18C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9E18C:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(56) );
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82f9e0fc
	if (cr6.lt) goto loc_82F9E0FC;
	// b 0x82f9e220
	goto loc_82F9E220;
loc_82F9E1A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f16470
	sub_82F16470(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bl 0x82f0b778
	sub_82F0B778(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
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
	// bne cr6,0x82f9e220
	if (!cr6.eq) goto loc_82F9E220;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9E220:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9e264
	if (!cr6.gt) goto loc_82F9E264;
loc_82F9E230:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r23,104(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// stw r24,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r24.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82f9e230
	if (cr6.lt) goto loc_82F9E230;
loc_82F9E264:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9e34c
	if (cr6.lt) goto loc_82F9E34C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f9e2fc
	if (cr0.eq) goto loc_82F9E2FC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82f9e2fc
	if (!cr6.eq) goto loc_82F9E2FC;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82f9e34c
	if (!cr6.gt) goto loc_82F9E34C;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82F9E2B8:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82f9e34c
	if (!cr6.lt) goto loc_82F9E34C;
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(52) );
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9e2e4
	if (cr6.eq) goto loc_82F9E2E4;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfiwx f0,r31,r23
	PPC_STORE_U32(r31.u32 + r23.u32, f0.u32);
loc_82F9E2E4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82f9e2b8
	if (cr6.lt) goto loc_82F9E2B8;
	// b 0x82f9e34c
	goto loc_82F9E34C;
loc_82F9E2FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r22,84(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82f9e34c
	if (!cr6.gt) goto loc_82F9E34C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82F9E334:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r22.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82f9e334
	if (cr6.lt) goto loc_82F9E334;
loc_82F9E34C:
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// bl 0x82f1c070
	sub_82F1C070(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9e388
	if (cr6.eq) goto loc_82F9E388;
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
loc_82F9E388:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9e3a8
	if (cr6.eq) goto loc_82F9E3A8;
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
loc_82F9E3A8:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9c4e0
	sub_82F9C4E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bne cr6,0x82f9e3c4
	if (!cr6.eq) goto loc_82F9E3C4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82F9E3C4:
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r8,48(r21)
	ctx.r8.u64 = PPC_LOAD_U32(r21.u32 + int32_t(48) );
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r7,24(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f9d590
	sub_82F9D590(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9e410
	if (cr6.eq) goto loc_82F9E410;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82f9d820
	sub_82F9D820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82f9dae0
	sub_82F9DAE0(ctx, base);
loc_82F9E410:
	// rlwinm. r11,r22,0,29,29
	r11.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r24
	r28.u64 = r24.u64;
	// beq 0x82f9e46c
	if (cr0.eq) goto loc_82F9E46C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82f9e46c
	if (!cr6.gt) goto loc_82F9E46C;
	// li r30,4
	r30.s64 = 4;
loc_82F9E430:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// bl 0x82f9d670
	sub_82F9D670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f9e468
	if (cr0.eq) goto loc_82F9E468;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82f9e430
	if (cr6.lt) goto loc_82F9E430;
	// b 0x82f9e46c
	goto loc_82F9E46C;
loc_82F9E468:
	// li r28,1
	r28.s64 = 1;
loc_82F9E46C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9e488
	if (cr0.eq) goto loc_82F9E488;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// b 0x82f9e4c4
	goto loc_82F9E4C4;
loc_82F9E488:
	// rlwinm. r11,r22,0,28,28
	r11.u64 = rotl64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9e4a0
	if (cr0.eq) goto loc_82F9E4A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9ba90
	sub_82F9BA90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82f9e4bc
	goto loc_82F9E4BC;
loc_82F9E4A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82f9c4e0
	sub_82F9C4E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_82F9E4BC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
loc_82F9E4C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f9c2d8
	sub_82F9C2D8(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9e4e0
	if (cr6.eq) goto loc_82F9E4E0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9E4E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
	// bne 0x82f9e510
	if (!cr0.eq) goto loc_82F9E510;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9E510:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9e52c
	if (cr6.eq) goto loc_82F9E52C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9E52C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f19720
	sub_82F19720(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c18
	return;
}

PPC_WEAK_FUNC(sub_82F9E000) {
	__imp__sub_82F9E000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E540) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
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
	// addi r11,r11,18712
	r11.s64 = r11.s64 + 18712;
	// addi r10,r10,18632
	ctx.r10.s64 = ctx.r10.s64 + 18632;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// bl 0x82f124b8
	sub_82F124B8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r30,r29,120
	r30.s64 = r29.s64 + 120;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(120) );
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82f0ad10
	sub_82F0AD10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82f04b00
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9e5f8
	if (cr6.eq) goto loc_82F9E5F8;
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
loc_82F9E5F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9E540) {
	__imp__sub_82F9E540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E608) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f9ef40
	sub_82F9EF40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9E608) {
	__imp__sub_82F9E608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E610) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,18712
	r11.s64 = r11.s64 + 18712;
	// addi r10,r10,18632
	ctx.r10.s64 = ctx.r10.s64 + 18632;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
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

PPC_WEAK_FUNC(sub_82F9E610) {
	__imp__sub_82F9E610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E688) {
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
	// addi r11,r11,18712
	r11.s64 = r11.s64 + 18712;
	// addi r10,r10,18632
	ctx.r10.s64 = ctx.r10.s64 + 18632;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x82f9c430
	sub_82F9C430(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82F9E6C8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r11,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82f9e6c8
	if (!cr0.eq) goto loc_82F9E6C8;
	// mr r11,r11
	r11.u64 = r11.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9e6f4
	if (!cr0.eq) goto loc_82F9E6F4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9E6F4:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	sub_82F57778(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9e710
	if (cr6.eq) goto loc_82F9E710;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9E710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9E688) {
	__imp__sub_82F9E688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E730) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9e778
	if (cr0.eq) goto loc_82F9E778;
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
	// bl 0x82f9e540
	sub_82F9E540(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82f9e77c
	goto loc_82F9E77C;
loc_82F9E778:
	// li r31,0
	r31.s64 = 0;
loc_82F9E77C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,532
	ctx.r5.s64 = r11.s64 + 532;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9e7d4
	if (cr6.lt) goto loc_82F9E7D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9E7D4:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f9e83c
	if (cr6.eq) goto loc_82F9E83C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82f9e830
	if (!cr6.eq) goto loc_82F9E830;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82f9e830
	if (!cr6.eq) goto loc_82F9E830;
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82f9c430
	sub_82F9C430(ctx, base);
	// b 0x82f9e83c
	goto loc_82F9E83C;
loc_82F9E830:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9b858
	sub_82F9B858(ctx, base);
loc_82F9E83C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9E730) {
	__imp__sub_82F9E730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E868) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9e8b0
	if (cr0.eq) goto loc_82F9E8B0;
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f9e540
	sub_82F9E540(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82f9e8b4
	goto loc_82F9E8B4;
loc_82F9E8B0:
	// li r29,0
	r29.s64 = 0;
loc_82F9E8B4:
	// li r11,1
	r11.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(120) );
	// addi r5,r11,532
	ctx.r5.s64 = r11.s64 + 532;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9e910
	if (cr6.lt) goto loc_82F9E910;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9E910:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f14940
	sub_82F14940(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x82f68178
	sub_82F68178(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f9e94c
	if (cr6.eq) goto loc_82F9E94C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f9b858
	sub_82F9B858(ctx, base);
loc_82F9E94C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9E868) {
	__imp__sub_82F9E868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9E980) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32006
	r11.s64 = -2097545216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r11,-6352
	ctx.r4.s64 = r11.s64 + -6352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r10,25712
	ctx.r10.s64 = ctx.r10.s64 + 25712;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,18432
	r31.s64 = r11.s64 + 18432;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,18432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18432) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9ea44
	if (cr6.eq) goto loc_82F9EA44;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r11,0
	r11.s64 = 0;
	// li r27,3
	r27.s64 = 3;
loc_82F9E9E0:
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r27.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwax r11,r11,r9
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + ctx.r9.u32));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9ea2c
	if (cr6.lt) goto loc_82F9EA2C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9EA2C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r11,r28,3,0,28
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f9e9e0
	if (!cr6.eq) goto loc_82F9E9E0;
loc_82F9EA44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9E980) {
	__imp__sub_82F9E980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EA50) {
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
	// bl 0x82f9e610
	sub_82F9E610(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,18816
	r11.s64 = r11.s64 + 18816;
	// addi r10,r10,18736
	ctx.r10.s64 = ctx.r10.s64 + 18736;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,72
	r29.s64 = r31.s64 + 72;
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
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
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
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
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
	// bl 0x82f9b940
	sub_82F9B940(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9eb04
	if (cr6.lt) goto loc_82F9EB04;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9EB04:
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
	// blt cr6,0x82f9eb64
	if (cr6.lt) goto loc_82F9EB64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9EB64:
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

PPC_WEAK_FUNC(sub_82F9EA50) {
	__imp__sub_82F9EA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EB80) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	r28.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82f9ec04
	if (!cr0.eq) goto loc_82F9EC04;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// subfic r10,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x82f10ab0
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9ec04
	if (!cr0.eq) goto loc_82F9EC04;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f9be48
	sub_82F9BE48(ctx, base);
	// b 0x82f9ed60
	goto loc_82F9ED60;
loc_82F9EC04:
	// li r11,0
	r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f884e8
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9ec40
	if (cr0.eq) goto loc_82F9EC40;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
loc_82F9EC40:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82f9ec5c
	if (cr6.eq) goto loc_82F9EC5C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// b 0x82f9ed34
	goto loc_82F9ED34;
loc_82F9EC5C:
	// addi r27,r29,56
	r27.s64 = r29.s64 + 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82f9ec88
	if (cr6.eq) goto loc_82F9EC88;
	// addi r4,r29,68
	ctx.r4.s64 = r29.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// b 0x82f9ecac
	goto loc_82F9ECAC;
loc_82F9EC88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9ECAC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9ed20
	if (!cr6.eq) goto loc_82F9ED20;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f9ed20
	if (cr6.eq) goto loc_82F9ED20;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9ed04
	if (cr6.lt) goto loc_82F9ED04;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9ED04:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9ed18
	if (cr6.lt) goto loc_82F9ED18;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9ED18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82f9ed60
	goto loc_82F9ED60;
loc_82F9ED20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f6bea0
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9ED34:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9ed48
	if (cr6.lt) goto loc_82F9ED48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9ED48:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9ed5c
	if (cr6.lt) goto loc_82F9ED5C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9ED5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F9ED60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9EB80) {
	__imp__sub_82F9EB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9ED68) {
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
	// lwz r11,80(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(80) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f9edcc
	if (!cr6.eq) goto loc_82F9EDCC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f9edcc
	if (!cr6.eq) goto loc_82F9EDCC;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f9edc0
	if (cr0.eq) goto loc_82F9EDC0;
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
	// b 0x82f9edc4
	goto loc_82F9EDC4;
loc_82F9EDC0:
	// li r31,0
	r31.s64 = 0;
loc_82F9EDC4:
	// stw r31,80(r27)
	PPC_STORE_U32(r27.u32 + 80, r31.u32);
	// b 0x82f9eec4
	goto loc_82F9EEC4;
loc_82F9EDCC:
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
	// beq 0x82f9eeb0
	if (cr0.eq) goto loc_82F9EEB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f9ee20
	if (cr0.eq) goto loc_82F9EE20;
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
loc_82F9EE20:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(80) );
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
	// beq cr6,0x82f9ee6c
	if (cr6.eq) goto loc_82F9EE6C;
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
	// beq cr6,0x82f9ee8c
	if (cr6.eq) goto loc_82F9EE8C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f9ee8c
	if (!cr0.eq) goto loc_82F9EE8C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82f9ee88
	goto loc_82F9EE88;
loc_82F9EE6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f9ee8c
	if (cr6.eq) goto loc_82F9EE8C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82f9ee8c
	if (!cr0.eq) goto loc_82F9EE8C;
loc_82F9EE88:
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9EE8C:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9eeb0
	if (cr6.eq) goto loc_82F9EEB0;
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
loc_82F9EEB0:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9eec4
	if (cr6.lt) goto loc_82F9EEC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9EEC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82F9ED68) {
	__imp__sub_82F9ED68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EED0) {
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
	// addi r11,r11,18816
	r11.s64 = r11.s64 + 18816;
	// addi r10,r10,18736
	ctx.r10.s64 = ctx.r10.s64 + 18736;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f9ef10
	if (cr6.eq) goto loc_82F9EF10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82F9EF10:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f9e688
	sub_82F9E688(ctx, base);
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

PPC_WEAK_FUNC(sub_82F9EED0) {
	__imp__sub_82F9EED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EF40) {
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
	// bl 0x82f9e688
	sub_82F9E688(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9ef70
	if (cr0.eq) goto loc_82F9EF70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9EF70:
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

PPC_WEAK_FUNC(sub_82F9EF40) {
	__imp__sub_82F9EF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EF90) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82f9ea50
	sub_82F9EA50(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,18816
	r11.s64 = r11.s64 + 18816;
	// addi r10,r10,18736
	ctx.r10.s64 = ctx.r10.s64 + 18736;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,18480
	ctx.r5.s64 = r11.s64 + 18480;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9EF90) {
	__imp__sub_82F9EF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EFE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f9eff0
	sub_82F9EFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9EFE8) {
	__imp__sub_82F9EFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9EFF0) {
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
	// bl 0x82f9eed0
	sub_82F9EED0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9f020
	if (cr0.eq) goto loc_82F9F020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9F020:
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

PPC_WEAK_FUNC(sub_82F9EFF0) {
	__imp__sub_82F9EFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,2720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2720);
	f0.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	f0.f64 = double(float(ctx.f2.f64 * f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82f9f078
	if (!cr6.lt) goto loc_82F9F078;
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
loc_82F9F078:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f9f08c
	if (!cr6.eq) goto loc_82F9F08C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82F9F08C:
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = static_cast<float>(ctx.f1.f64 - f0.f64);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// lfs f0,-30920(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30920);
	f0.f64 = double(temp.f32);
	// lfs f13,-16936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16936);
	ctx.f13.f64 = double(temp.f32);
	// twllei r11,0
	// fmadds f0,f12,f0,f11
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f11.f64)));
	// fctiwz f0,f0
	f0.u64 = uint64_t(int32_t(std::trunc(f0.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / r11.s32;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = rotl32(ctx.r10.u32, 1);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9F040) {
	__imp__sub_82F9F040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9F100) {
	__imp__sub_82F9F100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82f9f1a4
	if (cr6.lt) goto loc_82F9F1A4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// bne cr6,0x82f9f184
	if (!cr6.eq) goto loc_82F9F184;
	// clrldi r11,r11,12
	r11.u64 = r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82f9f188
	if (!cr6.eq) goto loc_82F9F188;
loc_82F9F184:
	// li r11,0
	r11.s64 = 0;
loc_82F9F188:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82f9f1a4
	if (!cr0.eq) goto loc_82F9F1A4;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82f335b0
	sub_82F335B0(ctx, base);
loc_82F9F1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82F9F110) {
	__imp__sub_82F9F110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f9f110
	sub_82F9F110(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82F9F1B0) {
	__imp__sub_82F9F1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F1B8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f682f0
	sub_82F682F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stb r9,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r9.u8);
	// stb r11,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r11.u8);
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

PPC_WEAK_FUNC(sub_82F9F1B8) {
	__imp__sub_82F9F1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F258) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// beq cr6,0x82f9f2c8
	if (cr6.eq) goto loc_82F9F2C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef7138
	sub_82EF7138(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9f2c0
	if (cr6.eq) goto loc_82F9F2C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f9f2c0
	if (!cr0.eq) goto loc_82F9F2C0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9F2C0:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// b 0x82f9f2cc
	goto loc_82F9F2CC;
loc_82F9F2C8:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82F9F2CC:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stb r9,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r9.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9F258) {
	__imp__sub_82F9F258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F328) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// beq cr6,0x82f9f3a0
	if (cr6.eq) goto loc_82F9F3A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ef7138
	sub_82EF7138(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9f398
	if (cr6.eq) goto loc_82F9F398;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f9f398
	if (!cr0.eq) goto loc_82F9F398;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9F398:
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// b 0x82f9f3a4
	goto loc_82F9F3A4;
loc_82F9F3A0:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_82F9F3A4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stb r9,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r9.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9F328) {
	__imp__sub_82F9F328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F3F8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,60(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82f9f42c
	if (!cr0.eq) goto loc_82F9F42C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f9f844
	goto loc_82F9F844;
loc_82F9F42C:
	// li r24,0
	r24.s64 = 0;
	// lfs f31,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	f31.f64 = double(temp.f32);
	// lfs f0,48(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 48);
	f0.f64 = double(temp.f32);
	// mr r31,r24
	r31.u64 = r24.u64;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x82f9f840
	if (cr6.lt) goto loc_82F9F840;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9f480
	if (cr6.eq) goto loc_82F9F480;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// b 0x82f9f620
	goto loc_82F9F620;
loc_82F9F480:
	// addi r4,r26,12
	ctx.r4.s64 = r26.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9f4c0
	if (cr6.eq) goto loc_82F9F4C0;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9F4C0:
	// mr r22,r31
	r22.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9f504
	if (cr6.eq) goto loc_82F9F504;
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
	// addi r25,r31,16
	r25.s64 = r31.s64 + 16;
	// b 0x82f9f59c
	goto loc_82F9F59C;
loc_82F9F504:
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9f544
	if (cr6.eq) goto loc_82F9F544;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9F544:
	// mr r23,r31
	r23.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82f9f620
	if (cr6.eq) goto loc_82F9F620;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r25,r31,128
	r25.s64 = r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F9F59C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82f9f620
	if (cr6.eq) goto loc_82F9F620;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r24.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f32ec0
	sub_82F32EC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r26,28
	ctx.r5.s64 = r26.s64 + 28;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9f60c
	if (cr0.eq) goto loc_82F9F60C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f68378
	sub_82F68378(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9F60C:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9f620
	if (cr6.lt) goto loc_82F9F620;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9F620:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82f9f7ac
	if (cr6.eq) goto loc_82F9F7AC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r24.u8);
	// bne cr6,0x82f9f6c0
	if (!cr6.eq) goto loc_82F9F6C0;
	// lwz r3,56(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + int32_t(56) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f9f6a0
	if (cr6.eq) goto loc_82F9F6A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f60608
	sub_82F60608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82f9f668
	if (cr0.eq) goto loc_82F9F668;
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
loc_82F9F668:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
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
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82f9f6c0
	if (!cr6.eq) goto loc_82F9F6C0;
loc_82F9F6A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f32ec0
	sub_82F32EC0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F9F6C0:
	// lwz r29,36(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + int32_t(36) );
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82f9f6f8
	if (!cr6.gt) goto loc_82F9F6F8;
	// addic. r31,r29,-1
	xer.ca = r29.u32 > 0;
	r31.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82f9f6f8
	if (cr0.lt) goto loc_82F9F6F8;
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// rlwinm r30,r31,4,0,27
	r30.u64 = rotl64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
loc_82F9F6DC:
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(32) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82f09630
	sub_82F09630(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// bge 0x82f9f6dc
	if (!cr0.lt) goto loc_82F9F6DC;
loc_82F9F6F8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// addi r28,r11,-3936
	r28.s64 = r11.s64 + -3936;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r25.u32);
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// addi r30,r11,-32
	r30.s64 = r11.s64 + -32;
	// bl 0x82f67e90
	sub_82F67E90(ctx, base);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f680d8
	sub_82F680D8(ctx, base);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r11,r11,-5240
	r11.s64 = r11.s64 + -5240;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// ble cr6,0x82f9f798
	if (!cr6.gt) goto loc_82F9F798;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82f9f798
	if (cr6.eq) goto loc_82F9F798;
loc_82F9F788:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82f9f788
	if (!cr0.eq) goto loc_82F9F788;
loc_82F9F798:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82f9f7ac
	if (cr6.lt) goto loc_82F9F7AC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82F9F7AC:
	// lbz r11,61(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 61);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82f9f7c0
	if (cr0.eq) goto loc_82F9F7C0;
	// stb r24,60(r26)
	PPC_STORE_U8(r26.u32 + 60, r24.u8);
	// b 0x82f9f7f4
	goto loc_82F9F7F4;
loc_82F9F7C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82f9f040
	sub_82F9F040(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82f9f7f0
	if (!cr6.gt) goto loc_82F9F7F0;
	// lfs f0,48(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 48);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,48(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 48, temp.u32);
	// b 0x82f9f7f4
	goto loc_82F9F7F4;
loc_82F9F7F0:
	// stfs f31,48(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r26.u32 + 48, temp.u32);
loc_82F9F7F4:
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82f9f818
	if (cr6.eq) goto loc_82F9F818;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9F818:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82f9f838
	if (cr6.eq) goto loc_82F9F838;
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F9F838:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9F840:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82F9F844:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82F9F3F8) {
	__imp__sub_82F9F3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9F858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9fa50
	if (cr6.lt) goto loc_82F9FA50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82f9fa50
	if (!cr6.eq) goto loc_82F9FA50;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f9f8f0
	if (cr0.eq) goto loc_82F9F8F0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// addi r30,r11,120
	r30.s64 = r11.s64 + 120;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82f9f1b8
	sub_82F9F1B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82f9f8f4
	goto loc_82F9F8F4;
loc_82F9F8F0:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_82F9F8F4:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9f904
	if (cr0.eq) goto loc_82F9F904;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
loc_82F9F904:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f9f96c
	if (cr6.eq) goto loc_82F9F96C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f9f93c
	if (cr0.eq) goto loc_82F9F93C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F9F93C:
	// lwz r30,56(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9f968
	if (cr6.eq) goto loc_82F9F968;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bgt 0x82f9f968
	if (cr0.gt) goto loc_82F9F968;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9F968:
	// stw r29,56(r27)
	PPC_STORE_U32(r27.u32 + 56, r29.u32);
loc_82F9F96C:
	// li r4,1
	ctx.r4.s64 = 1;
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
	// li r11,1
	r11.s64 = 1;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// li r12,44
	r12.s64 = 44;
	// stfiwx f0,r27,r12
	PPC_STORE_U32(r27.u32 + r12.u32, f0.u32);
	// stb r11,61(r27)
	PPC_STORE_U8(r27.u32 + 61, r11.u8);
	// li r30,2
	r30.s64 = 2;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82f9f9f8
	if (!cr6.gt) goto loc_82F9F9F8;
	// addi r29,r27,32
	r29.s64 = r27.s64 + 32;
loc_82F9F9AC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82f9f9ac
	if (cr6.lt) goto loc_82F9F9AC;
loc_82F9F9F8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f38450
	sub_82F38450(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	// lwa r11,44(r27)
	r11.s64 = int32_t(PPC_LOAD_U32(r27.u32 + 44));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,-16936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// stfs f0,48(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 48, temp.u32);
loc_82F9FA50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9F858) {
	__imp__sub_82F9F858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r27,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r27.u8);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82f9fdac
	if (cr6.lt) goto loc_82F9FDAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82f9fb08
	if (!cr6.eq) goto loc_82F9FB08;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f9faf4
	if (cr0.eq) goto loc_82F9FAF4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// addi r30,r11,120
	r30.s64 = r11.s64 + 120;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ae90
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82f9f1b8
	sub_82F9F1B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F9FAF4:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9fc44
	if (cr0.eq) goto loc_82F9FC44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// b 0x82f9fc44
	goto loc_82F9FC44;
loc_82F9FB08:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82f9fb90
	if (!cr6.eq) goto loc_82F9FB90;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f9fb80
	if (cr0.eq) goto loc_82F9FB80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,2
	r28.s64 = 2;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82f9f258
	sub_82F9F258(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F9FB80:
	// rlwinm. r11,r28,0,30,30
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9fc40
	if (cr0.eq) goto loc_82F9FC40;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82f9fc1c
	goto loc_82F9FC1C;
loc_82F9FB90:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x82f9fdac
	if (!cr6.eq) goto loc_82F9FDAC;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82f9fc10
	if (cr0.eq) goto loc_82F9FC10;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,4
	r28.s64 = 4;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,24(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82f9f328
	sub_82F9F328(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82F9FC10:
	// rlwinm. r11,r28,0,29,29
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82f9fc40
	if (cr0.eq) goto loc_82F9FC40;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82F9FC1C:
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
	// bne cr6,0x82f9fc40
	if (!cr6.eq) goto loc_82F9FC40;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82F9FC40:
	// li r26,2
	r26.s64 = 2;
loc_82F9FC44:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bgt cr6,0x82f9fc6c
	if (cr6.gt) goto loc_82F9FC6C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82f9fdac
	if (cr6.eq) goto loc_82F9FDAC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82f38a10
	sub_82F38A10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// b 0x82f9fdac
	goto loc_82F9FDAC;
loc_82F9FC6C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f9fcd4
	if (cr6.eq) goto loc_82F9FCD4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82f63440
	sub_82F63440(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82f9fca4
	if (cr0.eq) goto loc_82F9FCA4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82F9FCA4:
	// lwz r30,56(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(56) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82f9fcd0
	if (cr6.eq) goto loc_82F9FCD0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bgt 0x82f9fcd0
	if (cr0.gt) goto loc_82F9FCD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f605b0
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82F9FCD0:
	// stw r29,56(r27)
	PPC_STORE_U32(r27.u32 + 56, r29.u32);
loc_82F9FCD4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f6b480
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = uint64_t(int32_t(std::trunc(ctx.f1.f64)));
	// addi r30,r26,1
	r30.s64 = r26.s64 + 1;
	// li r12,44
	r12.s64 = 44;
	// stfiwx f0,r27,r12
	PPC_STORE_U32(r27.u32 + r12.u32, f0.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82f9fd54
	if (!cr6.lt) goto loc_82F9FD54;
	// addi r29,r27,32
	r29.s64 = r27.s64 + 32;
loc_82F9FD08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82f167d8
	sub_82F167D8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82f9fd08
	if (cr6.lt) goto loc_82F9FD08;
loc_82F9FD54:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82f38450
	sub_82F38450(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82f04200
	sub_82F04200(ctx, base);
	// lwa r11,44(r27)
	r11.s64 = int32_t(PPC_LOAD_U32(r27.u32 + 44));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,-16936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16936);
	f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// stfs f0,48(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 48, temp.u32);
loc_82F9FDAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82F9FA58) {
	__imp__sub_82F9FA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f9fdfc
	if (!cr6.eq) goto loc_82F9FDFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9FDFC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
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

PPC_WEAK_FUNC(sub_82F9FDB8) {
	__imp__sub_82F9FDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FE28) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9fe50
	if (cr0.eq) goto loc_82F9FE50;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19032
	ctx.r4.s64 = r11.s64 + 19032;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FE50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FE28) {
	__imp__sub_82F9FE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FE60) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9fe88
	if (cr0.eq) goto loc_82F9FE88;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19056
	ctx.r4.s64 = r11.s64 + 19056;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FE88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FE60) {
	__imp__sub_82F9FE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FE98) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9fec0
	if (cr0.eq) goto loc_82F9FEC0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19076
	ctx.r4.s64 = r11.s64 + 19076;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FEC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FE98) {
	__imp__sub_82F9FE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FED0) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9fef8
	if (cr0.eq) goto loc_82F9FEF8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19108
	ctx.r4.s64 = r11.s64 + 19108;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FEF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FED0) {
	__imp__sub_82F9FED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FF08) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9ff30
	if (cr0.eq) goto loc_82F9FF30;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19140
	ctx.r4.s64 = r11.s64 + 19140;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FF30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FF08) {
	__imp__sub_82F9FF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FF40) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9ff68
	if (cr0.eq) goto loc_82F9FF68;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19164
	ctx.r4.s64 = r11.s64 + 19164;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FF68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FF40) {
	__imp__sub_82F9FF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FF78) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9ffa0
	if (cr0.eq) goto loc_82F9FFA0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19188
	ctx.r4.s64 = r11.s64 + 19188;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FFA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FF78) {
	__imp__sub_82F9FF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FFB0) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82f9ffd8
	if (cr0.eq) goto loc_82F9FFD8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19212
	ctx.r4.s64 = r11.s64 + 19212;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82F9FFD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FFB0) {
	__imp__sub_82F9FFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FFE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82F9FFE8) {
	__imp__sub_82F9FFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82F9FFF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
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
	// addi r11,r11,23760
	r11.s64 = r11.s64 + 23760;
	// addi r10,r10,19232
	ctx.r10.s64 = ctx.r10.s64 + 19232;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,23
	r11.s64 = 23;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r28,r30,120
	r28.s64 = r30.s64 + 120;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82f0ad10
	sub_82F0AD10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// beq cr6,0x82fa0084
	if (cr6.eq) goto loc_82FA0084;
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
loc_82FA0084:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82F9FFF0) {
	__imp__sub_82F9FFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0090) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa00bc
	if (cr0.eq) goto loc_82FA00BC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19312
	ctx.r4.s64 = r11.s64 + 19312;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA00BC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa00f8
	if (cr0.eq) goto loc_82FA00F8;
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f9fff0
	sub_82F9FFF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82fa00fc
	goto loc_82FA00FC;
loc_82FA00F8:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82FA00FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82fa0158
	if (!cr6.gt) goto loc_82FA0158;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82fa0158
	if (!cr6.gt) goto loc_82FA0158;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
loc_82FA0158:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa016c
	if (cr6.lt) goto loc_82FA016C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA016C:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa0180
	if (cr6.lt) goto loc_82FA0180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA0180:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fa01a0
	if (cr6.eq) goto loc_82FA01A0;
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
loc_82FA01A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA0090) {
	__imp__sub_82FA0090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA01A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,19408
	r11.s64 = r11.s64 + 19408;
	// addi r10,r10,19328
	ctx.r10.s64 = ctx.r10.s64 + 19328;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
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
	// addi r28,r31,60
	r28.s64 = r31.s64 + 60;
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
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
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
	// bl 0x82f68b10
	sub_82F68B10(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa0260
	if (cr6.lt) goto loc_82FA0260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA0260:
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
	// blt cr6,0x82fa02c0
	if (cr6.lt) goto loc_82FA02C0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA02C0:
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

PPC_WEAK_FUNC(sub_82FA01A8) {
	__imp__sub_82FA01A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA02E0) {
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
	// addi r11,r11,19408
	r11.s64 = r11.s64 + 19408;
	// addi r10,r10,19328
	ctx.r10.s64 = ctx.r10.s64 + 19328;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fa0320
	if (cr6.eq) goto loc_82FA0320;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82FA0320:
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA02E0) {
	__imp__sub_82FA02E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0350) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x82fa01a8
	sub_82FA01A8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r10,19408
	ctx.r10.s64 = ctx.r10.s64 + 19408;
	// addi r9,r9,19328
	ctx.r9.s64 = ctx.r9.s64 + 19328;
	// addi r30,r11,18960
	r30.s64 = r11.s64 + 18960;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r9.u32);
	// addi r26,r27,16
	r26.s64 = r27.s64 + 16;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,18960(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(18960) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fa0498
	if (cr6.eq) goto loc_82FA0498;
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
loc_82FA03A8:
	// li r11,6
	r11.s64 = 6;
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa03f4
	if (cr0.eq) goto loc_82FA03F4;
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
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82f6a280
	sub_82F6A280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82fa03f8
	goto loc_82FA03F8;
loc_82FA03F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FA03F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67ef0
	sub_82F67EF0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ad40
	sub_82F6AD40(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f88220
	sub_82F88220(ctx, base);
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
	// bne cr6,0x82fa0464
	if (!cr6.eq) goto loc_82FA0464;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA0464:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa0478
	if (cr6.lt) goto loc_82FA0478;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA0478:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// rlwinm r29,r24,3,0,28
	r29.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r29,r30
	r28.u64 = r29.u64 + r30.u64;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa03a8
	if (!cr6.eq) goto loc_82FA03A8;
loc_82FA0498:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FA0350) {
	__imp__sub_82FA0350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA04A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fa04b0
	sub_82FA04B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FA04A8) {
	__imp__sub_82FA04A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA04B0) {
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
	// bl 0x82fa02e0
	sub_82FA02E0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa04e0
	if (cr0.eq) goto loc_82FA04E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA04E0:
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

PPC_WEAK_FUNC(sub_82FA04B0) {
	__imp__sub_82FA04B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0500) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0528
	if (cr0.eq) goto loc_82FA0528;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19600
	ctx.r4.s64 = r11.s64 + 19600;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA0528:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0500) {
	__imp__sub_82FA0500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0538) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0560
	if (cr0.eq) goto loc_82FA0560;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19612
	ctx.r4.s64 = r11.s64 + 19612;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA0560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0538) {
	__imp__sub_82FA0538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0570) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0598
	if (cr0.eq) goto loc_82FA0598;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19632
	ctx.r4.s64 = r11.s64 + 19632;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA0598:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0570) {
	__imp__sub_82FA0570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA05A8) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa05d0
	if (cr0.eq) goto loc_82FA05D0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19656
	ctx.r4.s64 = r11.s64 + 19656;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA05D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA05A8) {
	__imp__sub_82FA05A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA05E0) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0608
	if (cr0.eq) goto loc_82FA0608;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19680
	ctx.r4.s64 = r11.s64 + 19680;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA0608:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA05E0) {
	__imp__sub_82FA05E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0618) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0640
	if (cr0.eq) goto loc_82FA0640;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19700
	ctx.r4.s64 = r11.s64 + 19700;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA0640:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0618) {
	__imp__sub_82FA0618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0650) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0678
	if (cr0.eq) goto loc_82FA0678;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19712
	ctx.r4.s64 = r11.s64 + 19712;
	// bl 0x82f9fdb8
	sub_82F9FDB8(ctx, base);
loc_82FA0678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0650) {
	__imp__sub_82FA0650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0688) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa06b0
	if (cr0.eq) goto loc_82FA06B0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19728
	ctx.r4.s64 = r11.s64 + 19728;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
loc_82FA06B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0688) {
	__imp__sub_82FA0688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA06C0) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa06e8
	if (cr0.eq) goto loc_82FA06E8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19772
	ctx.r4.s64 = r11.s64 + 19772;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
loc_82FA06E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA06C0) {
	__imp__sub_82FA06C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA06F8) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0720
	if (cr0.eq) goto loc_82FA0720;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,19804
	ctx.r4.s64 = r11.s64 + 19804;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
loc_82FA0720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA06F8) {
	__imp__sub_82FA06F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0730) {
	PPC_FUNC_PROLOGUE();
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA0730) {
	__imp__sub_82FA0730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0738) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,19920
	r11.s64 = r11.s64 + 19920;
	// addi r10,r10,19840
	ctx.r10.s64 = ctx.r10.s64 + 19840;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
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
	// addi r28,r31,60
	r28.s64 = r31.s64 + 60;
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
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
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
	// bl 0x82f68b10
	sub_82F68B10(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa07f0
	if (cr6.lt) goto loc_82FA07F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA07F0:
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
	// blt cr6,0x82fa0850
	if (cr6.lt) goto loc_82FA0850;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA0850:
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

PPC_WEAK_FUNC(sub_82FA0738) {
	__imp__sub_82FA0738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0870) {
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
	// addi r11,r11,19920
	r11.s64 = r11.s64 + 19920;
	// addi r10,r10,19840
	ctx.r10.s64 = ctx.r10.s64 + 19840;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fa08b0
	if (cr6.eq) goto loc_82FA08B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82FA08B0:
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA0870) {
	__imp__sub_82FA0870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA08E0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x82fa0738
	sub_82FA0738(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r10,19920
	ctx.r10.s64 = ctx.r10.s64 + 19920;
	// addi r9,r9,19840
	ctx.r9.s64 = ctx.r9.s64 + 19840;
	// addi r30,r11,19520
	r30.s64 = r11.s64 + 19520;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r9.u32);
	// addi r26,r27,16
	r26.s64 = r27.s64 + 16;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,19520(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(19520) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fa0a28
	if (cr6.eq) goto loc_82FA0A28;
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
loc_82FA0938:
	// li r11,6
	r11.s64 = 6;
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa0984
	if (cr0.eq) goto loc_82FA0984;
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
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82f6a280
	sub_82F6A280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82fa0988
	goto loc_82FA0988;
loc_82FA0984:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FA0988:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67ef0
	sub_82F67EF0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ad40
	sub_82F6AD40(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f88220
	sub_82F88220(ctx, base);
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
	// bne cr6,0x82fa09f4
	if (!cr6.eq) goto loc_82FA09F4;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA09F4:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa0a08
	if (cr6.lt) goto loc_82FA0A08;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA0A08:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// rlwinm r29,r24,3,0,28
	r29.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r29,r30
	r28.u64 = r29.u64 + r30.u64;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa0938
	if (!cr6.eq) goto loc_82FA0938;
loc_82FA0A28:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FA08E0) {
	__imp__sub_82FA08E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0A38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fa0a40
	sub_82FA0A40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FA0A38) {
	__imp__sub_82FA0A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0A40) {
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
	// bl 0x82fa0870
	sub_82FA0870(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa0a70
	if (cr0.eq) goto loc_82FA0A70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA0A70:
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

PPC_WEAK_FUNC(sub_82FA0A40) {
	__imp__sub_82FA0A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0A90) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82f88518
	sub_82F88518(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f88a68
	sub_82F88A68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA0A90) {
	__imp__sub_82FA0A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82fa0b04
	if (!cr6.eq) goto loc_82FA0B04;
	// li r11,0
	r11.s64 = 0;
loc_82FA0B04:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f1,48(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// lfd f0,3376(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82fa0b30
	if (!cr6.lt) goto loc_82FA0B30;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82fa0b38
	goto loc_82FA0B38;
loc_82FA0B30:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82FA0B38:
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

PPC_WEAK_FUNC(sub_82FA0AE0) {
	__imp__sub_82FA0AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x82fa0b74
	if (!cr6.eq) goto loc_82FA0B74;
	// li r11,0
	r11.s64 = 0;
loc_82FA0B74:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f1,56(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// lfd f0,3376(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82fa0ba0
	if (!cr6.lt) goto loc_82FA0BA0;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82fa0ba8
	goto loc_82FA0BA8;
loc_82FA0BA0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// bl 0x82f04200
	sub_82F04200(ctx, base);
loc_82FA0BA8:
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

PPC_WEAK_FUNC(sub_82FA0B50) {
	__imp__sub_82FA0B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0BC0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fa0bfc
	if (!cr6.eq) goto loc_82FA0BFC;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
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
	// b 0x82fa0ca4
	goto loc_82FA0CA4;
loc_82FA0BFC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x82fa0c10
	if (!cr6.eq) goto loc_82FA0C10;
	// li r30,0
	r30.s64 = 0;
loc_82FA0C10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// stfd f0,48(r30)
	PPC_STORE_U64(r30.u32 + 48, f0.u64);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82f34960
	sub_82F34960(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa0ca4
	if (!cr6.eq) goto loc_82FA0CA4;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA0CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA0BC0) {
	__imp__sub_82FA0BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0CB0) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82f12260
	sub_82F12260(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ef7ed0
	sub_82EF7ED0(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r11,-1544
	ctx.r4.s64 = r11.s64 + -1544;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef85e0
	sub_82EF85E0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7c30
	sub_82EF7C30(ctx, base);
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
	// bne cr6,0x82fa0d74
	if (!cr6.eq) goto loc_82FA0D74;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA0D74:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82f12260
	sub_82F12260(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ef7ed0
	sub_82EF7ED0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r11,10152
	ctx.r4.s64 = r11.s64 + 10152;
	// bl 0x82ef8018
	sub_82EF8018(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r31,-1
	r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA0DB8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa0db8
	if (!cr0.eq) goto loc_82FA0DB8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa0de4
	if (!cr0.eq) goto loc_82FA0DE4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA0DE4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA0DF0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa0df0
	if (!cr0.eq) goto loc_82FA0DF0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa0e1c
	if (!cr0.eq) goto loc_82FA0E1C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA0E1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA0CB0) {
	__imp__sub_82FA0CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA0E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ef7210
	sub_82EF7210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fa0edc
	if (!cr0.eq) goto loc_82FA0EDC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r31,-1
	r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA0E70:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa0e70
	if (!cr0.eq) goto loc_82FA0E70;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa0e9c
	if (!cr0.eq) goto loc_82FA0E9C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA0E9C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA0EA8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa0ea8
	if (!cr0.eq) goto loc_82FA0EA8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa0ed4
	if (!cr0.eq) goto loc_82FA0ED4;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA0ED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fa1174
	goto loc_82FA1174;
loc_82FA0EDC:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// li r28,0
	r28.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// mr r26,r28
	r26.u64 = r28.u64;
	// li r27,4
	r27.s64 = 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fa1030
	if (cr0.eq) goto loc_82FA1030;
loc_82FA0EFC:
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bne cr6,0x82fa0f10
	if (!cr6.eq) goto loc_82FA0F10;
	// li r4,10
	ctx.r4.s64 = 10;
loc_82FA0F10:
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// bne cr6,0x82fa0ff0
	if (!cr6.eq) goto loc_82FA0FF0;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
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
	// bne cr6,0x82fa0fac
	if (!cr6.eq) goto loc_82FA0FAC;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA0FAC:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa0fc0
	if (cr6.lt) goto loc_82FA0FC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA0FC0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82fa0fd8
	if (!cr0.eq) goto loc_82FA0FD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA0FD8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef85e0
	sub_82EF85E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef85e0
	sub_82EF85E0(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x82fa1018
	goto loc_82FA1018;
loc_82FA0FF0:
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82fa1010
	if (cr0.eq) goto loc_82FA1010;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// bne cr6,0x82fa1008
	if (!cr6.eq) goto loc_82FA1008;
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x82fa1018
	goto loc_82FA1018;
loc_82FA1008:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82fa1014
	goto loc_82FA1014;
loc_82FA1010:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82FA1014:
	// bl 0x82ef8150
	sub_82EF8150(ctx, base);
loc_82FA1018:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x82fa0efc
	if (cr6.lt) goto loc_82FA0EFC;
loc_82FA1030:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7210
	sub_82EF7210(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa10fc
	if (cr0.eq) goto loc_82FA10FC;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r27.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f040d8
	sub_82F040D8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
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
	// bne cr6,0x82fa10d0
	if (!cr6.eq) goto loc_82FA10D0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA10D0:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa10e4
	if (cr6.lt) goto loc_82FA10E4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA10E4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bne 0x82fa10fc
	if (!cr0.eq) goto loc_82FA10FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA10FC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r31,-1
	r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA110C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa110c
	if (!cr0.eq) goto loc_82FA110C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa1138
	if (!cr0.eq) goto loc_82FA1138;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA1138:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA1144:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa1144
	if (!cr0.eq) goto loc_82FA1144;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa1170
	if (!cr0.eq) goto loc_82FA1170;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA1170:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FA1174:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FA0E28) {
	__imp__sub_82FA0E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1180) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa11a8
	if (cr0.eq) goto loc_82FA11A8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,20032
	ctx.r4.s64 = r11.s64 + 20032;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
loc_82FA11A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA1180) {
	__imp__sub_82FA1180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA11B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82fa12b8
	if (!cr6.gt) goto loc_82FA12B8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// bne cr6,0x82fa11e8
	if (!cr6.eq) goto loc_82FA11E8;
	// li r31,0
	r31.s64 = 0;
loc_82FA11E8:
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f667f8
	sub_82F667F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82f12280
	sub_82F12280(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bne cr6,0x82fa1248
	if (!cr6.eq) goto loc_82FA1248;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FA1248:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82fa0e28
	sub_82FA0E28(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA1264:
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
	// bne 0x82fa1264
	if (!cr0.eq) goto loc_82FA1264;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa1290
	if (!cr0.eq) goto loc_82FA1290;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA1290:
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
	// bne cr6,0x82fa12b8
	if (!cr6.eq) goto loc_82FA12B8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA12B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA11B8) {
	__imp__sub_82FA11B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA12C0) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa12e8
	if (cr0.eq) goto loc_82FA12E8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,20080
	ctx.r4.s64 = r11.s64 + 20080;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
loc_82FA12E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA12C0) {
	__imp__sub_82FA12C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA12F8) {
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
	// bl 0x82f6aee0
	sub_82F6AEE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa1320
	if (cr0.eq) goto loc_82FA1320;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r11,20116
	ctx.r4.s64 = r11.s64 + 20116;
	// bl 0x82f14df8
	sub_82F14DF8(ctx, base);
loc_82FA1320:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA12F8) {
	__imp__sub_82FA12F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1330) {
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
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x82fa135c
	if (!cr6.eq) goto loc_82FA135C;
	// li r30,0
	r30.s64 = 0;
loc_82FA135C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,20024
	ctx.r10.s64 = ctx.r10.s64 + 20024;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7210
	sub_82EF7210(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82ef8b20
	sub_82EF8B20(ctx, base);
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
	// bne 0x82fa13f4
	if (!cr0.eq) goto loc_82FA13F4;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA13F4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r10,r10,-5336
	ctx.r10.s64 = ctx.r10.s64 + -5336;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA1410:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82fa1410
	if (!cr0.eq) goto loc_82FA1410;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa143c
	if (!cr0.eq) goto loc_82FA143C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA143C:
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

PPC_WEAK_FUNC(sub_82FA1330) {
	__imp__sub_82FA1330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1458) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f18d30
	sub_82F18D30(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// bne cr6,0x82fa148c
	if (!cr6.eq) goto loc_82FA148C;
	// li r28,0
	r28.s64 = 0;
loc_82FA148C:
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
	// addi r5,r10,17604
	ctx.r5.s64 = ctx.r10.s64 + 17604;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x82fa1504
	if (!cr6.eq) goto loc_82FA1504;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA1504:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA1458) {
	__imp__sub_82FA1458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1518) {
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
	// stb r5,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r5.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r1,167
	ctx.r4.s64 = ctx.r1.s64 + 167;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f18c50
	sub_82F18C50(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// bne cr6,0x82fa1550
	if (!cr6.eq) goto loc_82FA1550;
	// li r28,0
	r28.s64 = 0;
loc_82FA1550:
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
	// addi r5,r10,17668
	ctx.r5.s64 = ctx.r10.s64 + 17668;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r9,536
	ctx.r4.s64 = ctx.r9.s64 + 536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x82fa15c8
	if (!cr6.eq) goto loc_82FA15C8;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA15C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA1518) {
	__imp__sub_82FA1518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA15D8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x82fa15fc
	if (!cr6.eq) goto loc_82FA15FC;
	// li r30,0
	r30.s64 = 0;
loc_82FA15FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
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
	// bne cr6,0x82fa165c
	if (!cr6.eq) goto loc_82FA165C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA165C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bne cr6,0x82fa16a4
	if (!cr6.eq) goto loc_82FA16A4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FA16A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82fa0e28
	sub_82FA0E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82fa1518
	sub_82FA1518(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r31,-1
	r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA16D0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa16d0
	if (!cr0.eq) goto loc_82FA16D0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa16fc
	if (!cr0.eq) goto loc_82FA16FC;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA16FC:
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
	// bne cr6,0x82fa1724
	if (!cr6.eq) goto loc_82FA1724;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA1724:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA1730:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa1730
	if (!cr0.eq) goto loc_82FA1730;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa175c
	if (!cr0.eq) goto loc_82FA175C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA175C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA15D8) {
	__imp__sub_82FA15D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1768) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,23760
	ctx.r10.s64 = ctx.r10.s64 + 23760;
	// addi r9,r9,20160
	ctx.r9.s64 = ctx.r9.s64 + 20160;
	// lfd f0,3240(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3240);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfd f0,48(r31)
	PPC_STORE_U64(r31.u32 + 48, f0.u64);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stfd f0,56(r31)
	PPC_STORE_U64(r31.u32 + 56, f0.u64);
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

PPC_WEAK_FUNC(sub_82FA1768) {
	__imp__sub_82FA1768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA17C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA17C8) {
	__imp__sub_82FA17C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA17D0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,23760
	r11.s64 = r11.s64 + 23760;
	// addi r10,r10,20160
	ctx.r10.s64 = ctx.r10.s64 + 20160;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r10,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// addi r31,r29,120
	r31.s64 = r29.s64 + 120;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(120) );
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82f0ad10
	sub_82F0AD10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82f04b00
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82fa1864
	if (cr6.eq) goto loc_82FA1864;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FA1864:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f929e0
	sub_82F929E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f0,3240(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3240);
	// stfd f0,48(r28)
	PPC_STORE_U64(r28.u32 + 48, f0.u64);
	// stfd f0,56(r28)
	PPC_STORE_U64(r28.u32 + 56, f0.u64);
	// bl 0x82f922b8
	sub_82F922B8(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,20252
	ctx.r5.s64 = ctx.r10.s64 + 20252;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,20240
	ctx.r5.s64 = ctx.r10.s64 + 20240;
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f88220
	sub_82F88220(ctx, base);
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
	// bne cr6,0x82fa1924
	if (!cr6.eq) goto loc_82FA1924;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA1924:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa1938
	if (cr6.lt) goto loc_82FA1938;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA1938:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// bne 0x82fa1950
	if (!cr0.eq) goto loc_82FA1950;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA1950:
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r10,10992
	ctx.r5.s64 = ctx.r10.s64 + 10992;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f88220
	sub_82F88220(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
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
	// bne cr6,0x82fa19b0
	if (!cr6.eq) goto loc_82FA19B0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA19B0:
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa19c4
	if (cr6.lt) goto loc_82FA19C4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA19C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82FA17D0) {
	__imp__sub_82FA17D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA19D0) {
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
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa1a20
	if (cr0.eq) goto loc_82FA1A20;
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
	// bl 0x82fa17d0
	sub_82FA17D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82fa1a24
	goto loc_82FA1A24;
loc_82FA1A20:
	// li r31,0
	r31.s64 = 0;
loc_82FA1A24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa1a50
	if (cr6.eq) goto loc_82FA1A50;
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
loc_82FA1A50:
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

PPC_WEAK_FUNC(sub_82FA19D0) {
	__imp__sub_82FA19D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1A68) {
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
	// bl 0x82fa1768
	sub_82FA1768(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,20368
	r11.s64 = r11.s64 + 20368;
	// addi r10,r10,20288
	ctx.r10.s64 = ctx.r10.s64 + 20288;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
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
	// addi r28,r31,76
	r28.s64 = r31.s64 + 76;
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
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
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
	// bl 0x82f98880
	sub_82F98880(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa1b1c
	if (cr6.lt) goto loc_82FA1B1C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA1B1C:
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
	// blt cr6,0x82fa1b7c
	if (cr6.lt) goto loc_82FA1B7C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA1B7C:
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

PPC_WEAK_FUNC(sub_82FA1A68) {
	__imp__sub_82FA1A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1B98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bne cr6,0x82fa1bc0
	if (!cr6.eq) goto loc_82FA1BC0;
loc_82FA1BB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fa1c80
	goto loc_82FA1C80;
loc_82FA1BC0:
	// lwz r11,88(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fa1c7c
	if (cr6.eq) goto loc_82FA1C7C;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82fa1c7c
	if (cr6.eq) goto loc_82FA1C7C;
	// li r30,0
	r30.s64 = 0;
loc_82FA1BE0:
	// lwz r11,88(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(88) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82f68a70
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa1c6c
	if (cr6.eq) goto loc_82FA1C6C;
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
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
	// bne 0x82fa1c88
	if (!cr0.eq) goto loc_82FA1C88;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FA1C6C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82fa1be0
	if (cr6.lt) goto loc_82FA1BE0;
loc_82FA1C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FA1C80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82FA1C88:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82fa1bb8
	goto loc_82FA1BB8;
}

PPC_WEAK_FUNC(sub_82FA1B98) {
	__imp__sub_82FA1B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1C90) {
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
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa1cf4
	if (!cr6.eq) goto loc_82FA1CF4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82fa1cf4
	if (!cr6.eq) goto loc_82FA1CF4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fa1ce8
	if (cr0.eq) goto loc_82FA1CE8;
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
	// b 0x82fa1cec
	goto loc_82FA1CEC;
loc_82FA1CE8:
	// li r31,0
	r31.s64 = 0;
loc_82FA1CEC:
	// stw r31,72(r27)
	PPC_STORE_U32(r27.u32 + 72, r31.u32);
	// b 0x82fa1dec
	goto loc_82FA1DEC;
loc_82FA1CF4:
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
	// beq 0x82fa1dd8
	if (cr0.eq) goto loc_82FA1DD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82fa1d48
	if (cr0.eq) goto loc_82FA1D48;
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
loc_82FA1D48:
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(72) );
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
	// beq cr6,0x82fa1d94
	if (cr6.eq) goto loc_82FA1D94;
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
	// beq cr6,0x82fa1db4
	if (cr6.eq) goto loc_82FA1DB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82fa1db4
	if (!cr0.eq) goto loc_82FA1DB4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82fa1db0
	goto loc_82FA1DB0;
loc_82FA1D94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fa1db4
	if (cr6.eq) goto loc_82FA1DB4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bne 0x82fa1db4
	if (!cr0.eq) goto loc_82FA1DB4;
loc_82FA1DB0:
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA1DB4:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fa1dd8
	if (cr6.eq) goto loc_82FA1DD8;
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
loc_82FA1DD8:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa1dec
	if (cr6.lt) goto loc_82FA1DEC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA1DEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FA1C90) {
	__imp__sub_82FA1C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1DF8) {
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
	// addi r11,r11,20368
	r11.s64 = r11.s64 + 20368;
	// addi r10,r10,20288
	ctx.r10.s64 = ctx.r10.s64 + 20288;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fa1e38
	if (cr6.eq) goto loc_82FA1E38;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82FA1E38:
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA1DF8) {
	__imp__sub_82FA1DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1E68) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82fa1a68
	sub_82FA1A68(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,20368
	r11.s64 = r11.s64 + 20368;
	// addi r10,r10,20288
	ctx.r10.s64 = ctx.r10.s64 + 20288;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,19952
	ctx.r5.s64 = r11.s64 + 19952;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32006
	ctx.r10.s64 = -2097545216;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,5592
	ctx.r4.s64 = ctx.r10.s64 + 5592;
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,17604
	ctx.r5.s64 = r11.s64 + 17604;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa1f00
	if (cr6.lt) goto loc_82FA1F00;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA1F00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA1E68) {
	__imp__sub_82FA1E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1F10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fa1f18
	sub_82FA1F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FA1F10) {
	__imp__sub_82FA1F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1F18) {
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
	// bl 0x82fa1df8
	sub_82FA1DF8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa1f48
	if (cr0.eq) goto loc_82FA1F48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA1F48:
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

PPC_WEAK_FUNC(sub_82FA1F18) {
	__imp__sub_82FA1F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1F68) {
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
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

PPC_WEAK_FUNC(sub_82FA1F68) {
	__imp__sub_82FA1F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA1FB8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r28,2
	r28.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82fa2180
	if (cr6.lt) goto loc_82FA2180;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,23
	cr6.compare<int32_t>(ctx.r3.s32, 23, xer);
	// bne cr6,0x82fa201c
	if (!cr6.eq) goto loc_82FA201C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fa201c
	if (cr6.eq) goto loc_82FA201C;
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
loc_82FA201C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82fa2090
	if (!cr6.eq) goto loc_82FA2090;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fa20fc
	if (cr0.eq) goto loc_82FA20FC;
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
	// b 0x82fa20fc
	goto loc_82FA20FC;
loc_82FA2090:
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f161c0
	sub_82F161C0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fa20d4
	if (cr0.eq) goto loc_82FA20D4;
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
loc_82FA20D4:
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
	// bne cr6,0x82fa20fc
	if (!cr6.eq) goto loc_82FA20FC;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA20FC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa2158
	if (cr6.eq) goto loc_82FA2158;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82f34600
	sub_82F34600(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FA2158:
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
	// bne cr6,0x82fa2180
	if (!cr6.eq) goto loc_82FA2180;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FA1FB8) {
	__imp__sub_82FA1FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2188) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r29,2
	r29.s64 = 2;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82fa22d8
	if (cr6.lt) goto loc_82FA22D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82fa2210
	if (!cr6.eq) goto loc_82FA2210;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82f6adb0
	sub_82F6ADB0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fa227c
	if (cr0.eq) goto loc_82FA227C;
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
	// b 0x82fa227c
	goto loc_82FA227C;
loc_82FA2210:
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f161c0
	sub_82F161C0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fa2254
	if (cr0.eq) goto loc_82FA2254;
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
loc_82FA2254:
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
	// bne cr6,0x82fa227c
	if (!cr6.eq) goto loc_82FA227C;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA227C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa22d8
	if (cr6.eq) goto loc_82FA22D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// addi r28,r11,3224
	r28.s64 = r11.s64 + 3224;
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82f34600
	sub_82F34600(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FA22D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA2188) {
	__imp__sub_82FA2188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA22E0) {
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
	// bl 0x82fa2b58
	sub_82FA2B58(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA22E0) {
	__imp__sub_82FA22E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82FA2368:
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
	// bne 0x82fa2368
	if (!cr0.eq) goto loc_82FA2368;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa2394
	if (!cr0.eq) goto loc_82FA2394;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA2394:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa23a4
	if (cr0.eq) goto loc_82FA23A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
loc_82FA23A4:
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

PPC_WEAK_FUNC(sub_82FA2340) {
	__imp__sub_82FA2340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA23C0) {
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
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82fa24b4
	if (cr6.eq) goto loc_82FA24B4;
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
	// bne cr6,0x82fa24b4
	if (!cr6.eq) goto loc_82FA24B4;
loc_82FA2420:
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
	// bne cr6,0x82fa248c
	if (!cr6.eq) goto loc_82FA248C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
loc_82FA2460:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fa2484
	if (cr0.eq) goto loc_82FA2484;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82fa2460
	if (cr6.eq) goto loc_82FA2460;
loc_82FA2484:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82fa24ac
	if (cr0.eq) goto loc_82FA24AC;
loc_82FA248C:
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82fa24b4
	if (cr6.eq) goto loc_82FA24B4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// b 0x82fa2420
	goto loc_82FA2420;
loc_82FA24AC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82fa24b8
	goto loc_82FA24B8;
loc_82FA24B4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FA24B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FA23C0) {
	__imp__sub_82FA23C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA24C0) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa24f0
	if (!cr6.eq) goto loc_82FA24F0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fa2524
	goto loc_82FA2524;
loc_82FA24F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// and r5,r11,r10
	ctx.r5.u64 = r11.u64 & ctx.r10.u64;
	// bl 0x82fa23c0
	sub_82FA23C0(ctx, base);
loc_82FA2524:
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

PPC_WEAK_FUNC(sub_82FA24C0) {
	__imp__sub_82FA24C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2540) {
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
	// beq cr6,0x82fa25b0
	if (cr6.eq) goto loc_82FA25B0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82FA2568:
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
	// beq cr6,0x82fa2594
	if (cr6.eq) goto loc_82FA2594;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82fa2340
	sub_82FA2340(ctx, base);
	// li r11,-2
	r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82FA2594:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82fa2568
	if (!cr0.eq) goto loc_82FA2568;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82FA25B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA2540) {
	__imp__sub_82FA2540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA25B8) {
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
	// blt cr6,0x82fa25f0
	if (cr6.lt) goto loc_82FA25F0;
	// bl 0x82f08ad8
	sub_82F08AD8(ctx, base);
loc_82FA25F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fa2604
	if (cr6.eq) goto loc_82FA2604;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82f6ac50
	sub_82F6AC50(ctx, base);
loc_82FA2604:
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

PPC_WEAK_FUNC(sub_82FA25B8) {
	__imp__sub_82FA25B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2620) {
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
	// bl 0x82fa24c0
	sub_82FA24C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82fa2654
	if (cr0.lt) goto loc_82FA2654;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r3,4,0,27
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x82fa2658
	goto loc_82FA2658;
loc_82FA2654:
	// li r11,0
	r11.s64 = 0;
loc_82FA2658:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bne cr6,0x82fa2668
	if (!cr6.eq) goto loc_82FA2668;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FA2668:
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

PPC_WEAK_FUNC(sub_82FA2620) {
	__imp__sub_82FA2620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2680) {
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
	// bne cr6,0x82fa269c
	if (!cr6.eq) goto loc_82FA269C;
	// b 0x82fa27b8
	goto loc_82FA27B8;
loc_82FA269C:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x82fa26ac
	if (!cr6.lt) goto loc_82FA26AC;
	// li r31,8
	r31.s64 = 8;
	// b 0x82fa26f4
	goto loc_82FA26F4;
loc_82FA26AC:
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
loc_82FA26F4:
	// li r27,0
	r27.s64 = 0;
	// rlwinm r11,r31,4,0,27
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
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
	// beq cr6,0x82fa2744
	if (cr6.eq) goto loc_82FA2744;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82FA272C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// bne 0x82fa272c
	if (!cr0.eq) goto loc_82FA272C;
loc_82FA2744:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fa27a8
	if (cr6.eq) goto loc_82FA27A8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_82FA275C:
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
	// beq cr6,0x82fa2794
	if (cr6.eq) goto loc_82FA2794;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fa22e0
	sub_82FA22E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fa2340
	sub_82FA2340(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
loc_82FA2794:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x82fa275c
	if (!cr0.eq) goto loc_82FA275C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA27A8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_82FA27B8:
	// bl 0x82fa2540
	sub_82FA2540(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FA2680) {
	__imp__sub_82FA2680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA27C8) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa25b8
	sub_82FA25B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// bne cr6,0x82fa2800
	if (!cr6.eq) goto loc_82FA2800;
	// li r28,0
	r28.s64 = 0;
loc_82FA2800:
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
	// addi r5,r10,17580
	ctx.r5.s64 = ctx.r10.s64 + 17580;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r9,536
	ctx.r4.s64 = ctx.r9.s64 + 536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x82fa2878
	if (!cr6.eq) goto loc_82FA2878;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2878:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA27C8) {
	__imp__sub_82FA27C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2888) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa25b8
	sub_82FA25B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// bne cr6,0x82fa28c0
	if (!cr6.eq) goto loc_82FA28C0;
	// li r28,0
	r28.s64 = 0;
loc_82FA28C0:
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
	// addi r5,r10,17540
	ctx.r5.s64 = ctx.r10.s64 + 17540;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r9,536
	ctx.r4.s64 = ctx.r9.s64 + 536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x82fa2938
	if (!cr6.eq) goto loc_82FA2938;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2938:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f09c90
	sub_82F09C90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA2888) {
	__imp__sub_82FA2888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2948) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82fa2b50
	if (cr6.lt) goto loc_82FA2B50;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// stb r27,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r27.u8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,23
	cr6.compare<int32_t>(ctx.r3.s32, 23, xer);
	// bne cr6,0x82fa2b50
	if (!cr6.eq) goto loc_82FA2B50;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bne cr6,0x82fa29a8
	if (!cr6.eq) goto loc_82FA29A8;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82FA29A8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa29dc
	if (cr0.eq) goto loc_82FA29DC;
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82f88998
	sub_82F88998(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82FA29DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82fa2620
	sub_82FA2620(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA2A30:
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
	// bne 0x82fa2a30
	if (!cr0.eq) goto loc_82FA2A30;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa2a5c
	if (!cr0.eq) goto loc_82FA2A5C;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA2A5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fa2afc
	if (cr6.eq) goto loc_82FA2AFC;
	// lwa r10,0(r29)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 0));
	// li r28,3
	r28.s64 = 3;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r9,20472
	ctx.r5.s64 = ctx.r9.s64 + 20472;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa2ab4
	if (cr6.lt) goto loc_82FA2AB4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA2AB4:
	// lwa r9,4(r29)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 4));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// addi r5,r10,20460
	ctx.r5.s64 = ctx.r10.s64 + 20460;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa2afc
	if (cr6.lt) goto loc_82FA2AFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA2AFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
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
	// bne cr6,0x82fa2b30
	if (!cr6.eq) goto loc_82FA2B30;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2B30:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82fa2b50
	if (cr6.eq) goto loc_82FA2B50;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FA2B50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82FA2948) {
	__imp__sub_82FA2948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa2b84
	if (!cr6.eq) goto loc_82FA2B84;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fa2bac
	goto loc_82FA2BAC;
loc_82FA2B84:
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
	// ble cr6,0x82fa2bb4
	if (!cr6.gt) goto loc_82FA2BB4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FA2BAC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fa2680
	sub_82FA2680(ctx, base);
loc_82FA2BB4:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r28,r10,r31
	r28.u64 = ctx.r10.u64 & r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82fa2c34
	if (!cr6.eq) goto loc_82FA2C34;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82FA2C04:
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
	// bne 0x82fa2c04
	if (!cr0.eq) goto loc_82FA2C04;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// b 0x82fa2dc0
	goto loc_82FA2DC0;
loc_82FA2C34:
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r25,r28
	r25.u64 = r28.u64;
loc_82FA2C3C:
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// and r25,r10,r27
	r25.u64 = ctx.r10.u64 & r27.u64;
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82fa2c3c
	if (!cr6.eq) goto loc_82FA2C3C;
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r27
	r11.u64 = ctx.r3.u64 & r27.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82fa2d00
	if (!cr6.eq) goto loc_82FA2D00;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fa2cdc
	if (cr6.eq) goto loc_82FA2CDC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82FA2CB0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82fa2cb0
	if (!cr0.eq) goto loc_82FA2CB0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_82FA2CDC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
	// b 0x82fa2dc0
	goto loc_82FA2DC0;
loc_82FA2D00:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r27,4(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// and r11,r3,r27
	r11.u64 = ctx.r3.u64 & r27.u64;
	// b 0x82fa2d30
	goto loc_82FA2D30;
loc_82FA2D2C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82FA2D30:
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// bne cr6,0x82fa2d2c
	if (!cr6.eq) goto loc_82FA2D2C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fa2d98
	if (cr6.eq) goto loc_82FA2D98;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_82FA2D6C:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stwcx. r7,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82fa2d6c
	if (!cr0.eq) goto loc_82FA2D6C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_82FA2D98:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef7e30
	sub_82EF7E30(ctx, base);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// li r11,-1
	r11.s64 = -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82FA2DC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FA2B58) {
	__imp__sub_82FA2B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2DC8) {
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
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f18b70
	sub_82F18B70(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa25b8
	sub_82FA25B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// bne cr6,0x82fa2e10
	if (!cr6.eq) goto loc_82FA2E10;
	// li r28,0
	r28.s64 = 0;
loc_82FA2E10:
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
	// addi r5,r10,20484
	ctx.r5.s64 = ctx.r10.s64 + 20484;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r9,536
	ctx.r4.s64 = ctx.r9.s64 + 536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x82fa2e88
	if (!cr6.eq) goto loc_82FA2E88;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2E88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f1b430
	sub_82F1B430(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA2DC8) {
	__imp__sub_82FA2DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2E98) {
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
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82f18b70
	sub_82F18B70(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,536
	ctx.r4.s64 = r11.s64 + 536;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f18d30
	sub_82F18D30(ctx, base);
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
	// bne 0x82fa2f00
	if (!cr0.eq) goto loc_82FA2F00;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2F00:
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa25b8
	sub_82FA25B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// bne cr6,0x82fa2f1c
	if (!cr6.eq) goto loc_82FA2F1C;
	// li r28,0
	r28.s64 = 0;
loc_82FA2F1C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r5,r10,17568
	ctx.r5.s64 = ctx.r10.s64 + 17568;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r9,536
	ctx.r4.s64 = ctx.r9.s64 + 536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f92580
	sub_82F92580(ctx, base);
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
	// bne cr6,0x82fa2f94
	if (!cr6.eq) goto loc_82FA2F94;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA2F94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f1b4c8
	sub_82F1B4C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA2E98) {
	__imp__sub_82FA2E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA2FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fa2fd4
	if (!cr6.eq) goto loc_82FA2FD4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fa2ffc
	goto loc_82FA2FFC;
loc_82FA2FD4:
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
	// ble cr6,0x82fa3004
	if (!cr6.gt) goto loc_82FA3004;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FA2FFC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fa2680
	sub_82FA2680(ctx, base);
loc_82FA3004:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// and r28,r10,r31
	r28.u64 = ctx.r10.u64 & r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x82fa30c8
	if (!cr6.eq) goto loc_82FA30C8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
loc_82FA3048:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82fa3048
	if (!cr0.eq) goto loc_82FA3048;
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_82FA3078:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r7,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwcx. r6,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x82fa3078
	if (!cr0.eq) goto loc_82FA3078;
	// std r8,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r8.u64);
loc_82FA3098:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r7,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa3098
	if (!cr0.eq) goto loc_82FA3098;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa3234
	if (!cr0.eq) goto loc_82FA3234;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
	// b 0x82fa3234
	goto loc_82FA3234;
loc_82FA30C8:
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r25,r28
	r25.u64 = r28.u64;
loc_82FA30D0:
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// and r25,r10,r27
	r25.u64 = ctx.r10.u64 & r27.u64;
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// bne cr6,0x82fa30d0
	if (!cr6.eq) goto loc_82FA30D0;
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// and r11,r3,r27
	r11.u64 = ctx.r3.u64 & r27.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82fa3184
	if (!cr6.eq) goto loc_82FA3184;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fa3170
	if (cr6.eq) goto loc_82FA3170;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82FA3144:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82fa3144
	if (!cr0.eq) goto loc_82FA3144;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_82FA3170:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa1f68
	sub_82FA1F68(ctx, base);
	// stw r25,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r25.u32);
	// b 0x82fa3234
	goto loc_82FA3234;
loc_82FA3184:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r27,4(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	sub_82EF7468(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// and r11,r3,r27
	r11.u64 = ctx.r3.u64 & r27.u64;
	// b 0x82fa31b4
	goto loc_82FA31B4;
loc_82FA31B0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82FA31B4:
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// bne cr6,0x82fa31b0
	if (!cr6.eq) goto loc_82FA31B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fa321c
	if (cr6.eq) goto loc_82FA321C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
loc_82FA31F0:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stwcx. r7,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82fa31f0
	if (!cr0.eq) goto loc_82FA31F0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
loc_82FA321C:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa1f68
	sub_82FA1F68(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82FA3234:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FA2FA8) {
	__imp__sub_82FA2FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3240) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa2fa8
	sub_82FA2FA8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA3240) {
	__imp__sub_82FA3240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA32A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r31,r4,120
	r31.s64 = ctx.r4.s64 + 120;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82f0ad10
	sub_82F0AD10(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82fa331c
	if (cr6.eq) goto loc_82FA331C;
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
loc_82FA331C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f929e0
	sub_82F929E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA32A0) {
	__imp__sub_82FA32A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3330) {
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
	// addi r11,r11,20584
	r11.s64 = r11.s64 + 20584;
	// addi r10,r10,20504
	ctx.r10.s64 = ctx.r10.s64 + 20504;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82FA3330) {
	__imp__sub_82FA3330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3388) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA3388) {
	__imp__sub_82FA3388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fa38a0
	sub_82FA38A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FA3390) {
	__imp__sub_82FA3390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3398) {
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
	// addi r11,r11,20584
	r11.s64 = r11.s64 + 20584;
	// addi r10,r10,20504
	ctx.r10.s64 = ctx.r10.s64 + 20504;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fa32a0
	sub_82FA32A0(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA3398) {
	__imp__sub_82FA3398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r26.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa3520
	if (cr6.eq) goto loc_82FA3520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	sub_82EF7600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f60630
	sub_82F60630(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82ef7638
	sub_82EF7638(ctx, base);
	// addi r31,r29,48
	r31.s64 = r29.s64 + 48;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa2620
	sub_82FA2620(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r27,-1
	r27.s64 = -1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA3484:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa3484
	if (!cr0.eq) goto loc_82FA3484;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa34b0
	if (!cr0.eq) goto loc_82FA34B0;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA34B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82fa34c4
	if (cr6.eq) goto loc_82FA34C4;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r25.u32);
	// b 0x82fa34e8
	goto loc_82FA34E8;
loc_82FA34C4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa3240
	sub_82FA3240(ctx, base);
loc_82FA34E8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82FA34F4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82fa34f4
	if (!cr0.eq) goto loc_82FA34F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa3520
	if (!cr0.eq) goto loc_82FA3520;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA3520:
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f18b70
	sub_82F18B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x82f18b70
	sub_82F18B70(ctx, base);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fa25b8
	sub_82FA25B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne cr6,0x82fa3558
	if (!cr6.eq) goto loc_82FA3558;
	// li r29,0
	r29.s64 = 0;
loc_82FA3558:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r5,r10,17552
	ctx.r5.s64 = ctx.r10.s64 + 17552;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,120(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(120) );
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r4,r9,536
	ctx.r4.s64 = ctx.r9.s64 + 536;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-32
	r30.s64 = r11.s64 + -32;
	// bl 0x82f04130
	sub_82F04130(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f92580
	sub_82F92580(ctx, base);
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
	// bne cr6,0x82fa35d0
	if (!cr6.eq) goto loc_82FA35D0;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA35D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f1b4c8
	sub_82F1B4C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FA3408) {
	__imp__sub_82FA3408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA35E0) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fa3630
	if (cr0.eq) goto loc_82FA3630;
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
	// bl 0x82fa3398
	sub_82FA3398(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82fa3634
	goto loc_82FA3634;
loc_82FA3630:
	// li r31,0
	r31.s64 = 0;
loc_82FA3634:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// bne cr6,0x82fa3648
	if (!cr6.eq) goto loc_82FA3648;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82fa3650
	if (cr6.eq) goto loc_82FA3650;
loc_82FA3648:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// b 0x82fa3654
	goto loc_82FA3654;
loc_82FA3650:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FA3654:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f922b8
	sub_82F922B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6c328
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa3688
	if (cr6.eq) goto loc_82FA3688;
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
loc_82FA3688:
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

PPC_WEAK_FUNC(sub_82FA35E0) {
	__imp__sub_82FA35E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA36A0) {
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
	// bl 0x82fa3330
	sub_82FA3330(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,20688
	r11.s64 = r11.s64 + 20688;
	// addi r10,r10,20608
	ctx.r10.s64 = ctx.r10.s64 + 20608;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
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
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
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
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
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
	// bl 0x82faf9d0
	sub_82FAF9D0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa3754
	if (cr6.lt) goto loc_82FA3754;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA3754:
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
	// blt cr6,0x82fa37b4
	if (cr6.lt) goto loc_82FA37B4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA37B4:
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

PPC_WEAK_FUNC(sub_82FA36A0) {
	__imp__sub_82FA36A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA37D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fa3850
	sub_82FA3850(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FA37D0) {
	__imp__sub_82FA37D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA37D8) {
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
	// addi r11,r11,20688
	r11.s64 = r11.s64 + 20688;
	// addi r10,r10,20608
	ctx.r10.s64 = ctx.r10.s64 + 20608;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fa3818
	if (cr6.eq) goto loc_82FA3818;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	sub_82F0A3F0(ctx, base);
loc_82FA3818:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82f67f08
	sub_82F67F08(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82fa2540
	sub_82FA2540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA37D8) {
	__imp__sub_82FA37D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3850) {
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
	// bl 0x82fa37d8
	sub_82FA37D8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa3880
	if (cr0.eq) goto loc_82FA3880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA3880:
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

PPC_WEAK_FUNC(sub_82FA3850) {
	__imp__sub_82FA3850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA38A0) {
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
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82fa2540
	sub_82FA2540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f0afc8
	sub_82F0AFC8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa38dc
	if (cr0.eq) goto loc_82FA38DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA38DC:
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

PPC_WEAK_FUNC(sub_82FA38A0) {
	__imp__sub_82FA38A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA38F8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82fa36a0
	sub_82FA36A0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,20688
	r11.s64 = r11.s64 + 20688;
	// addi r10,r10,20608
	ctx.r10.s64 = ctx.r10.s64 + 20608;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,20428
	ctx.r5.s64 = r11.s64 + 20428;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA38F8) {
	__imp__sub_82FA38F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3950) {
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
	// lis r11,-32006
	r11.s64 = -2097545216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,13792
	ctx.r4.s64 = r11.s64 + 13792;
	// bl 0x82f6a308
	sub_82F6A308(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25712
	r11.s64 = r11.s64 + 25712;
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

PPC_WEAK_FUNC(sub_82FA3950) {
	__imp__sub_82FA3950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA39A0) {
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
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

PPC_WEAK_FUNC(sub_82FA39A0) {
	__imp__sub_82FA39A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA39D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32006
	r11.s64 = -2097545216;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,14752
	ctx.r4.s64 = r11.s64 + 14752;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	sub_82F6A308(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25712
	r11.s64 = r11.s64 + 25712;
	// addi r10,r10,20768
	ctx.r10.s64 = ctx.r10.s64 + 20768;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r10,16(r26)
	PPC_STORE_U32(r26.u32 + 16, ctx.r10.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// addi r28,r26,16
	r28.s64 = r26.s64 + 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,20756
	ctx.r5.s64 = r11.s64 + 20756;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f048d0
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa3a48
	if (cr6.lt) goto loc_82FA3A48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA3A48:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,20732
	r31.s64 = r11.s64 + 20732;
	// lwz r11,20732(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20732) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fa3ac8
	if (cr6.eq) goto loc_82FA3AC8;
	// mr r30,r31
	r30.u64 = r31.u64;
	// li r11,0
	r11.s64 = 0;
loc_82FA3A68:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x82f04960
	sub_82F04960(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82fa3ab0
	if (cr6.lt) goto loc_82FA3AB0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
loc_82FA3AB0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r11,r29,3,0,28
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fa3a68
	if (!cr6.eq) goto loc_82FA3A68;
loc_82FA3AC8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82FA39D8) {
	__imp__sub_82FA39D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3AD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,20756
	ctx.r5.s64 = r11.s64 + 20756;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82f0b9d0
	sub_82F0B9D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa3b48
	if (cr0.eq) goto loc_82FA3B48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,212(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(212) );
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// b 0x82fa3b5c
	goto loc_82FA3B5C;
loc_82FA3B48:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82f87748
	sub_82F87748(ctx, base);
loc_82FA3B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82FA3AD8) {
	__imp__sub_82FA3AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3B68) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,20848
	ctx.r4.s64 = ctx.r10.s64 + 20848;
	// bl 0x82f93380
	sub_82F93380(ctx, base);
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

PPC_WEAK_FUNC(sub_82FA3B68) {
	__imp__sub_82FA3B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f12548
	sub_82F12548(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,212(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(212) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82fa3d7c
	if (cr6.eq) goto loc_82FA3D7C;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// li r24,0
	r24.s64 = 0;
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(120) );
	// lwz r26,16(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82fa3c9c
	if (cr6.lt) goto loc_82FA3C9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	sub_82F6B390(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// bne cr6,0x82fa3c74
	if (!cr6.eq) goto loc_82FA3C74;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
loc_82FA3C74:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(r28.u32, 10, xer);
	// ble cr6,0x82fa3c98
	if (!cr6.gt) goto loc_82FA3C98;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ef6ef8
	sub_82EF6EF8(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82fa3ca0
	goto loc_82FA3CA0;
loc_82FA3C98:
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82FA3C9C:
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
loc_82FA3CA0:
	// lwz r10,332(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(332) );
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r24,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r24.u32);
	// beq cr6,0x82fa3d00
	if (cr6.eq) goto loc_82FA3D00;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82FA3CB8:
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f6c2d0
	sub_82F6C2D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fa3ce0
	if (cr6.eq) goto loc_82FA3CE0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// b 0x82fa3ce4
	goto loc_82FA3CE4;
loc_82FA3CE0:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_82FA3CE4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// bl 0x82f36a98
	sub_82F36A98(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82fa3cb8
	if (cr6.lt) goto loc_82FA3CB8;
loc_82FA3D00:
	// addi r31,r27,336
	r31.s64 = r27.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f6baa0
	sub_82F6BAA0(ctx, base);
	// stb r24,336(r27)
	PPC_STORE_U8(r27.u32 + 336, r24.u8);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// beq cr6,0x82fa3d24
	if (cr6.eq) goto loc_82FA3D24;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
loc_82FA3D24:
	// lwz r3,212(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(212) );
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82f6bbb0
	sub_82F6BBB0(ctx, base);
	// cmplwi cr6,r28,40
	cr6.compare<uint32_t>(r28.u32, 40, xer);
	// ble cr6,0x82fa3d60
	if (!cr6.gt) goto loc_82FA3D60;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA3D60:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r11.u32);
	// bne 0x82fa3da0
	if (!cr0.eq) goto loc_82FA3DA0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f670f0
	sub_82F670F0(ctx, base);
	// b 0x82fa3da0
	goto loc_82FA3DA0;
loc_82FA3D7C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,20912
	ctx.r4.s64 = r11.s64 + 20912;
	// bl 0x82f93380
	sub_82F93380(ctx, base);
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
loc_82FA3DA0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82FA3BC0) {
	__imp__sub_82FA3BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3DA8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82fa7570
	sub_82FA7570(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22648
	r11.s64 = r11.s64 + 22648;
	// addi r10,r10,20976
	ctx.r10.s64 = ctx.r10.s64 + 20976;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,20724
	ctx.r5.s64 = r11.s64 + 20724;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f57568
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82FA3DA8) {
	__imp__sub_82FA3DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fa3e08
	sub_82FA3E08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82FA3E00) {
	__imp__sub_82FA3E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3E08) {
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
	// bl 0x82fa7898
	sub_82FA7898(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fa3e38
	if (cr0.eq) goto loc_82FA3E38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ef6f38
	sub_82EF6F38(ctx, base);
loc_82FA3E38:
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

PPC_WEAK_FUNC(sub_82FA3E08) {
	__imp__sub_82FA3E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,18188
	ctx.r3.s64 = r11.s64 + 18188;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA3E58) {
	__imp__sub_82FA3E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82FA3E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r11.s64 = ctx.r3.s32 >> 2;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa3eac
	if (!cr0.eq) goto loc_82FA3EAC;
	// li r11,100
	r11.s64 = 100;
	// divw r11,r3,r11
	r11.s32 = ctx.r3.s32 / r11.s32;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa3ea4
	if (!cr0.eq) goto loc_82FA3EA4;
	// li r11,400
	r11.s64 = 400;
	// divw r11,r3,r11
	r11.s32 = ctx.r3.s32 / r11.s32;
	// mulli r11,r11,400
	r11.s64 = r11.s64 * 400;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fa3eac
	if (!cr0.eq) goto loc_82FA3EAC;
loc_82FA3EA4:
	// li r11,1
	r11.s64 = 1;
	// b 0x82fa3eb0
	goto loc_82FA3EB0;
loc_82FA3EAC:
	// li r11,0
	r11.s64 = 0;
loc_82FA3EB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82FA3E68) {
	__imp__sub_82FA3E68(ctx, base);
}

