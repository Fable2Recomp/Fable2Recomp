#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82B82440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r6,28344
	ctx.r5.s64 = ctx.r6.s64 + 28344;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_82B8247C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82b8247c
	if (!cr0.eq) goto loc_82B8247C;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82B8249C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r3,0,r5
	reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stwcx. r3,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), reserved.s32, __builtin_bswap32(ctx.r3.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x82b8249c
	if (!cr0.eq) goto loc_82B8249C;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r7,12
	ctx.r7.s64 = 12;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r6,r8,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r8.s64;
	// divw r10,r6,r7
	ctx.r10.s32 = ctx.r6.s32 / ctx.r7.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b824f4
	if (!cr6.gt) goto loc_82B824F4;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x821e3b38
	sub_821E3B38(ctx, base);
	// b 0x82b8252c
	goto loc_82B8252C;
loc_82B824F4:
	// bge cr6,0x82b8252c
	if (!cr6.lt) goto loc_82B8252C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r8
	ctx.r5.u64 = r11.u64 + ctx.r8.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b8252c
	if (cr6.eq) goto loc_82B8252C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x829eae38
	sub_829EAE38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82518d30
	sub_82518D30(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82B8252C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
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

PPC_WEAK_FUNC(sub_82B82440) {
	__imp__sub_82B82440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82558) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82b82778
	sub_82B82778(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x82b825b8
	if (cr6.eq) goto loc_82B825B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b82860
	sub_82B82860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B825B8:
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

PPC_WEAK_FUNC(sub_82B82558) {
	__imp__sub_82B82558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B825D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82b827d8
	sub_82B827D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lbz r7,17(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stb r11,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r11.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// bl 0x82a57de8
	sub_82A57DE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B825D0) {
	__imp__sub_82B825D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,8191
	r11.s64 = 536805376;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b82668
	if (!cr6.gt) goto loc_82B82668;
	// bl 0x82a97648
	sub_82A97648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82B82668:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b82680
	if (cr6.eq) goto loc_82B82680;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	r11.s64 = ctx.r9.s32 >> 3;
loc_82B82680:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x82b8276c
	if (!cr6.lt) goto loc_82B8276C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b80118
	sub_82B80118(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x82b82714
	if (cr6.eq) goto loc_82B82714;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82B826C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b82704
	if (cr6.eq) goto loc_82B82704;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82b82704
	if (cr6.eq) goto loc_82B82704;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82B826E8:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82b826e8
	if (!cr0.eq) goto loc_82B826E8;
loc_82B82704:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b826c4
	if (!cr6.eq) goto loc_82B826C4;
loc_82B82714:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// srawi r27,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r27.s64 = r11.s32 >> 3;
	// beq cr6,0x82b82750
	if (cr6.eq) goto loc_82B82750;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82b82748
	if (cr6.eq) goto loc_82B82748;
loc_82B82734:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b82734
	if (!cr6.eq) goto loc_82B82734;
loc_82B82748:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B82750:
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = rotl64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r11,r28
	ctx.r9.u64 = r11.u64 + r28.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82B8276C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B82638) {
	__imp__sub_82B82638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b827c0
	if (cr6.eq) goto loc_82B827C0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82b82fe0
	sub_82B82FE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b82860
	sub_82B82860(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82B827C0:
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

PPC_WEAK_FUNC(sub_82B82778) {
	__imp__sub_82B82778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B827D8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r31,8(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82b82858
	if (cr6.eq) goto loc_82B82858;
	// subf r10,r31,r31
	ctx.r10.s64 = r31.s64 - r31.s64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r31,r31
	cr6.compare<uint32_t>(r31.u32, r31.u32, xer);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// beq cr6,0x82b82830
	if (cr6.eq) goto loc_82B82830;
	// subf r29,r31,r11
	r29.s64 = r11.s64 - r31.s64;
loc_82B82818:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x82b82818
	if (!cr6.eq) goto loc_82B82818;
loc_82B82830:
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// beq cr6,0x82b82854
	if (cr6.eq) goto loc_82B82854;
loc_82B82840:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b82840
	if (!cr6.eq) goto loc_82B82840;
loc_82B82854:
	// stw r28,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r28.u32);
loc_82B82858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B827D8) {
	__imp__sub_82B827D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82860) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// beq cr6,0x82b828bc
	if (cr6.eq) goto loc_82B828BC;
	// addi r31,r4,24
	r31.s64 = ctx.r4.s64 + 24;
	// li r30,0
	r30.s64 = 0;
loc_82B82880:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b828a0
	if (cr6.eq) goto loc_82B828A0;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82518d30
	sub_82518D30(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B828A0:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// addi r11,r31,-24
	r11.s64 = r31.s64 + -24;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82b82880
	if (!cr6.eq) goto loc_82B82880;
loc_82B828BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B82860) {
	__imp__sub_82B82860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B828C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// li r23,36
	r23.s64 = 36;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b82904
	if (!cr6.eq) goto loc_82B82904;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b82910
	goto loc_82B82910;
loc_82B82904:
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r9,r23
	ctx.r9.s32 = ctx.r9.s32 / r23.s32;
loc_82B82910:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82b82bec
	if (cr6.eq) goto loc_82B82BEC;
	// lwz r30,8(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// subf r8,r11,r30
	ctx.r8.s64 = r30.s64 - r11.s64;
	// ori r10,r10,29127
	ctx.r10.u64 = ctx.r10.u64 | 29127;
	// divw r11,r8,r23
	r11.s32 = ctx.r8.s32 / r23.s32;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// bge cr6,0x82b8294c
	if (!cr6.lt) goto loc_82B8294C;
	// bl 0x82a97648
	sub_82A97648(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ea980
	sub_829EA980(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
loc_82B8294C:
	// add r8,r11,r27
	ctx.r8.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b82aa8
	if (!cr6.lt) goto loc_82B82AA8;
	// rlwinm r11,r9,31,1,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r24,0
	r24.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b82970
	if (cr6.lt) goto loc_82B82970;
	// add r24,r11,r9
	r24.u64 = r11.u64 + ctx.r9.u64;
loc_82B82970:
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b8297c
	if (!cr6.lt) goto loc_82B8297C;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
loc_82B8297C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82b82cd0
	sub_82B82CD0(ctx, base);
	// lwz r30,4(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r28,236(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// beq cr6,0x82b829c4
	if (cr6.eq) goto loc_82B829C4;
loc_82B829A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b829b4
	if (cr6.eq) goto loc_82B829B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
loc_82B829B4:
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82b829a0
	if (!cr6.eq) goto loc_82B829A0;
loc_82B829C4:
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82b829f4
	if (cr6.eq) goto loc_82B829F4;
loc_82B829D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b829e8
	if (cr6.eq) goto loc_82B829E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
loc_82B829E8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// bne 0x82b829d4
	if (!cr0.eq) goto loc_82B829D4;
loc_82B829F4:
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,8(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// beq cr6,0x82b82a40
	if (cr6.eq) goto loc_82B82A40;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
loc_82B82A1C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b82a30
	if (cr6.eq) goto loc_82B82A30;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
loc_82B82A30:
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82b82a1c
	if (!cr6.eq) goto loc_82B82A1C;
loc_82B82A40:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r5,8(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// beq cr6,0x82b82a6c
	if (cr6.eq) goto loc_82B82A6C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82b82860
	sub_82B82860(ctx, base);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B82A6C:
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r26,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r26.u32);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = rotl64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// add r10,r24,r10
	ctx.r10.u64 = r24.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r26
	ctx.r7.u64 = r11.u64 + r26.u64;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + r26.u64;
	// stw r7,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r7.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r8,12(r25)
	PPC_STORE_U32(r25.u32 + 12, ctx.r8.u32);
	// bl 0x829ea980
	sub_829EA980(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
loc_82B82AA8:
	// lwz r26,236(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// divw r10,r11,r23
	ctx.r10.s32 = r11.s32 / r23.s32;
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// bge cr6,0x82b82b48
	if (!cr6.lt) goto loc_82B82B48;
	// rlwinm r28,r11,2,0,29
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// add r31,r28,r26
	r31.u64 = r28.u64 + r26.u64;
	// beq cr6,0x82b82afc
	if (cr6.eq) goto loc_82B82AFC;
	// subf r29,r28,r31
	r29.s64 = r31.s64 - r28.s64;
loc_82B82AD8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b82aec
	if (cr6.eq) goto loc_82B82AEC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
loc_82B82AEC:
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x82b82ad8
	if (!cr6.eq) goto loc_82B82AD8;
loc_82B82AFC:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// divw r9,r10,r23
	ctx.r9.s32 = ctx.r10.s32 / r23.s32;
	// subf. r31,r9,r27
	r31.s64 = r27.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82b82b34
	if (cr0.eq) goto loc_82B82B34;
loc_82B82B14:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b82b28
	if (cr6.eq) goto loc_82B82B28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
loc_82B82B28:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// bne 0x82b82b14
	if (!cr0.eq) goto loc_82B82B14;
loc_82B82B34:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// b 0x82b82be0
	goto loc_82B82BE0;
loc_82B82B48:
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	r29.u64 = r30.u64;
	// subf r31,r27,r30
	r31.s64 = r30.s64 - r27.s64;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82b82b84
	if (cr6.eq) goto loc_82B82B84;
loc_82B82B60:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b82b74
	if (cr6.eq) goto loc_82B82B74;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b82c68
	sub_82B82C68(ctx, base);
loc_82B82B74:
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82b82b60
	if (!cr6.eq) goto loc_82B82B60;
loc_82B82B84:
	// stw r29,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r29.u32);
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// beq cr6,0x82b82bdc
	if (cr6.eq) goto loc_82B82BDC;
	// add r11,r27,r31
	r11.u64 = r27.u64 + r31.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_82B82B98:
	// addi r31,r31,-36
	r31.s64 = r31.s64 + -36;
	// addi r30,r30,-36
	r30.s64 = r30.s64 + -36;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x821f01b8
	sub_821F01B8(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x82b82b98
	if (!cr6.eq) goto loc_82B82B98;
loc_82B82BDC:
	// add r4,r27,r26
	ctx.r4.u64 = r27.u64 + r26.u64;
loc_82B82BE0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b83078
	sub_82B83078(ctx, base);
loc_82B82BEC:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x829ea980
	sub_829EA980(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82B828C8) {
	__imp__sub_82B828C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b82c58
	if (cr6.eq) goto loc_82B82C58;
loc_82B82C10:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b82c50
	if (cr6.eq) goto loc_82B82C50;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82b82c50
	if (cr6.eq) goto loc_82B82C50;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82B82C34:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82b82c34
	if (!cr0.eq) goto loc_82B82C34;
loc_82B82C50:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82b82c10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B82C10;
loc_82B82C58:
	// rlwinm r11,r5,3,0,28
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B82C00) {
	__imp__sub_82B82C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82C68) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x82b728d8
	sub_82B728D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82B82C68) {
	__imp__sub_82B82C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82CD0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b82d28
	if (cr6.eq) goto loc_82B82D28;
	// li r11,-1
	r11.s64 = -1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = r11.u32 / r31.u32;
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bge cr6,0x82b82d28
	if (!cr6.lt) goto loc_82B82D28;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_82B82D28:
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
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

PPC_WEAK_FUNC(sub_82B82CD0) {
	__imp__sub_82B82CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b82d9c
	if (cr6.eq) goto loc_82B82D9C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B82D80:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b82d80
	if (!cr0.eq) goto loc_82B82D80;
loc_82B82D9C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b82db0
	if (!cr6.eq) goto loc_82B82DB0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b82dbc
	goto loc_82B82DBC;
loc_82B82DB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_82B82DBC:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// subf r8,r11,r29
	ctx.r8.s64 = r29.s64 - r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r11.s64 = ctx.r8.s32 >> 3;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x82b82df0
	if (!cr6.lt) goto loc_82B82DF0;
	// bl 0x82a97648
	sub_82A97648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82B82DF0:
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b82ee4
	if (!cr6.lt) goto loc_82B82EE4;
	// rlwinm r11,r9,31,1,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,0
	r27.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b82e14
	if (cr6.lt) goto loc_82B82E14;
	// add r27,r11,r9
	r27.u64 = r11.u64 + ctx.r9.u64;
loc_82B82E14:
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, xer);
	// bge cr6,0x82b82e20
	if (!cr6.lt) goto loc_82B82E20;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
loc_82B82E20:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b80118
	sub_82B80118(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r29,172(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82b832b0
	sub_82B832B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b82c00
	sub_82B82C00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b832b0
	sub_82B832B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r26,r10,1
	r26.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82b82eb8
	if (cr6.eq) goto loc_82B82EB8;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82b82eb0
	if (cr6.eq) goto loc_82B82EB0;
loc_82B82E9C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bne cr6,0x82b82e9c
	if (!cr6.eq) goto loc_82B82E9C;
loc_82B82EB0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B82EB8:
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = rotl64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82B82EE4:
	// lwz r30,172(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x82b82f68
	if (!cr6.lt) goto loc_82B82F68;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b832b0
	sub_82B832B0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// subfic r5,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r10.s64;
	// bl 0x82b82c00
	sub_82B82C00(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r29,r11,-8
	r29.s64 = r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82b82fcc
	if (cr6.eq) goto loc_82B82FCC;
loc_82B82F40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82b82f40
	if (!cr6.eq) goto loc_82B82F40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82B82F68:
	// addi r28,r29,-8
	r28.s64 = r29.s64 + -8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b832b0
	sub_82B832B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82b82fa4
	if (cr6.eq) goto loc_82B82FA4;
	// subf r29,r28,r29
	r29.s64 = r29.s64 - r28.s64;
loc_82B82F8C:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82b82f8c
	if (!cr6.eq) goto loc_82B82F8C;
loc_82B82FA4:
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82b82fcc
	if (cr6.eq) goto loc_82B82FCC;
loc_82B82FB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82b82fb4
	if (!cr6.eq) goto loc_82B82FB4;
loc_82B82FCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B82D50) {
	__imp__sub_82B82D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B82FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r10,36
	ctx.r10.s64 = 36;
	// subf r11,r3,r29
	r11.s64 = r29.s64 - ctx.r3.s64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r5
	r27.u64 = r11.u64 + ctx.r5.u64;
	// beq cr6,0x82b83068
	if (cr6.eq) goto loc_82B83068;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// addi r31,r5,8
	r31.s64 = ctx.r5.s64 + 8;
	// subf r28,r5,r3
	r28.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B83020:
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-12) );
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-8) );
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x821f01b8
	sub_821F01B8(ctx, base);
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// addi r7,r30,-12
	ctx.r7.s64 = r30.s64 + -12;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bne cr6,0x82b83020
	if (!cr6.eq) goto loc_82B83020;
loc_82B83068:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B82FE0) {
	__imp__sub_82B82FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x82b830e0
	if (cr6.eq) goto loc_82B830E0;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_82B8309C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x821f01b8
	sub_821F01B8(ctx, base);
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// addi r7,r31,-8
	ctx.r7.s64 = r31.s64 + -8;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x82b8309c
	if (!cr6.eq) goto loc_82B8309C;
loc_82B830E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B83078) {
	__imp__sub_82B83078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B830E8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// std r28,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r28.u64);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// std r25,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, r25.u64);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r27,180(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// subf r11,r27,r29
	r11.s64 = r29.s64 - r27.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82b831c0
	if (!cr6.gt) goto loc_82B831C0;
loc_82B83124:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82b831e0
	if (!cr6.gt) goto loc_82B831E0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a59c98
	sub_82A59C98(ctx, base);
	// srawi r11,r31,1
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r11.s64 = r31.s32 >> 1;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// subf r7,r9,r29
	ctx.r7.s64 = r29.s64 - ctx.r9.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// subf r6,r27,r8
	ctx.r6.s64 = ctx.r8.s64 - r27.s64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r5,r7,0,0,28
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r6,0,0,28
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bge cr6,0x82b83198
	if (!cr6.lt) goto loc_82B83198;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b830e8
	sub_82B830E8(ctx, base);
	// ld r28,88(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r28,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r28.u64);
	// lwz r27,180(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// b 0x82b831b0
	goto loc_82B831B0;
loc_82B83198:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82b830e8
	sub_82B830E8(ctx, base);
	// ld r25,80(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r25,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, r25.u64);
	// lwz r29,188(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
loc_82B831B0:
	// subf r11,r27,r29
	r11.s64 = r29.s64 - r27.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x82b83124
	if (cr6.gt) goto loc_82B83124;
loc_82B831C0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82b831d8
	if (!cr6.gt) goto loc_82B831D8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b833e0
	sub_82B833E0(ctx, base);
loc_82B831D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82B831E0:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x82b831c0
	if (!cr6.gt) goto loc_82B831C0;
	// subf r11,r27,r29
	r11.s64 = r29.s64 - r27.s64;
	// srawi r26,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r26.s64 = r11.s32 >> 3;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// ble cr6,0x82b8326c
	if (!cr6.gt) goto loc_82B8326C;
	// srawi r11,r26,1
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r11.s64 = r26.s32 >> 1;
	// addze. r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x82b8326c
	if (!cr0.gt) goto loc_82B8326C;
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
loc_82B8320C:
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82b8324c
	if (cr6.eq) goto loc_82B8324C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B83230:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b83230
	if (!cr0.eq) goto loc_82B83230;
loc_82B8324C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b83598
	sub_82B83598(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82b8320c
	if (cr6.gt) goto loc_82B8320C;
loc_82B8326C:
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r25.u64);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// ble cr6,0x82b831d8
	if (!cr6.gt) goto loc_82B831D8;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82B8327C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b83728
	sub_82B83728(ctx, base);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// subf r11,r27,r31
	r11.s64 = r31.s64 - r27.s64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bgt cr6,0x82b8327c
	if (cr6.gt) goto loc_82B8327C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82B830E8) {
	__imp__sub_82B830E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B832B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b83310
	if (cr6.eq) goto loc_82B83310;
	// subf r10,r5,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B832BC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b83300
	if (cr6.eq) goto loc_82B83300;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// beq cr6,0x82b83300
	if (cr6.eq) goto loc_82B83300;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B832E4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82b832e4
	if (!cr0.eq) goto loc_82B832E4;
loc_82B83300:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// add r11,r10,r5
	r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b832bc
	if (!cr6.eq) goto loc_82B832BC;
loc_82B83310:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B832B0) {
	__imp__sub_82B832B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83318) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x82b833c4
	if (cr6.eq) goto loc_82B833C4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83394
	if (cr6.eq) goto loc_82B83394;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_82B83358:
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
	// bne 0x82b83358
	if (!cr0.eq) goto loc_82B83358;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82b8338c
	if (!cr6.eq) goto loc_82B8338C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8338C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82B83394:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x82b833c4
	if (cr6.eq) goto loc_82B833C4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B833A8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b833a8
	if (!cr0.eq) goto loc_82B833A8;
loc_82B833C4:
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

PPC_WEAK_FUNC(sub_82B83318) {
	__imp__sub_82B83318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B833E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r29,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r29.u64);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r30,164(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r28,172(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82b834c4
	if (cr6.eq) goto loc_82B834C4;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x82b834c4
	if (cr6.eq) goto loc_82B834C4;
loc_82B8341C:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bge cr6,0x82b83454
	if (!cr6.lt) goto loc_82B83454;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82b834b4
	if (cr6.eq) goto loc_82B834B4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b834b4
	if (cr6.eq) goto loc_82B834B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82b834a4
	goto loc_82B834A4;
loc_82B83454:
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b834b4
	if (!cr6.lt) goto loc_82B834B4;
loc_82B83468:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b83468
	if (cr6.lt) goto loc_82B83468;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82b834b4
	if (cr6.eq) goto loc_82B834B4;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82b834b4
	if (cr6.eq) goto loc_82B834B4;
loc_82B834A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82b83808
	sub_82B83808(ctx, base);
loc_82B834B4:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82b8341c
	if (!cr6.eq) goto loc_82B8341C;
loc_82B834C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B833E0) {
	__imp__sub_82B833E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B834D0) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b83524
	if (!cr6.lt) goto loc_82B83524;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x82a5a588
	sub_82A5A588(ctx, base);
loc_82B83524:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b83554
	if (!cr6.lt) goto loc_82B83554;
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = rotl32(ctx.r9.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82a5a588
	sub_82A5A588(ctx, base);
loc_82B83554:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b83580
	if (!cr6.lt) goto loc_82B83580;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x82a5a588
	sub_82A5A588(ctx, base);
loc_82B83580:
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

PPC_WEAK_FUNC(sub_82B834D0) {
	__imp__sub_82B834D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83598) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r30,164(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// rlwinm r31,r11,1,0,30
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x82b83618
	if (!cr6.lt) goto loc_82B83618;
loc_82B835C8:
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b835ec
	if (!cr6.lt) goto loc_82B835EC;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82B835EC:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82b835c8
	if (cr6.lt) goto loc_82B835C8;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
loc_82B83618:
	// bne cr6,0x82b83638
	if (!cr6.eq) goto loc_82B83638;
	// rlwinm r11,r29,3,0,28
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
loc_82B83638:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq cr6,0x82b83670
	if (cr6.eq) goto loc_82B83670;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B83654:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b83654
	if (!cr0.eq) goto loc_82B83654;
loc_82B83670:
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r28,r4
	cr6.compare<int32_t>(r28.s32, ctx.r4.s32, xer);
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x82b836c0
	if (!cr6.lt) goto loc_82B836C0;
loc_82B83688:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bge cr6,0x82b836c0
	if (!cr6.lt) goto loc_82B836C0;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r31.s64 = temp.s64;
	// blt cr6,0x82b83688
	if (cr6.lt) goto loc_82B83688;
loc_82B836C0:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83718
	if (cr6.eq) goto loc_82B83718;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82B836E0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b836e0
	if (!cr0.eq) goto loc_82B836E0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82b83718
	if (!cr6.eq) goto loc_82B83718;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B83718:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B83598) {
	__imp__sub_82B83598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r27.u64);
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lwz r28,180(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// subf r10,r28,r11
	ctx.r10.s64 = r11.s64 - r28.s64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// ble cr6,0x82b837fc
	if (!cr6.gt) goto loc_82B837FC;
	// addi r30,r11,-8
	r30.s64 = r11.s64 + -8;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// beq cr6,0x82b8379c
	if (cr6.eq) goto loc_82B8379C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82B83780:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b83780
	if (!cr0.eq) goto loc_82B83780;
loc_82B8379C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b837d8
	if (cr6.eq) goto loc_82B837D8;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82B837BC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b837bc
	if (!cr0.eq) goto loc_82B837BC;
loc_82B837D8:
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r5,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r5.s64 = r11.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b83598
	sub_82B83598(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
loc_82B837FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B83728) {
	__imp__sub_82B83728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// std r24,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r24.u64);
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lwz r23,244(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(244) );
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// lwz r26,228(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(228) );
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// subf r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	// subf r9,r26,r23
	ctx.r9.s64 = r23.s64 - r26.s64;
	// srawi. r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r28.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// beq 0x82b83878
	if (cr0.eq) goto loc_82B83878;
loc_82B8384C:
	// divw r8,r27,r11
	ctx.r8.s32 = r27.s32 / r11.s32;
	// rotlwi r10,r27,1
	ctx.r10.u64 = rotl32(r27.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r27
	ctx.r10.s64 = r27.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r27,r11
	r27.u64 = r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x82b8384c
	if (!cr0.eq) goto loc_82B8384C;
loc_82B83878:
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// bge cr6,0x82b839a8
	if (!cr6.lt) goto loc_82B839A8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82b839a8
	if (!cr6.gt) goto loc_82B839A8;
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r28,3,0,28
	r25.u64 = rotl64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
loc_82B83894:
	// std r24,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r24.u64);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// beq cr6,0x82b838dc
	if (cr6.eq) goto loc_82B838DC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82B838C0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82b838c0
	if (!cr0.eq) goto loc_82B838C0;
loc_82B838DC:
	// add r11,r29,r25
	r11.u64 = r29.u64 + r25.u64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bne cr6,0x82b838f0
	if (!cr6.eq) goto loc_82B838F0;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// b 0x82b83904
	goto loc_82B83904;
loc_82B838F0:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
loc_82B83904:
	// ld r30,0(r10)
	r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82b83988
	if (cr6.eq) goto loc_82B83988;
loc_82B83918:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// subf r11,r31,r23
	r11.s64 = r23.s64 - r31.s64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82b83954
	if (!cr6.lt) goto loc_82B83954;
	// add r10,r25,r31
	ctx.r10.u64 = r25.u64 + r31.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// b 0x82b83974
	goto loc_82B83974;
loc_82B83954:
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r24.u64);
	// addi r11,r1,120
	r11.s64 = ctx.r1.s64 + 120;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + r26.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
loc_82B83974:
	// ld r30,0(r11)
	r30.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82b83918
	if (!cr6.eq) goto loc_82B83918;
loc_82B83988:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82b83318
	sub_82B83318(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b6ab20
	sub_82B6AB20(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bgt 0x82b83894
	if (cr0.gt) goto loc_82B83894;
loc_82B839A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82B83808) {
	__imp__sub_82B83808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B839B0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b83af8
	if (!cr6.eq) goto loc_82B83AF8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x82b839f0
	if (cr6.eq) goto loc_82B839F0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// b 0x82b839f4
	goto loc_82B839F4;
loc_82B839F0:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82B839F4:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b83a30
	if (cr6.eq) goto loc_82B83A30;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83a30
	if (cr6.eq) goto loc_82B83A30;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-8176
	ctx.r9.s64 = r11.s64 + -8176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82b83a34
	goto loc_82B83A34;
loc_82B83A30:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82B83A34:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-8) );
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x821f9f40
	sub_821F9F40(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// addi r29,r28,-12
	r29.s64 = r28.s64 + -12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// bl 0x821993c0
	sub_821993C0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-8) );
	// bl 0x821f9f40
	sub_821F9F40(ctx, base);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stb r3,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r3.u8);
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-8) );
	// bl 0x821f9f40
	sub_821F9F40(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82b83ad8
	if (cr6.eq) goto loc_82B83AD8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b83ad8
	if (cr6.eq) goto loc_82B83AD8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82B83AD8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83af0
	if (cr6.eq) goto loc_82B83AF0;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
loc_82B83AF0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
loc_82B83AF8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B839B0) {
	__imp__sub_82B839B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83B00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b83bf0
	if (cr6.eq) goto loc_82B83BF0;
	// li r27,0
	r27.s64 = 0;
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x82b83b5c
	if (cr6.eq) goto loc_82B83B5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r31,r29
	r31.u64 = r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82B83B5C:
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b83bcc
	if (cr6.eq) goto loc_82B83BCC;
	// addi r29,r28,-12
	r29.s64 = r28.s64 + -12;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83b8c
	if (cr6.eq) goto loc_82B83B8C;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
loc_82B83B8C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r9,r10,-9848
	ctx.r9.s64 = ctx.r10.s64 + -9848;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x821f4d90
	sub_821F4D90(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83be8
	if (cr6.eq) goto loc_82B83BE8;
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// b 0x82b83be8
	goto loc_82B83BE8;
loc_82B83BCC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,-12
	ctx.r3.s64 = r28.s64 + -12;
	// bl 0x82b7b6d0
	sub_82B7B6D0(ctx, base);
loc_82B83BE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
loc_82B83BF0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B83B00) {
	__imp__sub_82B83B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83C00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-23720
	ctx.r7.s64 = ctx.r10.s64 + -23720;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r6,r9,24204
	ctx.r6.s64 = ctx.r9.s64 + 24204;
	// addi r5,r8,24220
	ctx.r5.s64 = ctx.r8.s64 + 24220;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r10,r4,24232
	ctx.r10.s64 = ctx.r4.s64 + 24232;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r9,r3,24236
	ctx.r9.s64 = ctx.r3.s64 + 24236;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// bl 0x82b7b4c8
	sub_82B7B4C8(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r8,54
	cr6.compare<int32_t>(ctx.r8.s32, 54, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82b83cc4
	if (cr6.eq) goto loc_82B83CC4;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x821fc7a8
	sub_821FC7A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82B83CC4:
	// bl 0x82294f38
	sub_82294F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B83C00) {
	__imp__sub_82B83C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83CD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b83df4
	if (cr6.eq) goto loc_82B83DF4;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83d18
	if (cr6.eq) goto loc_82B83D18;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
loc_82B83D18:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83d34
	if (cr6.eq) goto loc_82B83D34;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// b 0x82b83d38
	goto loc_82B83D38;
loc_82B83D34:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82B83D38:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b83d70
	if (cr6.eq) goto loc_82B83D70;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b83d70
	if (cr6.eq) goto loc_82B83D70;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-8176
	ctx.r9.s64 = r11.s64 + -8176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82B83D70:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-4) );
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r9.u64);
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// beq cr6,0x82b83de4
	if (cr6.eq) goto loc_82B83DE4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b83de4
	if (cr6.eq) goto loc_82B83DE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82B83DE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
loc_82B83DF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B83CD8) {
	__imp__sub_82B83CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83E00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82b83ebc
	if (cr6.eq) goto loc_82B83EBC;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82b83e58
	if (cr6.eq) goto loc_82B83E58;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82B83E58:
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,-8
	ctx.r3.s64 = r29.s64 + -8;
	// bl 0x82b7b4c8
	sub_82B7B4C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-4) );
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// bl 0x82b920f0
	sub_82B920F0(ctx, base);
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r9,r11,7532
	ctx.r9.s64 = r11.s64 + 7532;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fbfc8
	sub_821FBFC8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a14e70
	sub_82A14E70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
loc_82B83EBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B83E00) {
	__imp__sub_82B83E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r30,-31927
	r30.s64 = -2092367872;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r3,5540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(5540) );
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82be5240
	sub_82BE5240(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82b83f98
	if (!cr6.eq) goto loc_82B83F98;
	// lwz r3,5540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(5540) );
	// lwz r24,12(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(r24.u32, r31.u32, xer);
	// blt cr6,0x82b83f94
	if (cr6.lt) goto loc_82B83F94;
	// bl 0x82be63b8
	sub_82BE63B8(ctx, base);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// bge cr6,0x82b83f94
	if (!cr6.lt) goto loc_82B83F94;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b84060
	sub_82B84060(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r3,5540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(5540) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82be5240
	sub_82BE5240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b83f9c
	if (!cr6.eq) goto loc_82B83F9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b84060
	sub_82B84060(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r3,5540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(5540) );
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82be5240
	sub_82BE5240(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82b83f98
	if (!cr6.eq) goto loc_82B83F98;
loc_82B83F94:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_82B83F98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82B83F9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82B83ED0) {
	__imp__sub_82B83ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B83FA8) {
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
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,5540(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(5540) );
	// addi r4,r31,404
	ctx.r4.s64 = r31.s64 + 404;
	// bl 0x82200688
	sub_82200688(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82b83fec
	if (!cr6.eq) goto loc_82B83FEC;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x82b8403c
	goto loc_82B8403C;
loc_82B83FEC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fbe38
	sub_821FBE38(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b84008
	if (!cr6.eq) goto loc_82B84008;
	// twi 31,r0,22
loc_82B84008:
	// lwz r10,-56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-56) );
	// addi r11,r30,-64
	r11.s64 = r30.s64 + -64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,64
	ctx.r4.s64 = r11.s64 + 64;
	// stw r9,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r9.u32);
	// bl 0x82be5640
	sub_82BE5640(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82B8403C:
	// beq cr6,0x82b84048
	if (cr6.eq) goto loc_82B84048;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82B84048:
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

PPC_WEAK_FUNC(sub_82B83FA8) {
	__imp__sub_82B83FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84060) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	sub_8221EB58(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b840c8
	if (cr6.eq) goto loc_82B840C8;
	// lis r31,-31927
	r31.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,28420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28420) );
	// stb r11,28398(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28398, r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b840c8
	if (cr6.eq) goto loc_82B840C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822195e8
	sub_822195E8(ctx, base);
loc_82B840AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,28420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28420) );
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220be78
	sub_8220BE78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b840ac
	if (!cr6.eq) goto loc_82B840AC;
loc_82B840C8:
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r3,5540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(5540) );
	// bl 0x82be5898
	sub_82BE5898(ctx, base);
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

PPC_WEAK_FUNC(sub_82B84060) {
	__imp__sub_82B84060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B840E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,5540(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(5540) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B840E8) {
	__imp__sub_82B840E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84108) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,28344
	ctx.r7.s64 = r11.s64 + 28344;
	// stw r8,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r8.u32);
loc_82B84128:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b84128
	if (!cr0.eq) goto loc_82B84128;
	// lis r21,-31927
	r21.s64 = -2092367872;
	// li r22,0
	r22.s64 = 0;
	// lwz r11,5540(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(5540) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b84164
	if (cr6.eq) goto loc_82B84164;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// subf r22,r9,r10
	r22.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82B84164:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b84174
	if (cr6.eq) goto loc_82B84174;
	// lwz r24,12(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
loc_82B84174:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,5544
	ctx.r9.s64 = ctx.r10.s64 + 5544;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r25,5544(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(5544) );
	// lwz r31,24(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(24) );
	// lwz r30,20(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lwz r29,16(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// lwz r28,12(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// lwz r27,8(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// lwz r26,4(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// beq cr6,0x82b841b0
	if (cr6.eq) goto loc_82B841B0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82be63b8
	sub_82BE63B8(ctx, base);
	// lwz r11,5540(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(5540) );
loc_82B841B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b841c0
	if (cr6.eq) goto loc_82B841C0;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82B841C0:
	// srawi r11,r31,10
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FF) != 0);
	r11.s64 = r31.s32 >> 10;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addze r9,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r30,10
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3FF) != 0);
	ctx.r8.s64 = r30.s32 >> 10;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// rlwinm r9,r3,22,10,31
	ctx.r9.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r29,10
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3FF) != 0);
	ctx.r4.s64 = r29.s32 >> 10;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// subf r10,r24,r22
	ctx.r10.s64 = r22.s64 - r24.s64;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r28,10
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FF) != 0);
	r11.s64 = r28.s32 >> 10;
	// addi r4,r7,-23696
	ctx.r4.s64 = ctx.r7.s64 + -23696;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addze r7,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r27,10
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FF) != 0);
	ctx.r6.s64 = r27.s32 >> 10;
	// rlwinm r8,r10,22,10,31
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addze r3,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r26,10
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3FF) != 0);
	r11.s64 = r26.s32 >> 10;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// rlwinm r7,r24,22,10,31
	ctx.r7.u64 = rotl64(r24.u32 | (r24.u64 << 32), 22) & 0x3FFFFF;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r25,10
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3FF) != 0);
	ctx.r3.s64 = r25.s32 >> 10;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r6,r22,22,10,31
	ctx.r6.u64 = rotl64(r22.u32 | (r22.u64 << 32), 22) & 0x3FFFFF;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821e3a10
	sub_821E3A10(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82B84108) {
	__imp__sub_82B84108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84240) {
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
	// lis r11,-32240
	r11.s64 = -2112880640;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-23440
	ctx.r9.s64 = r11.s64 + -23440;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82b84274
	if (cr6.eq) goto loc_82B84274;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B84274:
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

PPC_WEAK_FUNC(sub_82B84240) {
	__imp__sub_82B84240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84288) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble cr6,0x82b842f0
	if (!cr6.gt) goto loc_82B842F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B842F0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_82B84288) {
	__imp__sub_82B84288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82B84330) {
	__imp__sub_82B84330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84350) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B84350) {
	__imp__sub_82B84350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// bl 0x821f6140
	sub_821F6140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8438c
	if (cr6.eq) goto loc_82B8438C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b9b9f0
	sub_82B9B9F0(ctx, base);
loc_82B8438C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82b83fa8
	sub_82B83FA8(ctx, base);
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

PPC_WEAK_FUNC(sub_82B84358) {
	__imp__sub_82B84358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B843B0) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8225fcd8
	sub_8225FCD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B843B0) {
	__imp__sub_82B843B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B843C0) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// bl 0x821f6140
	sub_821F6140(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B843C0) {
	__imp__sub_82B843C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B843F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x821fc048
	sub_821FC048(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B843F0) {
	__imp__sub_82B843F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B843F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r9,r11,-23392
	ctx.r9.s64 = r11.s64 + -23392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// lwz r27,8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r5,0,22,25
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3C0;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r30.u32);
	// lwz r26,4(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,872
	ctx.r3.s64 = r30.s64 + 872;
	// bl 0x822085d0
	sub_822085D0(ctx, base);
	// lis r4,-32062
	ctx.r4.s64 = -2101215232;
	// lis r11,-32072
	r11.s64 = -2101870592;
	// addi r7,r4,-9152
	ctx.r7.s64 = ctx.r4.s64 + -9152;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r11,17200
	ctx.r5.s64 = r11.s64 + 17200;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82b83ed0
	sub_82B83ED0(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// bl 0x82b92c50
	sub_82B92C50(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// oris r8,r9,64
	ctx.r8.u64 = ctx.r9.u64 | 4194304;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B843F8) {
	__imp__sub_82B843F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B844D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x821fc048
	sub_821FC048(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B844D0) {
	__imp__sub_82B844D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B844D8) {
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
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x821f6140
	sub_821F6140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82b8450c
	if (cr6.eq) goto loc_82B8450C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b9b9f0
	sub_82B9B9F0(ctx, base);
loc_82B8450C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82b83fa8
	sub_82B83FA8(ctx, base);
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

PPC_WEAK_FUNC(sub_82B844D8) {
	__imp__sub_82B844D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84540) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x8225fcd8
	sub_8225FCD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B84540) {
	__imp__sub_82B84540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-23392
	ctx.r10.s64 = r11.s64 + -23392;
	// li r31,0
	r31.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// lwz r27,8(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r6,0,22,25
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3C0;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(r11.u32 + 32, r31.u64);
	// bl 0x822085d0
	sub_822085D0(ctx, base);
	// lis r5,-32062
	ctx.r5.s64 = -2101215232;
	// lis r4,-32072
	ctx.r4.s64 = -2101870592;
	// addi r7,r5,-9152
	ctx.r7.s64 = ctx.r5.s64 + -9152;
	// addi r5,r4,17200
	ctx.r5.s64 = ctx.r4.s64 + 17200;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82b83ed0
	sub_82B83ED0(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// li r3,7
	ctx.r3.s64 = 7;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r31.u64);
	// std r31,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, r31.u64);
	// std r31,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, r31.u64);
	// std r31,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, r31.u64);
	// std r31,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, r31.u64);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// oris r5,r6,64
	ctx.r5.u64 = ctx.r6.u64 | 4194304;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B84550) {
	__imp__sub_82B84550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84658) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// b 0x821fc1f0
	sub_821FC1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B84658) {
	__imp__sub_82B84658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84660) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// bl 0x821f6140
	sub_821F6140(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B84660) {
	__imp__sub_82B84660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,36
	r11.s64 = ctx.r3.s64 + 36;
loc_82B846B8:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-12) );
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x82b846d4
	if (!cr6.gt) goto loc_82B846D4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82B846D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-8) );
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x82b846f0
	if (!cr6.gt) goto loc_82B846F0;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
loc_82B846F0:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x82b846b8
	if (cr6.lt) goto loc_82B846B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B84698) {
	__imp__sub_82B84698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84708) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82b8475c
	if (!cr6.eq) goto loc_82B8475C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82b8475c
	if (!cr6.eq) goto loc_82B8475C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bne cr6,0x82b8475c
	if (!cr6.eq) goto loc_82B8475C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b84860
	goto loc_82B84860;
loc_82B8475C:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// bl 0x82b84878
	sub_82B84878(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r6,0
	ctx.r6.s64 = 0;
	// twllei r7,0
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// rotlwi r11,r9,1
	r11.u64 = rotl32(ctx.r9.u32, 1);
	// divw. r8,r9,r7
	ctx.r8.s32 = ctx.r9.s32 / ctx.r7.s32;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// ble 0x82b84804
	if (!cr0.gt) goto loc_82B84804;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
loc_82B847C0:
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
	// stw r6,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r6.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82b847e4
	if (!cr6.eq) goto loc_82B847E4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// b 0x82b847e8
	goto loc_82B847E8;
loc_82B847E4:
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_82B847E8:
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82b847c0
	if (cr6.lt) goto loc_82B847C0;
loc_82B84804:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r6,104(r31)
	PPC_STORE_U8(r31.u32 + 104, ctx.r6.u8);
	// blt cr6,0x82b84820
	if (cr6.lt) goto loc_82B84820;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B84820:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b8482c
	if (!cr6.eq) goto loc_82B8482C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B8482C:
	// addi r11,r10,31
	r11.s64 = ctx.r10.s64 + 31;
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lis r7,28
	ctx.r7.s64 = 1835008;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// ori r5,r7,8192
	ctx.r5.u64 = ctx.r7.u64 | 8192;
	// rlwinm r4,r6,9,0,22
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82b8485c
	if (cr6.gt) goto loc_82B8485C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
loc_82B8485C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B84860:
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

PPC_WEAK_FUNC(sub_82B84708) {
	__imp__sub_82B84708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2bec
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// li r31,80
	r31.s64 = 80;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mulli r5,r9,112
	ctx.r5.s64 = ctx.r9.s64 * 112;
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// addi r7,r8,-9848
	ctx.r7.s64 = ctx.r8.s64 + -9848;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// li r29,5120
	r29.s64 = 5120;
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r5,r11,0,0,26
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lis r11,28
	r11.s64 = 1835008;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrlwi r4,r4,26
	ctx.r4.u64 = ctx.r4.u32 & 0x3F;
	// ori r30,r11,8192
	r30.u64 = r11.u64 | 8192;
loc_82B848CC:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// blt cr6,0x82b848e8
	if (cr6.lt) goto loc_82B848E8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B848E8:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x82b848f4
	if (!cr6.eq) goto loc_82B848F4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B848F4:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r31
	r11.u32 = r11.u32 / r31.u32;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82b84928
	if (cr6.eq) goto loc_82B84928;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// beq cr6,0x82b84928
	if (cr6.eq) goto loc_82B84928;
	// cmpwi cr6,r4,37
	cr6.compare<int32_t>(ctx.r4.s32, 37, xer);
	// bne cr6,0x82b8492c
	if (!cr6.eq) goto loc_82B8492C;
loc_82B84928:
	// li r8,8
	ctx.r8.s64 = 8;
loc_82B8492C:
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// divwu r9,r10,r29
	ctx.r9.u32 = ctx.r10.u32 / r29.u32;
	// cmplwi cr6,r9,1024
	cr6.compare<uint32_t>(ctx.r9.u32, 1024, xer);
	// bgt cr6,0x82b84980
	if (cr6.gt) goto loc_82B84980;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// blt cr6,0x82b84954
	if (cr6.lt) goto loc_82B84954;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B84954:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x82b84960
	if (!cr6.eq) goto loc_82B84960;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B84960:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r11,r9,r8
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// ble cr6,0x82b8498c
	if (!cr6.gt) goto loc_82B8498C;
loc_82B84980:
	// addi r11,r7,-32
	r11.s64 = ctx.r7.s64 + -32;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82b848cc
	goto loc_82B848CC;
loc_82B8498C:
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B84878) {
	__imp__sub_82B84878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r8,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r7,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B84990) {
	__imp__sub_82B84990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B849B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r3,r11,9780
	ctx.r3.s64 = r11.s64 + 9780;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// mulli r9,r5,108
	ctx.r9.s64 = ctx.r5.s64 * 108;
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r30,0(r4)
	r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r29,1(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r5,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r5.u8);
	// addi r6,r6,7532
	ctx.r6.s64 = ctx.r6.s64 + 7532;
	// stb r29,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r29.u8);
	// addi r10,r10,-8968
	ctx.r10.s64 = ctx.r10.s64 + -8968;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stb r3,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r3.u8);
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r9,r4,28344
	ctx.r9.s64 = ctx.r4.s64 + 28344;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
loc_82B84A50:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82b84a50
	if (!cr0.eq) goto loc_82B84A50;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b84a88
	if (!cr6.eq) goto loc_82B84A88;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r7,r10,63
	ctx.r7.s64 = ctx.r10.s64 + 63;
	// b 0x82b84a8c
	goto loc_82B84A8C;
loc_82B84A88:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
loc_82B84A8C:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r4,r10,-22796
	ctx.r4.s64 = ctx.r10.s64 + -22796;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x821e3a10
	sub_821E3A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b84bd0
	sub_82B84BD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B849B8) {
	__imp__sub_82B849B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84AC8) {
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
	// bl 0x82b84b18
	sub_82B84B18(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b84b00
	if (cr6.eq) goto loc_82B84B00;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B84B00:
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

PPC_WEAK_FUNC(sub_82B84AC8) {
	__imp__sub_82B84AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84B18) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,9780
	ctx.r10.s64 = r11.s64 + 9780;
	// addi r31,r28,64
	r31.s64 = r28.s64 + 64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(64) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b84b50
	if (cr6.eq) goto loc_82B84B50;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82B84B50:
	// li r30,4
	r30.s64 = 4;
loc_82B84B54:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b84b6c
	if (cr6.eq) goto loc_82B84B6C;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82B84B6C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82b84b54
	if (!cr0.lt) goto loc_82B84B54;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// addi r31,r28,24
	r31.s64 = r28.s64 + 24;
	// addi r30,r11,7532
	r30.s64 = r11.s64 + 7532;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r30.u32);
	// beq cr6,0x82b84b9c
	if (cr6.eq) goto loc_82B84B9C;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_82B84B9C:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// addi r31,r28,12
	r31.s64 = r28.s64 + 12;
	// stw r30,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b84bbc
	if (cr6.eq) goto loc_82B84BBC;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_82B84BBC:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r10,r11,-22764
	ctx.r10.s64 = r11.s64 + -22764;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B84B18) {
	__imp__sub_82B84B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82b84698
	sub_82B84698(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x821fc7a8
	sub_821FC7A8(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r10,54
	ctx.r10.s64 = 54;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// addi r9,r11,-9848
	ctx.r9.s64 = r11.s64 + -9848;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// mulli r6,r7,112
	ctx.r6.s64 = ctx.r7.s64 * 112;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r30,16(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(16) );
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x821f5170
	sub_821F5170(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82294f38
	sub_82294F38(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r10,-28176
	r25.s64 = ctx.r10.s64 + -28176;
	// addi r26,r11,-28160
	r26.s64 = r11.s64 + -28160;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r24,r9,-28192
	r24.s64 = ctx.r9.s64 + -28192;
	// li r27,0
	r27.s64 = 0;
	// addi r23,r8,-28208
	r23.s64 = ctx.r8.s64 + -28208;
	// lfs f31,-27456(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -27456);
	f31.f64 = double(temp.f32);
	// li r22,2
	r22.s64 = 2;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(44) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x82b84e70
	if (!cr6.gt) goto loc_82B84E70;
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
loc_82B84CC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b8b960
	sub_82B8B960(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bl 0x821f61d0
	sub_821F61D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B84D10:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82b84d10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B84D10;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r8,r29,r11
	ctx.r8.u64 = r29.u64 + r11.u64;
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(24) );
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v0,v13,v12,v0
	simd::store_i8(ctx.v0.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(28) );
	// lvx128 v7,r0,r24
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// extsw r11,r8
	r11.s64 = ctx.r8.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f7,120(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fdivs f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f5.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v0,v0,v11,v7
	simd::store_i8(ctx.v0.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v11.u8), simd::load_i8(ctx.v7.u8)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lvx128 v7,r0,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f0,136(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(f31.f64 / ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v10,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v0,v0,v10,v7
	simd::store_i8(ctx.v0.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v10.u8), simd::load_i8(ctx.v7.u8)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lvx128 v7,r0,r26
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(f31.f64 / ctx.f8.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v9,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v8,v0,v9,v7
	simd::store_i8(ctx.v8.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v9.u8), simd::load_i8(ctx.v7.u8)));
	// stvx128 v8,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v8), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(20) );
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b84cc0
	if (cr6.lt) goto loc_82B84CC0;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(r28.u32, 5, xer);
	// bge cr6,0x82b84ea0
	if (!cr6.lt) goto loc_82B84EA0;
loc_82B84E70:
	// addi r11,r28,11
	r11.s64 = r28.s64 + 11;
	// subfic r29,r28,5
	xer.ca = r28.u32 <= 5;
	r29.s64 = 5 - r28.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
loc_82B84E80:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b84e94
	if (cr6.eq) goto loc_82B84E94;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
loc_82B84E94:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82b84e80
	if (!cr0.eq) goto loc_82B84E80;
loc_82B84EA0:
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b8b960
	sub_82B8B960(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bl 0x821f61d0
	sub_821F61D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B84EF4:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82b84ef4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B84EF4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvlx v12,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v0,v13,v12,v0
	simd::store_i8(ctx.v0.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v7,r0,r24
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// lvlx v11,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v0,v0,v11,v7
	simd::store_i8(ctx.v0.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v11.u8), simd::load_i8(ctx.v7.u8)));
	// lvlx v9,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvlx v10,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvx128 v7,r0,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// vperm v0,v0,v10,v7
	simd::store_i8(ctx.v0.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v10.u8), simd::load_i8(ctx.v7.u8)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v7,r0,r26
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vperm v8,v0,v9,v7
	simd::store_i8(ctx.v8.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v9.u8), simd::load_i8(ctx.v7.u8)));
	// stvx128 v8,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v8), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82B84BD0) {
	__imp__sub_82B84BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84F88) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82b84708
	sub_82B84708(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b84fb8
	if (cr6.eq) goto loc_82B84FB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b84bd0
	sub_82B84BD0(ctx, base);
loc_82B84FB8:
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

PPC_WEAK_FUNC(sub_82B84F88) {
	__imp__sub_82B84F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B84FD0) {
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
	// lis r11,-32240
	r11.s64 = -2112880640;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-22764
	ctx.r9.s64 = r11.s64 + -22764;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82b85004
	if (cr6.eq) goto loc_82B85004;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B85004:
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

PPC_WEAK_FUNC(sub_82B84FD0) {
	__imp__sub_82B84FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B85018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-8968
	ctx.r3.s64 = r11.s64 + -8968;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B85018) {
	__imp__sub_82B85018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B85028) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82b85098
	if (cr6.eq) goto loc_82B85098;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85064
	if (cr6.eq) goto loc_82B85064;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82B85064:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82b85098
	if (cr6.eq) goto loc_82B85098;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B85098:
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

PPC_WEAK_FUNC(sub_82B85028) {
	__imp__sub_82B85028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B850B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mullw r11,r4,r5
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stb r5,8(r30)
	PPC_STORE_U8(r30.u32 + 8, ctx.r5.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b85164
	if (cr6.eq) goto loc_82B85164;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lwz r26,4(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23416
	ctx.r9.s64 = r11.s64 + -23416;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ori r4,r28,512
	ctx.r4.u64 = r28.u64 | 512;
	// bl 0x830052a8
	sub_830052A8(ctx, base);
	// lis r8,-32062
	ctx.r8.s64 = -2101215232;
	// lis r5,-32072
	ctx.r5.s64 = -2101870592;
	// addi r7,r8,-9152
	ctx.r7.s64 = ctx.r8.s64 + -9152;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r5,17200
	ctx.r5.s64 = ctx.r5.s64 + 17200;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b83ed0
	sub_82B83ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// bl 0x8225fcd8
	sub_8225FCD8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82B85164:
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B850B8) {
	__imp__sub_82B850B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B85178) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b851d8
	if (cr6.eq) goto loc_82B851D8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b851d8
	if (cr6.eq) goto loc_82B851D8;
	// lis r11,-32176
	r11.s64 = -2108686336;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-8176
	ctx.r9.s64 = r11.s64 + -8176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82b851dc
	goto loc_82B851DC;
loc_82B851D8:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82B851DC:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x82b85224
	if (cr6.eq) goto loc_82B85224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b85224
	if (cr6.eq) goto loc_82B85224;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82B85224:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b85238
	if (cr6.eq) goto loc_82B85238;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r27,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r27.u32);
loc_82B85238:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B85178) {
	__imp__sub_82B85178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B85248) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b852c0
	if (cr6.eq) goto loc_82B852C0;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82b852a0
	if (cr6.eq) goto loc_82B852A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82B852A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82b850b8
	sub_82B850B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
loc_82B852C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x829ff648
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B85248) {
	__imp__sub_82B85248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B852D0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
	// stw r9,80(r28)
	PPC_STORE_U32(r28.u32 + 80, ctx.r9.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b85378
	if (cr6.lt) goto loc_82B85378;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b85388
	goto loc_82B85388;
loc_82B85378:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85388:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b853c0
	if (cr6.eq) goto loc_82B853C0;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82B853C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82b853d4
	if (cr6.lt) goto loc_82B853D4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82b85478
	goto loc_82B85478;
loc_82B853D4:
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b85430
	if (cr6.lt) goto loc_82B85430;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b85440
	goto loc_82B85440;
loc_82B85430:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85440:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b85474
	if (cr6.eq) goto loc_82B85474;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B85474:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82B85478:
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b854d0
	if (cr6.lt) goto loc_82B854D0;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b854e0
	goto loc_82B854E0;
loc_82B854D0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B854E0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b85514
	if (cr6.eq) goto loc_82B85514;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B85514:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b85570
	if (cr6.lt) goto loc_82B85570;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b85580
	goto loc_82B85580;
loc_82B85570:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85580:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b855b4
	if (cr6.eq) goto loc_82B855B4;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B855B4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b85610
	if (cr6.lt) goto loc_82B85610;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b85620
	goto loc_82B85620;
loc_82B85610:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85620:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b85654
	if (cr6.eq) goto loc_82B85654;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B85654:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b856b0
	if (cr6.lt) goto loc_82B856B0;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b856c0
	goto loc_82B856C0;
loc_82B856B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B856C0:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b856f4
	if (cr6.eq) goto loc_82B856F4;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,107(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B856F4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b85750
	if (cr6.lt) goto loc_82B85750;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b85760
	goto loc_82B85760;
loc_82B85750:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85760:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b85794
	if (cr6.eq) goto loc_82B85794;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B85794:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b857f0
	if (cr6.lt) goto loc_82B857F0;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b85800
	goto loc_82B85800;
loc_82B857F0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85800:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b85834
	if (cr6.eq) goto loc_82B85834;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,115(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B85834:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// stw r10,28(r28)
	PPC_STORE_U32(r28.u32 + 28, ctx.r10.u32);
	// blt cr6,0x82b8593c
	if (cr6.lt) goto loc_82B8593C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x82b85890
	if (cr6.lt) goto loc_82B85890;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// b 0x82b85898
	goto loc_82B85898;
loc_82B85890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85898:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b858ec
	if (cr6.lt) goto loc_82B858EC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b858fc
	goto loc_82B858FC;
loc_82B858EC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B858FC:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b85930
	if (cr6.eq) goto loc_82B85930;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,119(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B85930:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r11.u32);
	// b 0x82b859c0
	goto loc_82B859C0;
loc_82B8593C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b859c0
	if (!cr6.eq) goto loc_82B859C0;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b859c0
	if (cr6.eq) goto loc_82B859C0;
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r30,r11,2,0,29
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bgt cr6,0x82b859b4
	if (cr6.gt) goto loc_82B859B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// b 0x82b859c0
	goto loc_82B859C0;
loc_82B859B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B859C0:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b859e8
	if (!cr6.eq) goto loc_82B859E8;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b859e8
	if (cr6.eq) goto loc_82B859E8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
loc_82B859E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B852D0) {
	__imp__sub_82B852D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B859F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bb8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r29,r10,2,0,29
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// addi r21,r11,-9848
	r21.s64 = r11.s64 + -9848;
	// lwz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(32) );
	// mulli r7,r8,112
	ctx.r7.s64 = ctx.r8.s64 * 112;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwzx r6,r29,r26
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// addi r5,r21,108
	ctx.r5.s64 = r21.s64 + 108;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r11,r6,r4
	r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r16,r3,r11
	r16.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b85ad4
	if (cr6.eq) goto loc_82B85AD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r19,16(r26)
	r19.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r18,20(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + int32_t(4) );
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r30,0
	r30.s64 = 0;
loc_82B85A84:
	// cmpw cr6,r19,r9
	cr6.compare<int32_t>(r19.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82b85a94
	if (cr6.gt) goto loc_82B85A94;
	// cmpw cr6,r18,r10
	cr6.compare<int32_t>(r18.s32, ctx.r10.s32, xer);
	// ble cr6,0x82b85af8
	if (!cr6.gt) goto loc_82B85AF8;
loc_82B85A94:
	// srawi r11,r19,1
	xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r11.s64 = r19.s32 >> 1;
	// lwz r8,28(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r7,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 31;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & r11.u64;
	// subfic r19,r6,1
	xer.ca = ctx.r6.u32 <= 1;
	r19.s64 = 1 - ctx.r6.s64;
	// srawi r5,r18,1
	xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	ctx.r5.s64 = r18.s32 >> 1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	r11.s64 = temp.s64;
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r4,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 31;
	// and r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 & r11.u64;
	// subfic r18,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	r18.s64 = 1 - ctx.r3.s64;
	// blt cr6,0x82b85a84
	if (cr6.lt) goto loc_82B85A84;
loc_82B85AD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c08
	return;
loc_82B85AF8:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r9,r29,r26
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r26.u32);
	// subf r29,r9,r6
	r29.s64 = ctx.r6.s64 - ctx.r9.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + int32_t(4) );
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// li r25,0
	r25.s64 = 0;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// rlwinm r11,r7,26,28,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - r11.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 & ctx.r6.u64;
	// add. r17,r10,r11
	r17.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r17.s32, 0, xer);
	// ble 0x82b85d18
	if (!cr0.gt) goto loc_82B85D18;
loc_82B85B6C:
	// li r24,0
	r24.s64 = 0;
	// addi r23,r18,-1
	r23.s64 = r18.s64 + -1;
	// addi r22,r19,-1
	r22.s64 = r19.s64 + -1;
loc_82B85B78:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b87648
	sub_82B87648(ctx, base);
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// addi r11,r21,4
	r11.s64 = r21.s64 + 4;
	// mulli r8,r9,112
	ctx.r8.s64 = ctx.r9.s64 * 112;
	// addi r10,r21,8
	ctx.r10.s64 = r21.s64 + 8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// add r5,r23,r11
	ctx.r5.u64 = r23.u64 + r11.u64;
	// add r6,r22,r11
	ctx.r6.u64 = r22.u64 + r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = rotl32(ctx.r5.u32, 1);
	// divw r4,r6,r11
	ctx.r4.s32 = ctx.r6.s32 / r11.s32;
	// rotlwi r10,r6,1
	ctx.r10.u64 = rotl32(ctx.r6.u32, 1);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r11,r3
	ctx.r8.u64 = r11.u64 & ~ctx.r3.u64;
	// andc r7,r11,r10
	ctx.r7.u64 = r11.u64 & ~ctx.r10.u64;
	// rlwinm r30,r9,29,3,31
	r30.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r11,0
	// twllei r11,0
	// divw r11,r5,r11
	r11.s32 = ctx.r5.s32 / r11.s32;
	// twlgei r8,-1
	// twlgei r7,-1
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// bne cr6,0x82b85c4c
	if (!cr6.eq) goto loc_82B85C4C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bgt cr6,0x82b85c3c
	if (cr6.gt) goto loc_82B85C3C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// b 0x82b85cb8
	goto loc_82B85CB8;
loc_82B85C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
	// b 0x82b85cb8
	goto loc_82B85CB8;
loc_82B85C4C:
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b85cb8
	if (!cr6.gt) goto loc_82B85CB8;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82B85C5C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x82b85ca0
	if (cr6.gt) goto loc_82B85CA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// b 0x82b85cac
	goto loc_82B85CAC;
loc_82B85CA0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85CAC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// bne 0x82b85c5c
	if (!cr0.eq) goto loc_82B85C5C;
loc_82B85CB8:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + int32_t(4) );
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r24,6
	cr6.compare<int32_t>(r24.s32, 6, xer);
	// blt cr6,0x82b85b78
	if (cr6.lt) goto loc_82B85B78;
	// srawi r11,r19,1
	xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r11.s64 = r19.s32 >> 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r25,r17
	cr6.compare<int32_t>(r25.s32, r17.s32, xer);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r10,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 31;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & r11.u64;
	// subfic r19,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	r19.s64 = 1 - ctx.r9.s64;
	// srawi r8,r18,1
	xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	ctx.r8.s64 = r18.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r11.s64 = temp.s64;
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r7,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 31;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & r11.u64;
	// subfic r18,r6,1
	xer.ca = ctx.r6.u32 <= 1;
	r18.s64 = 1 - ctx.r6.s64;
	// blt cr6,0x82b85b6c
	if (cr6.lt) goto loc_82B85B6C;
loc_82B85D18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c08
	return;
}

PPC_WEAK_FUNC(sub_82B859F0) {
	__imp__sub_82B859F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B85D40) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r11,r6,8
	r11.s64 = ctx.r6.s64 + 8;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(32) );
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// subf. r11,r6,r8
	r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// subf r29,r8,r7
	r29.s64 = ctx.r7.s64 - ctx.r8.s64;
	// ble 0x82b85da8
	if (!cr0.gt) goto loc_82B85DA8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_82B85D8C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82b85d8c
	if (!cr0.eq) goto loc_82B85D8C;
loc_82B85DA8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x82b85db8
	if (cr6.gt) goto loc_82B85DB8;
	// li r29,0
	r29.s64 = 0;
	// b 0x82b85e00
	goto loc_82B85E00;
loc_82B85DB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r7,r9,r11
	ctx.r7.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// add r29,r10,r3
	r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
loc_82B85E00:
	// bl 0x82b8bea0
	sub_82B8BEA0(ctx, base);
	// lis r31,-31927
	r31.s64 = -2092367872;
	// lwz r3,28508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28508) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b85e50
	if (!cr6.eq) goto loc_82B85E50;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8221f3f0
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b85e7c
	if (!cr6.eq) goto loc_82B85E7C;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r10,28060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28060) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b85e44
	if (cr6.eq) goto loc_82B85E44;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B85E44:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B85E4C:
	// stw r3,28508(r31)
	PPC_STORE_U32(r31.u32 + 28508, ctx.r3.u32);
loc_82B85E50:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
loc_82B85E7C:
	// bl 0x82b8ebd0
	sub_82B8EBD0(ctx, base);
	// b 0x82b85e4c
	goto loc_82B85E4C;
}

PPC_WEAK_FUNC(sub_82B85D40) {
	__imp__sub_82B85D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B85E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r27,16(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + int32_t(16) );
	// lwz r23,20(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b85f30
	if (cr6.lt) goto loc_82B85F30;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b85f40
	goto loc_82B85F40;
loc_82B85F30:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B85F40:
	// lwz r29,116(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// beq cr6,0x82b85f78
	if (cr6.eq) goto loc_82B85F78;
	// lbz r8,119(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r11,116(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, r11.u8);
	// lwz r29,112(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
loc_82B85F78:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// li r30,0
	r30.s64 = 0;
	// lwz r7,24(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mulli r6,r7,112
	ctx.r6.s64 = ctx.r7.s64 * 112;
	// lwz r5,44(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(44) );
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// rlwinm r11,r5,26,28,31
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0xF;
	// addi r24,r9,-9848
	r24.s64 = ctx.r9.s64 + -9848;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// li r21,-1
	r21.s64 = -1;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// lwzx r7,r6,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + r24.u32);
	// srawi r10,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 31;
	// and r25,r3,r4
	r25.u64 = ctx.r3.u64 & ctx.r4.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & r11.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r5,r11
	ctx.r5.s64 = r11.s64 - ctx.r5.s64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r17,r25,r11
	r17.u64 = r25.u64 + r11.u64;
	// bl 0x821fba48
	sub_821FBA48(ctx, base);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// lwz r18,168(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// subf r22,r29,r3
	r22.s64 = ctx.r3.s64 - r29.s64;
	// mr r19,r30
	r19.u64 = r30.u64;
	// rlwinm r25,r4,30,31,31
	r25.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1;
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(r27.s32, r18.s32, xer);
	// ble cr6,0x82b861a0
	if (!cr6.gt) goto loc_82B861A0;
	// lwz r16,172(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// cmpw cr6,r23,r16
	cr6.compare<int32_t>(r23.s32, r16.s32, xer);
	// ble cr6,0x82b861a0
	if (!cr6.gt) goto loc_82B861A0;
	// lwz r25,0(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + r29.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bgt cr6,0x82b86068
	if (cr6.gt) goto loc_82B86068;
	// mr r29,r30
	r29.u64 = r30.u64;
	// b 0x82b860b0
	goto loc_82B860B0;
loc_82B86068:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r11,r3,r22
	r11.u64 = ctx.r3.u64 + r22.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// add r29,r10,r3
	r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - r11.s64;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
loc_82B860B0:
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(24) );
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r5,28(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + int32_t(28) );
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwzx r7,r8,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r24.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821fba48
	sub_821FBA48(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(r17.s32, 1, xer);
	// ble cr6,0x82b86194
	if (!cr6.gt) goto loc_82B86194;
loc_82B860FC:
	// srawi r11,r27,1
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r11.s64 = r27.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r23,1
	xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r8.s64 = r23.s32 >> 1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// subf r27,r7,r11
	r27.s64 = r11.s64 - ctx.r7.s64;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(r27.s32, r18.s32, xer);
	// srawi r6,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 31;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & r11.u64;
	// subf r23,r5,r10
	r23.s64 = ctx.r10.s64 - ctx.r5.s64;
	// bgt cr6,0x82b86188
	if (cr6.gt) goto loc_82B86188;
	// cmpw cr6,r23,r16
	cr6.compare<int32_t>(r23.s32, r16.s32, xer);
	// bgt cr6,0x82b86188
	if (cr6.gt) goto loc_82B86188;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// rlwinm r11,r10,26,28,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x82b86194
	if (!cr6.lt) goto loc_82B86194;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83009718
	sub_83009718(ctx, base);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + r29.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b7af48
	sub_82B7AF48(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// li r19,1
	r19.s64 = 1;
loc_82B86188:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r17
	cr6.compare<int32_t>(r31.s32, r17.s32, xer);
	// blt cr6,0x82b860fc
	if (cr6.lt) goto loc_82B860FC;
loc_82B86194:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c00
	return;
loc_82B861A0:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// addi r9,r11,-22720
	ctx.r9.s64 = r11.s64 + -22720;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// addi r8,r10,7532
	ctx.r8.s64 = ctx.r10.s64 + 7532;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b86be0
	sub_82B86BE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x83009718
	sub_83009718(ctx, base);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// clrlwi r27,r25,24
	r27.u64 = r25.u32 & 0xFF;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// subf r28,r3,r6
	r28.s64 = ctx.r6.s64 - ctx.r3.s64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r25,r11,-20388
	r25.s64 = r11.s64 + -20388;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// beq cr6,0x82b86238
	if (cr6.eq) goto loc_82B86238;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b86284
	goto loc_82B86284;
loc_82B86238:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bgt cr6,0x82b86278
	if (cr6.gt) goto loc_82B86278;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - r29.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// b 0x82b86284
	goto loc_82B86284;
loc_82B86278:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B86284:
	// subf r11,r29,r20
	r11.s64 = r20.s64 - r29.s64;
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(r17.s32, 1, xer);
	// subf r10,r22,r11
	ctx.r10.s64 = r11.s64 - r22.s64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// and r11,r9,r10
	r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// add r30,r11,r22
	r30.u64 = r11.u64 + r22.u64;
	// ble cr6,0x82b8631c
	if (!cr6.gt) goto loc_82B8631C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82b8631c
	if (!cr6.gt) goto loc_82B8631C;
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// beq cr6,0x82b862d4
	if (cr6.eq) goto loc_82B862D4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b8631c
	goto loc_82B8631C;
loc_82B862D4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x82b86314
	if (cr6.gt) goto loc_82B86314;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// b 0x82b8631c
	goto loc_82B8631C;
loc_82B86314:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8631C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b86d00
	sub_82B86D00(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b86b68
	sub_82B86B68(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r14
	ctx.r4.u64 = r11.u64 + r14.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82B85E88) {
	__imp__sub_82B85E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2bc4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r29,r10,2,0,29
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// addi r20,r11,-9848
	r20.s64 = r11.s64 + -9848;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(32) );
	// mulli r7,r8,112
	ctx.r7.s64 = ctx.r8.s64 * 112;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwzx r6,r29,r28
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// addi r5,r20,108
	ctx.r5.s64 = r20.s64 + 108;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r11,r6,r4
	r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r19,r3,r11
	r19.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8643c
	if (cr6.eq) goto loc_82B8643C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r26,16(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r25,20(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r30,0
	r30.s64 = 0;
loc_82B863EC:
	// cmpw cr6,r26,r9
	cr6.compare<int32_t>(r26.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82b863fc
	if (cr6.gt) goto loc_82B863FC;
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(r25.s32, ctx.r10.s32, xer);
	// ble cr6,0x82b86460
	if (!cr6.gt) goto loc_82B86460;
loc_82B863FC:
	// srawi r11,r26,1
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r11.s64 = r26.s32 >> 1;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r7,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 31;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & r11.u64;
	// subfic r26,r6,1
	xer.ca = ctx.r6.u32 <= 1;
	r26.s64 = 1 - ctx.r6.s64;
	// srawi r5,r25,1
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r5.s64 = r25.s32 >> 1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	r11.s64 = temp.s64;
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r4,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 31;
	// and r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 & r11.u64;
	// subfic r25,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	r25.s64 = 1 - ctx.r3.s64;
	// blt cr6,0x82b863ec
	if (cr6.lt) goto loc_82B863EC;
loc_82B8643C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	return;
loc_82B86460:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwzx r6,r8,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r28.u32);
	// subf r29,r9,r6
	r29.s64 = ctx.r6.s64 - ctx.r9.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// li r27,0
	r27.s64 = 0;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// rlwinm r11,r7,26,28,31
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - r11.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 & ctx.r6.u64;
	// add. r21,r10,r11
	r21.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// ble 0x82b8666c
	if (!cr0.gt) goto loc_82B8666C;
loc_82B864D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228ff90
	sub_8228FF90(ctx, base);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// addi r11,r20,4
	r11.s64 = r20.s64 + 4;
	// mulli r8,r9,112
	ctx.r8.s64 = ctx.r9.s64 * 112;
	// addi r10,r20,8
	ctx.r10.s64 = r20.s64 + 8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r23,88(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// add r9,r11,r25
	ctx.r9.u64 = r11.u64 + r25.u64;
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r6,1
	ctx.r9.u64 = rotl32(ctx.r6.u32, 1);
	// divw r4,r5,r11
	ctx.r4.s32 = ctx.r5.s32 / r11.s32;
	// rotlwi r10,r5,1
	ctx.r10.u64 = rotl32(ctx.r5.u32, 1);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r11,r3
	ctx.r8.u64 = r11.u64 & ~ctx.r3.u64;
	// andc r7,r11,r10
	ctx.r7.u64 = r11.u64 & ~ctx.r10.u64;
	// rlwinm r30,r9,29,3,31
	r30.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r11,0
	// twllei r11,0
	// divw r11,r6,r11
	r11.s32 = ctx.r6.s32 / r11.s32;
	// twlgei r8,-1
	// twlgei r7,-1
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// bne cr6,0x82b865ac
	if (!cr6.eq) goto loc_82B865AC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bgt cr6,0x82b8659c
	if (cr6.gt) goto loc_82B8659C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// b 0x82b86618
	goto loc_82B86618;
loc_82B8659C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
	// b 0x82b86618
	goto loc_82B86618;
loc_82B865AC:
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b86618
	if (!cr6.gt) goto loc_82B86618;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82B865BC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x82b86600
	if (cr6.gt) goto loc_82B86600;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// b 0x82b8660c
	goto loc_82B8660C;
loc_82B86600:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8660C:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// bne 0x82b865bc
	if (!cr0.eq) goto loc_82B865BC;
loc_82B86618:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(4) );
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// srawi r9,r26,1
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r9.s64 = r26.s32 >> 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r8,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r11.s32 >> 31;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & r11.u64;
	// subfic r26,r7,1
	xer.ca = ctx.r7.u32 <= 1;
	r26.s64 = 1 - ctx.r7.s64;
	// srawi r6,r25,1
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r6.s64 = r25.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	r11.s64 = temp.s64;
	// subfic r11,r11,1
	xer.ca = r11.u32 <= 1;
	r11.s64 = 1 - r11.s64;
	// srawi r5,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = r11.s32 >> 31;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & r11.u64;
	// subfic r25,r4,1
	xer.ca = ctx.r4.u32 <= 1;
	r25.s64 = 1 - ctx.r4.s64;
	// blt cr6,0x82b864d4
	if (cr6.lt) goto loc_82B864D4;
loc_82B8666C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82B86358) {
	__imp__sub_82B86358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86690) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82b866c4
	if (cr6.gt) goto loc_82B866C4;
	// li r30,0
	r30.s64 = 0;
	// b 0x82b8670c
	goto loc_82B8670C;
loc_82B866C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
loc_82B8670C:
	// bl 0x82b8f760
	sub_82B8F760(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// subf. r10,r29,r11
	ctx.r10.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82b8674c
	if (!cr0.gt) goto loc_82B8674C;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
loc_82B86730:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82b86730
	if (!cr0.eq) goto loc_82B86730;
loc_82B8674C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r5,80(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(80) );
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B86690) {
	__imp__sub_82B86690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86778) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82b852d0
	sub_82B852D0(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x82b867e8
	if (!cr6.eq) goto loc_82B867E8;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lis r11,-31950
	r11.s64 = -2093875200;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-9848
	ctx.r10.s64 = r11.s64 + -9848;
	// mulli r7,r8,112
	ctx.r7.s64 = ctx.r8.s64 * 112;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// ori r8,r6,32256
	ctx.r8.u64 = ctx.r6.u64 | 32256;
loc_82B867C0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82b867e4
	if (cr6.eq) goto loc_82B867E4;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// addi r7,r10,11872
	ctx.r7.s64 = ctx.r10.s64 + 11872;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82b867c0
	if (cr6.lt) goto loc_82B867C0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82B867E4:
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
loc_82B867E8:
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,7536
	ctx.r4.s64 = ctx.r10.s64 + 7536;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b7b4c8
	sub_82B7B4C8(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86860
	if (cr6.eq) goto loc_82B86860;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b85e88
	sub_82B85E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
loc_82B86860:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8688c
	if (cr6.eq) goto loc_82B8688C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b86358
	sub_82B86358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
loc_82B8688C:
	// rlwinm r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b868b0
	if (cr6.eq) goto loc_82B868B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b86690
	sub_82B86690(ctx, base);
loc_82B868B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B86778) {
	__imp__sub_82B86778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B868C0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b86948
	if (cr6.eq) goto loc_82B86948;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82b869ec
	if (!cr6.eq) goto loc_82B869EC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// li r31,1
	r31.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8692c
	if (cr6.eq) goto loc_82B8692C;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r7,r10,-20604
	ctx.r7.s64 = ctx.r10.s64 + -20604;
	// bl 0x82b85d40
	sub_82B85D40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B8692C:
	// bl 0x82b859f0
	sub_82B859F0(ctx, base);
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
loc_82B86948:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b8697c
	if (cr6.eq) goto loc_82B8697C;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r6,r10,-20604
	ctx.r6.s64 = ctx.r10.s64 + -20604;
	// bl 0x82b85e88
	sub_82B85E88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B8697C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b869a4
	if (cr6.eq) goto loc_82B869A4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82b86358
	sub_82B86358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B869A4:
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b869d4
	if (cr6.eq) goto loc_82B869D4;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r7,r10,-20604
	ctx.r7.s64 = ctx.r10.s64 + -20604;
	// bl 0x82b86690
	sub_82B86690(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B869D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B869EC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
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

PPC_WEAK_FUNC(sub_82B868C0) {
	__imp__sub_82B868C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86A08) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82b852d0
	sub_82B852D0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82b86a88
	if (cr6.eq) goto loc_82B86A88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b86b0c
	if (!cr6.eq) goto loc_82B86B0C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// li r28,1
	r28.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82b86a78
	if (cr6.eq) goto loc_82B86A78;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82b85d40
	sub_82B85D40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
loc_82B86A78:
	// bl 0x82b859f0
	sub_82B859F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
loc_82B86A88:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b86ab4
	if (cr6.eq) goto loc_82B86AB4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b85e88
	sub_82B85E88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
loc_82B86AB4:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b86adc
	if (cr6.eq) goto loc_82B86ADC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b86358
	sub_82B86358(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
loc_82B86ADC:
	// rlwinm r11,r11,0,27,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b86b08
	if (cr6.eq) goto loc_82B86B08;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b86690
	sub_82B86690(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
loc_82B86B08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B86B0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B86A08) {
	__imp__sub_82B86A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86B18) {
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
	// bl 0x82b86b68
	sub_82B86B68(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b86b50
	if (cr6.eq) goto loc_82B86B50;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B86B50:
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

PPC_WEAK_FUNC(sub_82B86B18) {
	__imp__sub_82B86B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86B68) {
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
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r10,r11,-22720
	ctx.r10.s64 = r11.s64 + -22720;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x82b86d00
	sub_82B86D00(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r8,r9,7532
	ctx.r8.s64 = ctx.r9.s64 + 7532;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82b86bbc
	if (cr6.eq) goto loc_82B86BBC;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82B86BBC:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r10,r11,-1124
	ctx.r10.s64 = r11.s64 + -1124;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82B86B68) {
	__imp__sub_82B86B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86BE0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// bl 0x82b920f0
	sub_82B920F0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,7532
	ctx.r9.s64 = ctx.r10.s64 + 7532;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b86c70
	sub_82B86C70(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b86c60
	if (cr6.eq) goto loc_82B86C60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
loc_82B86C60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B86BE0) {
	__imp__sub_82B86BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82b86d00
	sub_82B86D00(ctx, base);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821fbfc8
	sub_821FBFC8(ctx, base);
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// stw r26,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r26.u32);
	// bne cr6,0x82b86cc0
	if (!cr6.eq) goto loc_82B86CC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b7b760
	sub_82B7B760(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_82B86CC0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b7b870
	sub_82B7B870(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bl 0x82cbb630
	sub_82CBB630(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82cbb610
	sub_82CBB610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B86C70) {
	__imp__sub_82B86C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86D00) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86d8c
	if (cr6.eq) goto loc_82B86D8C;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r29,0
	r29.s64 = 0;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b86d44
	if (cr6.eq) goto loc_82B86D44;
	// rotlwi r10,r4,0
	ctx.r10.u64 = rotl32(ctx.r4.u32, 0);
loc_82B86D34:
	// dcbf r11,r3
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82b86d34
	if (cr6.lt) goto loc_82B86D34;
loc_82B86D44:
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bl 0x82cbb610
	sub_82CBB610(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// rlwinm r5,r10,0,0,19
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r9,0,0,19
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86d84
	if (cr6.eq) goto loc_82B86D84;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
loc_82B86D84:
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
loc_82B86D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B86D00) {
	__imp__sub_82B86D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86D98) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86dc8
	if (cr6.eq) goto loc_82B86DC8;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82B86DC8:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
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

PPC_WEAK_FUNC(sub_82B86D98) {
	__imp__sub_82B86D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lis r30,-31927
	r30.s64 = -2092367872;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r10,5576
	r29.s64 = ctx.r10.s64 + 5576;
	// beq cr6,0x82b86eb4
	if (cr6.eq) goto loc_82B86EB4;
	// lwz r28,24(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// cmplwi cr6,r28,128
	cr6.compare<uint32_t>(r28.u32, 128, xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// blt cr6,0x82b86e48
	if (cr6.lt) goto loc_82B86E48;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82B86E48:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r28,1
	r22.s64 = r28.s64 + 1;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// cmplwi cr6,r28,128
	cr6.compare<uint32_t>(r28.u32, 128, xer);
	// bge cr6,0x82b86e9c
	if (!cr6.lt) goto loc_82B86E9C;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// rlwinm r11,r28,1,0,30
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,-22420
	ctx.r9.s64 = ctx.r10.s64 + -22420;
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + r11.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,-22420(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-22420) );
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stwx r7,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r7.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
loc_82B86E9C:
	// addi r11,r22,-1
	r11.s64 = r22.s64 + -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stw r11,5572(r30)
	PPC_STORE_U32(r30.u32 + 5572, r11.u32);
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82B86EB4:
	// lwz r10,5572(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(5572) );
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,27520
	r11.s64 = r11.s64 + 27520;
	// rlwinm r7,r25,3,0,28
	ctx.r7.u64 = rotl64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r8,27924
	ctx.r5.s64 = ctx.r8.s64 + 27924;
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = rotl64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r3,-31951
	ctx.r3.s64 = -2093940736;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// lwzx r28,r7,r11
	r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r27,1
	ctx.r6.s64 = r27.s64 + 1;
	// add r11,r9,r29
	r11.u64 = ctx.r9.u64 + r29.u64;
	// lwzx r5,r4,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r9,27896(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(27896) );
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r8,r26
	ctx.r6.u64 = ctx.r8.u64 + r26.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// sth r26,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r26.u16);
	// stb r9,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r9.u8);
	// stb r5,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r5.u8);
	// stb r23,10(r11)
	PPC_STORE_U8(r11.u32 + 10, r23.u8);
	// stw r31,28480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28480, r31.u32);
	// stw r10,5572(r30)
	PPC_STORE_U32(r30.u32 + 5572, ctx.r10.u32);
	// stwx r6,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + r31.u32, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	return;
}

PPC_WEAK_FUNC(sub_82B86DF8) {
	__imp__sub_82B86DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86F38) {
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
	// lis r29,-31927
	r29.s64 = -2092367872;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,5576
	ctx.r3.s64 = r11.s64 + 5576;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,5572(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(5572) );
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// sth r31,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r31.u16);
	// stb r31,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r31.u8);
	// stb r31,9(r11)
	PPC_STORE_U8(r11.u32 + 9, r31.u8);
	// stb r31,10(r11)
	PPC_STORE_U8(r11.u32 + 10, r31.u8);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// bl 0x82b92fb0
	sub_82B92FB0(ctx, base);
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r31,5572(r29)
	PPC_STORE_U32(r29.u32 + 5572, r31.u32);
	// stw r11,28480(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28480, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B86F38) {
	__imp__sub_82B86F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B86FB0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82b87020
	if (cr6.eq) goto loc_82B87020;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b86fec
	if (cr6.eq) goto loc_82B86FEC;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82B86FEC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82b87020
	if (cr6.eq) goto loc_82B87020;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B87020:
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

PPC_WEAK_FUNC(sub_82B86FB0) {
	__imp__sub_82B86FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87040) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b870ec
	if (cr6.eq) goto loc_82B870EC;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23416
	ctx.r9.s64 = r11.s64 + -23416;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ori r4,r28,512
	ctx.r4.u64 = r28.u64 | 512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83005340
	sub_83005340(ctx, base);
	// lis r8,-32062
	ctx.r8.s64 = -2101215232;
	// lis r5,-32072
	ctx.r5.s64 = -2101870592;
	// addi r7,r8,-9152
	ctx.r7.s64 = ctx.r8.s64 + -9152;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r5,17200
	ctx.r5.s64 = ctx.r5.s64 + 17200;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b83ed0
	sub_82B83ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// bl 0x8225fcd8
	sub_8225FCD8(ctx, base);
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// stw r30,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r30.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
loc_82B870EC:
	// li r31,0
	r31.s64 = 0;
	// stw r30,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r30.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r25.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82B87040) {
	__imp__sub_82B87040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bl 0x821f61d0
	sub_821F61D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B87108) {
	__imp__sub_82B87108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7508
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f9,f8
	ctx.f12.f64 = static_cast<float>(ctx.f9.f64 - ctx.f8.f64);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f7,f6
	ctx.f11.f64 = static_cast<float>(ctx.f7.f64 - ctx.f6.f64);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fsubs f13,f5,f4
	ctx.f13.f64 = static_cast<float>(ctx.f5.f64 - ctx.f4.f64);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// beq cr6,0x82b874fc
	if (cr6.eq) goto loc_82B874FC;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82b874fc
	if (cr6.eq) goto loc_82B874FC;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x82b874fc
	if (cr6.eq) goto loc_82B874FC;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// beq cr6,0x82b874fc
	if (cr6.eq) goto loc_82B874FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a66560
	sub_82A66560(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82a665b8
	sub_82A665B8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b874d4
	if (cr6.eq) goto loc_82B874D4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_82B87214:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b87228
	if (!cr6.eq) goto loc_82B87228;
	// twi 31,r0,22
loc_82B87228:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f31.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f29,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f29.f64 = double(temp.f32);
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f30.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lfs f28,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f28.f64 = double(temp.f32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f28,188(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x82a666a8
	sub_82A666A8(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82b87290
	if (!cr6.lt) goto loc_82B87290;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// ble cr6,0x82b87290
	if (!cr6.gt) goto loc_82B87290;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f29,f13
	cr6.compare(f29.f64, ctx.f13.f64);
	// bge cr6,0x82b87290
	if (!cr6.lt) goto loc_82B87290;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f28,f13
	cr6.compare(f28.f64, ctx.f13.f64);
	// bgt cr6,0x82b87294
	if (cr6.gt) goto loc_82B87294;
loc_82B87290:
	// li r11,1
	r11.s64 = 1;
loc_82B87294:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b872bc
	if (cr6.eq) goto loc_82B872BC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// ld r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// b 0x82b874c4
	goto loc_82B874C4;
loc_82B872BC:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x82b872ec
	if (cr6.lt) goto loc_82B872EC;
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bgt cr6,0x82b872ec
	if (cr6.gt) goto loc_82B872EC;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f29,f12
	cr6.compare(f29.f64, ctx.f12.f64);
	// blt cr6,0x82b872ec
	if (cr6.lt) goto loc_82B872EC;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f28,f12
	cr6.compare(f28.f64, ctx.f12.f64);
	// ble cr6,0x82b872f0
	if (!cr6.gt) goto loc_82B872F0;
loc_82B872EC:
	// li r11,0
	r11.s64 = 0;
loc_82B872F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b874c8
	if (!cr6.eq) goto loc_82B874C8;
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f13.f64);
	// bge cr6,0x82b8736c
	if (!cr6.lt) goto loc_82B8736C;
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// ble cr6,0x82b8736c
	if (!cr6.gt) goto loc_82B8736C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f29,228(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f28,236(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82a665b8
	sub_82A665B8(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stfs f29,292(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f30,296(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f28,300(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stfs f0,288(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x82b874c0
	goto loc_82B874C0;
loc_82B8736C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82b873dc
	if (!cr6.lt) goto loc_82B873DC;
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x82b873dc
	if (!cr6.gt) goto loc_82B873DC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stfs f29,196(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f28,204(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// ld r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// bl 0x82a665b8
	sub_82A665B8(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f28,220(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f0,208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// b 0x82b874c0
	goto loc_82B874C0;
loc_82B873DC:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bge cr6,0x82b87450
	if (!cr6.lt) goto loc_82B87450;
	// fcmpu cr6,f28,f0
	cr6.compare(f28.f64, f0.f64);
	// ble cr6,0x82b87450
	if (!cr6.gt) goto loc_82B87450;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stfs f29,244(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f30,248(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x82a665b8
	sub_82A665B8(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stfs f31,272(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f30,280(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f28,284(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stfs f0,276(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// b 0x82b874c0
	goto loc_82B874C0;
loc_82B87450:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bge cr6,0x82b874c8
	if (!cr6.lt) goto loc_82B874C8;
	// fcmpu cr6,f28,f0
	cr6.compare(f28.f64, f0.f64);
	// ble cr6,0x82b874c8
	if (!cr6.gt) goto loc_82B874C8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,304(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stfs f29,308(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f30,312(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,316(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82a665b8
	sub_82A665B8(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f30,264(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f28,268(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stfs f0,260(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82B874C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82B874C4:
	// bl 0x82a665b8
	sub_82A665B8(ctx, base);
loc_82B874C8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b87214
	if (!cr6.eq) goto loc_82B87214;
loc_82B874D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// bl 0x8264edf8
	sub_8264EDF8(ctx, base);
	// subfic r11,r31,0
	xer.ca = r31.u32 <= 0;
	r11.s64 = 0 - r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	// b 0x82ca2c3c
	return;
loc_82B874FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B87160) {
	__imp__sub_82B87160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87510) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x821fbed8
	sub_821FBED8(ctx, base);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r8,r11,-9848
	ctx.r8.s64 = r11.s64 + -9848;
	// mulli r11,r4,112
	r11.s64 = ctx.r4.s64 * 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// bl 0x82b923b8
	sub_82B923B8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B87510) {
	__imp__sub_82B87510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87578) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8763c
	if (cr6.eq) goto loc_82B8763C;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// li r31,0
	r31.s64 = 0;
	// rlwinm r10,r11,26,28,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// addic. r27,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	r27.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x82b8763c
	if (!cr0.gt) goto loc_82B8763C;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r30,r11,-9848
	r30.s64 = r11.s64 + -9848;
loc_82B875B4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// twllei r6,0
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// twllei r6,0
	// lwzx r4,r8,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// divw r3,r4,r6
	ctx.r3.s32 = ctx.r4.s32 / ctx.r6.s32;
	// rotlwi r11,r4,1
	r11.u64 = rotl32(ctx.r4.u32, 1);
	// divw r8,r3,r6
	ctx.r8.s32 = ctx.r3.s32 / ctx.r6.s32;
	// rotlwi r10,r3,1
	ctx.r10.u64 = rotl32(ctx.r3.u32, 1);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mullw r11,r5,r7
	r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// andc r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// andc r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// rlwinm r11,r11,29,3,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twlgei r10,-1
	// twlgei r9,-1
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// blt cr6,0x82b875b4
	if (cr6.lt) goto loc_82B875B4;
loc_82B8763C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B87578) {
	__imp__sub_82B87578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// bl 0x821ab648
	sub_821AB648(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B87648) {
	__imp__sub_82B87648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B876D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-9848
	ctx.r9.s64 = r11.s64 + -9848;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82B87710:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82b87750
	if (cr6.eq) goto loc_82B87750;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// addi r7,r9,11872
	ctx.r7.s64 = ctx.r9.s64 + 11872;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82b87710
	if (cr6.lt) goto loc_82B87710;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82B87738:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82B87750:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82b87738
	goto loc_82B87738;
}

PPC_WEAK_FUNC(sub_82B876D8) {
	__imp__sub_82B876D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-22716
	ctx.r9.s64 = ctx.r10.s64 + -22716;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r7,r8,-27860
	ctx.r7.s64 = ctx.r8.s64 + -27860;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lfs f12,-27860(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27860);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lfs f0,404(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 404);
	f0.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lfs f13,11040(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11040);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, r11.u8);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, r11.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, r11.u32);
	// stfs f0,244(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stb r10,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, ctx.r10.u8);
	// stfs f12,252(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stb r10,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r10.u8);
	// stfs f0,256(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f0,260(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,264(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B87758) {
	__imp__sub_82B87758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87868) {
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
	// bl 0x82b878b8
	sub_82B878B8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b878a0
	if (cr6.eq) goto loc_82B878A0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B878A0:
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

PPC_WEAK_FUNC(sub_82B87868) {
	__imp__sub_82B87868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B878B8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-22716
	ctx.r10.s64 = r11.s64 + -22716;
	// lwz r27,176(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + int32_t(176) );
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82b8792c
	if (cr6.eq) goto loc_82B8792C;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(28) );
	// addi r29,r27,24
	r29.s64 = r27.s64 + 24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b878f8
	if (cr6.eq) goto loc_82B878F8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B878F8:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r28,r27,8
	r28.s64 = r27.s64 + 8;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87918
	if (cr6.eq) goto loc_82B87918;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87918:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8792C:
	// stw r31,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87944
	if (cr6.eq) goto loc_82B87944;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
loc_82B87944:
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(164) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87958
	if (cr6.eq) goto loc_82B87958;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r31,164(r30)
	PPC_STORE_U32(r30.u32 + 164, r31.u32);
loc_82B87958:
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(232) );
	// addi r29,r30,228
	r29.s64 = r30.s64 + 228;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8796c
	if (cr6.eq) goto loc_82B8796C;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8796C:
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// addi r28,r30,212
	r28.s64 = r30.s64 + 212;
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(216) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8798c
	if (cr6.eq) goto loc_82B8798C;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8798C:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r29,r30,196
	r29.s64 = r30.s64 + 196;
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// lwz r3,200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(200) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b879ac
	if (cr6.eq) goto loc_82B879AC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B879AC:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r28,r30,180
	r28.s64 = r30.s64 + 180;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(184) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b879cc
	if (cr6.eq) goto loc_82B879CC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B879CC:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(164) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b879ec
	if (cr6.eq) goto loc_82B879EC;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r31,164(r30)
	PPC_STORE_U32(r30.u32 + 164, r31.u32);
loc_82B879EC:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(152) );
	// addi r29,r30,148
	r29.s64 = r30.s64 + 148;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87a00
	if (cr6.eq) goto loc_82B87A00;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87A00:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r28,r30,132
	r28.s64 = r30.s64 + 132;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(136) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87a20
	if (cr6.eq) goto loc_82B87A20;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87A20:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r29,r30,116
	r29.s64 = r30.s64 + 116;
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(120) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87a40
	if (cr6.eq) goto loc_82B87A40;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87A40:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r28,r30,100
	r28.s64 = r30.s64 + 100;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(104) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87a60
	if (cr6.eq) goto loc_82B87A60;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87A60:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r29,r30,84
	r29.s64 = r30.s64 + 84;
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(88) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87a80
	if (cr6.eq) goto loc_82B87A80;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87A80:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r28,r30,68
	r28.s64 = r30.s64 + 68;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87aa0
	if (cr6.eq) goto loc_82B87AA0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87AA0:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87ac0
	if (cr6.eq) goto loc_82B87AC0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87AC0:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(40) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87ae0
	if (cr6.eq) goto loc_82B87AE0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B87AE0:
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87b00
	if (cr6.eq) goto loc_82B87B00;
	// bl 0x82b84288
	sub_82B84288(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
loc_82B87B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B878B8) {
	__imp__sub_82B878B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87B08) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82b87040
	sub_82B87040(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// bl 0x821f61d0
	sub_821F61D0(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// addi r29,r31,164
	r29.s64 = r31.s64 + 164;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b87ce8
	if (!cr6.eq) goto loc_82B87CE8;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r30,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r30.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b850b8
	sub_82B850B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c6288
	sub_822C6288(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82b87c94
	if (cr6.lt) goto loc_82B87C94;
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// subfic r7,r3,8
	xer.ca = ctx.r3.u32 <= 8;
	ctx.r7.s64 = 8 - ctx.r3.s64;
	// rlwinm r11,r11,30,2,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r6,r3,16
	xer.ca = ctx.r3.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r3.s64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// subfic r5,r3,-8
	xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r3.s64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B87C08:
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + r11.u64;
	// add r28,r7,r11
	r28.u64 = ctx.r7.u64 + r11.u64;
	// add r27,r6,r11
	r27.u64 = ctx.r6.u64 + r11.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// lfsx f10,r28,r8
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f9,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// lfsx f8,r27,r8
	temp.u32 = PPC_LOAD_U32(r27.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f7,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne 0x82b87c08
	if (!cr0.eq) goto loc_82B87C08;
loc_82B87C94:
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// bge cr6,0x82b87cd0
	if (!cr6.lt) goto loc_82B87CD0;
	// rlwinm r11,r4,3,0,28
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r4,r30
	ctx.r10.s64 = r30.s64 - ctx.r4.s64;
loc_82B87CA4:
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r11,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, temp.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne 0x82b87ca4
	if (!cr0.eq) goto loc_82B87CA4;
loc_82B87CD0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
loc_82B87CE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B87B08) {
	__imp__sub_82B87B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87CF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r31,1
	r31.s64 = 1;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(64) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b87db4
	if (!cr6.gt) goto loc_82B87DB4;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lis r25,-31927
	r25.s64 = -2092367872;
	// addi r26,r11,24572
	r26.s64 = r11.s64 + 24572;
loc_82B87D2C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f3f0
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b87dc0
	if (!cr6.eq) goto loc_82B87DC0;
	// lwz r11,28060(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28060) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b87d58
	if (cr6.eq) goto loc_82B87D58;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B87D58:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82B87D60:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b87d98
	if (cr6.eq) goto loc_82B87D98;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82b850b8
	sub_82B850B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82b87d9c
	if (!cr6.eq) goto loc_82B87D9C;
loc_82B87D98:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82B87D9C:
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(64) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82b87d2c
	if (cr6.lt) goto loc_82B87D2C;
loc_82B87DB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82B87DC0:
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r28.u8);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x82b87d60
	goto loc_82B87D60;
}

PPC_WEAK_FUNC(sub_82B87CF0) {
	__imp__sub_82B87CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87DD8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(64) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b87e38
	if (!cr6.gt) goto loc_82B87E38;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82B87E00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b87e20
	if (cr6.eq) goto loc_82B87E20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B87E20:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(64) );
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82b87e00
	if (cr6.lt) goto loc_82B87E00;
loc_82B87E38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B87DD8) {
	__imp__sub_82B87DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,-28
	ctx.r7.s64 = ctx.r1.s64 + -28;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lfs f0,3088(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3088);
	f0.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lvlx v13,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lfs f0,3040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3040);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// ble cr6,0x82b87ea0
	if (!cr6.gt) goto loc_82B87EA0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_82B87E88:
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// vminfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::min_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaxfp v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::max_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// bne 0x82b87e88
	if (!cr0.eq) goto loc_82B87E88;
loc_82B87EA0:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// vaddfp v13,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r8,r1,-28
	ctx.r8.s64 = ctx.r1.s64 + -28;
	// vspltisw v0,0
	simd::store_i32(ctx.v0.u32, simd::set1_i32(int32_t(0x0)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f0,-27852(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v11,v12,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmulfp128 v13,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// beq cr6,0x82b87ee8
	if (cr6.eq) goto loc_82B87EE8;
loc_82B87ECC:
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// vsubfp v11,v12,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vmsum3fp128 v10,v11,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// vmaxfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::max_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// bne 0x82b87ecc
	if (!cr0.eq) goto loc_82B87ECC;
loc_82B87EE8:
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r1,-28
	ctx.r9.s64 = ctx.r1.s64 + -28;
	// addi r8,r10,-28160
	ctx.r8.s64 = ctx.r10.s64 + -28160;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lvlx v12,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v11,v13,v12,v0
	simd::store_i8(ctx.v11.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B87E40) {
	__imp__sub_82B87E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B87F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// vor v13,v0,v0
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v0.u8));
	// li r31,-32
	r31.s64 = -32;
	// addi r11,r11,-27348
	r11.s64 = r11.s64 + -27348;
	// li r6,-16
	ctx.r6.s64 = -16;
	// lfs f11,1200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1200);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f12,9244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9244);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfd f9,1584(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1584);
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
loc_82B87F64:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f10.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x82b88030
	if (cr6.lt) goto loc_82B88030;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
loc_82B87F80:
	// lvx128 v12,r10,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r31.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-32
	r30.s64 = ctx.r1.s64 + -32;
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b87fa8
	if (!cr6.gt) goto loc_82B87FA8;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_82B87FA8:
	// lvx128 v12,r10,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-32
	r30.s64 = ctx.r1.s64 + -32;
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b87fd0
	if (!cr6.gt) goto loc_82B87FD0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
loc_82B87FD0:
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-32
	r30.s64 = ctx.r1.s64 + -32;
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b87ff8
	if (!cr6.gt) goto loc_82B87FF8;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
loc_82B87FF8:
	// lvx128 v12,r10,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-32
	r30.s64 = ctx.r1.s64 + -32;
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// stvx128 v10,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b88020
	if (!cr6.gt) goto loc_82B88020;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
loc_82B88020:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b87f80
	if (cr6.lt) goto loc_82B87F80;
loc_82B88030:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82b88078
	if (!cr6.lt) goto loc_82B88078;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82B88040:
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v11
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// stvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82b88068
	if (!cr6.gt) goto loc_82B88068;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_82B88068:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x82b88040
	if (cr6.lt) goto loc_82B88040;
loc_82B88078:
	// rlwinm r11,r9,4,0,27
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lvx128 v12,r11,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvlx v10,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vsubfp v11,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vspltw v9,v10,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// bge cr6,0x82b880a4
	if (!cr6.lt) goto loc_82B880A4;
	// vor v13,v0,v0
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v0.u8));
	// fmr f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = f0.f64;
	// b 0x82b880b0
	goto loc_82B880B0;
loc_82B880A4:
	// fmul f0,f12,f9
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64 * ctx.f9.f64;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
loc_82B880B0:
	// vmaddfp v0,v11,v9,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v9.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// fcmpu cr6,f12,f8
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bgt cr6,0x82b87f64
	if (cr6.gt) goto loc_82B87F64;
	// fsqrts f0,f11
	f0.f64 = double(simd::sqrt_f32(float(ctx.f11.f64)));
	// stfs f0,-48(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// addi r9,r11,-28160
	ctx.r9.s64 = r11.s64 + -28160;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvlx v12,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v11,v13,v12,v0
	simd::store_i8(ctx.v11.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B87F20) {
	__imp__sub_82B87F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B880F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f0,1200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1200);
	f0.f64 = double(temp.f32);
	// lfs f13,1388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1388);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f8,-264(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fmr f9,f0
	ctx.f9.f64 = f0.f64;
	// stfs f9,-268(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f10,-224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// stfs f0,-252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// stfs f11,-256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// stfs f13,-260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// ble cr6,0x82b882b4
	if (!cr6.gt) goto loc_82B882B4;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82B88140:
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-240
	ctx.r8.s64 = ctx.r1.s64 + -240;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f7.f64);
	// stfs f12,-272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fcmpu cr6,f12,f8
	cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// blt cr6,0x82b88174
	if (cr6.lt) goto loc_82B88174;
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
loc_82B88174:
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// lfs f8,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-264(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f7.f64);
	// stfs f12,-272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// blt cr6,0x82b881b0
	if (cr6.lt) goto loc_82B881B0;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
loc_82B881B0:
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// lfs f9,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-268(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f7.f64);
	// stfs f12,-272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x82b881ec
	if (cr6.lt) goto loc_82B881EC;
	// addi r10,r1,-252
	ctx.r10.s64 = ctx.r1.s64 + -252;
loc_82B881EC:
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,-272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82b88228
	if (!cr6.lt) goto loc_82B88228;
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
loc_82B88228:
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,-272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82b88264
	if (!cr6.lt) goto loc_82B88264;
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
loc_82B88264:
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,-272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82b882a0
	if (!cr6.lt) goto loc_82B882A0;
	// addi r10,r1,-260
	ctx.r10.s64 = ctx.r1.s64 + -260;
loc_82B882A0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfs f13,-260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82b88140
	if (!cr0.eq) goto loc_82B88140;
loc_82B882B4:
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// addi r9,r11,-27852
	ctx.r9.s64 = r11.s64 + -27852;
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// addi r6,r1,-272
	ctx.r6.s64 = ctx.r1.s64 + -272;
	// lfs f0,-27852(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27852);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-260
	r11.s64 = ctx.r1.s64 + -260;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f13,384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// stfs f13,-272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f9,-272(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f8,-272(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// stfs f7,-260(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v12,0,r6
	temp.u32 = r0.u32 + ctx.r6.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vor v0,v11,v11
	simd::store_i8(ctx.v0.u8, simd::load_i8(ctx.v11.u8));
	// stfs f13,-268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// vrlimi128 v0,v13,3,2
	simd::store_f32(ctx.v0.f32, simd::blend_f32<3>(simd::load_f32(ctx.v0.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// blt cr6,0x82b88468
	if (cr6.lt) goto loc_82B88468;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r31,-32
	r31.s64 = -32;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// li r6,-16
	ctx.r6.s64 = -16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82B8834C:
	// lvx128 v13,r11,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r30,r1,-240
	r30.s64 = ctx.r1.s64 + -240;
	// stvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,-228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// lfs f12,-208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	f0.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f12.f64)));
	// stfs f0,-264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82b88388
	if (!cr6.lt) goto loc_82B88388;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
loc_82B88388:
	// lvx128 v13,r11,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-240
	r30.s64 = ctx.r1.s64 + -240;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// stfs f0,-268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// stvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// lfs f13,-228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v11,r0,r29
	ea = (r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// stfs f13,-264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82b883cc
	if (!cr6.lt) goto loc_82B883CC;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
loc_82B883CC:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-208
	r30.s64 = ctx.r1.s64 + -208;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r29,r1,-240
	r29.s64 = ctx.r1.s64 + -240;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// stfs f0,-268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// stvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// lfs f13,-228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v11,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// stfs f13,-264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82b88410
	if (!cr6.lt) goto loc_82B88410;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
loc_82B88410:
	// lvx128 v13,r11,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,-240
	r30.s64 = ctx.r1.s64 + -240;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// stfs f0,-268(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// stvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// lfs f13,-228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v11,r0,r29
	ea = (r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// stfs f13,-264(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82b88454
	if (!cr6.lt) goto loc_82B88454;
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
loc_82B88454:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfs f13,-268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// bne 0x82b8834c
	if (!cr0.eq) goto loc_82B8834C;
loc_82B88468:
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// bge cr6,0x82b884cc
	if (!cr6.lt) goto loc_82B884CC;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r5
	r11.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82B8847C:
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r8,r1,-240
	ctx.r8.s64 = ctx.r1.s64 + -240;
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,-228(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r1,-264
	ctx.r9.s64 = ctx.r1.s64 + -264;
	// lfs f12,-208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	f0.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f12.f64)));
	// stfs f0,-264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82b884b8
	if (!cr6.lt) goto loc_82B884B8;
	// addi r9,r1,-268
	ctx.r9.s64 = ctx.r1.s64 + -268;
loc_82B884B8:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfs f13,-268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82b8847c
	if (!cr0.eq) goto loc_82B8847C;
loc_82B884CC:
	// fsqrts f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stfs f0,-272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,-272
	ctx.r10.s64 = ctx.r1.s64 + -272;
	// addi r9,r11,-28160
	ctx.r9.s64 = r11.s64 + -28160;
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvlx v13,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v12,v0,v13,v7
	simd::store_i8(ctx.v12.u8, simd::permute_bytes(simd::load_i8(ctx.v0.u8), simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v7.u8)));
	// stvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B880F0) {
	__imp__sub_82B880F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B884F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f1,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// addi r11,r11,-27852
	r11.s64 = r11.s64 + -27852;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 384);
	f0.f64 = double(temp.f32);
	// lfs f13,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82b88544
	if (!cr6.eq) goto loc_82B88544;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,36
	ctx.r10.s64 = ctx.r1.s64 + 36;
	// addi r9,r11,-28160
	ctx.r9.s64 = r11.s64 + -28160;
	// lvlx v12,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm v11,v13,v12,v0
	simd::store_i8(ctx.v11.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
loc_82B88544:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vsubfp v12,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vmsum3fp128 v13,v12,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// lfs f0,-4(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f0,f13
	f0.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82b885b4
	if (!cr6.lt) goto loc_82B885B4;
	// fsubs f12,f1,f13
	ctx.f12.f64 = static_cast<float>(ctx.f1.f64 - ctx.f13.f64);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x82b885c0
	if (!cr6.lt) goto loc_82B885C0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,36
	ctx.r10.s64 = ctx.r1.s64 + 36;
	// addi r9,r11,-28160
	ctx.r9.s64 = r11.s64 + -28160;
	// lvlx v13,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm v12,v11,v13,v0
	simd::store_i8(ctx.v12.u8, simd::permute_bytes(simd::load_i8(ctx.v11.u8), simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
loc_82B885B4:
	// fsubs f12,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = static_cast<float>(ctx.f13.f64 - ctx.f1.f64);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bltlr cr6
	if (cr6.lt) return;
loc_82B885C0:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// vor v13,v0,v0
	simd::store_i8(ctx.v13.u8, simd::load_i8(ctx.v0.u8));
	// lfs f12,-25888(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25888);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82b88630
	if (!cr6.gt) goto loc_82B88630;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// addi r7,r1,-28
	ctx.r7.s64 = ctx.r1.s64 + -28;
	// lfs f12,396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / f0.f64));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// vaddfp v13,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f11,-4(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lvlx v6,0,r7
	temp.u32 = r0.u32 + ctx.r7.u32;
	simd::store_shuffled(ctx.v6,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v11,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// fsubs f10,f11,f1
	ctx.f10.f64 = static_cast<float>(ctx.f11.f64 - ctx.f1.f64);
	// stfs f10,-32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvlx v9,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v9,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v8,v9,0
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v9.u32), 3));
	// vmulfp128 v7,v12,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vspltw v5,v6,0
	simd::store_i32(ctx.v5.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v6.u32), 3));
	// vmaddfp v4,v7,v10,v13
	simd::store_f32_aligned(ctx.v4.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v13,v4,v5
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v5.f32)));
loc_82B88630:
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r1,-28
	ctx.r9.s64 = ctx.r1.s64 + -28;
	// addi r8,r10,-28160
	ctx.r8.s64 = ctx.r10.s64 + -28160;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f12,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + f0.f64));
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,-28(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lvlx v12,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v11,v13,v12,v0
	simd::store_i8(ctx.v11.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B884F8) {
	__imp__sub_82B884F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B88670) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b886d8
	if (cr6.lt) goto loc_82B886D8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b886e8
	goto loc_82B886E8;
loc_82B886D8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B886E8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82b8871c
	if (cr6.eq) goto loc_82B8871C;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
loc_82B8871C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b88778
	if (cr6.lt) goto loc_82B88778;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b88788
	goto loc_82B88788;
loc_82B88778:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88788:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82b887c0
	if (cr6.eq) goto loc_82B887C0;
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r11,86(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r11.u8);
	// stb r9,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82B887C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// mullw r29,r9,r11
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82300648
	sub_82300648(ctx, base);
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// bl 0x82a8bbd0
	sub_82A8BBD0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82b88860
	if (!cr6.gt) goto loc_82B88860;
loc_82B887FC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b88838
	if (cr6.lt) goto loc_82B88838;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b88848
	goto loc_82B88848;
loc_82B88838:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88848:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(12) );
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stbx r10,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82b887fc
	if (cr6.lt) goto loc_82B887FC;
loc_82B88860:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b888a4
	if (!cr6.gt) goto loc_82B888A4;
	// li r30,0
	r30.s64 = 0;
loc_82B88874:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(28) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r27,r11,r30
	r27.u64 = r11.u64 + r30.u64;
	// bl 0x82a1c110
	sub_82A1C110(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82b88874
	if (cr6.lt) goto loc_82B88874;
loc_82B888A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B88670) {
	__imp__sub_82B88670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B888B0) {
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
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b88a10
	if (!cr6.gt) goto loc_82B88A10;
	// li r30,0
	r30.s64 = 0;
	// subf r26,r10,r5
	r26.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
loc_82B888DC:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lvx128 v11,r26,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r26.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// lvx128 v10,r30,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v10,1
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 2));
	// vspltw v0,v10,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vspltw v13,v10,2
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 1));
	// vspltw v12,v10,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 0));
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r28,r9,1
	r28.u64 = rotl32(ctx.r9.u32, 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r27,r29,1
	r27.u64 = rotl32(r29.u32, 1);
	// add r11,r9,r28
	r11.u64 = ctx.r9.u64 + r28.u64;
	// add r9,r29,r27
	ctx.r9.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rotlwi r28,r4,1
	r28.u64 = rotl32(ctx.r4.u32, 1);
	// rotlwi r29,r5,1
	r29.u64 = rotl32(ctx.r5.u32, 1);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// lvx128 v8,r11,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// lvx128 v7,r11,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v6,v11,v8
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v6.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v8.f32), 0xFF));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v4,v11,v7
	simd::store_f32_aligned(ctx.v4.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v3,v11,v5
	simd::store_f32_aligned(ctx.v3.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v5.f32), 0xFF));
	// lvx128 v2,r9,r7
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r9,r8
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v31,v11,v2
	simd::store_f32_aligned(v31.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v2.f32), 0xFF));
	// lvx128 v30,r0,r9
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v29,v11,v1
	simd::store_f32_aligned(v29.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v1.f32), 0xFF));
	// vmsum4fp128 v28,v11,v30
	simd::store_f32_aligned(v28.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v30.f32), 0xFF));
	// rlwinm r11,r4,4,0,27
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvx128 v27,r11,r7
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r11,r8
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v25,v11,v27
	simd::store_f32_aligned(v25.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v27.f32), 0xFF));
	// lvx128 v24,r0,r11
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v23,v11,v26
	simd::store_f32_aligned(v23.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v26.f32), 0xFF));
	// vmsum4fp128 v22,v11,v24
	simd::store_f32_aligned(v22.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v24.f32), 0xFF));
	// lvx128 v21,r9,r7
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v20,v6,v9
	simd::store_f32_aligned(v20.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v19,r9,r8
	simd::store_shuffled(v19, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v18,v4,v9
	simd::store_f32_aligned(v18.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// lvx128 v17,r0,r9
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v16,v3,v9
	simd::store_f32_aligned(v16.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmsum4fp128 v15,v11,v21
	simd::store_f32_aligned(v15.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v21.f32), 0xFF));
	// vmsum4fp128 v14,v11,v19
	simd::store_f32_aligned(v14.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v19.f32), 0xFF));
	// vmsum4fp128 v10,v11,v17
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v17.f32), 0xFF));
	// vmaddfp v9,v31,v0,v20
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v31.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(v20.f32)));
	// vmaddfp v8,v29,v0,v18
	simd::store_f32_aligned(ctx.v8.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v29.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(v18.f32)));
	// vmaddfp v7,v28,v0,v16
	simd::store_f32_aligned(ctx.v7.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v28.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(v16.f32)));
	// vmaddfp v6,v25,v13,v9
	simd::store_f32_aligned(ctx.v6.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v25.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v5,v23,v13,v8
	simd::store_f32_aligned(ctx.v5.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v23.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v4,v22,v13,v7
	simd::store_f32_aligned(ctx.v4.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v22.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v7.f32)));
	// vmaddfp v3,v15,v12,v6
	simd::store_f32_aligned(ctx.v3.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v15.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v6.f32)));
	// vmaddfp v2,v14,v12,v5
	simd::store_f32_aligned(ctx.v2.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v14.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v5.f32)));
	// vmaddfp v1,v10,v12,v4
	simd::store_f32_aligned(ctx.v1.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v4.f32)));
	// vmrglw v31,v3,v11
	simd::store_i32(v31.u32, simd::unpacklo_i32(simd::load_i32(ctx.v11.u32), simd::load_i32(ctx.v3.u32)));
	// vmrglw v30,v1,v2
	simd::store_i32(v30.u32, simd::unpacklo_i32(simd::load_i32(ctx.v2.u32), simd::load_i32(ctx.v1.u32)));
	// vmrglw v29,v30,v31
	simd::store_i32(v29.u32, simd::unpacklo_i32(simd::load_i32(v31.u32), simd::load_i32(v30.u32)));
	// stvx128 v29,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v29), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(r31.s32, ctx.r4.s32, xer);
	// blt cr6,0x82b888dc
	if (cr6.lt) goto loc_82B888DC;
loc_82B88A10:
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B888B0) {
	__imp__sub_82B888B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B88A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f0,-27468(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -27468);
	f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lvlx v0,0,r3
	temp.u32 = r0.u32 + ctx.r3.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// li r11,0
	r11.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lvlx v13,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simd::store_f32(ctx.v13.f32, simd::blend_f32<4>(simd::load_f32(ctx.v13.f32), simd::permute_f32<57>(simd::load_f32(ctx.v0.f32))));
	// lvlx v12,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvlx v11,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vrlimi128 v11,v12,4,3
	simd::store_f32(ctx.v11.f32, simd::blend_f32<4>(simd::load_f32(ctx.v11.f32), simd::permute_f32<57>(simd::load_f32(ctx.v12.f32))));
	// vrlimi128 v11,v13,3,2
	simd::store_f32(ctx.v11.f32, simd::blend_f32<3>(simd::load_f32(ctx.v11.f32), simd::permute_f32<78>(simd::load_f32(ctx.v13.f32))));
	// lfs f13,24712(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24712);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, r11.u32);
	// stfs f0,80(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// stw r11,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, r11.u32);
	// stfs f0,84(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// stb r11,76(r5)
	PPC_STORE_U8(ctx.r5.u32 + 76, r11.u8);
	// stfs f0,88(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// stb r11,77(r5)
	PPC_STORE_U8(ctx.r5.u32 + 77, r11.u8);
	// stfs f0,92(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// stb r11,78(r5)
	PPC_STORE_U8(ctx.r5.u32 + 78, r11.u8);
	// stfs f13,100(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 100, temp.u32);
	// stb r11,79(r5)
	PPC_STORE_U8(ctx.r5.u32 + 79, r11.u8);
	// stb r6,96(r5)
	PPC_STORE_U8(ctx.r5.u32 + 96, ctx.r6.u8);
	// stb r11,97(r5)
	PPC_STORE_U8(ctx.r5.u32 + 97, r11.u8);
	// bl 0x82b88df0
	sub_82B88DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B88A18) {
	__imp__sub_82B88A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B88AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82a1bea8
	sub_82A1BEA8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b88b44
	if (cr6.lt) goto loc_82B88B44;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b88b54
	goto loc_82B88B54;
loc_82B88B44:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88B54:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b88b88
	if (cr6.eq) goto loc_82B88B88;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82B88B88:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,-28160
	ctx.r8.s64 = r11.s64 + -28160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvlx v12,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm v11,v13,v12,v0
	simd::store_i8(ctx.v11.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v11,r0,r28
	ea = (r28.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82a1bea8
	sub_82A1BEA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a1bea8
	sub_82A1BEA8(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r28,16
	r11.s64 = r28.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v9,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v9), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b88c38
	if (cr6.lt) goto loc_82B88C38;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b88c48
	goto loc_82B88C48;
loc_82B88C38:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88C48:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b88c7c
	if (cr6.eq) goto loc_82B88C7C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B88C7C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r29,r28,52
	r29.s64 = r28.s64 + 52;
	// li r30,3
	r30.s64 = 3;
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
loc_82B88C8C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b88ce0
	if (cr6.lt) goto loc_82B88CE0;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b88cf0
	goto loc_82B88CF0;
loc_82B88CE0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88CF0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b88d24
	if (cr6.eq) goto loc_82B88D24;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B88D24:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82b88c8c
	if (!cr0.eq) goto loc_82B88C8C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b88d8c
	if (cr6.lt) goto loc_82B88D8C;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b88d9c
	goto loc_82B88D9C;
loc_82B88D8C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88D9C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b88dd0
	if (cr6.eq) goto loc_82B88DD0;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82B88DD0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f0,64(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 64, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,68
	ctx.r3.s64 = r28.s64 + 68;
	// bl 0x82b88e80
	sub_82B88E80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B88AD0) {
	__imp__sub_82B88AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B88DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// vspltisw v13,0
	simd::store_i32(ctx.v13.u32, simd::set1_i32(int32_t(0x0)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-28160
	ctx.r9.s64 = r11.s64 + -28160;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r11,0
	r11.s64 = 0;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lvlx v12,0,r8
	temp.u32 = r0.u32 + ctx.r8.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vperm v11,v13,v12,v0
	simd::store_i8(ctx.v11.u8, simd::permute_bytes(simd::load_i8(ctx.v13.u8), simd::load_i8(ctx.v12.u8), simd::load_i8(ctx.v0.u8)));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lfs f13,24712(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24712);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stfs f0,84(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// stfs f0,88(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// stfs f0,92(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, r11.u8);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stb r11,79(r3)
	PPC_STORE_U8(ctx.r3.u32 + 79, r11.u8);
	// stb r6,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r6.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B88DF0) {
	__imp__sub_82B88DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B88E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b88ed4
	if (cr6.lt) goto loc_82B88ED4;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b88ee4
	goto loc_82B88EE4;
loc_82B88ED4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88EE4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b88f28
	if (cr6.lt) goto loc_82B88F28;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b88f38
	goto loc_82B88F38;
loc_82B88F28:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88F38:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b88f7c
	if (cr6.lt) goto loc_82B88F7C;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b88f8c
	goto loc_82B88F8C;
loc_82B88F7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88F8C:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,8(r30)
	PPC_STORE_U8(r30.u32 + 8, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b88fdc
	if (cr6.lt) goto loc_82B88FDC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b88fec
	goto loc_82B88FEC;
loc_82B88FDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B88FEC:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,11(r30)
	PPC_STORE_U8(r30.u32 + 11, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b89054
	if (cr6.lt) goto loc_82B89054;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b89064
	goto loc_82B89064;
loc_82B89054:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B89064:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b89098
	if (cr6.eq) goto loc_82B89098;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B89098:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b890f4
	if (cr6.lt) goto loc_82B890F4;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b89104
	goto loc_82B89104;
loc_82B890F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B89104:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b89138
	if (cr6.eq) goto loc_82B89138;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B89138:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b8917c
	if (cr6.lt) goto loc_82B8917C;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b8918c
	goto loc_82B8918C;
loc_82B8917C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8918C:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,9(r30)
	PPC_STORE_U8(r30.u32 + 9, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b891dc
	if (cr6.lt) goto loc_82B891DC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,85
	ctx.r8.s64 = ctx.r1.s64 + 85;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b891ec
	goto loc_82B891EC;
loc_82B891DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,85
	ctx.r4.s64 = ctx.r1.s64 + 85;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B891EC:
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,10(r30)
	PPC_STORE_U8(r30.u32 + 10, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b89254
	if (cr6.lt) goto loc_82B89254;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b89264
	goto loc_82B89264;
loc_82B89254:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B89264:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b89298
	if (cr6.eq) goto loc_82B89298;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B89298:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b892f4
	if (cr6.lt) goto loc_82B892F4;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b89304
	goto loc_82B89304;
loc_82B892F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B89304:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b89338
	if (cr6.eq) goto loc_82B89338;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B89338:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b8937c
	if (cr6.lt) goto loc_82B8937C;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b8938c
	goto loc_82B8938C;
loc_82B8937C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8938C:
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,28(r30)
	PPC_STORE_U8(r30.u32 + 28, ctx.r7.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b893dc
	if (cr6.lt) goto loc_82B893DC;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,87
	ctx.r8.s64 = ctx.r1.s64 + 87;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b893ec
	goto loc_82B893EC;
loc_82B893DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,87
	ctx.r4.s64 = ctx.r1.s64 + 87;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B893EC:
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// cmpwi cr6,r29,34
	cr6.compare<int32_t>(r29.s32, 34, xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,29(r30)
	PPC_STORE_U8(r30.u32 + 29, ctx.r7.u8);
	// ble cr6,0x82b894a8
	if (!cr6.gt) goto loc_82B894A8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b8945c
	if (cr6.lt) goto loc_82B8945C;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b8946c
	goto loc_82B8946C;
loc_82B8945C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8946C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b894a0
	if (cr6.eq) goto loc_82B894A0;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_82B894A0:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
loc_82B894A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B88E80) {
	__imp__sub_82B88E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B894B0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c6288
	sub_822C6288(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b894ec
	if (!cr6.eq) goto loc_82B894EC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c38
	return;
loc_82B894EC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82b8961c
	if (cr6.eq) goto loc_82B8961C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82B894F8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82b8954c
	if (cr6.lt) goto loc_82B8954C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// b 0x82b8955c
	goto loc_82B8955C;
loc_82B8954C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8955C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b89590
	if (cr6.eq) goto loc_82B89590;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B89590:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82a1c110
	sub_82A1C110(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(12) );
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// bne 0x82b894f8
	if (!cr0.eq) goto loc_82B894F8;
loc_82B8961C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B894B0) {
	__imp__sub_82B894B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89640) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b896a8
	if (cr6.lt) goto loc_82B896A8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b896b8
	goto loc_82B896B8;
loc_82B896A8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B896B8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b896ec
	if (cr6.eq) goto loc_82B896EC;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B896EC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b89748
	if (cr6.lt) goto loc_82B89748;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b89758
	goto loc_82B89758;
loc_82B89748:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B89758:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b8978c
	if (cr6.eq) goto loc_82B8978C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B8978C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b897e8
	if (cr6.lt) goto loc_82B897E8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b897f8
	goto loc_82B897F8;
loc_82B897E8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B897F8:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x82b89830
	if (cr6.eq) goto loc_82B89830;
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82B89830:
	// stw r30,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x82b850b8
	sub_82B850B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b894b0
	sub_82B894B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B89640) {
	__imp__sub_82B89640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89868) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b89954
	if (cr6.eq) goto loc_82B89954;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r11,26,28,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// addic. r28,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	r28.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ble 0x82b89954
	if (!cr0.gt) goto loc_82B89954;
	// lis r11,-31950
	r11.s64 = -2093875200;
	// addi r31,r11,-9848
	r31.s64 = r11.s64 + -9848;
loc_82B898A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b91e58
	sub_82B91E58(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B898C0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82b898e4
	if (cr6.eq) goto loc_82B898E4;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// addi r8,r31,11872
	ctx.r8.s64 = r31.s64 + 11872;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82b898c0
	if (cr6.lt) goto loc_82B898C0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B898E4:
	// mulli r11,r10,112
	r11.s64 = ctx.r10.s64 * 112;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// twllei r4,0
	// divw r11,r3,r4
	r11.s32 = ctx.r3.s32 / ctx.r4.s32;
	// rotlwi r10,r3,1
	ctx.r10.u64 = rotl32(ctx.r3.u32, 1);
	// divw r6,r11,r4
	ctx.r6.s32 = r11.s32 / ctx.r4.s32;
	// rotlwi r11,r11,1
	r11.u64 = rotl32(r11.u32, 1);
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 & ~r11.u64;
	// andc r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// rlwinm r11,r9,29,3,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r4,0
	// twlgei r8,-1
	// twlgei r7,-1
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// blt cr6,0x82b898a4
	if (cr6.lt) goto loc_82B898A4;
loc_82B89954:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B89868) {
	__imp__sub_82B89868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r9,r6,7120
	ctx.r9.s64 = ctx.r6.s64 + 7120;
	// lwz r11,28488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28488) );
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
loc_82B8999C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x82b8999c
	if (!cr0.eq) goto loc_82B8999C;
	// lwsync 
	// lis r3,-31927
	ctx.r3.s64 = -2092367872;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,28484(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28484) );
	// lfd f0,-40(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -40);
	// stw r4,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r4.u32);
	// lfd f13,28360(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 28360);
	// ld r3,7176(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 7176);
	// fdiv f30,f0,f13
	f30.f64 = f0.f64 / ctx.f13.f64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// bl 0x82fffb40
	sub_82FFFB40(ctx, base);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// lfd f31,28352(r7)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 28352);
	// fsub f0,f1,f31
	f0.f64 = ctx.f1.f64 - f31.f64;
	// ld r3,7168(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 7168);
	// fmul f13,f0,f30
	ctx.f13.f64 = f0.f64 * f30.f64;
	// stfd f13,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.f13.u64);
	// bl 0x82fffb40
	sub_82FFFB40(ctx, base);
	// fsub f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 - f31.f64;
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fmul f11,f12,f30
	ctx.f11.f64 = ctx.f12.f64 * f30.f64;
	// stfd f11,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.f11.u64);
	// bl 0x82fffb40
	sub_82FFFB40(ctx, base);
	// fsub f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 - f31.f64;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// fmul f9,f10,f30
	ctx.f9.f64 = ctx.f10.f64 * f30.f64;
	// stfd f9,24(r29)
	PPC_STORE_U64(r29.u32 + 24, ctx.f9.u64);
	// bl 0x82fffb40
	sub_82FFFB40(ctx, base);
	// fsub f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 - f31.f64;
	// fmul f7,f8,f30
	ctx.f7.f64 = ctx.f8.f64 * f30.f64;
	// stfd f7,32(r29)
	PPC_STORE_U64(r29.u32 + 32, ctx.f7.u64);
loc_82B89A44:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x82b89a44
	if (!cr0.eq) goto loc_82B89A44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B89960) {
	__imp__sub_82B89960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r11,r11,7120
	r11.s64 = r11.s64 + 7120;
	// addi r7,r8,28488
	ctx.r7.s64 = ctx.r8.s64 + 28488;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r10,28488(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(28488) );
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ldx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + r11.u32);
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r3,r5,r6
	PPC_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u64);
	// mftb r4
	ctx.r4.u64 = read_timestamp_counter();
	// stdx r4,r5,r11
	PPC_STORE_U64(ctx.r5.u32 + r11.u32, ctx.r4.u64);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r9,28488(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(28488) );
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// rlwinm r11,r9,1,0,30
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stwx r8,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r8.u32);
loc_82B89AEC:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r3,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r3.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82b89aec
	if (!cr0.eq) goto loc_82B89AEC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B89A78) {
	__imp__sub_82B89A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,25068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(25068) );
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b89b24
	if (!cr6.eq) goto loc_82B89B24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B89B24:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65292
	cr6.compare<uint32_t>(r11.u32, 65292, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65294
	cr6.compare<uint32_t>(r11.u32, 65294, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65306
	cr6.compare<uint32_t>(r11.u32, 65306, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65072
	cr6.compare<uint32_t>(r11.u32, 65072, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65104
	cr6.compare<uint32_t>(r11.u32, 65104, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,183
	cr6.compare<uint32_t>(r11.u32, 183, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65110
	cr6.compare<uint32_t>(r11.u32, 65110, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65373
	cr6.compare<uint32_t>(r11.u32, 65373, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12303
	cr6.compare<uint32_t>(r11.u32, 12303, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65116
	cr6.compare<uint32_t>(r11.u32, 65116, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8221
	cr6.compare<uint32_t>(r11.u32, 8221, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8226
	cr6.compare<uint32_t>(r11.u32, 8226, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8231
	cr6.compare<uint32_t>(r11.u32, 8231, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8230
	cr6.compare<uint32_t>(r11.u32, 8230, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65105
	cr6.compare<uint32_t>(r11.u32, 65105, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65108
	cr6.compare<uint32_t>(r11.u32, 65108, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65111
	cr6.compare<uint32_t>(r11.u32, 65111, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12305
	cr6.compare<uint32_t>(r11.u32, 12305, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12301
	cr6.compare<uint32_t>(r11.u32, 12301, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65118
	cr6.compare<uint32_t>(r11.u32, 65118, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12318
	cr6.compare<uint32_t>(r11.u32, 12318, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,125
	cr6.compare<uint32_t>(r11.u32, 125, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65307
	cr6.compare<uint32_t>(r11.u32, 65307, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65281
	cr6.compare<uint32_t>(r11.u32, 65281, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65106
	cr6.compare<uint32_t>(r11.u32, 65106, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65109
	cr6.compare<uint32_t>(r11.u32, 65109, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12309
	cr6.compare<uint32_t>(r11.u32, 12309, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12297
	cr6.compare<uint32_t>(r11.u32, 12297, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65114
	cr6.compare<uint32_t>(r11.u32, 65114, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8217
	cr6.compare<uint32_t>(r11.u32, 8217, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8242
	cr6.compare<uint32_t>(r11.u32, 8242, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,176
	cr6.compare<uint32_t>(r11.u32, 176, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8243
	cr6.compare<uint32_t>(r11.u32, 8243, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8451
	cr6.compare<uint32_t>(r11.u32, 8451, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12299
	cr6.compare<uint32_t>(r11.u32, 12299, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65285
	cr6.compare<uint32_t>(r11.u32, 65285, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65341
	cr6.compare<uint32_t>(r11.u32, 65341, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65504
	cr6.compare<uint32_t>(r11.u32, 65504, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8211
	cr6.compare<uint32_t>(r11.u32, 8211, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,8212
	cr6.compare<uint32_t>(r11.u32, 8212, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65377
	cr6.compare<uint32_t>(r11.u32, 65377, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65380
	cr6.compare<uint32_t>(r11.u32, 65380, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12387
	cr6.compare<uint32_t>(r11.u32, 12387, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12419
	cr6.compare<uint32_t>(r11.u32, 12419, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12421
	cr6.compare<uint32_t>(r11.u32, 12421, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12423
	cr6.compare<uint32_t>(r11.u32, 12423, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12483
	cr6.compare<uint32_t>(r11.u32, 12483, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12515
	cr6.compare<uint32_t>(r11.u32, 12515, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12517
	cr6.compare<uint32_t>(r11.u32, 12517, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12519
	cr6.compare<uint32_t>(r11.u32, 12519, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12353
	cr6.compare<uint32_t>(r11.u32, 12353, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12355
	cr6.compare<uint32_t>(r11.u32, 12355, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12357
	cr6.compare<uint32_t>(r11.u32, 12357, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12359
	cr6.compare<uint32_t>(r11.u32, 12359, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12361
	cr6.compare<uint32_t>(r11.u32, 12361, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12430
	cr6.compare<uint32_t>(r11.u32, 12430, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12449
	cr6.compare<uint32_t>(r11.u32, 12449, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12451
	cr6.compare<uint32_t>(r11.u32, 12451, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12453
	cr6.compare<uint32_t>(r11.u32, 12453, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12455
	cr6.compare<uint32_t>(r11.u32, 12455, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12457
	cr6.compare<uint32_t>(r11.u32, 12457, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12526
	cr6.compare<uint32_t>(r11.u32, 12526, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(r11.u32, 41, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12289
	cr6.compare<uint32_t>(r11.u32, 12289, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12290
	cr6.compare<uint32_t>(r11.u32, 12290, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,12540
	cr6.compare<uint32_t>(r11.u32, 12540, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65289
	cr6.compare<uint32_t>(r11.u32, 65289, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65311
	cr6.compare<uint32_t>(r11.u32, 65311, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65392
	cr6.compare<uint32_t>(r11.u32, 65392, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65438
	cr6.compare<uint32_t>(r11.u32, 65438, xer);
	// beq cr6,0x82b89dac
	if (cr6.eq) goto loc_82B89DAC;
	// cmplwi cr6,r11,65439
	cr6.compare<uint32_t>(r11.u32, 65439, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82b89db0
	if (!cr6.eq) goto loc_82B89DB0;
loc_82B89DAC:
	// li r11,1
	r11.s64 = 1;
loc_82B89DB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B89B08) {
	__imp__sub_82B89B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,25068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(25068) );
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b89dd4
	if (!cr6.eq) goto loc_82B89DD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B89DD4:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,12304
	cr6.compare<uint32_t>(r11.u32, 12304, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,12300
	cr6.compare<uint32_t>(r11.u32, 12300, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65117
	cr6.compare<uint32_t>(r11.u32, 65117, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,12317
	cr6.compare<uint32_t>(r11.u32, 12317, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,12308
	cr6.compare<uint32_t>(r11.u32, 12308, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,12296
	cr6.compare<uint32_t>(r11.u32, 12296, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65113
	cr6.compare<uint32_t>(r11.u32, 65113, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,8216
	cr6.compare<uint32_t>(r11.u32, 8216, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,8245
	cr6.compare<uint32_t>(r11.u32, 8245, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(r11.u32, 123, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65371
	cr6.compare<uint32_t>(r11.u32, 65371, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,12302
	cr6.compare<uint32_t>(r11.u32, 12302, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65115
	cr6.compare<uint32_t>(r11.u32, 65115, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,8220
	cr6.compare<uint32_t>(r11.u32, 8220, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65505
	cr6.compare<uint32_t>(r11.u32, 65505, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,12298
	cr6.compare<uint32_t>(r11.u32, 12298, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65284
	cr6.compare<uint32_t>(r11.u32, 65284, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65339
	cr6.compare<uint32_t>(r11.u32, 65339, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65510
	cr6.compare<uint32_t>(r11.u32, 65510, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65509
	cr6.compare<uint32_t>(r11.u32, 65509, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// beq cr6,0x82b89eac
	if (cr6.eq) goto loc_82B89EAC;
	// cmplwi cr6,r11,65288
	cr6.compare<uint32_t>(r11.u32, 65288, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82b89eb0
	if (!cr6.eq) goto loc_82B89EB0;
loc_82B89EAC:
	// li r11,1
	r11.s64 = 1;
loc_82B89EB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B89DB8) {
	__imp__sub_82B89DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,25068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(25068) );
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b89f08
	if (cr6.eq) goto loc_82B89F08;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(r11.u32, 4352, xer);
	// blt cr6,0x82b89ee0
	if (cr6.lt) goto loc_82B89EE0;
	// cmplwi cr6,r11,4607
	cr6.compare<uint32_t>(r11.u32, 4607, xer);
	// ble cr6,0x82b89f00
	if (!cr6.gt) goto loc_82B89F00;
loc_82B89EE0:
	// cmplwi cr6,r11,12592
	cr6.compare<uint32_t>(r11.u32, 12592, xer);
	// blt cr6,0x82b89ef0
	if (cr6.lt) goto loc_82B89EF0;
	// cmplwi cr6,r11,12687
	cr6.compare<uint32_t>(r11.u32, 12687, xer);
	// ble cr6,0x82b89f00
	if (!cr6.gt) goto loc_82B89F00;
loc_82B89EF0:
	// cmplwi cr6,r11,44032
	cr6.compare<uint32_t>(r11.u32, 44032, xer);
	// blt cr6,0x82b89f08
	if (cr6.lt) goto loc_82B89F08;
	// cmplwi cr6,r11,55203
	cr6.compare<uint32_t>(r11.u32, 55203, xer);
	// bgt cr6,0x82b89f08
	if (cr6.gt) goto loc_82B89F08;
loc_82B89F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B89F08:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(r11.u32, 4352, xer);
	// blt cr6,0x82b89f1c
	if (cr6.lt) goto loc_82B89F1C;
	// cmplwi cr6,r11,4607
	cr6.compare<uint32_t>(r11.u32, 4607, xer);
	// ble cr6,0x82b89f4c
	if (!cr6.gt) goto loc_82B89F4C;
loc_82B89F1C:
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// blt cr6,0x82b89f2c
	if (cr6.lt) goto loc_82B89F2C;
	// cmplwi cr6,r11,55215
	cr6.compare<uint32_t>(r11.u32, 55215, xer);
	// ble cr6,0x82b89f4c
	if (!cr6.gt) goto loc_82B89F4C;
loc_82B89F2C:
	// cmplwi cr6,r11,63744
	cr6.compare<uint32_t>(r11.u32, 63744, xer);
	// blt cr6,0x82b89f3c
	if (cr6.lt) goto loc_82B89F3C;
	// cmplwi cr6,r11,64255
	cr6.compare<uint32_t>(r11.u32, 64255, xer);
	// ble cr6,0x82b89f4c
	if (!cr6.gt) goto loc_82B89F4C;
loc_82B89F3C:
	// cmplwi cr6,r11,65280
	cr6.compare<uint32_t>(r11.u32, 65280, xer);
	// blt cr6,0x82b89f58
	if (cr6.lt) goto loc_82B89F58;
	// cmplwi cr6,r11,65500
	cr6.compare<uint32_t>(r11.u32, 65500, xer);
	// bgt cr6,0x82b89f58
	if (cr6.gt) goto loc_82B89F58;
loc_82B89F4C:
	// li r11,1
	r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_82B89F58:
	// li r11,0
	r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B89EB8) {
	__imp__sub_82B89EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B89F68) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82b89fd8
	if (cr6.eq) goto loc_82B89FD8;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82b89fd8
	if (cr6.eq) goto loc_82B89FD8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82b89fd8
	if (cr6.eq) goto loc_82B89FD8;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// beq cr6,0x82b89fd8
	if (cr6.eq) goto loc_82B89FD8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82b89eb8
	sub_82B89EB8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b89fd8
	if (!cr6.eq) goto loc_82B89FD8;
	// lhz r9,-2(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + -2);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82b89eb8
	sub_82B89EB8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b89fd8
	if (!cr6.eq) goto loc_82B89FD8;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82b8a004
	if (!cr6.eq) goto loc_82B8A004;
loc_82B89FD8:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82b89b08
	sub_82B89B08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8a004
	if (!cr6.eq) goto loc_82B8A004;
	// lhz r3,-2(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + -2);
	// bl 0x82b89db8
	sub_82B89DB8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82b8a008
	if (cr6.eq) goto loc_82B8A008;
loc_82B8A004:
	// li r11,0
	r11.s64 = 0;
loc_82B8A008:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B89F68) {
	__imp__sub_82B89F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_82B8A020:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82b8a044
	if (cr6.eq) goto loc_82B8A044;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82b8a044
	if (cr6.eq) goto loc_82B8A044;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82b8a044
	if (cr6.eq) goto loc_82B8A044;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// bne cr6,0x82b8a04c
	if (!cr6.eq) goto loc_82B8A04C;
loc_82B8A044:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82b8a020
	goto loc_82B8A020;
loc_82B8A04C:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a064
	if (cr6.eq) goto loc_82B8A064;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82b8a064
	if (!cr6.eq) goto loc_82B8A064;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_82B8A064:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8A020) {
	__imp__sub_82B8A020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blt cr6,0x82b8a0c8
	if (cr6.lt) goto loc_82B8A0C8;
loc_82B8A080:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82b8a0ac
	if (cr6.eq) goto loc_82B8A0AC;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82b8a0ac
	if (cr6.eq) goto loc_82B8A0AC;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82b8a0ac
	if (cr6.eq) goto loc_82B8A0AC;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// beq cr6,0x82b8a0ac
	if (cr6.eq) goto loc_82B8A0AC;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82b8a0c0
	if (!cr6.eq) goto loc_82B8A0C0;
loc_82B8A0AC:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b8a080
	if (!cr6.lt) goto loc_82B8A080;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B8A0C0:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82B8A0C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8A078) {
	__imp__sub_82B8A078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31927
	r25.s64 = -2092367872;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,28492(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28492) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a348
	if (cr6.eq) goto loc_82B8A348;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82b8a348
	if (cr6.eq) goto loc_82B8A348;
	// lhz r11,0(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a348
	if (cr6.eq) goto loc_82B8A348;
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq cr6,0x82b8a1bc
	if (cr6.eq) goto loc_82B8A1BC;
	// li r28,0
	r28.s64 = 0;
loc_82B8A128:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82b8a1f0
	if (cr6.eq) goto loc_82B8A1F0;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x82b8a14c
	if (!cr6.eq) goto loc_82B8A14C;
	// addi r29,r31,2
	r29.s64 = r31.s64 + 2;
	// li r28,1
	r28.s64 = 1;
	// b 0x82b8a1a0
	goto loc_82B8A1A0;
loc_82B8A14C:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x82b8a17c
	if (!cr6.eq) goto loc_82B8A17C;
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x82b8a1b4
	if (cr6.gt) goto loc_82B8A1B4;
	// li r28,0
	r28.s64 = 0;
	// b 0x82b8a1a0
	goto loc_82B8A1A0;
loc_82B8A17C:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8a1a0
	if (!cr6.eq) goto loc_82B8A1A0;
	// lwz r11,28492(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28492) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x82b8a1f0
	if (cr6.gt) goto loc_82B8A1F0;
loc_82B8A1A0:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8a128
	if (!cr6.eq) goto loc_82B8A128;
	// b 0x82b8a1f0
	goto loc_82B8A1F0;
loc_82B8A1B4:
	// addi r31,r29,-2
	r31.s64 = r29.s64 + -2;
	// b 0x82b8a1f0
	goto loc_82B8A1F0;
loc_82B8A1BC:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x82b8a1f0
	if (cr6.eq) goto loc_82B8A1F0;
	// lwz r11,28492(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(28492) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x82b8a1f0
	if (cr6.gt) goto loc_82B8A1F0;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8a1bc
	if (!cr6.eq) goto loc_82B8A1BC;
loc_82B8A1F0:
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(r24.u32, r31.u32, xer);
	// bne cr6,0x82b8a218
	if (!cr6.eq) goto loc_82B8A218;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b8a078
	sub_82B8A078(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
loc_82B8A208:
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x82b8a020
	sub_82B8A020(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82B8A218:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82b8a228
	if (!cr6.eq) goto loc_82B8A228;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_82B8A228:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x82b8a284
	if (cr6.gt) goto loc_82B8A284;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82b8a078
	sub_82B8A078(ctx, base);
	// addi r11,r31,-2
	r11.s64 = r31.s64 + -2;
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// blt cr6,0x82b8a268
	if (cr6.lt) goto loc_82B8A268;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82b8a268
	if (!cr6.eq) goto loc_82B8A268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82B8A268:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a350
	if (cr6.eq) goto loc_82B8A350;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b8a020
	sub_82B8A020(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82B8A284:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// ble cr6,0x82b8a31c
	if (!cr6.gt) goto loc_82B8A31C;
loc_82B8A290:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x82b8a2b4
	if (cr6.eq) goto loc_82B8A2B4;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82b8a2b4
	if (cr6.eq) goto loc_82B8A2B4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82b8a2b4
	if (cr6.eq) goto loc_82B8A2B4;
	// cmplwi cr6,r11,12288
	cr6.compare<uint32_t>(r11.u32, 12288, xer);
	// bne cr6,0x82b8a2d0
	if (!cr6.eq) goto loc_82B8A2D0;
loc_82B8A2B4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b8a078
	sub_82B8A078(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a208
	if (cr6.eq) goto loc_82B8A208;
	// addi r31,r3,2
	r31.s64 = ctx.r3.s64 + 2;
loc_82B8A2D0:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// bne cr6,0x82b8a2e0
	if (!cr6.eq) goto loc_82B8A2E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b8a2e8
	goto loc_82B8A2E8;
loc_82B8A2E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b89f68
	sub_82B89F68(ctx, base);
loc_82B8A2E8:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8a314
	if (!cr6.eq) goto loc_82B8A314;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// bgt cr6,0x82b8a290
	if (cr6.gt) goto loc_82B8A290;
	// addi r11,r6,-2
	r11.s64 = ctx.r6.s64 + -2;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82B8A314:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// bgt cr6,0x82b8a330
	if (cr6.gt) goto loc_82B8A330;
loc_82B8A31C:
	// addi r11,r6,-2
	r11.s64 = ctx.r6.s64 + -2;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82B8A330:
	// addi r11,r31,-2
	r11.s64 = r31.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// bl 0x82b8a020
	sub_82B8A020(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
loc_82B8A348:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_82B8A350:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82B8A0D0) {
	__imp__sub_82B8A0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A360) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,28344
	ctx.r7.s64 = ctx.r10.s64 + 28344;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82B8A388:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82b8a388
	if (!cr0.eq) goto loc_82B8A388;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82B8A3AC:
	// mfmsr r4
	// mtmsrd r13,1
	// lwarx r5,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwcx. r5,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	cr0.so = xer.so;
	// mtmsrd r4,1
	// bne 0x82b8a3ac
	if (!cr0.eq) goto loc_82B8A3AC;
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r10,r30,88
	ctx.r10.s64 = r30.s64 + 88;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B8A3EC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82b8a3ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8A3EC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x82b8b690
	sub_82B8B690(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// stw r7,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r7.u32);
	// ld r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// std r6,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r6.u64);
	// ld r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// std r5,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.r5.u64);
	// ld r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// std r4,56(r31)
	PPC_STORE_U64(r31.u32 + 56, ctx.r4.u64);
	// ld r11,64(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 64);
	// std r11,64(r31)
	PPC_STORE_U64(r31.u32 + 64, r11.u64);
	// beq cr6,0x82b8a498
	if (cr6.eq) goto loc_82B8A498;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b8a488
	if (cr6.eq) goto loc_82B8A488;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b8a498
	if (!cr6.eq) goto loc_82B8A498;
loc_82B8A488:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8A498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8A360) {
	__imp__sub_82B8A360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A4A8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a4d4
	if (cr6.eq) goto loc_82B8A4D4;
	// bl 0x82b8a510
	sub_82B8A510(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82B8A4D4:
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// lwz r3,-12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-12) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8a4ec
	if (cr6.eq) goto loc_82B8A4EC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8A4EC:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8A4A8) {
	__imp__sub_82B8A4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A510) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b8a538
	if (cr6.eq) goto loc_82B8A538;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b8a540
	if (!cr6.eq) goto loc_82B8A540;
loc_82B8A538:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// bl 0x82b84288
	sub_82B84288(ctx, base);
loc_82B8A540:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
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

PPC_WEAK_FUNC(sub_82B8A510) {
	__imp__sub_82B8A510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A568) {
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
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a5b8
	if (cr6.eq) goto loc_82B8A5B8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b8a5a4
	if (cr6.eq) goto loc_82B8A5A4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b8a5b8
	if (!cr6.eq) goto loc_82B8A5B8;
loc_82B8A5A4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8A5B8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8a5cc
	if (cr6.eq) goto loc_82B8A5CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b8a510
	sub_82B8A510(ctx, base);
loc_82B8A5CC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x82b8b690
	sub_82B8B690(ctx, base);
	// ld r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r9.u64);
	// ld r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// std r8,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.r8.u64);
	// ld r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 56);
	// std r7,56(r31)
	PPC_STORE_U64(r31.u32 + 56, ctx.r7.u64);
	// ld r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 64);
	// std r6,64(r31)
	PPC_STORE_U64(r31.u32 + 64, ctx.r6.u64);
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

PPC_WEAK_FUNC(sub_82B8A568) {
	__imp__sub_82B8A568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r3,88
	r11.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82b8a6e8
	if (cr6.lt) goto loc_82B8A6E8;
	// beq cr6,0x82b8a6b8
	if (cr6.eq) goto loc_82B8A6B8;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x82b8a64c
	if (cr6.lt) goto loc_82B8A64C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82B8A64C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8a678
	if (!cr6.eq) goto loc_82B8A678;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8a678
	if (!cr6.eq) goto loc_82B8A678;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82B8A678:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x82b8a694
	if (!cr6.gt) goto loc_82B8A694;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82B8A694:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b8a6a0
	if (!cr6.lt) goto loc_82B8A6A0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82B8A6A0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82B8A6B8:
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r7,r10,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r10.s64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = rotl64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// srad r4,r6,r5
	temp.u64 = ctx.r5.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r6.s64 < 0) & (((ctx.r6.s64 >> temp.u64) << temp.u64) != ctx.r6.s64);
	ctx.r4.s64 = ctx.r6.s64 >> temp.u64;
	// srd r3,r4,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 | ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// blr 
	return;
loc_82B8A6E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8a714
	if (!cr6.eq) goto loc_82B8A714;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8a714
	if (!cr6.eq) goto loc_82B8A714;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82B8A714:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x82b8a730
	if (!cr6.gt) goto loc_82B8A730;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82B8A730:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b8a73c
	if (!cr6.lt) goto loc_82B8A73C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82B8A73C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8A628) {
	__imp__sub_82B8A628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8A758) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r7,r11,28344
	ctx.r7.s64 = r11.s64 + 28344;
loc_82B8A784:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82b8a784
	if (!cr0.eq) goto loc_82B8A784;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8a7e8
	if (cr6.eq) goto loc_82B8A7E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b7c760
	sub_82B7C760(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x82b8a888
	goto loc_82B8A888;
loc_82B8A7E8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b8a83c
	if (cr6.lt) goto loc_82B8A83C;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b8a84c
	goto loc_82B8A84C;
loc_82B8A83C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8A84C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82b8a880
	if (cr6.eq) goto loc_82B8A880;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
loc_82B8A880:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82B8A888:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-22500
	ctx.r4.s64 = r11.s64 + -22500;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82331308
	sub_82331308(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r10,29656
	ctx.r4.s64 = ctx.r10.s64 + 29656;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82b8a97c
	if (cr6.lt) goto loc_82B8A97C;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x82b8a98c
	goto loc_82B8A98C;
loc_82B8A97C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8A98C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b8a9e8
	if (cr6.lt) goto loc_82B8A9E8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b8a9f8
	goto loc_82B8A9F8;
loc_82B8A9E8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8A9F8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x82b8aa2c
	if (cr6.eq) goto loc_82B8AA2C;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
loc_82B8AA2C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B8A758) {
	__imp__sub_82B8A758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8AA48) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r28,r25,28
	r28.s64 = r25.s64 + 28;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_82B8AA68:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b8aabc
	if (cr6.lt) goto loc_82B8AABC;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b8aacc
	goto loc_82B8AACC;
loc_82B8AABC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8AACC:
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x82b8ab04
	if (cr6.eq) goto loc_82B8AB04;
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82B8AB04:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bge cr6,0x82b8ab98
	if (!cr6.lt) goto loc_82B8AB98;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-4) );
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 4;
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r26.u64);
	// std r26,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, r26.u64);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// ble cr6,0x82b8ab5c
	if (!cr6.gt) goto loc_82B8AB5C;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = rotl32(ctx.r10.u32, 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r3,r28,-8
	ctx.r3.s64 = r28.s64 + -8;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// subf r5,r8,r30
	ctx.r5.s64 = r30.s64 - ctx.r8.s64;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82b8fca8
	sub_82B8FCA8(ctx, base);
	// b 0x82b8ab98
	goto loc_82B8AB98;
loc_82B8AB5C:
	// bge cr6,0x82b8ab98
	if (!cr6.lt) goto loc_82B8AB98;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r28,-8
	ctx.r4.s64 = r28.s64 + -8;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b8b8e8
	sub_82B8B8E8(ctx, base);
loc_82B8AB98:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82b8ae64
	if (!cr6.gt) goto loc_82B8AE64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82B8ABA4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b8abf8
	if (cr6.lt) goto loc_82B8ABF8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82b8ac08
	goto loc_82B8AC08;
loc_82B8ABF8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8AC08:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b8ac3c
	if (cr6.eq) goto loc_82B8AC3C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B8AC3C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// blt cr6,0x82b8ac98
	if (cr6.lt) goto loc_82B8AC98;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b8aca8
	goto loc_82B8ACA8;
loc_82B8AC98:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8ACA8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b8acdc
	if (cr6.eq) goto loc_82B8ACDC;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B8ACDC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// blt cr6,0x82b8ad38
	if (cr6.lt) goto loc_82B8AD38;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b8ad48
	goto loc_82B8AD48;
loc_82B8AD38:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8AD48:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b8ad7c
	if (cr6.eq) goto loc_82B8AD7C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B8AD7C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// blt cr6,0x82b8add8
	if (cr6.lt) goto loc_82B8ADD8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b8ade8
	goto loc_82B8ADE8;
loc_82B8ADD8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8ADE8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82b8ae1c
	if (cr6.eq) goto loc_82B8AE1C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,107(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82B8AE1C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// bge cr6,0x82b8ae58
	if (!cr6.lt) goto loc_82B8AE58;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-4) );
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stwx r8,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_82B8AE58:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x82b8aba4
	if (!cr0.eq) goto loc_82B8ABA4;
loc_82B8AE64:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// blt cr6,0x82b8aa68
	if (cr6.lt) goto loc_82B8AA68;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// blt cr6,0x82b8aec8
	if (cr6.lt) goto loc_82B8AEC8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B8AE94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b8ae94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8AE94;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// addi r9,r7,-8
	ctx.r9.s64 = ctx.r7.s64 + -8;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x82b8aed8
	goto loc_82B8AED8;
loc_82B8AEC8:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8AED8:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// beq cr6,0x82b8af2c
	if (cr6.eq) goto loc_82B8AF2C;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r5,143(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lbz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
loc_82B8AF2C:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// blt cr6,0x82b8af80
	if (cr6.lt) goto loc_82B8AF80;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B8AF4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b8af4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8AF4C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// addi r9,r7,-8
	ctx.r9.s64 = ctx.r7.s64 + -8;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x82b8af90
	goto loc_82B8AF90;
loc_82B8AF80:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8AF90:
	// ld r11,144(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// beq cr6,0x82b8afe4
	if (cr6.eq) goto loc_82B8AFE4;
	// lbz r11,129(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// lbz r9,131(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// lbz r8,134(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// lbz r7,133(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// lbz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r5,151(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r7,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r7.u8);
	// stb r6,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r6.u8);
	// stb r5,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r5.u8);
	// stb r4,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r4.u8);
	// stb r11,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, r11.u8);
	// stb r10,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// stb r9,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r9.u8);
loc_82B8AFE4:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// blt cr6,0x82b8b038
	if (cr6.lt) goto loc_82B8B038;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B8B004:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b8b004
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8B004;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// addi r9,r7,-8
	ctx.r9.s64 = ctx.r7.s64 + -8;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x82b8b048
	goto loc_82B8B048;
loc_82B8B038:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8B048:
	// ld r11,152(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// beq cr6,0x82b8b09c
	if (cr6.eq) goto loc_82B8B09C;
	// lbz r11,121(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// lbz r10,122(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r9,123(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lbz r8,126(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lbz r7,125(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lbz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r5,159(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r6,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r6.u8);
	// stb r5,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r5.u8);
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// stb r11,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, r11.u8);
	// stb r10,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r10.u8);
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
loc_82B8B09C:
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// blt cr6,0x82b8b0f0
	if (cr6.lt) goto loc_82B8B0F0;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B8B0BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b8b0bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8B0BC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// addi r9,r7,-8
	ctx.r9.s64 = ctx.r7.s64 + -8;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x82b8b100
	goto loc_82B8B100;
loc_82B8B0F0:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8B100:
	// ld r11,160(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// beq cr6,0x82b8b154
	if (cr6.eq) goto loc_82B8B154;
	// lbz r11,113(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r9,115(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r5,167(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// lbz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r6,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r6.u8);
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
	// stb r4,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r4.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, r11.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
loc_82B8B154:
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,64(r25)
	PPC_STORE_U64(r25.u32 + 64, ctx.r10.u64);
	// std r9,56(r25)
	PPC_STORE_U64(r25.u32 + 56, ctx.r9.u64);
	// std r11,40(r25)
	PPC_STORE_U64(r25.u32 + 40, r11.u64);
	// std r8,48(r25)
	PPC_STORE_U64(r25.u32 + 48, ctx.r8.u64);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82b8b1c8
	if (cr6.lt) goto loc_82B8B1C8;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, r11.u8);
	// b 0x82b8b1d8
	goto loc_82B8B1D8;
loc_82B8B1C8:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a1b480
	sub_82A1B480(ctx, base);
loc_82B8B1D8:
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x82b8b210
	if (cr6.eq) goto loc_82B8B210;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82B8B210:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82b8b220
	if (cr6.gt) goto loc_82B8B220;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x82b8b268
	goto loc_82B8B268;
loc_82B8B220:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// subf r9,r7,r11
	ctx.r9.s64 = r11.s64 - ctx.r7.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r8
	ctx.r5.u64 = r11.u64 + ctx.r8.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
loc_82B8B268:
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(12) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b8b30c
	if (!cr6.eq) goto loc_82B8B30C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f3f0
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8b300
	if (!cr6.eq) goto loc_82B8B300;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r10,28060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28060) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8b2a4
	if (cr6.eq) goto loc_82B8B2A4;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8B2A4:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_82B8B2A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82B8B2AC:
	// stw r3,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r3.u32);
loc_82B8B2B0:
	// stw r26,76(r25)
	PPC_STORE_U32(r25.u32 + 76, r26.u32);
	// lis r11,-32071
	r11.s64 = -2101805056;
	// stw r26,72(r25)
	PPC_STORE_U32(r25.u32 + 72, r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r26,88(r25)
	PPC_STORE_U64(r25.u32 + 88, r26.u64);
	// addi r5,r11,-23000
	ctx.r5.s64 = r11.s64 + -23000;
	// stw r26,96(r25)
	PPC_STORE_U32(r25.u32 + 96, r26.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r26,100(r25)
	PPC_STORE_U32(r25.u32 + 100, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r26,104(r25)
	PPC_STORE_U32(r25.u32 + 104, r26.u32);
	// addi r11,r25,88
	r11.s64 = r25.s64 + 88;
	// stw r26,108(r25)
	PPC_STORE_U32(r25.u32 + 108, r26.u32);
	// bl 0x82b98158
	sub_82B98158(ctx, base);
	// ld r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U64(r25.u32 + 48);
	// ld r9,88(r25)
	ctx.r9.u64 = PPC_LOAD_U64(r25.u32 + 88);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r8,48(r25)
	PPC_STORE_U64(r25.u32 + 48, ctx.r8.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c2c
	return;
loc_82B8B300:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b843f8
	sub_82B843F8(ctx, base);
	// b 0x82b8b2ac
	goto loc_82B8B2AC;
loc_82B8B30C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b8b2b0
	if (!cr6.eq) goto loc_82B8B2B0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8b2a8
	if (cr6.eq) goto loc_82B8B2A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b84550
	sub_82B84550(ctx, base);
	// b 0x82b8b2ac
	goto loc_82B8B2AC;
}

PPC_WEAK_FUNC(sub_82B8AA48) {
	__imp__sub_82B8AA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8B330) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331308
	sub_82331308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x82265160
	sub_82265160(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	sub_82214F08(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r27,20
	ctx.r3.s64 = r27.s64 + 20;
	// bl 0x82b8b690
	sub_82B8B690(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r26,0
	r26.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// stw r10,72(r27)
	PPC_STORE_U32(r27.u32 + 72, ctx.r10.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// stw r9,76(r27)
	PPC_STORE_U32(r27.u32 + 76, ctx.r9.u32);
	// ld r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// std r8,40(r27)
	PPC_STORE_U64(r27.u32 + 40, ctx.r8.u64);
	// ld r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// std r7,48(r27)
	PPC_STORE_U64(r27.u32 + 48, ctx.r7.u64);
	// ld r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 56);
	// std r6,56(r27)
	PPC_STORE_U64(r27.u32 + 56, ctx.r6.u64);
	// ld r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 64);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// std r5,64(r27)
	PPC_STORE_U64(r27.u32 + 64, ctx.r5.u64);
	// bne cr6,0x82b8b504
	if (!cr6.eq) goto loc_82B8B504;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8b3fc
	if (!cr6.eq) goto loc_82B8B3FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82b7e050
	sub_82B7E050(ctx, base);
loc_82B8B3FC:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,880(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(880) );
	// lwz r11,876(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(876) );
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82300648
	sub_82300648(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf. r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b8b438
	if (!cr0.eq) goto loc_82B8B438;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_82B8B438:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8b454
	if (!cr6.eq) goto loc_82B8B454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82b7e050
	sub_82B7E050(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82B8B454:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r31,8(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r30,876(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(876) );
	// lwz r28,880(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(880) );
	// beq cr6,0x82b8b490
	if (cr6.eq) goto loc_82B8B490;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,872
	ctx.r4.s64 = r31.s64 + 872;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822085d0
	sub_822085D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r30,r29
	ctx.r3.u64 = r30.u64 + r29.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82B8B490:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b8b4a4
	if (!cr0.eq) goto loc_82B8B4A4;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
loc_82B8B4A4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f3f0
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8b4f8
	if (!cr6.eq) goto loc_82B8B4F8;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lwz r10,28060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28060) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8b4d4
	if (cr6.eq) goto loc_82B8B4D4;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B8B4D4:
	// bl 0x82cbbb58
	sub_82CBBB58(ctx, base);
loc_82B8B4D8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82B8B4DC:
	// stw r3,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r3.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8b4f0
	if (cr6.eq) goto loc_82B8B4F0;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8B4F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	return;
loc_82B8B4F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b843f8
	sub_82B843F8(ctx, base);
	// b 0x82b8b4dc
	goto loc_82B8B4DC;
loc_82B8B504:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b8b4f0
	if (!cr6.eq) goto loc_82B8B4F0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8b524
	if (!cr6.eq) goto loc_82B8B524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82b7e050
	sub_82B7E050(ctx, base);
loc_82B8B524:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,48(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(48) );
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82300648
	sub_82300648(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf. r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b8b560
	if (!cr0.eq) goto loc_82B8B560;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_82B8B560:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8b57c
	if (!cr6.eq) goto loc_82B8B57C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82b7e050
	sub_82B7E050(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82B8B57C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r31,8(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// lwz r28,48(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// beq cr6,0x82b8b5b8
	if (cr6.eq) goto loc_82B8B5B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822085d0
	sub_822085D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82B8B5B8:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82b8b5cc
	if (!cr0.eq) goto loc_82B8B5CC;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
loc_82B8B5CC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8b4d8
	if (cr6.eq) goto loc_82B8B4D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b84550
	sub_82B84550(ctx, base);
	// b 0x82b8b4dc
	goto loc_82B8B4DC;
}

PPC_WEAK_FUNC(sub_82B8B330) {
	__imp__sub_82B8B330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8B5E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82b8b688
	if (!cr6.eq) goto loc_82B8B688;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82b8b688
	if (!cr6.eq) goto loc_82B8B688;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8b62c
	if (!cr6.eq) goto loc_82B8B62C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82b7e050
	sub_82B7E050(ctx, base);
loc_82B8B62C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// beq cr6,0x82b8b670
	if (cr6.eq) goto loc_82B8B670;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82b8b670
	if (!cr6.eq) goto loc_82B8B670;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8b668
	if (!cr6.eq) goto loc_82B8B668;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// bl 0x82b7e050
	sub_82B7E050(ctx, base);
loc_82B8B668:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(16) );
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82B8B670:
	// stw r28,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r28.u32);
	// addi r6,r28,4
	ctx.r6.s64 = r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b9d980
	sub_82B9D980(ctx, base);
loc_82B8B688:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B8B5E8) {
	__imp__sub_82B8B5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8B690) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x82b8b8d8
	if (cr6.eq) goto loc_82B8B8D8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// bne 0x82b8b6fc
	if (!cr0.eq) goto loc_82B8B6FC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b8b8e8
	sub_82B8B8E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82B8B6FC:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82b8b774
	if (cr6.gt) goto loc_82B8B774;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b8b748
	if (cr6.eq) goto loc_82B8B748;
loc_82B8B718:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b8b718
	if (!cr6.eq) goto loc_82B8B718;
loc_82B8B748:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r11,r7,4,0,27
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82B8B774:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8b788
	if (!cr6.eq) goto loc_82B8B788;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x82b8b794
	goto loc_82B8B794;
loc_82B8B788:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r11.s64 = ctx.r9.s32 >> 4;
loc_82B8B794:
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bgt cr6,0x82b8b83c
	if (cr6.gt) goto loc_82B8B83C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b8b7e0
	if (cr6.eq) goto loc_82B8B7E0;
loc_82B8B7B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b8b7b0
	if (!cr6.eq) goto loc_82B8B7B0;
loc_82B8B7E0:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b8b82c
	if (cr6.eq) goto loc_82B8B82C;
loc_82B8B7F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8b81c
	if (cr6.eq) goto loc_82B8B81C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
loc_82B8B81C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b8b7f4
	if (!cr6.eq) goto loc_82B8B7F4;
loc_82B8B82C:
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
loc_82B8B83C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8b84c
	if (cr6.eq) goto loc_82B8B84C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8B84C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// srawi. r4,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82b8b874
	if (!cr0.eq) goto loc_82B8B874;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82b8b87c
	goto loc_82B8B87C;
loc_82B8B874:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b7fdb0
	sub_82B7FDB0(ctx, base);
loc_82B8B87C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8b8d8
	if (cr6.eq) goto loc_82B8B8D8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b8b8d4
	if (cr6.eq) goto loc_82B8B8D4;
loc_82B8B89C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8b8c4
	if (cr6.eq) goto loc_82B8B8C4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82B8B8C4:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b8b89c
	if (!cr6.eq) goto loc_82B8B89C;
loc_82B8B8D4:
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
loc_82B8B8D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8B690) {
	__imp__sub_82B8B690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8B8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(36) );
	// lwz r11,44(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(44) );
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82b8b954
	if (cr6.eq) goto loc_82B8B954;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82b8b950
	if (cr6.eq) goto loc_82B8B950;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82B8B920:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r7,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b8b920
	if (!cr6.eq) goto loc_82B8B920;
loc_82B8B950:
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
loc_82B8B954:
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8B8E8) {
	__imp__sub_82B8B8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8B960) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b8b9f0
	if (cr6.eq) goto loc_82B8B9F0;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23416
	ctx.r9.s64 = r11.s64 + -23416;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r8,-32062
	ctx.r8.s64 = -2101215232;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r5,-32072
	ctx.r5.s64 = -2101870592;
	// addi r7,r8,-9152
	ctx.r7.s64 = ctx.r8.s64 + -9152;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r5,17200
	ctx.r5.s64 = ctx.r5.s64 + 17200;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82b83ed0
	sub_82B83ED0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830053d0
	sub_830053D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x8225fcd8
	sub_8225FCD8(ctx, base);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82B8B9F0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B8B960) {
	__imp__sub_82B8B960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8BA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r11,r10,27
	r11.u64 = ctx.r10.u32 & 0x1F;
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// add r8,r11,r4
	ctx.r8.u64 = r11.u64 + ctx.r4.u64;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// slw r10,r6,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bgt cr6,0x82b8ba44
	if (cr6.gt) goto loc_82B8BA44;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// srw r9,r4,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82B8BA44:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r7,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r7.s64 = 32 - r11.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r8,r4,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// srw r7,r9,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8BA00) {
	__imp__sub_82B8BA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8BA70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82b8babc
	if (!cr6.gt) goto loc_82B8BABC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r5,r11,r30
	ctx.r5.s64 = r30.s64 - r11.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b8fca8
	sub_82B8FCA8(ctx, base);
	// b 0x82b8bb24
	goto loc_82B8BB24;
loc_82B8BABC:
	// bge cr6,0x82b8bb24
	if (!cr6.lt) goto loc_82B8BB24;
	// rlwinm r11,r30,4,0,27
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b8bb24
	if (cr6.eq) goto loc_82B8BB24;
	// subf r8,r10,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r10.s64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82b8bb20
	if (cr6.eq) goto loc_82B8BB20;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82B8BAF0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r3,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r3.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b8baf0
	if (!cr6.eq) goto loc_82B8BAF0;
loc_82B8BB20:
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_82B8BB24:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82b8bb58
	if (cr6.eq) goto loc_82B8BB58;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82B8BB34:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r29.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// blt cr6,0x82b8bb34
	if (cr6.lt) goto loc_82B8BB34;
loc_82B8BB58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8BA70) {
	__imp__sub_82B8BA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8BB60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r4,1,15,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8bbe8
	if (!cr6.eq) goto loc_82B8BBE8;
	// li r26,1
	r26.s64 = 1;
loc_82B8BBA0:
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b8bb60
	sub_82B8BB60(ctx, base);
	// lhz r11,10(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// slw r8,r26,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (r26.u32 << (r29.u8 & 0x3F));
	// rotlwi r9,r11,1
	ctx.r9.u64 = rotl32(r11.u32, 1);
	// or r30,r8,r30
	r30.u64 = ctx.r8.u64 | r30.u64;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8bba0
	if (cr6.eq) goto loc_82B8BBA0;
loc_82B8BBE8:
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rotlwi r11,r11,4
	r11.u64 = rotl32(r11.u32, 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82B8BB60) {
	__imp__sub_82B8BB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8BC08) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,12
	r26.s64 = 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(24) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// divw. r8,r10,r26
	ctx.r8.s32 = ctx.r10.s32 / r26.s32;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b8bc94
	if (cr0.eq) goto loc_82B8BC94;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82b8bc94
	if (cr6.eq) goto loc_82B8BC94;
	// subf r8,r11,r11
	ctx.r8.s64 = r11.s64 - r11.s64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// divw r8,r8,r26
	ctx.r8.s32 = ctx.r8.s32 / r26.s32;
	// cmplw cr6,r11,r11
	cr6.compare<uint32_t>(r11.u32, r11.u32, xer);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82b8bc90
	if (cr6.eq) goto loc_82B8BC90;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82B8BC68:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r7,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82b8bc68
	if (!cr6.eq) goto loc_82B8BC68;
loc_82B8BC90:
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_82B8BC94:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r25,0
	r25.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// mr r11,r25
	r11.u64 = r25.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8bd04
	if (cr0.eq) goto loc_82B8BD04;
	// mr r29,r25
	r29.u64 = r25.u64;
	// li r27,1
	r27.s64 = 1;
loc_82B8BCB8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = rotl64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r27,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r27.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82b8f7b8
	sub_82B8F7B8(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// srawi r5,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x82b8bcb8
	if (cr6.lt) goto loc_82B8BCB8;
loc_82B8BD04:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r28,7116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7116, r28.u32);
	// beq 0x82b8bd60
	if (cr0.eq) goto loc_82B8BD60;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82b8bd60
	if (cr6.eq) goto loc_82B8BD60;
	// subf r8,r11,r11
	ctx.r8.s64 = r11.s64 - r11.s64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r11,r11
	cr6.compare<uint32_t>(r11.u32, r11.u32, xer);
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82b8bd5c
	if (cr6.eq) goto loc_82B8BD5C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82B8BD48:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sthx r7,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82b8bd48
	if (!cr6.eq) goto loc_82B8BD48;
loc_82B8BD5C:
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_82B8BD60:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r26
	ctx.r7.s32 = ctx.r8.s32 / r26.s32;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8bdb0
	if (cr0.eq) goto loc_82B8BDB0;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82B8BD7C:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b8f860
	sub_82B8F860(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// divw r7,r8,r26
	ctx.r7.s32 = ctx.r8.s32 / r26.s32;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b8bd7c
	if (cr6.lt) goto loc_82B8BD7C;
loc_82B8BDB0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x82b8be70
	if (!cr6.gt) goto loc_82B8BE70;
loc_82B8BDC8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82b8f9f8
	sub_82B8F9F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r29,0(r11)
	r29.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// bl 0x82b8f9f8
	sub_82B8F9F8(ctx, base);
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rotlwi r10,r29,1
	ctx.r10.u64 = rotl32(r29.u32, 1);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// rotlwi r8,r6,1
	ctx.r8.u64 = rotl32(ctx.r6.u32, 1);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// add r5,r29,r10
	ctx.r5.u64 = r29.u64 + ctx.r10.u64;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r29.u16);
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r6,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r6.u16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r25,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r25.u8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// subf r5,r8,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r8.s64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// divw r29,r5,r26
	r29.s32 = ctx.r5.s32 / r26.s32;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82b8f7b8
	sub_82B8F7B8(ctx, base);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b8f860
	sub_82B8F860(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r4,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bgt cr6,0x82b8bdc8
	if (cr6.gt) goto loc_82B8BDC8;
loc_82B8BE70:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b8f9f8
	sub_82B8F9F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r4,32(r28)
	PPC_STORE_U16(r28.u32 + 32, ctx.r4.u16);
	// bl 0x82b8bb60
	sub_82B8BB60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82B8BC08) {
	__imp__sub_82B8BC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8BEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31924
	r29.s64 = -2092171264;
	// lbz r11,-5564(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -5564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8c15c
	if (!cr6.eq) goto loc_82B8C15C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,8048
	r30.s64 = r11.s64 + 8048;
	// lfs f31,-27852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	f31.f64 = double(temp.f32);
	// lfs f30,392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	f30.f64 = double(temp.f32);
loc_82B8BEE0:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f30,f31
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8bf1c
	if (!cr6.lt) goto loc_82B8BF1C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8bf28
	goto loc_82B8BF28;
loc_82B8BF1C:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82b8bf28
	if (!cr6.gt) goto loc_82B8BF28;
	// li r11,255
	r11.s64 = 255;
loc_82B8BF28:
	// stbx r11,r30,r31
	PPC_STORE_U8(r30.u32 + r31.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// blt cr6,0x82b8bee0
	if (cr6.lt) goto loc_82B8BEE0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,8016
	r30.s64 = r11.s64 + 8016;
	// lfs f30,1044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	f30.f64 = double(temp.f32);
loc_82B8BF4C:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f30,f31
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8bf88
	if (!cr6.lt) goto loc_82B8BF88;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8bf94
	goto loc_82B8BF94;
loc_82B8BF88:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82b8bf94
	if (!cr6.gt) goto loc_82B8BF94;
	// li r11,255
	r11.s64 = 255;
loc_82B8BF94:
	// stbx r11,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// blt cr6,0x82b8bf4c
	if (cr6.lt) goto loc_82B8BF4C;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,7952
	r30.s64 = r11.s64 + 7952;
	// lfs f30,1040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	f30.f64 = double(temp.f32);
loc_82B8BFB8:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f30,f31
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8bff4
	if (!cr6.lt) goto loc_82B8BFF4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8c000
	goto loc_82B8C000;
loc_82B8BFF4:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82b8c000
	if (!cr6.gt) goto loc_82B8C000;
	// li r11,255
	r11.s64 = 255;
loc_82B8C000:
	// stbx r11,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// blt cr6,0x82b8bfb8
	if (cr6.lt) goto loc_82B8BFB8;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,7696
	r30.s64 = r11.s64 + 7696;
	// lfs f30,1036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1036);
	f30.f64 = double(temp.f32);
loc_82B8C024:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f30,f31
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8c060
	if (!cr6.lt) goto loc_82B8C060;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8c06c
	goto loc_82B8C06C;
loc_82B8C060:
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x82b8c06c
	if (!cr6.gt) goto loc_82B8C06C;
	// li r11,15
	r11.s64 = 15;
loc_82B8C06C:
	// stbx r11,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// blt cr6,0x82b8c024
	if (cr6.lt) goto loc_82B8C024;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,7440
	r30.s64 = r11.s64 + 7440;
	// lfs f30,1032(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1032);
	f30.f64 = double(temp.f32);
loc_82B8C090:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f30,f31
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8c0cc
	if (!cr6.lt) goto loc_82B8C0CC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8c0d8
	goto loc_82B8C0D8;
loc_82B8C0CC:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x82b8c0d8
	if (!cr6.gt) goto loc_82B8C0D8;
	// li r11,31
	r11.s64 = 31;
loc_82B8C0D8:
	// stbx r11,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// blt cr6,0x82b8c090
	if (cr6.lt) goto loc_82B8C090;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,7184
	r30.s64 = r11.s64 + 7184;
	// lfs f30,1028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	f30.f64 = double(temp.f32);
loc_82B8C0FC:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f12,f30,f31
	ctx.f1.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(f31.f64)));
	// bl 0x8222c3e8
	sub_8222C3E8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.u64 = uint64_t(int32_t(std::trunc(ctx.f11.f64)));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8c138
	if (!cr6.lt) goto loc_82B8C138;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8c144
	goto loc_82B8C144;
loc_82B8C138:
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// ble cr6,0x82b8c144
	if (!cr6.gt) goto loc_82B8C144;
	// li r11,63
	r11.s64 = 63;
loc_82B8C144:
	// stbx r11,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// blt cr6,0x82b8c0fc
	if (cr6.lt) goto loc_82B8C0FC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,-5564(r29)
	PPC_STORE_U8(r29.u32 + -5564, r11.u8);
loc_82B8C15C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8BEA0) {
	__imp__sub_82B8BEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8C170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r29,16
	r31.s64 = r29.s64 + 16;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8c194
	if (cr6.eq) goto loc_82B8C194;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8C194:
	// li r30,0
	r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8c1b4
	if (cr6.eq) goto loc_82B8C1B4;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8C1B4:
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8C170) {
	__imp__sub_82B8C170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8C1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lwz r24,324(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// mr r31,r20
	r31.u64 = r20.u64;
loc_82B8C240:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// srawi r9,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r31,4096
	cr6.compare<int32_t>(r31.s32, 4096, xer);
	// blt cr6,0x82b8c240
	if (cr6.lt) goto loc_82B8C240;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8c314
	if (cr0.eq) goto loc_82B8C314;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_82B8C294:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bgt cr6,0x82b8c2c0
	if (cr6.gt) goto loc_82B8C2C0;
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8c2e0
	goto loc_82B8C2E0;
loc_82B8C2C0:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8C2E0:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82b8c294
	if (cr6.lt) goto loc_82B8C294;
loc_82B8C314:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8c3b0
	if (cr0.eq) goto loc_82B8C3B0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_82B8C330:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bgt cr6,0x82b8c35c
	if (cr6.gt) goto loc_82B8C35C;
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8c37c
	goto loc_82B8C37C;
loc_82B8C35C:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8C37C:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82b8c330
	if (cr6.lt) goto loc_82B8C330;
loc_82B8C3B0:
	// lwz r30,332(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(332) );
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// rlwinm r17,r28,30,2,31
	r17.u64 = rotl64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r21,r29,30,2,31
	r21.u64 = rotl64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r25,r20
	r25.u64 = r20.u64;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x82b8c8f4
	if (!cr6.gt) goto loc_82B8C8F4;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mr r18,r15
	r18.u64 = r15.u64;
	// addi r22,r11,26776
	r22.s64 = r11.s64 + 26776;
	// addi r29,r10,25312
	r29.s64 = ctx.r10.s64 + 25312;
loc_82B8C400:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82b8c8e4
	if (!cr6.gt) goto loc_82B8C8E4;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82B8C410:
	// lhz r11,32(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 32);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8c478
	if (!cr6.eq) goto loc_82B8C478;
loc_82B8C434:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8c434
	if (cr6.eq) goto loc_82B8C434;
loc_82B8C478:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// rotlwi r9,r11,4
	ctx.r9.u64 = rotl32(r11.u32, 4);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82b8c550
	if (!cr6.eq) goto loc_82B8C550;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x82b8c4cc
	if (cr6.gt) goto loc_82B8C4CC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// b 0x82b8c4f0
	goto loc_82B8C4F0;
loc_82B8C4CC:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// srw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
loc_82B8C4F0:
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// bgt cr6,0x82b8c528
	if (cr6.gt) goto loc_82B8C528;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r7,16
	r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// b 0x82b8c7dc
	goto loc_82B8C7DC;
loc_82B8C528:
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// subfic r8,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// srw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// b 0x82b8c7dc
	goto loc_82B8C7DC;
loc_82B8C550:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r11,r25
	ctx.r9.u64 = r11.u64 + r25.u64;
	// mullw r11,r10,r19
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// mullw r10,r9,r16
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r16.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// beq cr6,0x82b8c588
	if (cr6.eq) goto loc_82B8C588;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82b8c698
	if (!cr6.eq) goto loc_82B8C698;
loc_82B8C588:
	// lhz r11,32(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8c5f0
	if (!cr6.eq) goto loc_82B8C5F0;
loc_82B8C5AC:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// srw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r7,r11
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8c5ac
	if (cr6.eq) goto loc_82B8C5AC;
loc_82B8C5F0:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// rlwinm r7,r4,21,27,31
	ctx.r7.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1F;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rlwinm r9,r4,27,26,31
	ctx.r9.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x3F;
	// rotlwi r6,r11,4
	ctx.r6.u64 = rotl32(r11.u32, 4);
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r8
	ctx.r4.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// bge 0x82b8c640
	if (!cr0.lt) goto loc_82B8C640;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// b 0x82b8c64c
	goto loc_82B8C64C;
loc_82B8C640:
	// cmpwi cr6,r7,31
	cr6.compare<int32_t>(ctx.r7.s32, 31, xer);
	// ble cr6,0x82b8c64c
	if (!cr6.gt) goto loc_82B8C64C;
	// li r7,31
	ctx.r7.s64 = 31;
loc_82B8C64C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82b8c65c
	if (!cr6.lt) goto loc_82B8C65C;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// b 0x82b8c668
	goto loc_82B8C668;
loc_82B8C65C:
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// ble cr6,0x82b8c668
	if (!cr6.gt) goto loc_82B8C668;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8C668:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8c678
	if (!cr6.lt) goto loc_82B8C678;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x82b8c684
	goto loc_82B8C684;
loc_82B8C678:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x82b8c684
	if (!cr6.gt) goto loc_82B8C684;
	// li r11,31
	r11.s64 = 31;
loc_82B8C684:
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | r11.u64;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
loc_82B8C698:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82b8c6a8
	if (cr6.eq) goto loc_82B8C6A8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82b8c7b8
	if (!cr6.eq) goto loc_82B8C7B8;
loc_82B8C6A8:
	// lhz r11,32(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8c710
	if (!cr6.eq) goto loc_82B8C710;
loc_82B8C6CC:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// srw r3,r6,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8c6cc
	if (cr6.eq) goto loc_82B8C6CC;
loc_82B8C710:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// rlwinm r7,r5,21,27,31
	ctx.r7.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1F;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rlwinm r9,r5,27,26,31
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x3F;
	// rotlwi r6,r11,4
	ctx.r6.u64 = rotl32(r11.u32, 4);
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r5,2,0,29
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// bge 0x82b8c760
	if (!cr0.lt) goto loc_82B8C760;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// b 0x82b8c76c
	goto loc_82B8C76C;
loc_82B8C760:
	// cmpwi cr6,r7,31
	cr6.compare<int32_t>(ctx.r7.s32, 31, xer);
	// ble cr6,0x82b8c76c
	if (!cr6.gt) goto loc_82B8C76C;
	// li r7,31
	ctx.r7.s64 = 31;
loc_82B8C76C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82b8c77c
	if (!cr6.lt) goto loc_82B8C77C;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// b 0x82b8c788
	goto loc_82B8C788;
loc_82B8C77C:
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// ble cr6,0x82b8c788
	if (!cr6.gt) goto loc_82B8C788;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8C788:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8c798
	if (!cr6.lt) goto loc_82B8C798;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x82b8c7a4
	goto loc_82B8C7A4;
loc_82B8C798:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x82b8c7a4
	if (!cr6.gt) goto loc_82B8C7A4;
	// li r11,31
	r11.s64 = 31;
loc_82B8C7A4:
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | r11.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
loc_82B8C7B8:
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82b8c7d4
	if (!cr6.lt) goto loc_82B8C7D4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82B8C7D4:
	// sth r4,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r4.u16);
	// sth r5,2(r30)
	PPC_STORE_U16(r30.u32 + 2, ctx.r5.u16);
loc_82B8C7DC:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b8c800
	if (!cr6.eq) goto loc_82B8C800;
	// stb r20,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r20.u8);
	// stb r20,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r20.u8);
	// stb r20,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r20.u8);
	// stb r20,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r20.u8);
	// b 0x82b8c8d4
	goto loc_82B8C8D4;
loc_82B8C800:
	// lhz r11,32(r23)
	r11.u64 = PPC_LOAD_U16(r23.u32 + 32);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r9,20(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// lwz r7,4(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
loc_82B8C820:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8c874
	if (!cr6.eq) goto loc_82B8C874;
loc_82B8C830:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r5,r31,27
	ctx.r5.u64 = r31.u32 & 0x1F;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r3,r4,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + r27.u32);
	// srw r10,r3,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r4,r11
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8c830
	if (cr6.eq) goto loc_82B8C830;
loc_82B8C874:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,4
	ctx.r5.u64 = rotl32(r11.u32, 4);
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stbx r4,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82b8c820
	if (cr6.lt) goto loc_82B8C820;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// rlwimi r5,r11,4,20,27
	ctx.r5.u64 = (rotl32(r11.u32, 4) & 0xFF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF00F);
	// rlwimi r7,r9,28,28,31
	ctx.r7.u64 = (rotl32(ctx.r9.u32, 28) & 0xF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r4,r10,4,20,27
	ctx.r4.u64 = (rotl32(ctx.r10.u32, 4) & 0xFF0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF00F);
	// stb r5,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r5.u8);
	// rlwimi r6,r8,28,28,31
	ctx.r6.u64 = (rotl32(ctx.r8.u32, 28) & 0xF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r7,4(r30)
	PPC_STORE_U8(r30.u32 + 4, ctx.r7.u8);
	// stb r4,7(r30)
	PPC_STORE_U8(r30.u32 + 7, ctx.r4.u8);
	// stb r6,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r6.u8);
loc_82B8C8D4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r30,r30,r19
	r30.u64 = r30.u64 + r19.u64;
	// cmpw cr6,r28,r21
	cr6.compare<int32_t>(r28.s32, r21.s32, xer);
	// blt cr6,0x82b8c410
	if (cr6.lt) goto loc_82B8C410;
loc_82B8C8E4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r18,r18,r16
	r18.u64 = r18.u64 + r16.u64;
	// cmpw cr6,r25,r17
	cr6.compare<int32_t>(r25.s32, r17.s32, xer);
	// blt cr6,0x82b8c400
	if (cr6.lt) goto loc_82B8C400;
loc_82B8C8F4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c04
	return;
}

PPC_WEAK_FUNC(sub_82B8C1C8) {
	__imp__sub_82B8C1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8C900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x82b8bea0
	sub_82B8BEA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lwz r25,308(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82B8C980:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// srawi r9,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r31,4096
	cr6.compare<int32_t>(r31.s32, 4096, xer);
	// blt cr6,0x82b8c980
	if (cr6.lt) goto loc_82B8C980;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8ca54
	if (cr0.eq) goto loc_82B8CA54;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B8C9D4:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bgt cr6,0x82b8ca00
	if (cr6.gt) goto loc_82B8CA00;
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8ca20
	goto loc_82B8CA20;
loc_82B8CA00:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8CA20:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + int32_t(8) );
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82b8c9d4
	if (cr6.lt) goto loc_82B8C9D4;
loc_82B8CA54:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8caf0
	if (cr0.eq) goto loc_82B8CAF0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B8CA70:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bgt cr6,0x82b8ca9c
	if (cr6.gt) goto loc_82B8CA9C;
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8cabc
	goto loc_82B8CABC;
loc_82B8CA9C:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8CABC:
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82b8ca70
	if (cr6.lt) goto loc_82B8CA70;
loc_82B8CAF0:
	// lwz r30,316(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(316) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// rlwinm r20,r28,30,2,31
	r20.u64 = rotl64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r28,r29,30,2,31
	r28.u64 = rotl64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// ble cr6,0x82b8d004
	if (!cr6.gt) goto loc_82B8D004;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mr r21,r18
	r21.u64 = r18.u64;
	// addi r22,r11,26776
	r22.s64 = r11.s64 + 26776;
	// addi r3,r10,25312
	ctx.r3.s64 = ctx.r10.s64 + 25312;
loc_82B8CB40:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82b8cff4
	if (!cr6.gt) goto loc_82B8CFF4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_82B8CB50:
	// lhz r11,32(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 32);
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8cbb8
	if (!cr6.eq) goto loc_82B8CBB8;
loc_82B8CB74:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8cb74
	if (cr6.eq) goto loc_82B8CB74;
loc_82B8CBB8:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + int32_t(4) );
	// rotlwi r9,r11,4
	ctx.r9.u64 = rotl32(r11.u32, 4);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r22
	ctx.r5.u64 = r11.u64 + r22.u64;
	// lwzx r7,r11,r22
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bne cr6,0x82b8cc90
	if (!cr6.eq) goto loc_82B8CC90;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x82b8cc0c
	if (cr6.gt) goto loc_82B8CC0C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// b 0x82b8cc30
	goto loc_82B8CC30;
loc_82B8CC0C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
loc_82B8CC30:
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// bgt cr6,0x82b8cc68
	if (cr6.gt) goto loc_82B8CC68;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r7,16
	r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// b 0x82b8cf10
	goto loc_82B8CF10;
loc_82B8CC68:
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// subfic r8,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// srw r11,r6,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 | r11.u64;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// b 0x82b8cf10
	goto loc_82B8CF10;
loc_82B8CC90:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r23.s32);
	// mullw r11,r9,r19
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82b8ccd4
	if (cr6.eq) goto loc_82B8CCD4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82b8cde8
	if (!cr6.eq) goto loc_82B8CDE8;
loc_82B8CCD4:
	// lhz r11,32(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8cd3c
	if (!cr6.eq) goto loc_82B8CD3C;
loc_82B8CCF8:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// srw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r7,r11
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8ccf8
	if (cr6.eq) goto loc_82B8CCF8;
loc_82B8CD3C:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rotlwi r6,r11,4
	ctx.r6.u64 = rotl32(r11.u32, 4);
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r7,r11,21,11,31
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x3F;
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// bge 0x82b8cd90
	if (!cr0.lt) goto loc_82B8CD90;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82b8cd9c
	goto loc_82B8CD9C;
loc_82B8CD90:
	// cmpwi cr6,r7,31
	cr6.compare<int32_t>(ctx.r7.s32, 31, xer);
	// ble cr6,0x82b8cd9c
	if (!cr6.gt) goto loc_82B8CD9C;
	// li r7,31
	ctx.r7.s64 = 31;
loc_82B8CD9C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82b8cdac
	if (!cr6.lt) goto loc_82B8CDAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8cdb8
	goto loc_82B8CDB8;
loc_82B8CDAC:
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// ble cr6,0x82b8cdb8
	if (!cr6.gt) goto loc_82B8CDB8;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8CDB8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8cdc8
	if (!cr6.lt) goto loc_82B8CDC8;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8cdd4
	goto loc_82B8CDD4;
loc_82B8CDC8:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x82b8cdd4
	if (!cr6.gt) goto loc_82B8CDD4;
	// li r11,31
	r11.s64 = 31;
loc_82B8CDD4:
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | r11.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
loc_82B8CDE8:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82b8cdfc
	if (cr6.eq) goto loc_82B8CDFC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82b8cf10
	if (!cr6.eq) goto loc_82B8CF10;
loc_82B8CDFC:
	// lhz r11,32(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8ce64
	if (!cr6.eq) goto loc_82B8CE64;
loc_82B8CE20:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r7,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8ce20
	if (cr6.eq) goto loc_82B8CE20;
loc_82B8CE64:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// rotlwi r6,r11,4
	ctx.r6.u64 = rotl32(r11.u32, 4);
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r7,r5,21,11,31
	ctx.r7.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r9,r5,27,26,31
	ctx.r9.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x3F;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// add. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// bge 0x82b8ceb8
	if (!cr0.lt) goto loc_82B8CEB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82b8cec4
	goto loc_82B8CEC4;
loc_82B8CEB8:
	// cmpwi cr6,r7,31
	cr6.compare<int32_t>(ctx.r7.s32, 31, xer);
	// ble cr6,0x82b8cec4
	if (!cr6.gt) goto loc_82B8CEC4;
	// li r7,31
	ctx.r7.s64 = 31;
loc_82B8CEC4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82b8ced4
	if (!cr6.lt) goto loc_82B8CED4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8cee0
	goto loc_82B8CEE0;
loc_82B8CED4:
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// ble cr6,0x82b8cee0
	if (!cr6.gt) goto loc_82B8CEE0;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8CEE0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8cef0
	if (!cr6.lt) goto loc_82B8CEF0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82b8cefc
	goto loc_82B8CEFC;
loc_82B8CEF0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x82b8cefc
	if (!cr6.gt) goto loc_82B8CEFC;
	// li r11,31
	r11.s64 = 31;
loc_82B8CEFC:
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | r11.u64;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_82B8CF10:
	// lhz r11,32(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
loc_82B8CF30:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8cf84
	if (!cr6.eq) goto loc_82B8CF84;
loc_82B8CF40:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r5,r31,27
	ctx.r5.u64 = r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r5,r11
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8cf40
	if (cr6.eq) goto loc_82B8CF40;
loc_82B8CF84:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,4
	ctx.r5.u64 = rotl32(r11.u32, 4);
	// lwzx r11,r5,r7
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82b8cf30
	if (cr6.lt) goto loc_82B8CF30;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// rlwimi r5,r11,4,20,27
	ctx.r5.u64 = (rotl32(r11.u32, 4) & 0xFF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF00F);
	// rlwimi r7,r9,28,28,31
	ctx.r7.u64 = (rotl32(ctx.r9.u32, 28) & 0xF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwimi r17,r10,4,20,27
	r17.u64 = (rotl32(ctx.r10.u32, 4) & 0xFF0) | (r17.u64 & 0xFFFFFFFFFFFFF00F);
	// stb r5,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r5.u8);
	// rlwimi r6,r8,28,28,31
	ctx.r6.u64 = (rotl32(ctx.r8.u32, 28) & 0xF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r7,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r7.u8);
	// stb r17,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, r17.u8);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// stb r6,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r6.u8);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + r23.u64;
	// blt cr6,0x82b8cb50
	if (cr6.lt) goto loc_82B8CB50;
loc_82B8CFF4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r21,r21,r19
	r21.u64 = r21.u64 + r19.u64;
	// cmpw cr6,r29,r20
	cr6.compare<int32_t>(r29.s32, r20.s32, xer);
	// blt cr6,0x82b8cb40
	if (cr6.lt) goto loc_82B8CB40;
loc_82B8D004:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82B8C900) {
	__imp__sub_82B8C900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8D010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r5,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r9.u32);
	// stw r28,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r28.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// bl 0x82b8bea0
	sub_82B8BEA0(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// lis r11,-31924
	r11.s64 = -2092171264;
	// srawi r10,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r10.s64 = r30.s32 >> 2;
	// addi r14,r11,-7800
	r14.s64 = r11.s64 + -7800;
	// srawi r17,r29,2
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r17.s64 = r29.s32 >> 2;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r17.u32);
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lis r11,-31924
	r11.s64 = -2092171264;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r27,r11,-7764
	r27.s64 = r11.s64 + -7764;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lis r11,-31924
	r11.s64 = -2092171264;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r26,r11,-7728
	r26.s64 = r11.s64 + -7728;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lwz r11,8(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(8) );
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r31,4(r14)
	r31.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// subf r9,r31,r11
	ctx.r9.s64 = r11.s64 - r31.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b8d134
	if (cr0.eq) goto loc_82B8D134;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82B8D0F4:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// slw r8,r9,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r31,4(r14)
	r31.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// lwz r11,8(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + int32_t(8) );
	// subf r7,r31,r11
	ctx.r7.s64 = r11.s64 - r31.s64;
	// srawi r6,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// blt cr6,0x82b8d0f4
	if (cr6.lt) goto loc_82B8D0F4;
loc_82B8D134:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r22,128(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r24,132(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// srawi. r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b8d1d8
	if (cr0.eq) goto loc_82B8D1D8;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82B8D158:
	// clrlwi r11,r24,27
	r11.u64 = r24.u32 & 0x1F;
	// srawi r10,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = r24.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// bgt cr6,0x82b8d184
	if (cr6.gt) goto loc_82B8D184;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8d1a4
	goto loc_82B8D1A4;
loc_82B8D184:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8D1A4:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// subf r4,r9,r11
	ctx.r4.s64 = r11.s64 - ctx.r9.s64;
	// srawi r3,r4,4
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b8d158
	if (cr6.lt) goto loc_82B8D158;
loc_82B8D1D8:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b8d274
	if (cr0.eq) goto loc_82B8D274;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82B8D1F4:
	// clrlwi r11,r24,27
	r11.u64 = r24.u32 & 0x1F;
	// srawi r10,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = r24.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// bgt cr6,0x82b8d220
	if (cr6.gt) goto loc_82B8D220;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8d240
	goto loc_82B8D240;
loc_82B8D220:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8D240:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(8) );
	// subf r4,r9,r11
	ctx.r4.s64 = r11.s64 - ctx.r9.s64;
	// srawi r3,r4,4
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b8d1f4
	if (cr6.lt) goto loc_82B8D1F4;
loc_82B8D274:
	// lwz r31,460(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(460) );
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// lwz r16,452(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(452) );
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + int32_t(8) );
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8d348
	if (cr0.eq) goto loc_82B8D348;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82B8D2C8:
	// clrlwi r11,r24,27
	r11.u64 = r24.u32 & 0x1F;
	// srawi r10,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = r24.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// bgt cr6,0x82b8d2f4
	if (cr6.gt) goto loc_82B8D2F4;
	// lwzx r6,r10,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8d314
	goto loc_82B8D314;
loc_82B8D2F4:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8D314:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// lwz r4,8(r16)
	ctx.r4.u64 = PPC_LOAD_U32(r16.u32 + int32_t(8) );
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82b8d2c8
	if (cr6.lt) goto loc_82B8D2C8;
loc_82B8D348:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r18,r21
	r18.u64 = r21.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r20,r21
	r20.u64 = r21.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x82b8df98
	if (!cr6.gt) goto loc_82B8DF98;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r5,r11,7952
	ctx.r5.s64 = r11.s64 + 7952;
	// addi r25,r10,7696
	r25.s64 = ctx.r10.s64 + 7696;
	// addi r11,r9,8048
	r11.s64 = ctx.r9.s64 + 8048;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r26,1
	r26.s64 = 1;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// li r27,255
	r27.s64 = 255;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r23,7
	r23.s64 = 7;
loc_82B8D3A4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// mr r15,r21
	r15.u64 = r21.u64;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b8df88
	if (!cr6.gt) goto loc_82B8DF88;
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(420) );
	// mullw r17,r8,r7
	r17.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r17.u32);
	// b 0x82b8d3cc
	goto loc_82B8D3CC;
loc_82B8D3C8:
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(420) );
loc_82B8D3CC:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// bgt cr6,0x82b8d5c0
	if (cr6.gt) goto loc_82B8D5C0;
	// lhz r10,32(r16)
	ctx.r10.u64 = PPC_LOAD_U16(r16.u32 + 32);
	// lwz r9,20(r16)
	ctx.r9.u64 = PPC_LOAD_U32(r16.u32 + int32_t(20) );
	// rotlwi r11,r10,1
	r11.u64 = rotl32(ctx.r10.u32, 1);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b8d43c
	if (!cr6.eq) goto loc_82B8D43C;
loc_82B8D3F8:
	// srawi r10,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = r24.s32 >> 5;
	// clrlwi r8,r24,27
	ctx.r8.u64 = r24.u32 & 0x1F;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwzx r4,r6,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	// srw r3,r4,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rotlwi r11,r6,1
	r11.u64 = rotl32(ctx.r6.u32, 1);
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + r11.u64;
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8d3f8
	if (cr6.eq) goto loc_82B8D3F8;
loc_82B8D43C:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r9,4(r16)
	ctx.r9.u64 = PPC_LOAD_U32(r16.u32 + int32_t(4) );
	// rotlwi r8,r11,4
	ctx.r8.u64 = rotl32(r11.u32, 4);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// srawi r29,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	r29.s64 = ctx.r6.s32 >> 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x82b8d4c4
	if (cr6.eq) goto loc_82B8D4C4;
	// clrlwi r10,r24,27
	ctx.r10.u64 = r24.u32 & 0x1F;
	// srawi r9,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r9.s64 = r24.s32 >> 5;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// add r24,r24,r11
	r24.u64 = r24.u64 + r11.u64;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bgt cr6,0x82b8d498
	if (cr6.gt) goto loc_82B8D498;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// lwzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r22.u32);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// srw r3,r6,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// b 0x82b8d4c4
	goto loc_82B8D4C4;
loc_82B8D498:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r26,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + r22.u64;
	// subfic r6,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r10.s64;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r8,r4,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// srw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// or r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 | ctx.r6.u64;
	// and r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 & ctx.r3.u64;
loc_82B8D4C4:
	// slw r11,r26,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// mr r20,r21
	r20.u64 = r21.u64;
	// add r18,r11,r10
	r18.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x82b8d5c0
	if (!cr6.eq) goto loc_82B8D5C0;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// srawi r10,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r10.s64 = r24.s32 >> 5;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// clrlwi r11,r24,27
	r11.u64 = r24.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82b8d564
	if (!cr6.eq) goto loc_82B8D564;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x82b8d510
	if (cr6.gt) goto loc_82B8D510;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// srw r8,r9,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r8,28
	r11.u64 = ctx.r8.u32 & 0xF;
	// b 0x82b8d530
	goto loc_82B8D530;
loc_82B8D510:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// subfic r9,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r9.s64 = 32 - r11.s64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r4,r8,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// srw r3,r6,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// or r11,r4,r3
	r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
loc_82B8D530:
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(388) );
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82b8d550
	if (cr6.eq) goto loc_82B8D550;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// lbzx r20,r8,r10
	r20.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// b 0x82b8d5c4
	goto loc_82B8D5C4;
loc_82B8D550:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r8,r11,4,20,27
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// clrlwi r20,r6,24
	r20.u64 = ctx.r6.u32 & 0xFF;
	// b 0x82b8d5c4
	goto loc_82B8D5C4;
loc_82B8D564:
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x82b8d584
	if (cr6.gt) goto loc_82B8D584;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// srw r8,r9,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// b 0x82b8d5a4
	goto loc_82B8D5A4;
loc_82B8D584:
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// subfic r9,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r9.s64 = 32 - r11.s64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r4,r8,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// srw r3,r6,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// or r11,r4,r3
	r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82B8D5A4:
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(388) );
	// clrlwi r20,r11,24
	r20.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82b8d5c4
	if (!cr6.eq) goto loc_82B8D5C4;
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// lbzx r20,r11,r25
	r20.u64 = PPC_LOAD_U8(r11.u32 + r25.u32);
	// b 0x82b8d5c4
	goto loc_82B8D5C4;
loc_82B8D5C0:
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(388) );
loc_82B8D5C4:
	// mullw r30,r15,r19
	r30.s64 = int64_t(r15.s32) * int64_t(r19.s32);
	// add r10,r17,r30
	ctx.r10.u64 = r17.u64 + r30.u64;
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-10776
	r12.s64 = r12.s64 + -10776;
	// rlwinm r0,r29,2,0,29
	r0.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r29.u64) {
	case 0:
		goto loc_82B8D5F8;
	case 1:
		goto loc_82B8D650;
	case 2:
		goto loc_82B8D6A8;
	case 3:
		goto loc_82B8D724;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-10760(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-10760) );
	// lwz r21,-10672(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-10672) );
	// lwz r21,-10584(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-10584) );
	// lwz r21,-10460(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-10460) );
loc_82B8D5F8:
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// ble cr6,0x82b8d634
	if (!cr6.gt) goto loc_82B8D634;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r11,r28
	ctx.r9.u64 = r11.u64 + r28.u64;
loc_82B8D60C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,4
	r11.s64 = 4;
loc_82B8D614:
	// stb r21,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r21.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bne 0x82b8d614
	if (!cr0.eq) goto loc_82B8D614;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82b8d60c
	if (!cr0.eq) goto loc_82B8D60C;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D634:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B8D640:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82b8d640
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8D640;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D650:
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// ble cr6,0x82b8d68c
	if (!cr6.gt) goto loc_82B8D68C;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r11,r28
	ctx.r9.u64 = r11.u64 + r28.u64;
loc_82B8D664:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,4
	r11.s64 = 4;
loc_82B8D66C:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bne 0x82b8d66c
	if (!cr0.eq) goto loc_82B8D66C;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82b8d664
	if (!cr0.eq) goto loc_82B8D664;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D68C:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B8D698:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82b8d698
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8D698;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D6A8:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82b8d70c
	if (cr6.eq) goto loc_82B8D70C;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82b8d6ec
	if (cr6.eq) goto loc_82B8D6EC;
	// rlwinm r11,r10,2,0,29
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,4
	ctx.r8.s64 = 4;
	// add r9,r11,r28
	ctx.r9.u64 = r11.u64 + r28.u64;
loc_82B8D6C4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r11,4
	r11.s64 = 4;
loc_82B8D6CC:
	// stb r20,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r20.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bne 0x82b8d6cc
	if (!cr0.eq) goto loc_82B8D6CC;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne 0x82b8d6c4
	if (!cr0.eq) goto loc_82B8D6C4;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D6EC:
	// stb r20,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r20.u8);
	// stb r20,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r20.u8);
	// stb r21,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r21.u8);
	// stb r21,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r21.u8);
	// stb r21,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r21.u8);
	// stb r21,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r21.u8);
	// stb r21,6(r11)
	PPC_STORE_U8(r11.u32 + 6, r21.u8);
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D70C:
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B8D714:
	// stb r20,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r20.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82b8d714
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B8D714;
	// b 0x82b8df64
	goto loc_82B8DF64;
loc_82B8D724:
	// lhz r10,32(r14)
	ctx.r10.u64 = PPC_LOAD_U16(r14.u32 + 32);
	// lwz r8,20(r14)
	ctx.r8.u64 = PPC_LOAD_U32(r14.u32 + int32_t(20) );
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = rotl32(ctx.r10.u32, 1);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b8d790
	if (!cr6.eq) goto loc_82B8D790;
loc_82B8D74C:
	// srawi r9,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r9.s64 = r24.s32 >> 5;
	// clrlwi r7,r24,27
	ctx.r7.u64 = r24.u32 & 0x1F;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwzx r4,r6,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	// srw r3,r4,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = rotl32(ctx.r6.u32, 1);
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8d74c
	if (cr6.eq) goto loc_82B8D74C;
loc_82B8D790:
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// rotlwi r4,r10,4
	ctx.r4.u64 = rotl32(ctx.r10.u32, 4);
	// lhz r8,32(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 32);
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(20) );
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rotlwi r10,r8,1
	ctx.r10.u64 = rotl32(ctx.r8.u32, 1);
	// lwz r8,4(r14)
	ctx.r8.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4) );
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b8d810
	if (!cr6.eq) goto loc_82B8D810;
loc_82B8D7CC:
	// srawi r8,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r8.s64 = r24.s32 >> 5;
	// clrlwi r4,r24,27
	ctx.r4.u64 = r24.u32 & 0x1F;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwzx r8,r3,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + r22.u32);
	// srw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r10,r4,1
	ctx.r10.u64 = rotl32(ctx.r4.u32, 1);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b8d7cc
	if (cr6.eq) goto loc_82B8D7CC;
loc_82B8D810:
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// rotlwi r8,r9,4
	ctx.r8.u64 = rotl32(ctx.r9.u32, 4);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf. r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bge 0x82b8d834
	if (!cr0.lt) goto loc_82B8D834;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// b 0x82b8d840
	goto loc_82B8D840;
loc_82B8D834:
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// ble cr6,0x82b8d840
	if (!cr6.gt) goto loc_82B8D840;
	// li r9,63
	ctx.r9.s64 = 63;
loc_82B8D840:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82b8d850
	if (!cr6.lt) goto loc_82B8D850;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// b 0x82b8d85c
	goto loc_82B8D85C;
loc_82B8D850:
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// ble cr6,0x82b8d85c
	if (!cr6.gt) goto loc_82B8D85C;
	// li r10,63
	ctx.r10.s64 = 63;
loc_82B8D85C:
	// lbzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// mr r31,r21
	r31.u64 = r21.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lbzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
loc_82B8D878:
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r4,1,15,30
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b8d8dc
	if (!cr6.eq) goto loc_82B8D8DC;
loc_82B8D898:
	// srawi r6,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r6.s64 = r24.s32 >> 5;
	// clrlwi r5,r24,27
	ctx.r5.u64 = r24.u32 & 0x1F;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	// srw r5,r6,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r6,r5,31
	ctx.r6.u64 = ctx.r5.u32 & 0x1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r5,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = rotl32(ctx.r6.u32, 1);
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8d898
	if (cr6.eq) goto loc_82B8D898;
loc_82B8D8DC:
	// lhz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r4,1,15,30
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// rotlwi r5,r5,4
	ctx.r5.u64 = rotl32(ctx.r5.u32, 4);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b8d950
	if (!cr6.eq) goto loc_82B8D950;
loc_82B8D908:
	// srawi r6,r24,5
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1F) != 0);
	ctx.r6.s64 = r24.s32 >> 5;
	// clrlwi r14,r24,27
	r14.u64 = r24.u32 & 0x1F;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	// srw r6,r6,r14
	ctx.r6.u64 = r14.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r14.u8 & 0x3F));
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r6,r6,1
	ctx.r6.u64 = rotl32(ctx.r6.u32, 1);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8d908
	if (cr6.eq) goto loc_82B8D908;
loc_82B8D950:
	// lhz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// srawi r14,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	r14.s64 = ctx.r5.s32 >> 3;
	// rotlwi r6,r6,4
	ctx.r6.u64 = rotl32(ctx.r6.u32, 4);
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// clrlwi r5,r5,29
	ctx.r5.u64 = ctx.r5.u32 & 0x7;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// stb r5,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r5.u8);
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r14,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r14.u8);
	// clrlwi r6,r6,29
	ctx.r6.u64 = ctx.r6.u32 & 0x7;
	// stb r5,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r5.u8);
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// blt cr6,0x82b8d878
	if (cr6.lt) goto loc_82B8D878;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(388) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82b8ddcc
	if (cr6.eq) goto loc_82B8DDCC;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82b8daf8
	if (cr6.eq) goto loc_82B8DAF8;
	// lwz r14,420(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(420) );
	// mr r31,r21
	r31.u64 = r21.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r17,2,0,29
	ctx.r3.u64 = rotl64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B8D9B4:
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + r11.u64;
loc_82B8D9C4:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-9760
	r12.s64 = r12.s64 + -9760;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r29.u64) {
	case 0:
		goto loc_82B8D5F8;
	case 1:
		goto loc_82B8D650;
	case 2:
		goto loc_82B8D6A8;
	case 3:
		goto loc_82B8D724;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-9728(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9728) );
	// lwz r21,-9720(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9720) );
	// lwz r21,-9712(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9712) );
	// lwz r21,-9692(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9692) );
	// lwz r21,-9664(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9664) );
	// lwz r21,-9636(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9636) );
	// lwz r21,-9608(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9608) );
	// lwz r21,-9580(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-9580) );
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// rlwinm r11,r8,1,0,30
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x82b8daa4
	goto loc_82B8DAA4;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,1,0,30
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// b 0x82b8daac
	goto loc_82B8DAAC;
	// rlwinm r11,r9,1,0,30
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82B8DAA4:
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// divw r11,r10,r23
	r11.s32 = ctx.r10.s32 / r23.s32;
loc_82B8DAAC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82b8dabc
	if (!cr6.lt) goto loc_82B8DABC;
	// mr r11,r21
	r11.u64 = r21.u64;
	// b 0x82b8dac8
	goto loc_82B8DAC8;
loc_82B8DABC:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82b8dac8
	if (!cr6.gt) goto loc_82B8DAC8;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82B8DAC8:
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r5,r5,r19
	ctx.r5.u64 = ctx.r5.u64 + r19.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// stbx r11,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + r28.u32, r11.u8);
	// blt cr6,0x82b8d9c4
	if (cr6.lt) goto loc_82B8D9C4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r3,r3,r14
	ctx.r3.u64 = ctx.r3.u64 + r14.u64;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82b8d9b4
	if (cr6.lt) goto loc_82B8D9B4;
	// b 0x82b8df60
	goto loc_82B8DF60;
loc_82B8DAF8:
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// stb r21,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r21.u8);
	// addi r29,r11,3
	r29.s64 = r11.s64 + 3;
	// stb r21,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r21.u8);
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// stb r21,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r21.u8);
	// addi r27,r11,5
	r27.s64 = r11.s64 + 5;
	// stb r21,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r21.u8);
	// addi r26,r11,6
	r26.s64 = r11.s64 + 6;
	// stb r21,6(r11)
	PPC_STORE_U8(r11.u32 + 6, r21.u8);
	// addi r25,r11,7
	r25.s64 = r11.s64 + 7;
	// stb r21,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r21.u8);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_82B8DB3C:
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r31.u64);
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// clrlwi r5,r8,29
	ctx.r5.u64 = ctx.r8.u32 & 0x7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r7,2
	ctx.r6.s64 = ctx.r7.s64 + 2;
	// lbz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// srawi r6,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// lbz r3,2(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// clrlwi r17,r8,29
	r17.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r16,r4,31
	r16.u64 = ctx.r4.u32 & 0x1;
	// lbz r15,0(r10)
	r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + r11.u64;
	// lbz r14,4(r10)
	r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// slw r5,r16,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r16.u32 << (ctx.r5.u8 & 0x3F));
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// srawi r5,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// stb r3,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r3.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// slw r3,r5,r17
	ctx.r3.u64 = r17.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r17.u8 & 0x3F));
	// srawi r5,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 2;
	// lbz r4,2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// clrlwi r17,r8,29
	r17.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// slw r3,r5,r17
	ctx.r3.u64 = r17.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r17.u8 & 0x3F));
	// clrlwi r17,r8,29
	r17.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r4,r15,31
	ctx.r4.u64 = r15.u32 & 0x1;
	// srawi r5,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// slw r17,r4,r17
	r17.u64 = r17.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r17.u8 & 0x3F));
	// lbz r4,2(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r3,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r3.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r6,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// srawi r3,r15,1
	xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x1) != 0);
	ctx.r3.s64 = r15.s32 >> 1;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// clrlwi r4,r8,29
	ctx.r4.u64 = ctx.r8.u32 & 0x7;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r16,r3,r4
	r16.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// lbz r3,2(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// srawi r4,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + r11.u64;
	// or r3,r17,r3
	ctx.r3.u64 = r17.u64 | ctx.r3.u64;
	// srawi r17,r15,2
	xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x3) != 0);
	r17.s64 = r15.s32 >> 2;
	// stb r3,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r3.u8);
	// clrlwi r31,r8,29
	r31.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r17,r17,31
	r17.u64 = r17.u32 & 0x1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r7,r5,2
	ctx.r7.s64 = ctx.r5.s64 + 2;
	// srawi r3,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 3;
	// slw r5,r17,r31
	ctx.r5.u64 = r31.u8 & 0x20 ? 0 : (r17.u32 << (r31.u8 & 0x3F));
	// lbz r17,2(r6)
	r17.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + r11.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// or r3,r16,r17
	ctx.r3.u64 = r16.u64 | r17.u64;
	// clrlwi r17,r8,29
	r17.u64 = ctx.r8.u32 & 0x7;
	// stb r3,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r3.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// clrlwi r15,r14,31
	r15.u64 = r14.u32 & 0x1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r3,r15,r17
	ctx.r3.u64 = r17.u8 & 0x20 ? 0 : (r15.u32 << (r17.u8 & 0x3F));
	// lbz r17,8(r10)
	r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// srawi r10,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stb r6,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r6.u8);
	// srawi r4,r14,1
	xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r4.s64 = r14.s32 >> 1;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// ld r31,144(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lbz r5,2(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r6,r7,2
	ctx.r6.s64 = ctx.r7.s64 + 2;
	// stb r5,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r5.u8);
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// srawi r5,r14,2
	xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x3) != 0);
	ctx.r5.s64 = r14.s32 >> 2;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lbz r16,2(r10)
	r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// srawi r6,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// clrlwi r15,r8,29
	r15.u64 = ctx.r8.u32 & 0x7;
	// or r4,r4,r16
	ctx.r4.u64 = ctx.r4.u64 | r16.u64;
	// clrlwi r3,r17,31
	ctx.r3.u64 = r17.u32 & 0x1;
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r3,r3,r15
	ctx.r3.u64 = r15.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r15.u8 & 0x3F));
	// srawi r10,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// clrlwi r15,r8,29
	r15.u64 = ctx.r8.u32 & 0x7;
	// lbz r16,2(r7)
	r16.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r4,r17,1
	xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	ctx.r4.s64 = r17.s32 >> 1;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | r16.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + r11.u64;
	// stb r5,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r5.u8);
	// srawi r5,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// srawi r17,r17,2
	xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	r17.s64 = r17.s32 >> 2;
	// clrlwi r16,r8,29
	r16.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r17,r17,31
	r17.u64 = r17.u32 & 0x1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// slw r17,r17,r16
	r17.u64 = r16.u8 & 0x20 ? 0 : (r17.u32 << (r16.u8 & 0x3F));
	// lbz r16,2(r6)
	r16.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// or r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 | r16.u64;
	// addi r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 2;
	// stb r3,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r3.u8);
	// slw r4,r4,r15
	ctx.r4.u64 = r15.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r15.u8 & 0x3F));
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// addi r7,r5,2
	ctx.r7.s64 = ctx.r5.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// or r7,r17,r10
	ctx.r7.u64 = r17.u64 | ctx.r10.u64;
	// stb r7,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r7.u8);
	// blt cr6,0x82b8db3c
	if (cr6.lt) goto loc_82B8DB3C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r16,452(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(452) );
	// lwz r15,92(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r17,120(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r7,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r7.u8);
	// stb r8,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r8.u8);
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lbz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// stb r5,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r5.u8);
	// li r27,255
	r27.s64 = 255;
	// stb r6,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r6.u8);
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// stb r3,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r3.u8);
	// stb r4,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r4.u8);
	// li r26,1
	r26.s64 = 1;
	// lwz r28,380(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(380) );
	// lwz r25,128(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// b 0x82b8df60
	goto loc_82B8DF60;
loc_82B8DDCC:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82B8DDD0:
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
loc_82B8DDE0:
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-8708
	r12.s64 = r12.s64 + -8708;
	// rlwinm r0,r7,2,0,29
	r0.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r21,-8676(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8676) );
	// lwz r21,-8668(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8668) );
	// lwz r21,-8660(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8660) );
	// lwz r21,-8640(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8640) );
	// lwz r21,-8608(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8608) );
	// lwz r21,-8576(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8576) );
	// lwz r21,-8544(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8544) );
	// lwz r21,-8512(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-8512) );
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
loc_82B8DE24:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
loc_82B8DE2C:
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// b 0x82b8ded0
	goto loc_82B8DED0;
loc_82B8DE40:
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
loc_82B8DE60:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
loc_82B8DE80:
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
loc_82B8DEA0:
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// divw r6,r7,r23
	ctx.r6.s32 = ctx.r7.s32 / r23.s32;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82b8dedc
	goto loc_82B8DEDC;
loc_82B8DEC0:
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_82B8DED0:
	// addi r6,r7,3
	ctx.r6.s64 = ctx.r7.s64 + 3;
	// divw r5,r6,r23
	ctx.r5.s32 = ctx.r6.s32 / r23.s32;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_82B8DEDC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x82b8def0
	if (!cr6.lt) goto loc_82B8DEF0;
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// b 0x82b8defc
	goto loc_82B8DEFC;
loc_82B8DEF0:
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// ble cr6,0x82b8defc
	if (!cr6.gt) goto loc_82B8DEFC;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
loc_82B8DEFC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x82b8dde0
	if (cr6.lt) goto loc_82B8DDE0;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(160) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(164) );
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(168) );
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// lbzx r4,r10,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + r25.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// lbzx r10,r7,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r25.u32);
	// rotlwi r7,r10,4
	ctx.r7.u64 = rotl32(ctx.r10.u32, 4);
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stb r4,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r4.u8);
	// lbzx r10,r6,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + r25.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbzx r6,r5,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + r25.u32);
	// rotlwi r5,r6,4
	ctx.r5.u64 = rotl32(ctx.r6.u32, 4);
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r4,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r4.u8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// blt cr6,0x82b8ddd0
	if (cr6.lt) goto loc_82B8DDD0;
loc_82B8DF60:
	// lwz r14,80(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82B8DF64:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(r15.s32, r11.s32, xer);
	// blt cr6,0x82b8d3c8
	if (cr6.lt) goto loc_82B8D3C8;
	// lwz r17,136(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
loc_82B8DF88:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmpw cr6,r8,r17
	cr6.compare<int32_t>(ctx.r8.s32, r17.s32, xer);
	// blt cr6,0x82b8d3a4
	if (cr6.lt) goto loc_82B8D3A4;
loc_82B8DF98:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82B8D010) {
	__imp__sub_82B8D010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8DFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - r31.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b8e060
	if (cr0.eq) goto loc_82B8E060;
	// li r29,0
	r29.s64 = 0;
loc_82B8E020:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8ba00
	sub_82B8BA00(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// slw r8,r9,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + int32_t(8) );
	// subf r6,r31,r7
	ctx.r6.s64 = ctx.r7.s64 - r31.s64;
	// srawi r5,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x82b8e020
	if (cr6.lt) goto loc_82B8E020;
loc_82B8E060:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// srawi. r7,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82b8e104
	if (cr0.eq) goto loc_82B8E104;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82B8E084:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bgt cr6,0x82b8e0b0
	if (cr6.gt) goto loc_82B8E0B0;
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// srw r5,r6,r11
	ctx.r5.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// b 0x82b8e0d0
	goto loc_82B8E0D0;
loc_82B8E0B0:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// subfic r6,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r6.s64 = 32 - r11.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// slw r3,r5,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// srw r11,r4,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r11.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | r11.u64;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
loc_82B8E0D0:
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// clrlwi r6,r11,28
	ctx.r6.u64 = r11.u32 & 0xF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82b8e084
	if (cr6.lt) goto loc_82B8E084;
loc_82B8E104:
	// lwz r30,292(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(292) );
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b8bc08
	sub_82B8BC08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r30,1
	r30.s64 = 1;
loc_82B8E130:
	// lhz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U16(r24.u32 + 32);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(20) );
	// rotlwi r11,r10,1
	r11.u64 = rotl32(ctx.r10.u32, 1);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82b8e198
	if (!cr6.eq) goto loc_82B8E198;
loc_82B8E154:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r8,r31,27
	ctx.r8.u64 = r31.u32 & 0x1F;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r4,r5,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + r29.u32);
	// srw r3,r4,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rotlwi r11,r5,1
	r11.u64 = rotl32(ctx.r5.u32, 1);
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r11,r4,2,0,29
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8e154
	if (cr6.eq) goto loc_82B8E154;
loc_82B8E198:
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + int32_t(4) );
	// rotlwi r8,r11,4
	ctx.r8.u64 = rotl32(r11.u32, 4);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r5,27
	r11.u64 = ctx.r5.u32 & 0x1F;
	// srawi r3,r5,5
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8e21c
	if (cr6.eq) goto loc_82B8E21C;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// srawi r9,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r9.s64 = r31.s32 >> 5;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bgt cr6,0x82b8e1f0
	if (cr6.gt) goto loc_82B8E1F0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r30,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 << (r11.u8 & 0x3F));
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// b 0x82b8e21c
	goto loc_82B8E21C;
loc_82B8E1F0:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r5,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r10.s64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// slw r8,r30,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 << (r11.u8 & 0x3F));
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// slw r5,r4,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// srw r4,r9,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_82B8E21C:
	// slw r11,r30,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 << (r11.u8 & 0x3F));
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bne cr6,0x82b8e230
	if (!cr6.eq) goto loc_82B8E230;
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
loc_82B8E230:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82b8e310
	if (!cr6.gt) goto loc_82B8E310;
	// mullw r8,r27,r23
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(r23.s32);
loc_82B8E240:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82b8e2e0
	if (cr6.lt) goto loc_82B8E2E0;
	// lhz r11,32(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(20) );
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8e2b0
	if (!cr6.eq) goto loc_82B8E2B0;
loc_82B8E26C:
	// srawi r10,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = r31.s32 >> 5;
	// clrlwi r20,r31,27
	r20.u64 = r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// srw r10,r10,r20
	ctx.r10.u64 = r20.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r20.u8 & 0x3F));
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = rotl32(r11.u32, 1);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8e26c
	if (cr6.eq) goto loc_82B8E26C;
loc_82B8E2B0:
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// mullw r11,r7,r25
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// rotlwi r20,r10,4
	r20.u64 = rotl32(ctx.r10.u32, 4);
	// add r19,r11,r8
	r19.u64 = r11.u64 + ctx.r8.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lwzx r11,r20,r9
	r11.u64 = PPC_LOAD_U32(r20.u32 + ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// stbx r11,r19,r26
	PPC_STORE_U8(r19.u32 + r26.u32, r11.u8);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// b 0x82b8e2ec
	goto loc_82B8E2EC;
loc_82B8E2E0:
	// mullw r11,r7,r25
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stbx r6,r11,r26
	PPC_STORE_U8(r11.u32 + r26.u32, ctx.r6.u8);
loc_82B8E2EC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r22
	cr6.compare<int32_t>(ctx.r7.s32, r22.s32, xer);
	// blt cr6,0x82b8e304
	if (cr6.lt) goto loc_82B8E304;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + r23.u64;
loc_82B8E304:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x82b8e240
	if (cr6.lt) goto loc_82B8E240;
loc_82B8E310:
	// cmpw cr6,r27,r21
	cr6.compare<int32_t>(r27.s32, r21.s32, xer);
	// blt cr6,0x82b8e130
	if (cr6.lt) goto loc_82B8E130;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82B8DFA0) {
	__imp__sub_82B8DFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8E320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r27.u32);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// stw r15,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r15.u32);
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// blt cr6,0x82b8e360
	if (cr6.lt) goto loc_82B8E360;
	// twi 31,r0,22
loc_82B8E360:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82b8e544
	if (!cr6.eq) goto loc_82B8E544;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82b8e4d8
	if (cr6.eq) goto loc_82B8E4D8;
	// cmpwi cr6,r5,12
	cr6.compare<int32_t>(ctx.r5.s32, 12, xer);
	// beq cr6,0x82b8e4d8
	if (cr6.eq) goto loc_82B8E4D8;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82b8e4d0
	if (cr6.eq) goto loc_82B8E4D0;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x82b8e4d0
	if (cr6.eq) goto loc_82B8E4D0;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82b8e4d0
	if (cr6.eq) goto loc_82B8E4D0;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// bne cr6,0x82b8e400
	if (!cr6.eq) goto loc_82B8E400;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// add r9,r11,r19
	ctx.r9.u64 = r11.u64 + r19.u64;
	// ble cr6,0x82b8e538
	if (!cr6.gt) goto loc_82B8E538;
	// addi r8,r27,2
	ctx.r8.s64 = r27.s64 + 2;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
loc_82B8E3B0:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// ble cr6,0x82b8e3e8
	if (!cr6.gt) goto loc_82B8E3E8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_82B8E3C0:
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r6,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r6.u8);
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// lbz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r4,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r4.u8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82b8e3c0
	if (!cr0.eq) goto loc_82B8E3C0;
loc_82B8E3E8:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r8,r8,r15
	ctx.r8.u64 = ctx.r8.u64 + r15.u64;
	// bne 0x82b8e3b0
	if (!cr0.eq) goto loc_82B8E3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
loc_82B8E400:
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-7140
	r12.s64 = r12.s64 + -7140;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r21,-7108(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7108) );
	// lwz r21,-7108(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7108) );
	// lwz r21,-7096(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7096) );
	// lwz r21,-7108(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7108) );
	// lwz r21,-7108(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7108) );
	// lwz r21,-7096(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7096) );
	// lwz r21,-6960(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6960) );
	// lwz r21,-7084(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-7084) );
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b8e45c
	goto loc_82B8E45C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82b8e45c
	goto loc_82B8E45C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82B8E45C:
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// add r9,r11,r19
	ctx.r9.u64 = r11.u64 + r19.u64;
	// ble cr6,0x82b8e538
	if (!cr6.gt) goto loc_82B8E538;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_82B8E474:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// ble cr6,0x82b8e4b8
	if (!cr6.gt) goto loc_82B8E4B8;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
loc_82B8E484:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82b8e4ac
	if (!cr6.gt) goto loc_82B8E4AC;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82B8E494:
	// lbz r31,0(r9)
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82b8e494
	if (!cr0.eq) goto loc_82B8E494;
loc_82B8E4AC:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// bne 0x82b8e484
	if (!cr0.eq) goto loc_82B8E484;
loc_82B8E4B8:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r5,r5,r15
	ctx.r5.u64 = ctx.r5.u64 + r15.u64;
	// bne 0x82b8e474
	if (!cr0.eq) goto loc_82B8E474;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
loc_82B8E4D0:
	// li r28,16
	r28.s64 = 16;
	// b 0x82b8e4dc
	goto loc_82B8E4DC;
loc_82B8E4D8:
	// li r28,8
	r28.s64 = 8;
loc_82B8E4DC:
	// addi r11,r16,3
	r11.s64 = r16.s64 + 3;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// addi r9,r18,3
	ctx.r9.s64 = r18.s64 + 3;
	// srawi r25,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r25.s64 = r11.s32 >> 2;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r29,r10,r19
	r29.u64 = ctx.r10.u64 + r19.u64;
	// ble 0x82b8e538
	if (!cr0.gt) goto loc_82B8E538;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_82B8E4FC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82b8e52c
	if (!cr6.gt) goto loc_82B8E52C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82B8E50C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// bne 0x82b8e50c
	if (!cr0.eq) goto loc_82B8E50C;
loc_82B8E52C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// add r27,r27,r15
	r27.u64 = r27.u64 + r15.u64;
	// bne 0x82b8e4fc
	if (!cr0.eq) goto loc_82B8E4FC;
loc_82B8E538:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
loc_82B8E544:
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// bgt cr6,0x82b8ebc4
	if (cr6.gt) goto loc_82B8EBC4;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-6812
	r12.s64 = r12.s64 + -6812;
	// rlwinm r0,r5,2,0,29
	r0.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_82B8E598;
	case 1:
		goto loc_82B8E598;
	case 2:
		goto loc_82B8E598;
	case 3:
		goto loc_82B8E598;
	case 4:
		goto loc_82B8E9B4;
	case 5:
		goto loc_82B8E9B4;
	case 6:
		goto loc_82B8E9B4;
	case 7:
		goto loc_82B8E9B4;
	case 8:
		goto loc_82B8E9B4;
	case 9:
		goto loc_82B8E9B4;
	case 10:
		goto loc_82B8E9B4;
	case 11:
		goto loc_82B8E9B4;
	case 12:
		goto loc_82B8E598;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-6760(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6760) );
	// lwz r21,-6760(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6760) );
	// lwz r21,-6760(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6760) );
	// lwz r21,-6760(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6760) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-6760(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6760) );
loc_82B8E598:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82b8e5ac
	if (!cr6.eq) goto loc_82B8E5AC;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r10,r11,338
	ctx.r10.u64 = r11.u64 | 338;
	// b 0x82b8e5e4
	goto loc_82B8E5E4;
loc_82B8E5AC:
	// cmpwi cr6,r5,12
	cr6.compare<int32_t>(ctx.r5.s32, 12, xer);
	// bne cr6,0x82b8e5c0
	if (!cr6.eq) goto loc_82B8E5C0;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r10,r11,338
	ctx.r10.u64 = r11.u64 | 338;
	// b 0x82b8e5e4
	goto loc_82B8E5E4;
loc_82B8E5C0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82b8e5d4
	if (!cr6.eq) goto loc_82B8E5D4;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r10,r11,339
	ctx.r10.u64 = r11.u64 | 339;
	// b 0x82b8e5e4
	goto loc_82B8E5E4;
loc_82B8E5D4:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82b8e5ec
	if (!cr6.eq) goto loc_82B8E5EC;
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r10,r11,340
	ctx.r10.u64 = r11.u64 | 340;
loc_82B8E5E4:
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// bne cr6,0x82b8ebc4
	if (!cr6.eq) goto loc_82B8EBC4;
loc_82B8E5EC:
	// li r30,0
	r30.s64 = 0;
	// lwz r28,420(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(420) );
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// lwz r23,396(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(396) );
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// lwz r22,364(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(364) );
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// lwz r21,356(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(356) );
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// mr r20,r30
	r20.u64 = r30.u64;
	// addi r27,r6,7184
	r27.s64 = ctx.r6.s64 + 7184;
	// addi r15,r7,7440
	r15.s64 = ctx.r7.s64 + 7440;
	// addi r26,r8,-7800
	r26.s64 = ctx.r8.s64 + -7800;
	// addi r25,r9,-7764
	r25.s64 = ctx.r9.s64 + -7764;
	// addi r24,r10,-7728
	r24.s64 = ctx.r10.s64 + -7728;
	// addi r14,r11,7696
	r14.s64 = r11.s64 + 7696;
loc_82B8E634:
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-6576
	r12.s64 = r12.s64 + -6576;
	// rlwinm r0,r10,2,0,29
	r0.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r21,-6524(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6524) );
	// lwz r21,-6512(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6512) );
	// lwz r21,-6512(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6512) );
	// lwz r21,-6488(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6488) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-6524(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6524) );
	// lwz r31,300(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// li r29,8
	r29.s64 = 8;
	// b 0x82b8e6b8
	goto loc_82B8E6B8;
	// lwz r31,300(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// li r29,16
	r29.s64 = 16;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82b8e6b8
	if (!cr6.eq) goto loc_82B8E6B8;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x82b8e6b8
	goto loc_82B8E6B8;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
	// rlwinm r11,r20,3,0,28
	r11.u64 = rotl64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,16
	r29.s64 = 16;
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
loc_82B8E6B8:
	// rlwinm r11,r20,1,0,30
	r11.u64 = rotl64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r20,r11
	r11.u64 = r20.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r19
	ctx.r8.u64 = r11.u64 + r19.u64;
	// lwzx r11,r11,r19
	r11.u64 = PPC_LOAD_U32(r11.u32 + r19.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-6424
	r12.s64 = r12.s64 + -6424;
	// rlwinm r0,r9,2,0,29
	r0.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r21,-6380(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6380) );
	// lwz r21,-5868(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5868) );
	// lwz r21,-5808(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5808) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-6276(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6276) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-5708(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5708) );
	// lwz r21,-6328(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-6328) );
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x82b8c1c8
	sub_82B8C1C8(ctx, base);
	// b 0x82b8e988
	goto loc_82B8E988;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x82b8c900
	sub_82B8C900(ctx, base);
	// b 0x82b8e988
	goto loc_82B8E988;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(r20.s32, 1, xer);
	// beq cr6,0x82b8e824
	if (cr6.eq) goto loc_82B8E824;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82b8e824
	if (cr6.eq) goto loc_82B8E824;
	// bl 0x82b8bea0
	sub_82B8BEA0(ctx, base);
	// lbz r9,5(r19)
	ctx.r9.u64 = PPC_LOAD_U8(r19.u32 + 5);
	// lbz r8,6(r19)
	ctx.r8.u64 = PPC_LOAD_U8(r19.u32 + 6);
	// addi r11,r16,3
	r11.s64 = r16.s64 + 3;
	// addi r10,r18,3
	ctx.r10.s64 = r18.s64 + 3;
	// lwz r7,4(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4) );
	// srawi r6,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r6.s64 = r11.s32 >> 2;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbzx r4,r9,r15
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + r15.u32);
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r3,r8,r27
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + r27.u32);
	// rotlwi r10,r4,6
	ctx.r10.u64 = rotl32(ctx.r4.u32, 6);
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r8,r5,r15
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + r15.u32);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// ble 0x82b8e988
	if (!cr0.gt) goto loc_82B8E988;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// addi r8,r31,6
	ctx.r8.s64 = r31.s64 + 6;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_82B8E7E0:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82b8e814
	if (!cr6.gt) goto loc_82B8E814;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82B8E7F0:
	// sth r9,-6(r11)
	PPC_STORE_U16(r11.u32 + -6, ctx.r9.u16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r9,-4(r11)
	PPC_STORE_U16(r11.u32 + -4, ctx.r9.u16);
	// stb r30,-2(r11)
	PPC_STORE_U8(r11.u32 + -2, r30.u8);
	// stb r30,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r30.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r30.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// bne 0x82b8e7f0
	if (!cr0.eq) goto loc_82B8E7F0;
loc_82B8E814:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82b8e7e0
	if (!cr0.eq) goto loc_82B8E7E0;
	// b 0x82b8e988
	goto loc_82B8E988;
loc_82B8E824:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82b8e8a0
	if (cr6.eq) goto loc_82B8E8A0;
	// addi r11,r16,3
	r11.s64 = r16.s64 + 3;
	// addi r10,r18,3
	ctx.r10.s64 = r18.s64 + 3;
	// srawi r6,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r6.s64 = r11.s32 >> 2;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82b8e988
	if (!cr0.gt) goto loc_82B8E988;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_82B8E84C:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82b8e890
	if (!cr6.gt) goto loc_82B8E890;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82B8E85C:
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r4,-2(r11)
	PPC_STORE_U8(r11.u32 + -2, ctx.r4.u8);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r30.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r30.u8);
	// stb r4,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r4.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// stb r30,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r30.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// bne 0x82b8e85c
	if (!cr0.eq) goto loc_82B8E85C;
loc_82B8E890:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82b8e84c
	if (!cr0.eq) goto loc_82B8E84C;
	// b 0x82b8e988
	goto loc_82B8E988;
loc_82B8E8A0:
	// bl 0x82b8bea0
	sub_82B8BEA0(ctx, base);
	// lwz r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + int32_t(16) );
	// addi r11,r16,3
	r11.s64 = r16.s64 + 3;
	// addi r10,r18,3
	ctx.r10.s64 = r18.s64 + 3;
	// srawi r7,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r7.s64 = r11.s32 >> 2;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbzx r8,r9,r14
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r14.u32);
	// rotlwi r6,r8,4
	ctx.r6.u64 = rotl32(ctx.r8.u32, 4);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r10,r3,16,0,15
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// ble 0x82b8e99c
	if (!cr0.gt) goto loc_82B8E99C;
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82B8E8E0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82b8e904
	if (!cr6.gt) goto loc_82B8E904;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82B8E8F0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// bne 0x82b8e8f0
	if (!cr0.eq) goto loc_82B8E8F0;
loc_82B8E904:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r31,r31,r6
	r31.u64 = r31.u64 + ctx.r6.u64;
	// bne 0x82b8e8e0
	if (!cr0.eq) goto loc_82B8E8E0;
	// b 0x82b8e99c
	goto loc_82B8E99C;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x82b8d010
	sub_82B8D010(ctx, base);
	// b 0x82b8e988
	goto loc_82B8E988;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(324) );
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x82b8d010
	sub_82B8D010(ctx, base);
loc_82B8E988:
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(308) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82b8ebb8
	if (cr6.eq) goto loc_82B8EBB8;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82b8ebb8
	if (cr6.eq) goto loc_82B8EBB8;
loc_82B8E99C:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// blt cr6,0x82b8e634
	if (cr6.lt) goto loc_82B8E634;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
loc_82B8E9B4:
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-5680
	r12.s64 = r12.s64 + -5680;
	// rlwinm r0,r11,2,0,29
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r21,-5648(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5648) );
	// lwz r21,-5648(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5648) );
	// lwz r21,-5636(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5636) );
	// lwz r21,-5648(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5648) );
	// lwz r21,-5648(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5648) );
	// lwz r21,-5636(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5636) );
	// lwz r21,-5624(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5624) );
	// lwz r21,-5616(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5616) );
	// li r11,1
	r11.s64 = 1;
	// li r31,1
	r31.s64 = 1;
	// b 0x82b8ea18
	goto loc_82B8EA18;
	// li r11,2
	r11.s64 = 2;
	// li r31,2
	r31.s64 = 2;
	// b 0x82b8ea18
	goto loc_82B8EA18;
	// li r11,3
	r11.s64 = 3;
	// b 0x82b8ea14
	goto loc_82B8EA14;
	// li r11,4
	r11.s64 = 4;
loc_82B8EA14:
	// li r31,4
	r31.s64 = 4;
loc_82B8EA18:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82b8ebb8
	if (!cr6.gt) goto loc_82B8EBB8;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// lwz r28,420(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(420) );
	// mr r20,r11
	r20.u64 = r11.u64;
	// lwz r22,412(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(412) );
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// lwz r21,404(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(404) );
	// lis r9,-31924
	ctx.r9.s64 = -2092171264;
	// lwz r23,396(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(396) );
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31924
	r11.s64 = -2092171264;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r27,r31,-1
	r27.s64 = r31.s64 + -1;
	// addi r26,r9,-7800
	r26.s64 = ctx.r9.s64 + -7800;
	// addi r25,r10,-7764
	r25.s64 = ctx.r10.s64 + -7764;
	// addi r24,r11,-7728
	r24.s64 = r11.s64 + -7728;
loc_82B8EA5C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r10,r11,-2
	ctx.r10.s64 = r11.s64 + -2;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x82b8eba4
	if (cr6.gt) goto loc_82B8EBA4;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-5500
	r12.s64 = r12.s64 + -5500;
	// rlwinm r0,r10,2,0,29
	r0.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82B8EAA8;
	case 1:
		goto loc_82B8EAA8;
	case 2:
		goto loc_82B8EAA8;
	case 3:
		goto loc_82B8EAE4;
	case 4:
		goto loc_82B8EB14;
	case 5:
		goto loc_82B8EBA4;
	case 6:
		goto loc_82B8EB58;
	case 7:
		goto loc_82B8EB58;
	case 8:
		goto loc_82B8EB58;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-5464(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5464) );
	// lwz r21,-5464(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5464) );
	// lwz r21,-5464(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5464) );
	// lwz r21,-5404(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5404) );
	// lwz r21,-5356(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5356) );
	// lwz r21,-5212(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5212) );
	// lwz r21,-5288(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5288) );
	// lwz r21,-5288(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5288) );
	// lwz r21,-5288(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-5288) );
loc_82B8EAA8:
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x82b8d010
	sub_82B8D010(ctx, base);
	// b 0x82b8eba4
	goto loc_82B8EBA4;
loc_82B8EAE4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r19
	ctx.r3.u64 = r11.u64 + r19.u64;
	// bl 0x82b8dfa0
	sub_82B8DFA0(ctx, base);
	// b 0x82b8eba4
	goto loc_82B8EBA4;
loc_82B8EB14:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x82b8eba4
	if (!cr6.gt) goto loc_82B8EBA4;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_82B8EB24:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// ble cr6,0x82b8eb48
	if (!cr6.gt) goto loc_82B8EB48;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82B8EB34:
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// bne 0x82b8eb34
	if (!cr0.eq) goto loc_82B8EB34;
loc_82B8EB48:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r9,r9,r15
	ctx.r9.u64 = ctx.r9.u64 + r15.u64;
	// bne 0x82b8eb24
	if (!cr0.eq) goto loc_82B8EB24;
	// b 0x82b8eba4
	goto loc_82B8EBA4;
loc_82B8EB58:
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// addi r7,r11,7
	ctx.r7.s64 = r11.s64 + 7;
	// ble cr6,0x82b8eba4
	if (!cr6.gt) goto loc_82B8EBA4;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
loc_82B8EB70:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// ble cr6,0x82b8eb98
	if (!cr6.gt) goto loc_82B8EB98;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - r27.s64;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_82B8EB84:
	// lbzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// bne 0x82b8eb84
	if (!cr0.eq) goto loc_82B8EB84;
loc_82B8EB98:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// add r8,r8,r15
	ctx.r8.u64 = ctx.r8.u64 + r15.u64;
	// bne 0x82b8eb70
	if (!cr0.eq) goto loc_82B8EB70;
loc_82B8EBA4:
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82b8ea5c
	if (!cr0.eq) goto loc_82B8EA5C;
loc_82B8EBB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
loc_82B8EBC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82B8E320) {
	__imp__sub_82B8E320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8EBD0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-22464
	ctx.r9.s64 = ctx.r10.s64 + -22464;
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r10,r31,148
	ctx.r10.s64 = r31.s64 + 148;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r28,r31,220
	r28.s64 = r31.s64 + 220;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// addi r27,r31,256
	r27.s64 = r31.s64 + 256;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// addi r26,r31,292
	r26.s64 = r31.s64 + 292;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// sth r11,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r11.u16);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// sth r11,144(r31)
	PPC_STORE_U16(r31.u32 + 144, r11.u16);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// sth r11,180(r31)
	PPC_STORE_U16(r31.u32 + 180, r11.u16);
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// sth r11,216(r31)
	PPC_STORE_U16(r31.u32 + 216, r11.u16);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// sth r11,252(r31)
	PPC_STORE_U16(r31.u32 + 252, r11.u16);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// sth r11,288(r31)
	PPC_STORE_U16(r31.u32 + 288, r11.u16);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// sth r11,324(r31)
	PPC_STORE_U16(r31.u32 + 324, r11.u16);
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// addi r25,r31,328
	r25.s64 = r31.s64 + 328;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r8,-7800
	ctx.r3.s64 = ctx.r8.s64 + -7800;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lis r7,-31924
	ctx.r7.s64 = -2092171264;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r7,-7764
	ctx.r3.s64 = ctx.r7.s64 + -7764;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// lis r6,-31924
	ctx.r6.s64 = -2092171264;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r6,-7728
	ctx.r3.s64 = ctx.r6.s64 + -7728;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82b8ba70
	sub_82B8BA70(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82b8fbe0
	sub_82B8FBE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82B8EBD0) {
	__imp__sub_82B8EBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8EDB0) {
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
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r30,r31,328
	r30.s64 = r31.s64 + 328;
	// addi r10,r11,-22464
	ctx.r10.s64 = r11.s64 + -22464;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(332) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8ede8
	if (cr6.eq) goto loc_82B8EDE8;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8EDE8:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82b8c170
	sub_82B8C170(ctx, base);
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

PPC_WEAK_FUNC(sub_82B8EDB0) {
	__imp__sub_82B8EDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8EE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r8,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r24,1
	r24.s64 = 1;
	// mr r26,r30
	r26.u64 = r30.u64;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r29,r11,-9848
	r29.s64 = r11.s64 + -9848;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// addi r8,r29,108
	ctx.r8.s64 = r29.s64 + 108;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r10,26,28,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// rlwinm r6,r7,29,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// addic. r8,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r8.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82b8f210
	if (cr0.eq) goto loc_82B8F210;
	// beq cr6,0x82b8efc4
	if (cr6.eq) goto loc_82B8EFC4;
loc_82B8EECC:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f210
	if (cr6.eq) goto loc_82B8F210;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r4,r11,r20
	ctx.r4.u64 = r11.u64 + r20.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r27,r1,144
	r27.s64 = ctx.r1.s64 + 144;
loc_82B8EEF4:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8ef98
	if (cr6.eq) goto loc_82B8EF98;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b87648
	sub_82B87648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mulli r6,r11,112
	ctx.r6.s64 = r11.s64 * 112;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + int32_t(0) );
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r24,8(r7)
	r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(8) );
	// lwzx r7,r6,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + r29.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r4,r11,r20
	ctx.r4.u64 = r11.u64 + r20.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(48) );
	// lwz r11,32(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(32) );
	// rlwinm r5,r4,0,0,19
	ctx.r5.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r11,0,0,19
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// blt cr6,0x82b8eef4
	if (cr6.lt) goto loc_82B8EEF4;
loc_82B8EF98:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// rlwinm r11,r10,26,28,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b8eecc
	if (cr6.lt) goto loc_82B8EECC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c00
	return;
loc_82B8EFC4:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// mr r19,r23
	r19.u64 = r23.u64;
	// addi r22,r10,-3516
	r22.s64 = ctx.r10.s64 + -3516;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r21,r9,7532
	r21.s64 = ctx.r9.s64 + 7532;
loc_82B8EFE4:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f210
	if (cr6.eq) goto loc_82B8F210;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r4,r11,r20
	ctx.r4.u64 = r11.u64 + r20.u64;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r27,r1,256
	r27.s64 = ctx.r1.s64 + 256;
loc_82B8F00C:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f1f0
	if (cr6.eq) goto loc_82B8F1F0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82b921e0
	sub_82B921E0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// li r11,3
	r11.s64 = 3;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x821f9f40
	sub_821F9F40(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r10,492(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(492) );
	// addi r9,r29,4
	ctx.r9.s64 = r29.s64 + 4;
	// mulli r6,r7,112
	ctx.r6.s64 = ctx.r7.s64 * 112;
	// lwz r24,216(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(216) );
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwzx r11,r6,r9
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// lwz r23,220(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(220) );
	// addi r8,r29,8
	ctx.r8.s64 = r29.s64 + 8;
	// add r10,r24,r11
	ctx.r10.u64 = r24.u64 + r11.u64;
	// add r9,r23,r11
	ctx.r9.u64 = r23.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// divw r7,r10,r11
	ctx.r7.s32 = ctx.r10.s32 / r11.s32;
	// rotlwi r9,r8,1
	ctx.r9.u64 = rotl32(ctx.r8.u32, 1);
	// rotlwi r10,r10,1
	ctx.r10.u64 = rotl32(ctx.r10.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r16,r6,r29
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + r29.u32);
	// rlwinm r6,r4,29,3,31
	ctx.r6.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// divw r4,r8,r11
	ctx.r4.s32 = ctx.r8.s32 / r11.s32;
	// mullw r15,r7,r6
	r15.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r14,r4,r15
	r14.s64 = int64_t(ctx.r4.s32) * int64_t(r15.s32);
	// andc r8,r11,r10
	ctx.r8.u64 = r11.u64 & ~ctx.r10.u64;
	// andc r7,r11,r9
	ctx.r7.u64 = r11.u64 & ~ctx.r9.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// twllei r11,0
	// twllei r11,0
	// twlgei r8,-1
	// twlgei r7,-1
	// bl 0x82be4ec0
	sub_82BE4EC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + int32_t(0) );
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mulli r4,r6,112
	ctx.r4.s64 = ctx.r6.s64 * 112;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// lwz r14,132(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// lwz r23,8(r5)
	r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwzx r7,r4,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + r29.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r4,r11,r20
	ctx.r4.u64 = r11.u64 + r20.u64;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b7b870
	sub_82B7B870(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(252) );
	// clrlwi r6,r16,26
	ctx.r6.u64 = r16.u32 & 0x3F;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(248) );
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x830060b8
	sub_830060B8(ctx, base);
	// lwz r3,24(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + int32_t(24) );
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82be4f60
	sub_82BE4F60(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// blt cr6,0x82b8f00c
	if (cr6.lt) goto loc_82B8F00C;
loc_82B8F1F0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// rlwinm r11,r10,26,28,31
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b8efe4
	if (cr6.lt) goto loc_82B8EFE4;
loc_82B8F210:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82B8EE58) {
	__imp__sub_82B8EE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r31,r29
	r31.u64 = r29.u64;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r28,r11,-9848
	r28.s64 = r11.s64 + -9848;
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// addi r8,r28,108
	ctx.r8.s64 = r28.s64 + 108;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r7,29,31,31
	ctx.r6.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b8f354
	if (cr6.eq) goto loc_82B8F354;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// rlwinm r9,r10,26,28,31
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xF;
	// addic. r8,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r8.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b8f55c
	if (cr0.eq) goto loc_82B8F55C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82B8F298:
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f55c
	if (cr6.eq) goto loc_82B8F55C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8228ff90
	sub_8228FF90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82b8f5e8
	sub_82B8F5E8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(116) );
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(48) );
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// rlwinm r5,r9,0,0,19
	ctx.r5.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r8,0,0,19
	ctx.r4.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(44) );
	// rlwinm r11,r6,26,28,31
	r11.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xF;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// blt cr6,0x82b8f298
	if (cr6.lt) goto loc_82B8F298;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c00
	return;
loc_82B8F354:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// rlwinm r10,r11,26,28,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// addic. r9,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b8f55c
	if (cr0.eq) goto loc_82B8F55C;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r19,r11,-1124
	r19.s64 = r11.s64 + -1124;
	// addi r25,r10,-3516
	r25.s64 = ctx.r10.s64 + -3516;
	// addi r24,r9,7532
	r24.s64 = ctx.r9.s64 + 7532;
loc_82B8F380:
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f55c
	if (cr6.eq) goto loc_82B8F55C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b920f0
	sub_82B920F0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// li r11,3
	r11.s64 = 3;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x821f9f40
	sub_821F9F40(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x821faaa0
	sub_821FAAA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r10,r28,4
	ctx.r10.s64 = r28.s64 + 4;
	// lwz r23,200(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(200) );
	// mulli r7,r8,112
	ctx.r7.s64 = ctx.r8.s64 * 112;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r18.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r29.u32);
	// lwzx r11,r7,r10
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r22,204(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(204) );
	// addi r9,r28,8
	ctx.r9.s64 = r28.s64 + 8;
	// add r10,r23,r11
	ctx.r10.u64 = r23.u64 + r11.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r9,r22,r11
	ctx.r9.u64 = r22.u64 + r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = rotl32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r6,29,3,31
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rotlwi r9,r8,1
	ctx.r9.u64 = rotl32(ctx.r8.u32, 1);
	// lwzx r16,r7,r28
	r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + r28.u32);
	// divw r7,r4,r11
	ctx.r7.s32 = ctx.r4.s32 / r11.s32;
	// divw r4,r8,r11
	ctx.r4.s32 = ctx.r8.s32 / r11.s32;
	// mullw r15,r7,r6
	r15.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r14,r4,r15
	r14.s64 = int64_t(ctx.r4.s32) * int64_t(r15.s32);
	// andc r8,r11,r10
	ctx.r8.u64 = r11.u64 & ~ctx.r10.u64;
	// andc r7,r11,r9
	ctx.r7.u64 = r11.u64 & ~ctx.r9.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// twllei r11,0
	// twllei r11,0
	// twlgei r8,-1
	// twlgei r7,-1
	// bl 0x82be4ec0
	sub_82BE4EC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b876d8
	sub_82B876D8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mulli r4,r6,112
	ctx.r4.s64 = ctx.r6.s64 * 112;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwz r14,100(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lwz r22,8(r5)
	r22.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// lwzx r7,r4,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + r28.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r22
	ctr.u64 = r22.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82b7b870
	sub_82B7B870(ctx, base);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(236) );
	// clrlwi r6,r16,26
	ctx.r6.u64 = r16.u32 & 0x3F;
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(232) );
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x830060b8
	sub_830060B8(ctx, base);
	// lwz r3,24(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + int32_t(24) );
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c2628
	sub_822C2628(ctx, base);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bl 0x82be4f60
	sub_82BE4F60(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// rlwinm r11,r9,26,28,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xF;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b8f380
	if (cr6.lt) goto loc_82B8F380;
loc_82B8F55C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82B8F220) {
	__imp__sub_82B8F220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r10,r11,328
	ctx.r10.s64 = r11.s64 + 328;
	// addi r31,r11,292
	r31.s64 = r11.s64 + 292;
	// addi r30,r11,256
	r30.s64 = r11.s64 + 256;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r29,r11,220
	r29.s64 = r11.s64 + 220;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// addi r10,r11,184
	ctx.r10.s64 = r11.s64 + 184;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// addi r31,r11,148
	r31.s64 = r11.s64 + 148;
	// addi r30,r11,112
	r30.s64 = r11.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r29,r11,76
	r29.s64 = r11.s64 + 76;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r28,r11,40
	r28.s64 = r11.s64 + 40;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82b8e320
	sub_82B8E320(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B8F568) {
	__imp__sub_82B8F568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// mulli r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 * 112;
	// addi r11,r11,-9848
	r11.s64 = r11.s64 + -9848;
	// addi r9,r11,108
	ctx.r9.s64 = r11.s64 + 108;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,29,31,31
	ctx.r7.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// cmplwi cr6,r10,43
	cr6.compare<uint32_t>(ctx.r10.u32, 43, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32071
	r12.s64 = -2101805056;
	// addi r12,r12,-2512
	r12.s64 = r12.s64 + -2512;
	// rlwinm r0,r10,2,0,29
	r0.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82B8F700;
	case 1:
		goto loc_82B8F70C;
	case 2:
		goto loc_82B8F708;
	case 3:
		goto loc_82B8F70C;
	case 4:
		goto loc_82B8F70C;
	case 5:
		goto loc_82B8F70C;
	case 6:
		goto loc_82B8F70C;
	case 7:
		goto loc_82B8F70C;
	case 8:
		goto loc_82B8F70C;
	case 9:
		goto loc_82B8F70C;
	case 10:
		goto loc_82B8F70C;
	case 11:
		goto loc_82B8F70C;
	case 12:
		goto loc_82B8F70C;
	case 13:
		goto loc_82B8F70C;
	case 14:
		goto loc_82B8F70C;
	case 15:
		goto loc_82B8F70C;
	case 16:
		goto loc_82B8F70C;
	case 17:
		goto loc_82B8F70C;
	case 18:
		goto loc_82B8F70C;
	case 19:
		goto loc_82B8F70C;
	case 20:
		goto loc_82B8F70C;
	case 21:
		goto loc_82B8F70C;
	case 22:
		goto loc_82B8F70C;
	case 23:
		goto loc_82B8F70C;
	case 24:
		goto loc_82B8F70C;
	case 25:
		goto loc_82B8F70C;
	case 26:
		goto loc_82B8F70C;
	case 27:
		goto loc_82B8F70C;
	case 28:
		goto loc_82B8F70C;
	case 29:
		goto loc_82B8F70C;
	case 30:
		goto loc_82B8F70C;
	case 31:
		goto loc_82B8F70C;
	case 32:
		goto loc_82B8F70C;
	case 33:
		goto loc_82B8F70C;
	case 34:
		goto loc_82B8F70C;
	case 35:
		goto loc_82B8F70C;
	case 36:
		goto loc_82B8F70C;
	case 37:
		goto loc_82B8F70C;
	case 38:
		goto loc_82B8F6E0;
	case 39:
		goto loc_82B8F70C;
	case 40:
		goto loc_82B8F6E8;
	case 41:
		goto loc_82B8F70C;
	case 42:
		goto loc_82B8F6F0;
	case 43:
		goto loc_82B8F6F8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-2304(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2304) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2296(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2296) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2336(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2336) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2328(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2328) );
	// lwz r21,-2292(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2292) );
	// lwz r21,-2320(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2320) );
	// lwz r21,-2312(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-2312) );
loc_82B8F6E0:
	// lwz r3,3920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(3920) );
	// blr 
	return;
loc_82B8F6E8:
	// lwz r3,4144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4144) );
	// blr 
	return;
loc_82B8F6F0:
	// lwz r3,4368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4368) );
	// blr 
	return;
loc_82B8F6F8:
	// lwz r3,4480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4480) );
	// blr 
	return;
loc_82B8F700:
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(224) );
	// blr 
	return;
loc_82B8F708:
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(448) );
loc_82B8F70C:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8F5E8) {
	__imp__sub_82B8F5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F710) {
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
	// bl 0x82b8edb0
	sub_82B8EDB0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f748
	if (cr6.eq) goto loc_82B8F748;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82B8F748:
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

PPC_WEAK_FUNC(sub_82B8F710) {
	__imp__sub_82B8F710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F760) {
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
	// bl 0x82b8bea0
	sub_82B8BEA0(ctx, base);
	// lis r31,-31927
	r31.s64 = -2092367872;
	// lwz r3,28508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28508) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b8f7a4
	if (!cr6.eq) goto loc_82B8F7A4;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b8f79c
	if (cr6.eq) goto loc_82B8F79C;
	// bl 0x82b8ebd0
	sub_82B8EBD0(ctx, base);
	// b 0x82b8f7a0
	goto loc_82B8F7A0;
loc_82B8F79C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B8F7A0:
	// stw r3,28508(r31)
	PPC_STORE_U32(r31.u32 + 28508, ctx.r3.u32);
loc_82B8F7A4:
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

PPC_WEAK_FUNC(sub_82B8F760) {
	__imp__sub_82B8F760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F7B8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8f7e0
	if (!cr6.eq) goto loc_82B8F7E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8f7ec
	goto loc_82B8F7EC;
loc_82B8F7E0:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
loc_82B8F7EC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r10,r8
	ctx.r8.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b8f838
	if (!cr6.lt) goto loc_82B8F838;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f820
	if (cr6.eq) goto loc_82B8F820;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
loc_82B8F820:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
loc_82B8F838:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b90080
	sub_82B90080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B8F7B8) {
	__imp__sub_82B8F7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F860) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b8f88c
	if (!cr6.eq) goto loc_82B8F88C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8f898
	goto loc_82B8F898;
loc_82B8F88C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
loc_82B8F898:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82b8f8c8
	if (!cr6.lt) goto loc_82B8F8C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8f8bc
	if (cr6.eq) goto loc_82B8F8BC;
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_82B8F8BC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82b8f8e4
	goto loc_82B8F8E4;
loc_82B8F8C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82b90450
	sub_82B90450(ctx, base);
loc_82B8F8E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82b8f9e0
	if (cr6.eq) goto loc_82B8F9E0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r3,7116(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(7116) );
	// beq cr6,0x82b8f970
	if (cr6.eq) goto loc_82B8F970;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// rotlwi r4,r9,1
	ctx.r4.u64 = rotl32(ctx.r9.u32, 1);
	// lhzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rotlwi r9,r8,1
	ctx.r9.u64 = rotl32(ctx.r8.u32, 1);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x82b8f9e0
	if (cr6.lt) goto loc_82B8F9E0;
	// lhzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// sthx r9,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + r11.u32, ctx.r9.u16);
	// sthx r8,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + r11.u32, ctx.r8.u16);
loc_82B8F970:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8f9e0
	if (cr6.eq) goto loc_82B8F9E0;
loc_82B8F978:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// rotlwi r4,r7,1
	ctx.r4.u64 = rotl32(ctx.r7.u32, 1);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rotlwi r4,r8,1
	ctx.r4.u64 = rotl32(ctx.r8.u32, 1);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b8f9e0
	if (cr6.lt) goto loc_82B8F9E0;
	// lhzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lhzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// sthx r9,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + r11.u32, ctx.r9.u16);
	// sthx r8,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + r11.u32, ctx.r8.u16);
	// bne cr6,0x82b8f978
	if (!cr6.eq) goto loc_82B8F978;
loc_82B8F9E0:
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

PPC_WEAK_FUNC(sub_82B8F860) {
	__imp__sub_82B8F860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8F9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x82ca2be8
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lhz r5,-2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + -2);
	// sth r5,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r5.u16);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82b8fa48
	if (cr6.eq) goto loc_82B8FA48;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82B8FA48:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82b8fbdc
	if (cr6.eq) goto loc_82B8FBDC;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,7116(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(7116) );
loc_82B8FA68:
	// rlwinm r28,r9,1,0,30
	r28.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b8fa84
	if (!cr6.eq) goto loc_82B8FA84;
	// addi r31,r30,-1
	r31.s64 = r30.s64 + -1;
loc_82B8FA84:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b8fb70
	if (!cr6.lt) goto loc_82B8FB70;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + r11.u32);
	// rotlwi r7,r10,1
	ctx.r7.u64 = rotl32(ctx.r10.u32, 1);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r9,1
	ctx.r6.u64 = rotl32(ctx.r9.u32, 1);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b8fb10
	if (!cr6.lt) goto loc_82B8FB10;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + r11.u32);
	// rotlwi r7,r10,1
	ctx.r7.u64 = rotl32(ctx.r10.u32, 1);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b8fbdc
	if (cr6.lt) goto loc_82B8FBDC;
loc_82B8FB10:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// rotlwi r7,r9,1
	ctx.r7.u64 = rotl32(ctx.r9.u32, 1);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82b8fb58
	if (!cr6.lt) goto loc_82B8FB58;
	// lhzx r8,r28,r11
	ctx.r8.u64 = PPC_LOAD_U16(r28.u32 + r11.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lhzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, ctx.r8.u16);
	// sthx r7,r28,r11
	PPC_STORE_U16(r28.u32 + r11.u32, ctx.r7.u16);
	// b 0x82b8fa68
	goto loc_82B8FA68;
loc_82B8FB58:
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lhz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// sthx r8,r28,r11
	PPC_STORE_U16(r28.u32 + r11.u32, ctx.r8.u16);
	// b 0x82b8fa68
	goto loc_82B8FA68;
loc_82B8FB70:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b8fbdc
	if (!cr6.lt) goto loc_82B8FBDC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + r11.u32);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// rotlwi r5,r9,1
	ctx.r5.u64 = rotl32(ctx.r9.u32, 1);
	// rotlwi r4,r8,1
	ctx.r4.u64 = rotl32(ctx.r8.u32, 1);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b8fbdc
	if (cr6.lt) goto loc_82B8FBDC;
	// lhzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + r11.u32);
	// lhzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// sthx r10,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + r11.u32, ctx.r10.u16);
	// sthx r9,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + r11.u32, ctx.r9.u16);
loc_82B8FBDC:
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B8F9F8) {
	__imp__sub_82B8F9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8FBE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8fc10
	if (cr6.eq) goto loc_82B8FC10;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r11.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x82b8fca0
	if (!cr6.lt) goto loc_82B8FCA0;
loc_82B8FC10:
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b903d8
	sub_82B903D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x82b8fc6c
	if (cr6.eq) goto loc_82B8FC6C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
loc_82B8FC4C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8fc5c
	if (cr6.eq) goto loc_82B8FC5C;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
loc_82B8FC5C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b8fc4c
	if (!cr6.eq) goto loc_82B8FC4C;
loc_82B8FC6C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// srawi r30,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	// beq cr6,0x82b8fc88
	if (cr6.eq) goto loc_82B8FC88;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8FC88:
	// rlwinm r11,r30,1,0,30
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r10,r29,512
	ctx.r10.s64 = r29.s64 + 512;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82B8FCA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82B8FBE0) {
	__imp__sub_82B8FBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B8FCA8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(12) );
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// bne cr6,0x82b8fcf8
	if (!cr6.eq) goto loc_82B8FCF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b8fd04
	goto loc_82B8FD04;
loc_82B8FCF8:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_82B8FD04:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b90078
	if (cr6.eq) goto loc_82B90078;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	r11.s64 = ctx.r7.s32 >> 4;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, xer);
	// bge cr6,0x82b8fd38
	if (!cr6.lt) goto loc_82B8FD38;
	// bl 0x82a97648
	sub_82A97648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82B8FD38:
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b8fea8
	if (!cr6.lt) goto loc_82B8FEA8;
	// rlwinm r11,r9,31,1,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b8fd5c
	if (cr6.lt) goto loc_82B8FD5C;
	// add r28,r11,r9
	r28.u64 = r11.u64 + ctx.r9.u64;
loc_82B8FD5C:
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b8fd68
	if (!cr6.lt) goto loc_82B8FD68;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_82B8FD68:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b6ddf8
	sub_82B6DDF8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// beq cr6,0x82b8fdc4
	if (cr6.eq) goto loc_82B8FDC4;
loc_82B8FD8C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8fdb4
	if (cr6.eq) goto loc_82B8FDB4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
loc_82B8FDB4:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b8fd8c
	if (!cr6.eq) goto loc_82B8FD8C;
loc_82B8FDC4:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b8fe0c
	if (cr6.eq) goto loc_82B8FE0C;
loc_82B8FDD4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8fe00
	if (cr6.eq) goto loc_82B8FE00;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
loc_82B8FE00:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82b8fdd4
	if (!cr0.eq) goto loc_82B8FDD4;
loc_82B8FE0C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b8fe64
	if (cr6.eq) goto loc_82B8FE64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
loc_82B8FE2C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8fe54
	if (cr6.eq) goto loc_82B8FE54;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82B8FE54:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b8fe2c
	if (!cr6.eq) goto loc_82B8FE2C;
loc_82B8FE64:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r11.s64 = ctx.r10.s32 >> 4;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// beq cr6,0x82b8fe84
	if (cr6.eq) goto loc_82B8FE84;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B8FE84:
	// rlwinm r11,r28,4,0,27
	r11.u64 = rotl64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82B8FEA8:
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(172) );
	// subf r11,r7,r8
	r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x82b8ffa8
	if (!cr6.lt) goto loc_82B8FFA8;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// beq cr6,0x82b8ff08
	if (cr6.eq) goto loc_82B8FF08;
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
loc_82B8FED0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8fef8
	if (cr6.eq) goto loc_82B8FEF8;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
loc_82B8FEF8:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b8fed0
	if (!cr6.eq) goto loc_82B8FED0;
loc_82B8FF08:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r10,r7,r11
	ctx.r10.s64 = r11.s64 - ctx.r7.s64;
	// srawi r8,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// subf. r10,r8,r31
	ctx.r10.s64 = r31.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b8ff54
	if (cr0.eq) goto loc_82B8FF54;
loc_82B8FF1C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b8ff48
	if (cr6.eq) goto loc_82B8FF48;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(8) );
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(12) );
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
loc_82B8FF48:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82b8ff1c
	if (!cr0.eq) goto loc_82B8FF1C;
loc_82B8FF54:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b90078
	if (cr6.eq) goto loc_82B90078;
loc_82B8FF70:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b8ff70
	if (!cr6.eq) goto loc_82B8FF70;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
loc_82B8FFA8:
	// rlwinm r6,r31,4,0,27
	ctx.r6.u64 = rotl64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r11,r6,r8
	r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b8fff8
	if (cr6.eq) goto loc_82B8FFF8;
loc_82B8FFC0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b8ffe8
	if (cr6.eq) goto loc_82B8FFE8;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82B8FFE8:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b8ffc0
	if (!cr6.eq) goto loc_82B8FFC0;
loc_82B8FFF8:
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// beq cr6,0x82b90038
	if (cr6.eq) goto loc_82B90038;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + r11.u64;
loc_82B90008:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// bne cr6,0x82b90008
	if (!cr6.eq) goto loc_82B90008;
loc_82B90038:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b90078
	if (cr6.eq) goto loc_82B90078;
loc_82B90048:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b90048
	if (!cr6.eq) goto loc_82B90048;
loc_82B90078:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82B8FCA8) {
	__imp__sub_82B8FCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90080) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r26,0(r6)
	r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// lwz r25,4(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r24,8(r6)
	r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(8) );
	// li r27,12
	r27.s64 = 12;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b900bc
	if (!cr6.eq) goto loc_82B900BC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82b900c8
	goto loc_82B900C8;
loc_82B900BC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// divw r9,r9,r27
	ctx.r9.s32 = ctx.r9.s32 / r27.s32;
loc_82B900C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b903cc
	if (cr6.eq) goto loc_82B903CC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// divw r11,r7,r27
	r11.s32 = ctx.r7.s32 / r27.s32;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, xer);
	// bge cr6,0x82b900fc
	if (!cr6.lt) goto loc_82B900FC;
	// bl 0x82a97648
	sub_82A97648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82B900FC:
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b9025c
	if (!cr6.lt) goto loc_82B9025C;
	// rlwinm r11,r9,31,1,31
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82b90120
	if (cr6.lt) goto loc_82B90120;
	// add r28,r11,r9
	r28.u64 = r11.u64 + ctx.r9.u64;
loc_82B90120:
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b9012c
	if (!cr6.lt) goto loc_82B9012C;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_82B9012C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b7ffa8
	sub_82B7FFA8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x82b90180
	if (cr6.eq) goto loc_82B90180;
loc_82B90150:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b90170
	if (cr6.eq) goto loc_82B90170;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_82B90170:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b90150
	if (!cr6.eq) goto loc_82B90150;
loc_82B90180:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b901b0
	if (cr6.eq) goto loc_82B901B0;
loc_82B90190:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b901a4
	if (cr6.eq) goto loc_82B901A4;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
loc_82B901A4:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x82b90190
	if (!cr0.eq) goto loc_82B90190;
loc_82B901B0:
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82b90208
	if (cr6.eq) goto loc_82B90208;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82B901D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b901f8
	if (cr6.eq) goto loc_82B901F8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
loc_82B901F8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b901d8
	if (!cr6.eq) goto loc_82B901D8;
loc_82B90208:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r10,r27
	r11.s32 = ctx.r10.s32 / r27.s32;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// beq cr6,0x82b90228
	if (cr6.eq) goto loc_82B90228;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B90228:
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + r29.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82B9025C:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// divw r9,r10,r27
	ctx.r9.s32 = ctx.r10.s32 / r27.s32;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// bge cr6,0x82b90328
	if (!cr6.lt) goto loc_82B90328;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + r11.u64;
	// beq cr6,0x82b902bc
	if (cr6.eq) goto loc_82B902BC;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_82B9028C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b902ac
	if (cr6.eq) goto loc_82B902AC;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_82B902AC:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b9028c
	if (!cr6.eq) goto loc_82B9028C;
loc_82B902BC:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = ctx.r9.s32 / r27.s32;
	// subf. r9,r8,r31
	ctx.r9.s64 = r31.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b902f0
	if (cr0.eq) goto loc_82B902F0;
loc_82B902D0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b902e4
	if (cr6.eq) goto loc_82B902E4;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r25.u32);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r24.u32);
loc_82B902E4:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82b902d0
	if (!cr0.eq) goto loc_82B902D0;
loc_82B902F0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b903cc
	if (cr6.eq) goto loc_82B903CC;
loc_82B90308:
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b90308
	if (!cr6.eq) goto loc_82B90308;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
loc_82B90328:
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subf r10,r6,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b90370
	if (cr6.eq) goto loc_82B90370;
loc_82B90340:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b90360
	if (cr6.eq) goto loc_82B90360;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(8) );
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
loc_82B90360:
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b90340
	if (!cr6.eq) goto loc_82B90340;
loc_82B90370:
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b903a8
	if (cr6.eq) goto loc_82B903A8;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_82B90380:
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// bne cr6,0x82b90380
	if (!cr6.eq) goto loc_82B90380;
loc_82B903A8:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b903cc
	if (cr6.eq) goto loc_82B903CC;
loc_82B903B4:
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b903b4
	if (!cr6.eq) goto loc_82B903B4;
loc_82B903CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82B90080) {
	__imp__sub_82B90080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B903D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b90430
	if (cr6.eq) goto loc_82B90430;
	// li r11,-1
	r11.s64 = -1;
	// twllei r31,0
	// divwu r10,r11,r31
	ctx.r10.u32 = r11.u32 / r31.u32;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bge cr6,0x82b90430
	if (!cr6.lt) goto loc_82B90430;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5684
	ctx.r9.s64 = r11.s64 + 5684;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822f1f00
	sub_822F1F00(ctx, base);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,5672
	ctx.r7.s64 = ctx.r8.s64 + 5672;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_82B90430:
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
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

PPC_WEAK_FUNC(sub_82B903D8) {
	__imp__sub_82B903D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90450) {
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
	// lhz r27,0(r6)
	r27.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b90480
	if (!cr6.eq) goto loc_82B90480;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82b9048c
	goto loc_82B9048C;
loc_82B90480:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
loc_82B9048C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b90704
	if (cr6.eq) goto loc_82B90704;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r11.s64 = ctx.r7.s32 >> 1;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, xer);
	// bge cr6,0x82b904c0
	if (!cr6.lt) goto loc_82B904C0;
	// bl 0x82a97648
	sub_82A97648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82B904C0:
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b905e0
	if (!cr6.lt) goto loc_82B905E0;
	// rlwinm r11,r8,31,1,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b904e4
	if (cr6.lt) goto loc_82B904E4;
	// add r28,r11,r8
	r28.u64 = r11.u64 + ctx.r8.u64;
loc_82B904E4:
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// bge cr6,0x82b904f0
	if (!cr6.lt) goto loc_82B904F0;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_82B904F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b903d8
	sub_82B903D8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x82b90534
	if (cr6.eq) goto loc_82B90534;
loc_82B90514:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b90524
	if (cr6.eq) goto loc_82B90524;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
loc_82B90524:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b90514
	if (!cr6.eq) goto loc_82B90514;
loc_82B90534:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82b9055c
	if (cr6.eq) goto loc_82B9055C;
loc_82B90544:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b90550
	if (cr6.eq) goto loc_82B90550;
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
loc_82B90550:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82b90544
	if (!cr0.eq) goto loc_82B90544;
loc_82B9055C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b9059c
	if (cr6.eq) goto loc_82B9059C;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82B9057C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b9058c
	if (cr6.eq) goto loc_82B9058C;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
loc_82B9058C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b9057c
	if (!cr6.eq) goto loc_82B9057C;
loc_82B9059C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r11.s64 = ctx.r10.s32 >> 1;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// beq cr6,0x82b905bc
	if (cr6.eq) goto loc_82B905BC;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_82B905BC:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = rotl64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// rlwinm r11,r31,1,0,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82B905E0:
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(156) );
	// subf r11,r7,r9
	r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x82b90688
	if (!cr6.lt) goto loc_82B90688;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x82b90628
	if (cr6.eq) goto loc_82B90628;
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
loc_82B90608:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b90618
	if (cr6.eq) goto loc_82B90618;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r6,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r6.u16);
loc_82B90618:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b90608
	if (!cr6.eq) goto loc_82B90608;
loc_82B90628:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// subf r10,r7,r11
	ctx.r10.s64 = r11.s64 - ctx.r7.s64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// subf. r10,r9,r31
	ctx.r10.s64 = r31.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b90654
	if (cr0.eq) goto loc_82B90654;
loc_82B9063C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82b90648
	if (cr6.eq) goto loc_82B90648;
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
loc_82B90648:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82b9063c
	if (!cr0.eq) goto loc_82B9063C;
loc_82B90654:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b90704
	if (cr6.eq) goto loc_82B90704;
loc_82B90670:
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b90670
	if (!cr6.eq) goto loc_82B90670;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82B90688:
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// subf r11,r6,r9
	r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b906c0
	if (cr6.eq) goto loc_82B906C0;
loc_82B906A0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b906b0
	if (cr6.eq) goto loc_82B906B0;
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
loc_82B906B0:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b906a0
	if (!cr6.eq) goto loc_82B906A0;
loc_82B906C0:
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// beq cr6,0x82b906e4
	if (cr6.eq) goto loc_82B906E4;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82B906D0:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bne cr6,0x82b906d0
	if (!cr6.eq) goto loc_82B906D0;
loc_82B906E4:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b90704
	if (cr6.eq) goto loc_82B90704;
loc_82B906F4:
	// sth r27,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r27.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b906f4
	if (!cr6.eq) goto loc_82B906F4;
loc_82B90704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82B90450) {
	__imp__sub_82B90450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10568) );
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90710) {
	__imp__sub_82B90710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10568) );
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90720) {
	__imp__sub_82B90720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10556) );
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90730) {
	__imp__sub_82B90730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11852) );
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90740) {
	__imp__sub_82B90740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90750) {
	__imp__sub_82B90750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90760) {
	__imp__sub_82B90760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90770) {
	__imp__sub_82B90770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11852) );
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (rotl32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90780) {
	__imp__sub_82B90780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B907E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B907E0) {
	__imp__sub_82B907E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B907F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11852) );
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (rotl32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B907F0) {
	__imp__sub_82B907F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,11848(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90850) {
	__imp__sub_82B90850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11852) );
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (rotl32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90860) {
	__imp__sub_82B90860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B908C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,11848(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B908C0) {
	__imp__sub_82B908C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B908D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11852) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwimi r11,r4,30,1,1
	r11.u64 = (rotl32(ctx.r4.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11848) );
	// bne cr6,0x82b9090c
	if (!cr6.eq) goto loc_82B9090C;
	// andi. r9,r11,4112
	ctx.r9.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_82B9090C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b9091c
	if (!cr6.eq) goto loc_82B9091C;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_82B9091C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B908D0) {
	__imp__sub_82B908D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11852) );
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90958) {
	__imp__sub_82B90958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-27852
	ctx.r10.s64 = r11.s64 + -27852;
	// lfs f13,-27852(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10152);
	f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90968) {
	__imp__sub_82B90968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10556) );
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90990) {
	__imp__sub_82B90990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B909A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,-27852
	ctx.r10.s64 = r11.s64 + -27852;
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,-27852(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10152);
	f0.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(std::fma(float(ctx.f12.f64), float(f0.f64), float(ctx.f13.f64)));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(std::fma(float(ctx.f11.f64), float(f0.f64), float(ctx.f13.f64)));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(std::fma(float(ctx.f10.f64), float(f0.f64), float(ctx.f13.f64)));
	// fmadds f0,f9,f0,f13
	f0.f64 = double(std::fma(float(ctx.f9.f64), float(f0.f64), float(ctx.f13.f64)));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f12.f64);
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f11.f64);
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(ctx.f10.f64);
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (rotl32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (rotl32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (rotl32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B909A0) {
	__imp__sub_82B909A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10680) );
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	r11.u64 = (rotl32(ctx.r4.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	r12.u64 = rotl64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90A10) {
	__imp__sub_82B90A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10680) );
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90A38) {
	__imp__sub_82B90A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,52,63
	r12.u64 = rotl64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-19240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19240);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simd::truncate_f64_to_i64(f0.f64);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-12) );
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90A48) {
	__imp__sub_82B90A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r11,10606(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90A88) {
	__imp__sub_82B90A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,23980(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(23980) );
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b90acc
	if (cr6.eq) goto loc_82B90ACC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x82b90ad0
	goto loc_82B90AD0;
loc_82B90ACC:
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82B90AD0:
	// stw r11,23980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23980, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90AB8) {
	__imp__sub_82B90AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,23980(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(23980) );
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90AD8) {
	__imp__sub_82B90AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11876) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90AE8) {
	__imp__sub_82B90AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90AF0) {
	__imp__sub_82B90AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B00) {
	__imp__sub_82B90B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11880) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B10) {
	__imp__sub_82B90B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwimi r11,r4,7,24,24
	r11.u64 = (rotl32(ctx.r4.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B18) {
	__imp__sub_82B90B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B40) {
	__imp__sub_82B90B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B50) {
	__imp__sub_82B90B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B60) {
	__imp__sub_82B90B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B70) {
	__imp__sub_82B90B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B80) {
	__imp__sub_82B90B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwimi r11,r4,20,9,11
	r11.u64 = (rotl32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90B90) {
	__imp__sub_82B90B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90BB0) {
	__imp__sub_82B90BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwimi r11,r4,23,6,8
	r11.u64 = (rotl32(ctx.r4.u32, 23) & 0x3800000) | (r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90BC0) {
	__imp__sub_82B90BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90BE8) {
	__imp__sub_82B90BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwimi r11,r4,29,0,2
	r11.u64 = (rotl32(ctx.r4.u32, 29) & 0xE0000000) | (r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90BF8) {
	__imp__sub_82B90BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C20) {
	__imp__sub_82B90C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwimi r11,r4,26,3,5
	r11.u64 = (rotl32(ctx.r4.u32, 26) & 0x1C000000) | (r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C30) {
	__imp__sub_82B90C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10548) );
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C50) {
	__imp__sub_82B90C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C60) {
	__imp__sub_82B90C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C68) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C68) {
	__imp__sub_82B90C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C70) {
	__imp__sub_82B90C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C78) {
	__imp__sub_82B90C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C90) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C90) {
	__imp__sub_82B90C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90C98) {
	__imp__sub_82B90C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90CB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90CB0) {
	__imp__sub_82B90CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90CB8) {
	__imp__sub_82B90CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90CD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90CD0) {
	__imp__sub_82B90CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,10564(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10564) );
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// li r12,1
	r12.s64 = 1;
	// rlwinm r11,r11,0,0,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stw r11,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, r11.u32);
	// rldicr r12,r12,44,63
	r12.u64 = rotl64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90CD8) {
	__imp__sub_82B90CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10564(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10564) );
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90D18) {
	__imp__sub_82B90D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11856, ctx.r4.u32);
	// addi r4,r3,12676
	ctx.r4.s64 = ctx.r3.s64 + 12676;
	// b 0x821f9ad8
	sub_821F9AD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82B90D28) {
	__imp__sub_82B90D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11856) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90D38) {
	__imp__sub_82B90D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3216);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90D40) {
	__imp__sub_82B90D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90D60) {
	__imp__sub_82B90D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10568) );
	// rlwimi r11,r4,15,16,16
	r11.u64 = (rotl32(ctx.r4.u32, 15) & 0x8000) | (r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90D70) {
	__imp__sub_82B90D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10568) );
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90D90) {
	__imp__sub_82B90D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10752, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90DA0) {
	__imp__sub_82B90DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10752) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90DB8) {
	__imp__sub_82B90DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11860(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11860) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90DC0) {
	__imp__sub_82B90DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12444(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12444) );
	// stw r4,11864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11864, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b90ddc
	if (!cr6.eq) goto loc_82B90DDC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B90DDC:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10460) );
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	r11.u64 = (rotl32(ctx.r4.u32, 4) & 0xF0) | (r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	r12.u64 = rotl64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90DC8) {
	__imp__sub_82B90DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11864) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E00) {
	__imp__sub_82B90E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12448(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12448) );
	// stw r4,11868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11868, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b90e1c
	if (!cr6.eq) goto loc_82B90E1C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B90E1C:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10460) );
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	r11.u64 = (rotl32(ctx.r4.u32, 8) & 0xF00) | (r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	r12.u64 = rotl64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E08) {
	__imp__sub_82B90E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11868) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E40) {
	__imp__sub_82B90E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12452(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12452) );
	// stw r4,11872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11872, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82b90e5c
	if (!cr6.eq) goto loc_82B90E5C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B90E5C:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10460) );
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	r11.u64 = (rotl32(ctx.r4.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	r12.u64 = rotl64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E48) {
	__imp__sub_82B90E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11872) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E80) {
	__imp__sub_82B90E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11884(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(11884) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E88) {
	__imp__sub_82B90E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11892(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90E90) {
	__imp__sub_82B90E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11896(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90EA0) {
	__imp__sub_82B90EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90EB0) {
	__imp__sub_82B90EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10540) );
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90EC0) {
	__imp__sub_82B90EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10540) );
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90ED0) {
	__imp__sub_82B90ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10540) );
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90EE0) {
	__imp__sub_82B90EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10540) );
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90EF0) {
	__imp__sub_82B90EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10540(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F00) {
	__imp__sub_82B90F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10540) );
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F10) {
	__imp__sub_82B90F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10540(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F20) {
	__imp__sub_82B90F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10540) );
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F30) {
	__imp__sub_82B90F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10544) );
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F40) {
	__imp__sub_82B90F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10544) );
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F50) {
	__imp__sub_82B90F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10544) );
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F60) {
	__imp__sub_82B90F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10544) );
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F70) {
	__imp__sub_82B90F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10544(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F80) {
	__imp__sub_82B90F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10544) );
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90F90) {
	__imp__sub_82B90F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10544(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90FA0) {
	__imp__sub_82B90FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10544) );
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90FB0) {
	__imp__sub_82B90FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B90FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,1087
	r11.s64 = 1087;
	// bne cr6,0x82b90fd0
	if (!cr6.eq) goto loc_82B90FD0;
	// li r11,1024
	r11.s64 = 1024;
loc_82B90FD0:
	// stw r11,10572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10572, r11.u32);
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10564) );
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (rotl32(r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B90FC0) {
	__imp__sub_82B90FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10572(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10572) );
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91000) {
	__imp__sub_82B91000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91010) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12028(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12028) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91010) {
	__imp__sub_82B91010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12444(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12444) );
	// stw r4,12032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12032, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10380) );
	// rlwinm r11,r8,16,28,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82b91050
	if (cr6.eq) goto loc_82B91050;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82b91050
	if (cr6.eq) goto loc_82B91050;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82b91050
	if (cr6.eq) goto loc_82B91050;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82B91050:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,54,63
	r12.u64 = rotl64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (rotl32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10380, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91018) {
	__imp__sub_82B91018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B910A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12032) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B910A8) {
	__imp__sub_82B910A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B910B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12448(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12448) );
	// stw r4,12036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12036, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10384) );
	// rlwinm r11,r8,16,28,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82b910e8
	if (cr6.eq) goto loc_82B910E8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82b910e8
	if (cr6.eq) goto loc_82B910E8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82b910e8
	if (cr6.eq) goto loc_82B910E8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82B910E8:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,53,63
	r12.u64 = rotl64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (rotl32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10384, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B910B0) {
	__imp__sub_82B910B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12036) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91140) {
	__imp__sub_82B91140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12452(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12452) );
	// stw r4,12040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12040, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10388) );
	// rlwinm r11,r8,16,28,31
	r11.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82b91180
	if (cr6.eq) goto loc_82B91180;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82b91180
	if (cr6.eq) goto loc_82B91180;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82b91180
	if (cr6.eq) goto loc_82B91180;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82B91180:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,52,63
	r12.u64 = rotl64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (rotl32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10388, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91148) {
	__imp__sub_82B91148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B911D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12040(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12040) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B911D8) {
	__imp__sub_82B911D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B911E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10624(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10624, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,47,63
	r12.u64 = rotl64(r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B911E0) {
	__imp__sub_82B911E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91208) {
	__imp__sub_82B91208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10620);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91218) {
	__imp__sub_82B91218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10616(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10616) );
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91228) {
	__imp__sub_82B91228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82B91238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10688(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(10688) );
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82B91238) {
	__imp__sub_82B91238(ctx, base);
}

